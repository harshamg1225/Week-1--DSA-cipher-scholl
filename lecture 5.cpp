# include<bits/stdc++.h>
using namspace std;

vectore<int> spiralMatrix(vectore<vectore<int>>mat) {
             int sx=0,sy=0,ex=mat.size()-1,ey=mat[0].size()-1;
             vectore<int> result(mat.size()-1,ey=mat[0].size()-1;
             int ctr=0;
             while(sx<=sy && sy<=ey){
             
             for(int j=sy;j<=ey;j++){
                     result[ctr++]=mat[sx][j];
                     }
                     sx++;
             for(int i=sx;j>=sy;j--)
             result[ctr++]=mat[ex][j];
             }
             ey--;
             for(int j=ey;j>=sy;j--) {
                     result[ctr++]=mat[ex][j];
                     }
                     sy--;
                     for(int i=ex;i>=sx;i--) {
                             result[ctr++]=mat[j][sy];
                             }
                             sy++;
                             }
                             }
                             int main(){
                             }
