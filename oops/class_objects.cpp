#include <iostream>
#include <vector>
using namespace std;


struct User{
    string name;
    int index;
};

class MainServer {
    private:
        vector<User> usernames;
    public:
        void addUser(const string &names){
            int idx = usernames.size();
            usernames.push_back({names, idx});
        }
        void checklist(){
            for(const User &user : usernames){
                cout<< user.index << ": " << user.name << endl;
            }
        }
        User findUser(int indx){
            if (indx < 0 || indx >= usernames.size()) {
                return {"", -1}; 
            }else{
                return usernames[indx];
            }
        }
};


int main(){
    MainServer server;
    string name;
    int option;

    cout<<"1. Add User\n2. Checklist\n3. Find User\n4. exit\nChoose an option: ";
    
    while (true){
        cin>>option;
        switch(option){
            case 1: {
                cout<<"Enter name: ";
                cin>>name;
                server.addUser(name);
                break;
            }
            case 2: {
                server.checklist();
                break;
            }
            case 3: {
                int indx;
                cout<<"Enter index: ";
                cin>>indx;
                User user = server.findUser(indx);
                if(user.index != -1){
                    cout<<user.index << ":" << user.name << endl;
                }else{
                    cout<<"User not found."<<endl;
                }
                break;
            }
            case 4: {
                cout<<"Exiting..."<<endl;
                return 0;
            }
            default:
                cout<<"Invalid option."<<endl;
        }
    }
    
}