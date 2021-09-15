#include "list.h"
//#include "include/list.cpp"

int main(int arg_count, char *args[]){
    if (arg_count > 0){
        List simpleList;
        simpleList.name = string(args[0]);
        simpleList.print_menu();
    }
    else {
        cout << "Username not supplied - exit the program\n";
    }
    return 0;
}