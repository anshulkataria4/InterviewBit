int Solution::coverPoints(vector<int> &X, vector<int> &Y) {

 int x1,y1,x2,y2,i=0;
 int c=0,dif1,dif2;
 int size=X.size();
 while(i<(size-1))
 {
     x1=X.at(i);
     y1=Y.at(i);
     x2=X.at(i+1);
     y2=Y.at(i+1);

            dif1=abs(x1-x2);
            dif2=abs(y1-y2);
        if(dif1>dif2)
        {
            c+=dif2+(dif1-dif2);
        }
        else
            c+=dif1+(dif2-dif1);

    i++;


 }
 return c;
}
