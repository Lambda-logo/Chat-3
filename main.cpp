#include "chat.h"

int main() {
    Chat chat;

    // Test registration and login procedures
    char login1[LOGINLENGTH] = "user1";
    char pass1[] = "password1";

    chat.reg(login1, pass1, strlen(pass1));
    bool success = chat.login(login1, pass1, strlen(pass1));

    return 0;
}