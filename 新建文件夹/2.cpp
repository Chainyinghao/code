#include<windows.h>
#include<stdio.h>
char str[];
char cmd[]; 
//char hour[10], minute[10];
int num;
int num_text_hour, num_text_minute;
//char num_str[]; 
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance, LPSTR lpCmdLine,int nCmdShow)
{
    HWND hWnd;
    MSG Msg;
    WNDCLASS WndClass;
    WndClass.style=CS_HREDRAW|CS_VREDRAW;
    WndClass.lpfnWndProc=WndProc;
    WndClass.cbClsExtra=0;
    WndClass.cbWndExtra=0;
    WndClass.hInstance=hInstance;
    WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
    WndClass.hCursor=LoadCursor(NULL,IDC_ARROW);
    WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
    WndClass.lpszMenuName=NULL;
    WndClass.lpszClassName="Hello Win";   //��������
    //ע�ᴰ��
    if(!RegisterClass(&WndClass))
    {
        MessageBox(NULL,"����ע��ʧ��!","Hello Win",0);
        return 0;
    }
    //��������
    hWnd=CreateWindow("Hello Win", "��ʱ�ػ�--junmuzi", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
    //��ʾ����
    ShowWindow(hWnd,nCmdShow);   
    //���´���
    UpdateWindow(hWnd);
    //������Ϣѭ��������Ӧ�ó�����Ϣ�����м�ȡ����Ϣ��WM_QUITʱ�����Ƴ�ѭ��
    while(GetMessage(&Msg,NULL,0,0))
    {
      TranslateMessage(&Msg);  //ת��������Ϣ
      DispatchMessage(&Msg);   //�ַ���Ϣ
    }
    return Msg.wParam;
}


LRESULT CALLBACK WndProc(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)
{
    HDC hDC;
    PAINTSTRUCT Ps;
    char strEdit_hour[10], strEdit_minute[10];
    static HWND hWndButton_ok, hWndButton_cancel, hWndEdit_hour, hWndEdit_minute;
    switch(message)
    {
      case WM_CREATE:
           hWndEdit_hour = CreateWindow("edit",NULL,WS_CHILD|WS_VISIBLE|WS_BORDER,10,60,100,25,hWnd,NULL,NULL,NULL);
           hWndEdit_minute = CreateWindow("edit",NULL,WS_CHILD|WS_VISIBLE|WS_BORDER,180,60,100,25,hWnd,NULL,NULL,NULL);
           hWndButton_ok = CreateWindow("button","ȷ��",WS_CHILD|WS_VISIBLE|WS_BORDER, 340, 60, 100, 25, hWnd,NULL,NULL,NULL);
           hWndButton_cancel = CreateWindow("button","ȡ����ʱ�ػ�",WS_CHILD|WS_VISIBLE|WS_BORDER, 460, 60, 100, 25, hWnd,NULL,NULL,NULL);
           return 0;
      case WM_COMMAND:
           if(((HWND)lParam==hWndButton_ok)&&(HIWORD(wParam)==BN_CLICKED))
           //���°���hWndButton_ok
           {   
                num_text_hour = GetWindowText(hWndEdit_hour,strEdit_hour,10);     //��ȡ�༭��ؼ�hour������  
                //sprintf(str,"The result is: %s",strEdit_hour);
                //sprintf(hour, "%s", strEdit_hour); 
                if (num_text_hour == 0) 
                {
                    MessageBox(NULL,"Сʱ����Ϊ��!","������Ϣ��", MB_OK);
                } 
                num_text_minute = GetWindowText(hWndEdit_minute,strEdit_minute,10);     //��ȡ�༭��ؼ�minute������
                if (num_text_minute == 0) 
                {
                    MessageBox(NULL,"���Ӳ���Ϊ��!","������Ϣ��", MB_OK);
                } 
                if (!((atoi(strEdit_hour) >= 0) && (atoi(strEdit_minute) >= 0) && (atoi(strEdit_minute) <= 60)))
                {
                    MessageBox(NULL,"�Ƿ����루�����Сʱ������ڵ���0������ķ��ӱ�����ڵ���0,��С�ڵ���60��","������Ϣ��", MB_OK);
                } 
                if ((num_text_hour != 0) && (num_text_minute != 0) && (atoi(strEdit_hour) >= 0) && (atoi(strEdit_minute) >= 0) && (atoi(strEdit_minute) <= 60))
                { 
                    num = atoi(strEdit_hour) * 3600 + atoi(strEdit_minute) * 60;    //��Сʱ�ͷ�����ת��Ϊ������ 
                    //itoa(num, num_str, 10); 
                    //sprintf(str,"The result is: %s",strEdit_minute);
                    //sprintf(minute, "%s", strEdit_minute); 
                    //strcat(cmd, str_); 
                    //sprintf(cmd, "shutdown -s -t %s %s %d", strEdit_hour, strEdit_minute, num);
                    sprintf(cmd, "shutdown -s -t %d", num);    // ��ʱ�ػ����� 
                    sprintf(str, "���Ի���%sСʱ%s���Ӻ�ػ�������", strEdit_hour, strEdit_minute);
                    system(cmd);     //shutdown the computer. 
                    InvalidateRect(hWnd,NULL,TRUE);
                } 
           }
           if(((HWND)lParam == hWndButton_cancel)&&(HIWORD(wParam) == BN_CLICKED))
           //���°���hWndButton_cancel
           {   
                sprintf(cmd, "shutdown -a");    //ȡ����ʱ�ػ� 
                sprintf(str, "���Զ�ʱ�ػ���ȡ��������");
                system(cmd);     //cancel ��shutdown the computer��. 
                InvalidateRect(hWnd,NULL,TRUE);
           } 
      case WM_PAINT://��Ʊ༭��
           hDC=BeginPaint(hWnd,&Ps);
           TextOut(hDC,10,10,"��������Ҫ���õĶ೤ʱ���ػ���Сʱ�ͷ���������",48);
           TextOut(hDC,120,60,"Сʱ",4);
           TextOut(hDC,290,60,"����",4);
           //TextOut(hDC,10,90,str,strlen(str));
           TextOut(hDC,10,90,str,strlen(str));
           EndPaint(hWnd,&Ps);
           return 0;
      case WM_DESTROY:
           PostQuitMessage(0);
           return 0;
    }
    return DefWindowProc(hWnd,message,wParam,lParam);
}
