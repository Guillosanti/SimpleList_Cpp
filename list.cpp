#include "list.h"

void List::print_menu() {
    int choice;

    cout << "Main Menu\n";
    cout << "Option 1 - Print list\n";
    cout << "Option 2 - Add to list\n";
    cout << "Option 3 - Delete from list\n";
    cout << "Option 4 - Quit\n";
    cout << "Insert your choice and press 'Enter': ";

    cin >> choice;

    if (choice == 4){
        exit(0);
    }
    else if ( choice == 2) {
        add_item();
    }
    else if ( choice == 3) {
        delete_item();
    }
    else if ( choice == 1) {
        print_list();
    }
    else {
        cout << "Choice not implemented\n";
    }
}

void List::add_item() {
    cout << "\n";
    cout << "****** Add Item ******\n";
    cout << "Type an item and press Enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item\n";
    cin.clear();

    print_menu();
}

void List::delete_item(){
    cout << "****** Delete item ******\n";
    cout << "Select an item index number to delete:\n";
    if(list.size()) {
        for( int i=0; i < (int) list.size(); i++) {
            cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }
    else {
        cout << "No items to delete.\n";
    }
    print_menu();
}

void List::print_list() {
    cout << "\n\n";
    cout << "*** Printing List ***\n";

    for( int list_index=0; list_index < (int) list.size(); list_index++) {
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;
    if ( choice == 'M' || choice == 'm') {
        print_menu();
    }
    else {
        cout << "Invalid Choice - Quitting..\n";
    }
}