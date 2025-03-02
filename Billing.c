#include<stdio.h>

int main(){
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("----------------------\n");
    printf("BILLING SYSTEM\n");
    printf("----------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s",&name);
    printf("Customer Number : ");
    scanf("%d",&phone_number);
    printf("Customer Id : ");
    scanf("%d",&customer_id);

    printf("----------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap (Rs 10) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream (Rs 25) : ");
    scanf("%d", &hair_cream);
    printf("Body Spray (Rs 50) : ");
    scanf("%d", &body_spray);
    printf("Hair Spray (Rs 50) : ");
    scanf("%d", &hair_spray);

    printf("----------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar (Rs 100) : ");
    scanf("%d", &sugar);
    printf("Tea (Rs 15) : ");
    scanf("%d", &tea);
    printf("Coffee (Rs 50) : ");
    scanf("%d", &coffee);
    printf("Rice (Rs 150) : ");
    scanf("%d", &rice);
    printf("Wheat (Rs 160) : ");
    scanf("%d", &wheat);

    printf("----------------------\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi (Rs 30) : ");
    scanf("%d", &pepsi);
    printf("Sprite (Rs 35) : ");
    scanf("%d", &sprite);
    printf("Coke (Rs 30) : ");
    scanf("%d", &coke);
    printf("Mojitos (Rs 25) : ");
    scanf("%d", &mojitos);
    printf("Thumbs Up (Rs 35) : ");
    scanf("%d", &thumbs_up);

    printf("----------------------\n"); 

    int boso;
    int hc;
    int hs;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetics_total = boso + hc + hs + bosp;

    printf("Body Soap : ");
    printf("%d RS\n", boso);
    printf("Hair Cream : ");
    printf("%d RS\n", hs);
    printf("Hair Spray : ");
    printf("%d RS\n", hs);
    printf("Body Spray : ");
    printf("%d RS\n", bosp);

    printf("Total Cosmetic Prices : ");
    printf("%d RS\n", cosmetics_total);

    
    printf("----------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s=100*sugar;
    t=15*tea;
    c=50*coffee;
    r=150*rice;
    w=160*wheat;
    grocery_total=s+t+c+r+w;

    printf("Sugar : ");
    printf("%d RS\n", s);
    printf("Tea : ");
    printf("%d RS\n", t);
    printf("Coffee : ");
    printf("%d RS\n", c);
    printf("Rice : ");
    printf("%d RS\n", r);
    printf("Wheat : ");
    printf("%d RS\n", w);
    printf("Total Groceries Price :");
    printf("%d RS\n", grocery_total);

    printf("----------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep=30*pepsi;
    spr=35*sprite;
    cok=30*coke;
    moj=25*mojitos;
    thu=35*thumbs_up;
    beverage_total=pep + spr + cok + moj + thu;

    printf("Pepsi : ");
    printf("%d RS\n", pep);
    printf("Sprite : ");
    printf("%d RS\n", spr);
    printf("Coke : ");
    printf("%d RS\n", cok);
    printf("Mojitos : ");
    printf("%d RS\n", moj);
    printf("Thumbs Up : ");
    printf("%d RS\n", thu);
    printf("Total Bevarage Price : ");
    printf("%d RS\n", beverage_total);

    printf("----------------------\n");

    total=cosmetics_total + grocery_total + beverage_total;

    printf("Total Amount : ");
    printf("%d RS\n", total);

    printf("----------------------\n");

    printf("-----------------------------------------------------------\n");

    printf("ANTEIKU SUPER MARKET\n\n");

    printf("Customer Name : ");
    printf("%s\n",name);
    printf("Customer Phone Number : ");
    printf("%d\n",phone_number);
    printf("Customer_Id : ");
    printf("%d\n",customer_id);

    printf("Product Name      Quantity            Price\n\n");
    printf("Body Soap            %d           %d\n",body_soap,boso);
    printf("Hair Cream           %d           %d",hair_cream,hc);
    printf("Body Spray           %d           %d",body_spray,bosp);
    printf("Hair Spray           %d           %d",hair_spray,hs);
    printf("Sugar                %d           %d",sugar,s);
    printf("Tea                  %d           %d",tea,t);
    printf("Coffee               %d           %d",coffee,c);
    printf("Rice                 %d           %d",rice,r);
    printf("Wheat                %d           %d",wheat,w);
    printf("Pepsi                %d           %d",pepsi,pep);
    printf("Sprite               %d           %d",sprite,spr);
    printf("Coke                 %d           %d",coke,cok);
    printf("Mojitos              %d           %d",mojitos,moj);
    printf("Thumbs Up            %d           %d",thumbs_up,thu);

    printf("Grocery Total Price : %d\n\n",grocery_total );

    printf("Cosmetic Total Price : %d\n\n",cosmetics_total);

    printf("Beverages Total Price : %d\n\n",beverage_total);

    printf("Total Price : %d\n\n",total);

    printf("------------------------------------------------------------------\n");

    return 0;


}   