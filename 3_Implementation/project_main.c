#include "villain.h"
int main()

{

    int ch;

    printf("\n\n\t✠✠✠✠✠✠✠✠✠✠✠✠✠✠✠✠✠\n");

    printf("\t*PERSONAL SECRET MANAGEMENT SYSTEM*\n");

    printf("\t✠✠✠✠✠✠✠✠✠✠✠✠✠✠✠✠✠");

    // Menu-driven system for the user ease of access
    while(1)

    {

        printf("\n\n\t\tMAIN MENU:");

        printf("\n\n\tADD SECRET\t[1]");

        printf("\n\tVIEW SECRETS\t[2]");

        printf("\n\tEDIT SECRETS\t[3]");

        printf("\n\tDELETE SECRETS\t[4]");

        printf("\n\tEDIT PASSWORD\t[5]");

        printf("\n\tEXIT\t\t[6]");

        printf("\n\n\tENTER YOUR OPTION:");

        scanf("%d",&ch);

        switch(ch)

        {

        case 1:

            addrecord();

            break;

        case 2:

            viewrecord();

            break;

        case 3:

            editrecord();

            break;

        case 4:

            deleterecord();

            break;

        case 5:

            editpassword();

            break;

        case 6:

            printf("\n\n\t\tTHANK YOU FOR USING THE PERSONAL SECRET MANAGEMENT SYSTEM ");

            getchar();

            exit(0);

        default:

            printf("\nYOU ENTERED WRONG CHOICE..");

            printf("\nPRESS ANY KEY TO TRY AGAIN");

            getchar();

            break;

        }

        system("cls");

    }

    return 0;

}
