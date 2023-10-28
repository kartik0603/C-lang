#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k;

    int theater_choice, class_choice, food_choice;
    float total_Bill, ticket_price, class_price, food_price;

    printf(" ***___---___>>> \t WELCOME TO THE MOVIE  WORLD \t <<<___---___*** \n \n");

    printf(" ___PLEASE CHOSSE MOVIE Type_____\n");
    printf(" FOR ***___---___>>>\t HOLLYWOOD \t <<<___---___***           ( Press 1) \n ");
    printf(" FOR ***___---___>>>\t BOLLYWOOD \t <<<___---___***           ( Press 2) \n ");
    printf(" FOR ***___---___>>>\t TOLLYWOOD \t <<<___---___***           ( Press 3) \n ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\t You Choose  >>>\t HOLLYWOOD \t<<< Movie  \t : \n ");

        printf("\t Press 1 \t For \t HOLLYWOOD ACTION \t  Movie Ticket Booking \t : \n ");
        printf("\t Press 2 \t For \t HOLLYWOOD COMEDY \t  Movie Ticket Booking \t : \n ");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf(" YOUR >>>\t HOLLYWOOD ACTION \t<<< Movies are \n ");
            printf("\t Press 1 \t For  >>>\t AQUAMAN AND THE LOST KINGDOM \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t SILENT NIGHT \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t THE FALL GUY \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 4 \t For  >>>\t UNITE FOURTH BAD BOYS FILM \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &c);
            switch (c)
            {
            case 1:
                printf("\t You Choose  >>>\t AQUAMAN AND THE LOST KINGDOM \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t SILENT NIGH \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t THE FALL GUY \t<<< Movie  \t : \n ");
                break;

            case 4:
                printf("\t You Choose  >>>\t UNITE FOURTH BAD BOYS FILM \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;

        case 2:
            printf(" YOUR >>>\t HOLLYWOOD COMEDY \t<<< Movies are \n ");
            printf("\t Press 1 \t For  >>>\t FREELANCE  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t KEEDAA COLA  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t MIGRATION  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 4 \t For  >>>\t WONKA  \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &d);

            switch (d)
            {
            case 1:
                printf("\t You Choose  >>>\t FREELANCE \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t KEEDAA COLA \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t MIGRATION \t<<< Movie  \t : \n ");
                break;

            case 4:
                printf("\t You Choose  >>>\t MIGRATION \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;
        }
        break;
    case 2:
        printf("\t You Choose  >>>\t BOLLYWOOD \t<<< Movie  \t : \n ");

        printf("\t Press 1 \t For \t BOLLYWOOD ACTION \t Movie Ticket Booking \t : \n ");
        printf("\t Press 2 \t For \t BOLLYWOOD DRAMA  \t Movie Ticket Booking \t : \n ");
        printf("\t Press 3 \t For \t BOLLYWOOD COMEDY \t  Movie Ticket Booking \t : \n ");

        scanf("%d", &e);

        switch (e)
        {
        case 1:
            printf(" YOUR >>>\t BOLLYWOOD ACTION \t<<< Movies are \n \n");
            printf("\t Press 1 \t For  >>>\t  EXTRA \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &f);

            switch (f)
            {
            case 1:
                printf("\t You Choose  >>>\t  GANPATH \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;

        case 2:
            printf(" YOUR >>>\t BOLLYWOOD DRAMA \t<<< Movies are \n \n");
            printf("\t Press 1 \t For  >>>\t  TEJAS \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t  12th FAIL \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t  DHAK DHAK \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 4 \t For  >>>\t  GUTHLEE LADOO \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 5 \t For  >>>\t  MISSION RANIGANJ \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &g);
            switch (g)
            {
            case 1:
                printf("\t You Choose  >>>\t  TEJAS \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t  12th FAIL \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t  DHAK DHAK \t<<< Movie  \t : \n ");
                break;

            case 4:
                printf("\t You Choose  >>>\t  GUTHLEE LADOO\t<<< Movie  \t : \n ");
                break;

            case 5:
                printf("\t You Choose  >>>\t  MISSION RANIGANJ \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;

        case 3:
            printf(" YOUR >>>\t BOLLYWOOD COMEDY \t<<< Movies are \n \n");
            printf("\t Press 1 \t For  >>>\t  YAARIYAN 2 \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t  DARRAN CHHOO \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t  THANK YOU FOR COMMING \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &h);

            switch (h)
            {
            case 1:
                printf("\t You Choose  >>>\t YAARIYAN 2 \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t  DARRAN CHHOO \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t  THANK YOU FOR COMMING \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;
        }
        break;
    case 3:
        printf("\t You Choose  >>>\t TOLLYWOOD \t<<< Movie  \t : \n ");
        printf("\t Press 1 \t For \t TOLLYWOOD ACTION \t Movie Ticket Booking \t : \n ");
        printf("\t Press 2 \t For \t TOLLYWOOD DRAMA  \t Movie Ticket Booking \t : \n ");
        printf("\t Press 3 \t For \t TOLLYWOOD COMEDY \t  Movie Ticket Booking \t : \n ");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
            printf(" YOUR >>>\t TOLLYWOOD ACTION \t<<< Movies are \n \n");
            printf("\t Press 1 \t For  >>>\t  EXTRA \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t  GANGS OF GODAVARI  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t PEDDU KAPU : PART 1  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 4 \t For  >>>\t  TIGER NAGESWARA RAO\t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &i);

            switch (i)
            {
            case 1:
                printf("\t You Choose  >>>\t  EXTRA \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t GANGS OF GODAVARI \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t  PEDDU KAPU : PART 1 \t<<< Movie  \t : \n ");
                break;

            case 4:
                printf("\t You Choose  >>>\t  PEDDU KAPU : PART 1 \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;

        case 2:
            printf(" YOUR >>>\t TOLLYWOOD DRAMA \t<<< Movies are \n \n");
            printf("\t Press 1 \t For  >>>\t  BHAGWATI KESARI \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t  RUDRAMKOTA  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t SKANDA- THE ATTACKER  \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 4 \t For  >>>\t  BHOLA SHANKAR \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &j);
            switch (j)
            {

            case 1:
                printf("\t You Choose  >>>\t  BHAGWATI KESARI \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t RUDRAMKOTA  \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t SKANDA- THE ATTACKER  \t<<< Movie  \t : \n ");
                break;

            case 4:
                printf("\t You Choose  >>>\t  BHOLA SHANKAR \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;
        case 3:
            printf(" YOUR >>>\t TOLLYWOOD COMEDY \t<<< Movies are \n \n");
            printf("\t Press 1 \t For  >>>\t  RANGABALI        \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 2 \t For  >>>\t  O SAATHIYA       \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 3 \t For  >>>\t  KUSHI             \t<<< Movie Ticket Booking \t : \n ");
            printf("\t Press 4 \t For  >>>\t  SAMAJAVARAGAMANA \t<<< Movie Ticket Booking \t : \n ");
            scanf("%d", &k);

            switch (k)
            {
            case 1:
                printf("\t You Choose  >>>\t RANGABALI  \t<<< Movie  \t : \n ");
                break;

            case 2:
                printf("\t You Choose  >>>\t O SAATHIYA \t<<< Movie  \t : \n ");
                break;

            case 3:
                printf("\t You Choose  >>>\t  KUSHI \t<<< Movie  \t : \n ");
                break;

            case 4:
                printf("\t You Choose  >>>\t SAMAJAVARAGAMANA \t<<< Movie  \t : \n ");
                break;

            default:
                printf(" INVALID ENTERY \n");
                break;
            }
            break;
        }
        break;
    }

    printf(" ***___---___>>> \t Choose THEATER \t <<<___---___*** \n \n\n");
    printf(" FOR ***___---___>>>\t RUPALI CINEMA \t <<<___---___***           ( Press 1) \n ");
    printf(" FOR ***___---___>>>\t PVR RAHUL RAJ \t <<<___---___***           ( Press 2) \n ");
    printf(" FOR ***___---___>>>\t CINEPOLIS \t <<<___---___***               ( Press 3) \n ");
    printf(" FOR ***___---___>>>\t INOX RELIANCE MALL \t <<<___---___***      ( Press 4) \n ");
    scanf("%d", &theater_choice);

    switch (theater_choice)
    {
    case 1:
        printf("\t You Choose  >>>\t RUPALI CINEMA \t<<< Movie  \t : \n ");
        break;
    case 2:
        printf("\t You Choose  >>>\t PVR RAHUL RAJ \t<<< Movie  \t : \n ");
        break;
    case 3:
        printf("\t You Choose  >>>\t CINEPOLIS \t<<< Movie  \t : \n ");
        break;
    case 4:
        printf("\t You Choose  >>>\t INOX RELIANCE MALL \t<<< Movie  \t : \n ");
        break;
    default:
        printf("INVALID ENTRY\n");
        return 1;
    }

    printf(" ***___---___>>>        \t Choose CLASS               \t <<<___---___*** \n \n");
    printf(" FOR ***___---___>>>    \t PREMIUM CLASS Rs:- 230/-   \t <<<___---___***           ( Press 1) \n ");
    printf(" FOR ***___------___>>> \t EXECUTIVE CLASS Rs:- 210/- \t <<<___---___***           ( Press 2) \n ");
    printf(" FOR ***___---___>>>    \t NORMAL CLASS    Rs:- 180/- \t <<<___---___***           ( Press 3) \n ");
    scanf("%d", &class_choice);

    switch (class_choice)
    {
    case 1:
        printf("\t You Choose  >>>\t PREMIUM CLASS Rs:- 230/- \t<<<   \t : \n ");
        class_price = 230.0;
        break;
    case 2:
        printf("\t You Choose  >>>\t  EXECUTIVE CLASS Rs:- 210/- \t<<<   \t : \n ");
        class_price = 210.0;
        break;
    case 3:
        printf("\t You Choose  >>>\t  NORMAL CLASS    Rs:- 180/- \t<<<   \t : \n ");
        class_price = 180.0;
        break;
    default:
        printf("INVALID ENTRY\n");
        return 1;
    }

    printf(" ***___---___>>> \t FOOD & BEVERAGES\t <<<___---___*** \n \n\n");
    printf(" FOR ***___---___>>>\t POPCORN                  Rs:- 99/-   \t <<<___---___***           ( Press 1) \n ");
    printf(" FOR ***___---___>>>\t SAMOSA                   Rs:- 49/-   \t <<<___---___***           ( Press 2) \n ");
    printf(" FOR ***___---___>>>\t THUMS-UP                 Rs:- 39/-   \t <<<___---___***           ( Press 3) \n ");
    printf(" FOR ***___---___>>>\t COCA-COLA                Rs:- 39/-   \t <<<___---___***           ( Press 4) \n ");
    printf(" FOR ***___---___>>>\t COCA-COLA    &  POPCARN  Rs:- 120/-  \t <<<___---___***           ( Press 5) \n ");
    printf(" FOR ***___---___>>>\t COCA-COLA    &  SAMOSA   Rs:- 70/-   \t <<<___---___***           ( Press 6) \n ");
    printf(" FOR ***___---___>>>\t THUMS -UP    &  SAMOSA   Rs:- 70/-   \t <<<___---___***           ( Press 7) \n ");
    printf(" FOR ***___---___>>>\t THUMS -UP    &  POPCORN  Rs:-130/-   \t <<<___---___***           ( Press 8) \n ");

    scanf("%d", &food_choice);

    switch (food_choice)
    {
    case 1:
        printf("\t You Choose  >>>\t POPCORN Rs:- 99/- \t<<<   \t : \n ");
        food_price = 99.0;
        break;
    case 2:
        printf("\t You Choose  >>>\t SAMOSA Rs:- 49/-  \t<<<   \t : \n ");
        food_price = 49.0;
        break;
    case 3:
        printf("\t You Choose  >>>\t  THUMS-UP  Rs:- 39/-   \t<<<   \t : \n ");
        food_price = 39.0;
        break;
    case 4:
        printf("\t You Choose  >>>\t COCA-COLA  Rs:- 39/-   \t<<<   \t : \n ");
        food_price = 39.0;
        break;

    case 5:
        printf("\t You Choose  >>>\t COCA-COLA    &  POPCARN  Rs:- 120/- \t<<<   \t : \n ");
        food_price = 120.0;
        break;
    case 6:
        printf("\t You Choose  >>>\t COCA-COLA    &  SAMOSA   Rs:- 70/- \t<<<   \t : \n ");
        food_price = 70.0;
        break;
    case 7:
        printf("\t You Choose  >>>\t  THUMS -UP    &  SAMOSA   Rs:- 70/ \t<<<   \t : \n ");
        food_price = 70.0;
        break;

    case 8:
        printf("\t You Choose  >>>\t THUMS -UP    &  POPCORN  Rs:-130/-  \t<<<   \t : \n ");
        food_price = 130.0;
        break;

    default:
        printf("INVALID ENTRY\n");
        break;
    }

    total_Bill = ((class_price + food_price) * 0.18 + class_price + food_price);
    printf("YOUR TOTAL MOVIE TICKET BILL IS: %.2f\n", total_Bill);

    return 0;
}
