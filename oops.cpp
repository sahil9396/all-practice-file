#include <iostream>
using namespace std;

// encapsulation = is same as class
// types of inheritance = single [ only one child class] , multi-line [ many sub child classes] , multiple  [one child and two parent classes] , hybrid [ more than one type of inheritance] , 

class student {
    // private:
    char name;

    // public:
    int semester;


    public:
    // setter and getter
    char Setname (char n){
        name = n;
    }
    char Getname( ){
        // just returns the variable which is private
        return name;
    }
    int Setsem( int k){
 
 
        // we can access the variable which are private

        semester = k;
        return semester;
    }

    // default constructor
    student (){
        cout << "This is a constructor " << endl;
    }

    // parameterised constructor
    student ( int semester){
        // cout << "This from 1st constructor" << endl;
        // the pararmeter given in the constructor is a loacl variable.
        // "this" is a pointer in which the address of the "ramesh" [ object is stored].
        // cout << "This is a pointer  == " << this << endl;
        this -> semester = semester;
    }

    student ( char name , int semester){
        // cout << "This from 2nd constructor" << endl;
        this -> name = name;
        this -> semester = semester;
    }

    void show(){
        cout << "The name  = " << this -> name << endl;
        cout << "The semester  = " << this -> semester << endl;
    }
};

class New_st{
    static int timetoplay;
    public:
    char name ; 
    int sem ; 

    New_st( char name , int sem){
        this -> name = name;
        this -> sem = sem;
    }

    New_st( New_st &temp){
        this -> name = temp.name;
        this -> sem = temp.sem;
    }


    // destructor
    ~New_st(){
        cout << "The desctor is working" << endl;
        // but for dynamic memory , we have to delete it manually
    }

    static int ran(){
        cout << timetoplay << endl;
    }

    void show(){
        cout << endl;
        cout << "[ Name : " << this->name << " , ";
        cout << "sem : " <<this-> sem << " ]";
        cout << endl;
    }

};

class animal{
    public:
    int age;

    animal( int ag){
        age = ag;
    }

    // if func are different then the input parameter should be different in quantity or type
    void print( int a){
        cout << "This is from 1 : "<<age <<endl;
    }

    void print( char a){
        cout << "This is from 2 : "<<age <<endl;
    }

    int print( ){
        cout << "This is from 2 : "<<age <<endl;
        return 1 ;
    }

    
};

class car{
    public:
    int gears;
    string color;


    car (){
        cout << "This is default" << endl;
    }


    car( int g, string c){
        gears = g;
        color =c;
    }
};

class Race : public car{
    public:
    int max;

    // car(  g ,  c );
    // Race(int m){
    //     max = m;
        
    // }

    void printof(){
        // cout << "[ noOfGears : "<<gear<<"  ,  color : "<< colors << " , maxspeed : " <<max<<" ]" << endl;
        cout <<"max : " << max<<endl;
    }

};

// object indepent
int New_st :: timetoplay = 10;

int old_main(){

    // statically 
    // student Sahil ( 'a' , 10);
    // student Sahil (  10);
    // cout << "The address of sahil  =  " << &Sahil<< endl;



    // dyanamically
    // student *sahil = new student ; 
    // (*sahil).Setname('s');
    // or
    // sahil ->Setname('s');
    // cout << (*sahil).Getname()  << endl;
    // delete sahil;



    // size = padding and greeady alignment [H.W] , if class is empty then size is 1 .
    // cout << "size " << sizeof(student) << endl;

    // access modifier = public , private [default] , protect 
    // public
    // Sahil.name = 's';
    // Sahil.semester = 2;
    // cout << "The name of student " << Sahil.name << endl;
    // cout << "The sem of student " << Sahil.semester<< endl;

    // public
    // Sahil.name = 's';  // here name is under private condition. so we cannot access them directly .
    // Sahil.semester = 2;
    // cout << "The name of student " << Sahil.name << endl;
    // cout << "The sem of student " << Sahil.semester<< endl;

    // getter = use the private variables  publically , setter = we can set the private variable
    // Sahil.Setname('S') ;
    // cout << "The name " << Sahil.Getname() << endl;
    // cout << "sem " << Sahil.Setsem(5) << endl;


    // copy constructor
    // student Ram(Sahil);
    // Ram.show();
    return 0 ;
}

int main(){

    // animal Dog(10);
    // Dog.print();
    // car dodge(6 , "black");
    Race dodge;
    cout <<dodge.color << endl;
    cout <<dodge.color << endl;
    // Race dodge(10 ,100 ,"red" );
    // dodge.printof();

    // if same fun is same in parent and child class
    // obj.required_class_name::the_fun()
    // dog.animal::printall(); 
    // dog.Dog::printall();
    // animal dog(20,5);
    // dog.printall();



    // static function
    // New_st::ran();

    
    // New_st sahil('s' , 2) ; 
    // sahil.show();


    // shallow copy 
    // New_st ram(sahil);
    // New_st ram('r',3);
    // ram.name = 'b';
    // ram.show();

    // copy assignment
    // ram = sahil;


    // sahil.show();
    // ram.show();

    return 0 ;
}
