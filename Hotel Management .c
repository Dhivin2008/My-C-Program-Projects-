#include<stdio.h>
int main(){
    float bill=0;
    int ch,qty;
    char ord;
    do
    {
    printf("°•°**Hangover Restorent °•°**");
    printf("\n 1)Chicken Biryani \n 2)Mutton Biryani \n 3) Chicken Grill \n 4)Chicken Tandoori \n 5)Mandhi Bariyani \n 6)Chicken Rice \n 7)Egg Rice \n 8)Chicken Gravy \n 9)Mutton Gravy \n 10)Chicken Lollypop \n 11)Fish Fry \n 12) Mojito \n");
    printf("Enter Your Choice :");
    scanf("%d", &ch);
switch (ch){
     case 1:
         printf("Enter the Chicken Biryani Quantity :");
         scanf("%d", &qty);
         bill+=qty*200;
         break;
      case 2:
         printf("Enter the Mutton Biryani Quantity :");
         scanf("%d", &qty);
         bill+=qty*400;
         break;
      case 3:
         printf("Enter the Chicken Grill Quantity :");
         scanf("%d", &qty);
         bill+=qty*650;
         break;
      case 4:
         printf("Enter the Chicken Tandoori Quantity :");
         scanf("%d", &qty);
         bill+=qty*600;
         break;
      case 5:
         printf("Enter the Mandhi Biryani Quantity :");
         scanf("%d", &qty);
         bill+=qty*1500;
         break;
      case 6:
         printf("Enter the Chicken Rice Quantity :");
         scanf("%d", &qty);
         bill+=qty*120;
         break;
      case 7:
         printf("Enter the Egg Rice Quantity :");
         scanf("%d", &qty);
         bill+=qty*80;
         break;
      case 8:
         printf("Enter the Chicken Gravy Quantity :");
         scanf("%d", &qty);
         bill+=qty*30;
         break;
      case 9:
         printf("Enter the Mutton gravy Quantity :");
         scanf("%d", &qty);
         bill+=qty*70;
         break;
      case 10:
         printf("Enter the Chicken Lollypop Quantity :");
         scanf("%d", &qty);
         bill+=qty*150;
         break;
      case 11:
         printf("Enter the Fish fry Quantity :");
         scanf("%d", &qty);
         bill+=qty*80;
         break;
      case 12:
         printf("Enter the Mojito Quantity :");
         scanf("%d", &qty);
         bill+=qty*100;
         break;
      default:
         printf("Sorry this Dish Not in our Restorent ");
         break;
}
printf("\nDo you want to order again :");
scanf("%s",&ord);
}
while(ord == 'Y'||ord=='y');
printf("Bill Amount :%f", bill);
}