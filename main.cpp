#include <iostream>

using namespace std;

int main()
{
    int s1,s2,s3,sum;
    cout<<"enter first side";
    cin>>s1;
    cout<<"enter second side";
    cin>>s2;
    cout<<"Enter third side";
    cin>>s3;

    sum=s1+s2+s3;

    if(sum == 180 && s1 > 0 && s2 > 0 && s3 > 0) {
    cout << "Valid triangle";
}
else {
    cout << "Triangle is not valid";
}

    return 0;
}
