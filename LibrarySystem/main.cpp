#include <iostream>
#include <string>

using namespace std;



    const int maxnum = 10;
    bool status[maxnum]={true};
    string name[maxnum] ;
    string authour[maxnum] ;
    string ids[maxnum];
    int bookcount=0;
    int index;

bool search(string& id,int& index  )
{
 for (int i = 0; i <= bookcount; ++i) {
        if (ids[i] == id) {
                index=i;
            return true;
        }
    }
    return false;
}


void addNewBook()
{
    string id ;

    cout <<"enter the id "<<endl;
    cin>>id;

          if (!search(id,index)) {
        if (bookcount < maxnum) {
            ids[bookcount] = id;

            cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, name[bookcount]);

        cout << "Enter Book Author: ";
        getline(cin, authour[bookcount]);

            status[bookcount] = true;

            bookcount++;
        } else {
            cout << "Book storage is full!" << endl;
        }
    } else {
        cout << "Book ID already exists!" << endl;
    }
}


void updateBook()
{
    cout << "Enter the Book ID to update: ";
    string id;
    cin >> id;
    if (search (id,index)) {

            cout << "Book found. Enter new details:" << endl;
            int Choice;
            do {
                cout << "Book found. What would you like to update?" << endl;
                cout << "1. Title" << endl;
                cout << "2. Author" << endl;
                cout << "3. ID" << endl;
                cout << "4. All of them" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> Choice;

                switch (Choice) {
                    case 1:
                    cout << "New Title: ";
                    cin.ignore();
                    getline(cin, name[index]);
                    cout << "Title updated successfully." << endl;
                    break;
                case 2:
                    cout << "New Author: ";
                    cin.ignore();
                    getline(cin, authour[index]);
                    cout << "Author updated successfully." << endl;
                    break;
                case 3:{
                      string newID;
                    cout << "New ID: ";
                    cin >> newID;
                    int newIndex;
                    if (search(newID, newIndex)) {
                        cout << "The new ID already exists. Please choose a different ID." << endl;
                    } else {
                        ids[index] = newID;
                        cout << "ID updated successfully." << endl;
                    }}
                    break;
                case 4:
                    cout << "New Title: ";
                    cin.ignore();
                    getline(cin, name[index]);
                    cout << "New Author: ";
                    getline(cin, authour[index]);
                    cout << "New ID: ";
                    cin >> ids[index];
                    cout << "All details updated successfully." << endl;
                    break;
                case 0:
                    cout << "Exiting update menu." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
                }
            } while (Choice != 0);

        }


}
void removeBook() {
    cout << "Enter the Book ID to remove: ";
    string id;
    cin >> id;

    int index;
    if (search(id, index)) {
        // Shift all elements after the found index one position to the left
        for (int i = index; i < bookcount - 1; ++i) {
            ids[i] = ids[i + 1];
            name[i] = name[i + 1];
            authour[i] = authour[i + 1];
            status[i] = status[i + 1];
        }

        // Clear the last element
        ids[bookcount - 1] = "";
        name[bookcount - 1] = "";
        authour[bookcount - 1] = "";
        status[bookcount - 1] = false;


        bookcount--;

        cout << "Book with ID " << id << " removed successfully." << endl;
    } else {
        cout << "Book with ID " << id << " not found." << endl;
    }
}
void borrowBook() {
    cout << "Enter the Book ID to borrow: ";
    string id;
    cin >> id;

    int index;
    if (search(id, index)) {
        if (status[index]) {
            status[index] = false;
            cout << "Book with ID " << id << " has been borrowed successfully." << endl;
        } else {
            cout << "Book with ID " << id << " is already borrowed." << endl;
        }
    } else {
        cout << "Book with ID " << id << " not found." << endl;
    }
}
void returnBook() {
    cout << "Enter the Book ID to return: ";
    string id;
    cin >> id;

    int index;
    if (search(id, index)) {

        if (!status[index]) {

            status[index] = true;
            cout << "Book with ID " << id << " has been returned successfully." << endl;
        } else {
            cout << "Book with ID " << id << " was not borrowed." << endl;
        }
    } else {
        cout << "Book with ID " << id << " not found." << endl;
    }
}

void display() {
    int displayChoice;
    cout << "Display options:" << endl;
    cout << "1. Display a single book by ID" << endl;
    cout << "2. Display all books" << endl;
    cout << "Enter your choice: ";
    cin >> displayChoice;

    switch (displayChoice) {
        case 1: {
            cout << "Enter the Book ID: ";
            string id;
            cin >> id;
            int index;
            if (search(id, index)) {
                cout << "ID: " << ids[index] << ", Title: " << name[index] << ", Author: " << authour[index] << endl;
            } else {
                cout << "Book with ID " << id << " not found." << endl;
            }
            break;
        }
        case 2:
            cout << "Displaying all books:" << endl;
            for (int i = 0; i < bookcount; ++i) {
                if (status[i]) {
                    cout << "ID: " << ids[i] << ", Title: " << name[i] << ", Author: " << authour[i] << endl;
                }
                cout<<endl<< "-------------------------------------"<<endl;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
}
void menu ()
{
     int choice;

    do {
        cout << "Library Management System"<<endl;
        cout << "1. Add New Book"<<endl;
        cout << "2. Update Book"<<endl;
        cout << "3. Remove Book"<<endl;
        cout << "4. Borrow Book"<<endl;
        cout << "5. Return Book"<<endl;
        cout << "6. Display Books"<<endl;
        cout << "7. search Books"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch(choice) {
            case 1:
                addNewBook();
                break;
            case 2:
                updateBook();
                break;
            case 3:
                removeBook();
                break;
            case 4:
                borrowBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                display();
                break;
            case 7:{
                cout<<"Enter the Book Id : "<<endl;
                string id;
                cin >> id;
                if(search(id,index)==1)
                {
                    cout<<"found"<<endl;
                }
                else
                {
                    cout<<"not found"<<endl;
                }
                break;}
            case 0:
                cout << "Exiting..."<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                break;
        }
        cout <<endl;

    } while(choice != 0);
}
int main()
{
    cout << "Hello world!" << endl;
    menu();
    return 0;
}
