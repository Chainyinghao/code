#include<iostream> 
using namespace std; 
struct POINT{ // 直角坐标系下的点结构 
double x; 
double y; 
}; 
double PolygonArea(POINT* pVertex, int NUM){ // 计算多边形面积 S=0.5*∑Xi*(Yi+1 - Yi-1) 
double fArea = 0; 
for(int i = 0; i < NUM - 1; i++){ 
fArea += (0.5 * (pVertex[i].x * pVertex[i + 1].y - pVertex[i].y * pVertex[i + 1].x));} 
return fArea; 
} 
int main() 
{ 
const int NUM = 4; // 要改变多边形的顶点数目，修改这个数字即可 
POINT vertex[NUM]; // 多边形顶点数组 
cout << "Please input " << NUM << " POINTS.\n"; 
// 从屏幕中获取多边形顶点数组，按提示输入即可 
for(int i = 0; i < NUM; i++){ 
cout << "Please input POINT[" << i + 1 << "].x: "; 
cin >> vertex[i].x; 
cout << "Please input POINT[" << i + 1 << "].y: "; 
cin >> vertex[i].y; 
} 
cout << "The area of the polygon is : " << PolygonArea(vertex, NUM) << endl; // 输出多边形面积 
system("PAUSE"); // 按任意键结束 
return 0;
}
