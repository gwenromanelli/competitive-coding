#include <bits/stdc++.h>
using namespace std;

double pd(double x, double y, double x1, double y1){
    double dist1 = x1-x;
    double dist2 = y1-y;
    return sqrt(dist1*dist1 + dist2*dist2);
}

double mid(double x1, double x2){
    return ((x1 + x2)/2);
}

double circumradius(double a, double b, double c){
    double d1 = a + b + c;
    double d2 = b + c - a;
    double d3 = c + a - b;
    double d4 = a + b - c;
    return ((a*b*c)/(sqrt(d1*d2*d3*d4)));
}



int main(){
    int n;
    cin >> n;
    double cords[3][n];
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> cords[j][i];
        }
    }
    double sol = 99999999999999;
    for(int c = 0; c < 3; ++c){
        int c1 = (0 + c) % 3;
        int c2 = (1 + c) % 3;
        bool solution;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                for(int k = 0; k < n; ++k){
                    if(i == j || j == k || i == k){
                        break;
                    }
                    double centroid_x = (cords[c1][i]+cords[c1][j]+cords[c1][k])/3;
                    double centroid_y = (cords[c2][i]+cords[c2][j]+cords[c2][k])/3;

                    //works
                    double a = pd(cords[c1][i],cords[c2][i],cords[c1][j],cords[c2][j]);
                    double b = pd(cords[c1][j],cords[c2][j],cords[c1][k],cords[c2][k]);
                    double c = pd(cords[c1][i],cords[c2][i],cords[c1][k],cords[c2][k]);
                    double radius = circumradius(a,b,c);
                    
                    solution = true;
                    for(int l = 0; l < n; ++l){
                        if (l == j || l == k || l == i){
                            break;
                        }
                        if (pd(centroid_x,centroid_y,cords[c1][l],cords[c2][l]) > radius){
                            solution = false;
                            break;
                        }
                    }
                    if(solution){
                        sol = min(radius,sol);
                    }
                }
            }
        }
    }
    

    cout.precision(12);
    cout << sol*2;


   return 0;
}
