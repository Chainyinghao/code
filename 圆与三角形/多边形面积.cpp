#include<iostream> 
using namespace std; 
struct POINT{ // ֱ������ϵ�µĵ�ṹ 
double x; 
double y; 
}; 
double PolygonArea(POINT* pVertex, int NUM){ // ����������� S=0.5*��Xi*(Yi+1 - Yi-1) 
double fArea = 0; 
for(int i = 0; i < NUM - 1; i++){ 
fArea += (0.5 * (pVertex[i].x * pVertex[i + 1].y - pVertex[i].y * pVertex[i + 1].x));} 
return fArea; 
} 
int main() 
{ 
const int NUM = 4; // Ҫ�ı����εĶ�����Ŀ���޸�������ּ��� 
POINT vertex[NUM]; // ����ζ������� 
cout << "Please input " << NUM << " POINTS.\n"; 
// ����Ļ�л�ȡ����ζ������飬����ʾ���뼴�� 
for(int i = 0; i < NUM; i++){ 
cout << "Please input POINT[" << i + 1 << "].x: "; 
cin >> vertex[i].x; 
cout << "Please input POINT[" << i + 1 << "].y: "; 
cin >> vertex[i].y; 
} 
cout << "The area of the polygon is : " << PolygonArea(vertex, NUM) << endl; // ����������� 
system("PAUSE"); // ����������� 
return 0;
}
