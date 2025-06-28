#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Student
{
    public:
    string Name;
    int RollNo;
    float Marks;
};
bool comp(const Student &a,const Student &b)
{
    return a.Marks>b.Marks;
}
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    vector<Student>students(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<":"<<"\n";
        cout<<"Name: ";
        cin.ignore();
        getline(cin,students[i].Name);
        cout<<"RollNo: ";
        cin>>students[i].RollNo;
        cout<<"Marks: ";
        cin>>students[i].Marks;
    }
    sort(students.begin(),students.end(),comp);
    cout<<"Sorted Student Records:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<students[i].Name<<" "<<students[i].RollNo<<" "<<students[i].Marks<<endl;
    }
    return 0;
}