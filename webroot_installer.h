#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct command_members
{
    string filename, key, location_dir;
};

void command_builder(command_members member)
{
    string command = "echo \"" + member.key + "\" > " + member.location_dir + member.filename;
    system(command.c_str());
}

void create_wellknown(string webroot)
{
    string command = "mkdir " + webroot + "/.well-known";
    system(command.c_str());
}

void create_acme(string webroot)
{
    string command = "mkdir " + webroot + "/.well-known/acme-challenge";
    system(command.c_str());
} 