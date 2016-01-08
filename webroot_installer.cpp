#include "webroot_installer.h"

using namespace std;

int main()
{
    string webroot_dir, formatted_command;
    command_members command;
    cout << "Enter the webroot directory" << endl;
    cin >> webroot_dir;
    cout << "Enter the filename" << endl;
    cin >> command.filename;
    cout << "Enter verification key" << endl;
    cin >> command.key;
    create_wellknown(webroot_dir);
    create_acme(webroot_dir);
    command.location_dir = webroot_dir + "/.well-known/acme-challenge/";
    command_builder(command);
    return 0;
}
