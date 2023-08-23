#include <iostream>

using namespace std;

class University{

    private:
    University(){}; 

    static University* uni_instance = null ;


    public:
    static University* getInstance(){
        if (uni_instance == null){
            uni_instance = new University();
            cout <<"object created" <<endl;
            return uni_instance;
        }
        else{
            return uni_instance;
             cout <<"I am not created" <<endl;
        }
    }

};



 int main{

return 0;
 };