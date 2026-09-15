#include<stdio.h>
int main()
{
    int d,cnd;
    int a,hr,t,c,s;
    int dp=0;
    int cr=0;
    int sr=0;
    int ta=0;
    int cn;
    printf("Enter The Emergency Department\n");
    printf("1. General Emergency\n");
    printf("2. Cardiology\n");
    printf("3. Neurology\n");
    printf("4. Trauma\n");
    scanf("%d",&d);
    printf("Enter your age\n");
    scanf("%d",&a);
    printf("Enter your heart rate\n");
    scanf("%d",&hr);
    printf("Enter your body temperature\n");
    scanf("%d",&t);
    printf("Enter level of consciousness\n");
    printf("1. Conscious\n2. Unconscious\n");
    scanf("%d",&c);
    printf("Enter severity level\n");
    printf("1. Low\n2. Medium\n3. High\n");
    scanf("%d",&s);
    switch(d)
    {
        case 1:
            printf("You are in General Emergency\n");
            switch(s)
            {
                case 1:
                    dp=0;
                    break;

                case 2:
                    dp=1;
                    break;

                case 3:
                    dp=1;
                    break;
            }
            break;
        case 2:
            printf("You are in Cardiology\n");
            switch(hr)
            {
                case 0:
                    dp=1;
                    break;
                default:
                    if(hr<50 || hr>120)
                        dp=1;
                    else
                        dp=0;
            }
            break;
        case 3:
            printf("You are in Neurology\n");
            switch(c)
            {
                case 1:
                    dp=0;
                    break;
                case 2:
                    dp=1;
                    break;
            }
            break;

        case 4:
            printf("You are in Trauma\n");

            switch(s)
            {
                case 1:
                    dp=0;
                    break;

                case 2:
                    dp=0;
                    break;

                case 3:
                    dp=1;
                    break;
            }
            break;

        default:
            printf("Invalid department\n");
            return 0;
    }

    if((hr<50 || hr>120) && c==2)
        cr=1;
    else
        cr=0;

    if(a>=65)
        sr=1;
    else
        sr=0;

    if(t<36 || t>38)
        ta=1;
    else
        ta=0;

    cn=(a+hr)%4;

    printf("\n\n---------- PATIENT TRIAGE DETAILS ----------\n");

    printf("Department: ");

    if(d==1)
        printf("General Emergency\n");
    else if(d==2)
        printf("Cardiology\n");
    else if(d==3)
        printf("Neurology\n");
    else
        printf("Trauma\n");
    printf("Age: %d\n",a);
    printf("Heart Rate: %d bpm\n",hr);
    printf("Temperature: %d C\n",t);
    printf("Department Priority: ");
    if(dp==1)
        printf("Yes\n");
    else
        printf("No\n");
    printf("Critical Condition: ");
    if(cr==1)
        printf("Yes\n");
    else
        printf("No\n");
    printf("Senior Priority: ");
    if(sr==1)
        printf("Yes\n");
    else
        printf("No\n");

    printf("Temperature Alert: ");

    if(ta==1)
        printf("Yes\n");
    else
        printf("No\n");

    printf("Case Number Remainder: %d\n",cn);
    if(cn==0)
        printf("Case Category A\n");
    else if(cn==1)
        printf("Case Category B\n");
    else if(cn==2)
        printf("Case Category C\n");
    else
        printf("Case Category D\n");
    printf("Final Triage Decision: ");
    if(cr==1)
        printf("Immediate Medical Attention\n");
    else if(dp==1 || sr==1 || ta==1)
        printf("Priority Further Assessment\n");
    else
        printf("Routine Medical Assessment\n");
    return 0;
}


