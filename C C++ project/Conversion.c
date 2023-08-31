#include <stdio.h>

int main()
{
    int n,l;
    int go = 1;
    double in, cm, ft, m, yd, mile, km, acre, msqr, Liter, galon, g, oz, lb, kg, ms, kmh, Pa, mmHg, atm, J, Cal, Hp, W, F, C, K;

    
    printf("Welcome to unit calculator fx-991ex\n");
    printf("Press enter to continue");
    while(getchar() != '\n')
;
    home:
    printf(
        "Choose what do you wanna convert\n1 Length\n2 Area\n3 Volume\n4 Mass\n5 Velocity\n6 Pressure\n7 Energy\n8 Power\n9 Temperature\n");
    scanf("%d", &n);
    if(n == 1){
        homelength:
        printf("Welcome to unit converter of length\nChoose any option:\n");
        printf(" 1: in>cm\n 2: cm>in\n 3:ft>m\n 4:m>ft\n 5:yd>m\n 6:m>yd\n 7:mile>km\n 8:km>mile\n 9:n mile>m\n A:m>n mile\n B:pc>km\n C:km>pc\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("in>cm\nEnter the value in inch");
            scanf("%lf", &in);
            cm = in * 2.54;
            printf("It is %.2lf centimeters", cm);
        }else if(l == 2){
            printf("cm>in\nEnter the value in centimeter");
            scanf("%lf", &cm);
            in =cm / 2.54;
            printf("It is %.2lf inches", in);
        }else if(l == 3){
            printf("ft>m\nEnter the value in Foot");
            scanf("%lf", &ft);
            m = ft * 0.3048;
            printf("It is %.2lf meters", m);
        }else if(l == 4){
            printf("m>ft\nEnter the value in meter");
            scanf("%lf", &m);
            ft = (m * 1250)/381;
            printf("It is %.2lf feet", ft);
        }else if(l == 5){
            printf("yd>m\nEnter the value in yard");
            scanf("%lf", &yd);
            m = (yd * 0.9144);
            printf("It is %.2lf meters", m);
        }else if(l == 6){
            printf("m>yd\nEnter the value in meter");
            scanf("%lf", &m);
            yd = (m * 1250)/1143;
            printf("It is %.2lf yards", yd);
        }else if(l == 7){
            printf("mile>km\nEnter the value in mile");
            scanf("%lf", &mile);
            km = (mile * 1.609344);
            printf("It is %.2lf Kilometers", km);
        }else if(l == 8){
            printf("km>mile\nEnter the value in Kilometer");
            scanf("%lf", &km);
            mile = km * 0.6213711922;
            printf("It is %.2lf miles", mile);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homelength;
            }else{
                printf("Error");
            }
        }
    }else if(n == 2){
        homearea:
        printf("Welcome to unit converter of Area\nChoose any option:\n");
        printf("1: acre>m^2\n 2: m^2>acre\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("acre>m^2\nEnter the value in acre");
            scanf("%lf", &acre);
            msqr = acre * 4046.856;
            printf("It is %.2lf meter square", msqr);
        }else if(l == 2){
            printf("m^2>acre\nEnter the value in meter square");
            scanf("%lf", &msqr);
            acre =(msqr * 125)/505857;
            printf("It is %.2lf acres", acre);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homearea;
            }else{
                printf("Error");
            }
        }
    }else if(n == 3){
        homevolume:
        printf("Welcome to unit converter of Volume\nChoose any option:\n");
        printf("1: Galon>L\n2: L>Galon\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("Galon>L\nEnter the value in Galon");
            scanf("%lf", &galon);
            Liter = galon * 3.785412;
            printf("It is %.2lf liters", Liter);
        }else if(l == 2){
            printf("L>Galon\nEnter the value in Liter");
            scanf("%lf", &Liter);
            galon =Liter * 0.2641750373;
            printf("It is %.2lf Galons", galon);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homevolume;
            }else{
                printf("Error");
            }
        }
    }else if(n == 4){
               homemass:
        printf("Welcome to unit converter of mass\nChoose any option:\n");
        printf(" 1: oz>g\n 2: g>oz\n 3:lb>kg\n 4:kg>lb\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("oz>g\nEnter the value in ounces");
            scanf("%lf", &oz);
            g = oz * 28.34952;
            printf("It is %.2lf grams", g);
        }else if(l == 2){
            printf("g>oz\nEnter the value in gram");
            scanf("%lf", &g);
            oz =g / 28.34952;
            printf("It is %.2lf ounces", oz);
        }else if(l == 3){
            printf("lb>kg\nEnter the value in Pound");
            scanf("%lf", &lb);
            kg = lb * 0.4535924;
            printf("It is %.2lf Kgs", kg);
        }else if(l == 4){
            printf("kg>lb\\nEnter the value in Kg");
            scanf("%lf", &kg);
            lb = kg * 2.204622476;
            printf("It is %.2lf pounds", lb);
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homemass;
            }else{
                printf("Error");
            }
        }
    }else if(n == 5){
            homevelocity:
        printf("Welcome to unit converter of Velocity\nChoose any option:\n");
        printf("1: Km/h>m/s\n2: m/s>km/h\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("Km/h>m/s\nEnter the value in Km/h");
            scanf("%lf", &kmh);
            ms = kmh / 3.6;
            printf("It is %.2lf m/s", ms);
        }else if(l == 2){
            printf("m/s>km/h\nEnter the value in m/s");
            scanf("%lf", &ms);
            kmh =ms * 3.6;
            printf("It is %.2lf Km/h", kmh);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homevelocity;
            }else{
                printf("Error");
            }
        }
    }else if( n == 6){
             homepressure:
        printf("Welcome to unit converter of Pressure\nChoose any option:\n");
        printf("1: atm>Pa\n2: Pa>atm\n3: mmHg>Pa \n4: Pa>mmHg");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("atm>Pa\nEnter the value in atm");
            scanf("%lf", &atm);
            Pa = atm * 101325;
            printf("It is %.2lf Pascals", Pa);
        }else if(l == 2){
            printf("Pa>atm\nEnter the value in Pascal");
            scanf("%lf", &Pa);
            atm = Pa / 101325;
            printf("It is %.2lf atm", atm);
        }else if(l == 3){
            printf("mmHg>Pa\nEnter the value in mmHg");
            scanf("%lf", &mmHg);
            Pa = mmHg * 133.3224;
            printf("It is %.2lf Pascals", Pa);
        }else if(l == 4){
            printf("Pa>mmHg\nEnter the value in Pascal");
            scanf("%lf", &Pa);
            mmHg = Pa / 133.3224;
            printf("It is %.2lf mmHg", mmHg);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homepressure;
            }else{
                printf("Error");
            }
        }
    }else if(n == 7){
            homeenergy:
        printf("Welcome to unit converter of Energy\nChoose any option:\n");
        printf("1: J>Cal\n2: Cal>J\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("J>Cal\nEnter the value in Joule");
            scanf("%lf", &J);
            Cal = J * 4.1858;
            printf("It is %.2lf Calories", Cal);
        }else if(l == 2){
            printf("Cal>J\nEnter the value in Calorie");
            scanf("%lf", &Cal);
            J = Cal / 4.1858;
            printf("It is %.2lf Joules", J);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homeenergy;
            }else{
                printf("Error");
            }
        }
    }else if(n == 8){
            homepower:
        printf("Welcome to unit converter of Energy\nChoose any option:\n");
        printf("1: hp>W\n2: W>Hp\n");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("hp>W\nEnter the value in Horsepower");
            scanf("%lf", &Hp);
            W = Hp * 746;
            printf("It is %.2lf Watts", W);
        }else if(l == 2){
            printf("W>Hp\nEnter the value in Watt");
            scanf("%lf", &W);
            Hp = W / 746;
            printf("It is %.2lf Horsepower", Hp);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto homepower;
            }else{
                printf("Error");
            }
        }
    }else if( n == 9){
             hometemp:
        printf("Welcome to unit converter of Temperature\nChoose any option:\n");
        printf("1: F>C\n2: C>F\n3: K>C \n4: C>K \n5: F>K \n6: K>F");
        printf("Press 0 and enter to go back");
        scanf("%d", &l);
        if(l == 1){
            printf("F>C\nEnter the value in Farenheit");
            scanf("%lf", &F);
            C = ((F-32)*5)/9;
            printf("It is %.2lf degree Celcius", C);
        }else if(l == 2){
            printf("C>F\nEnter the value in Celcius");
            scanf("%lf", &C);
            F = ((C*9)/5)+32;
            printf("It is %.2lf degree Farenheit", F);
        }else if(l == 3){
            printf("K>C\nEnter the value in Kelvin");
            scanf("%lf", &K);
            C = (K - 273);
            printf("It is %.2lf degree Celcius", C);
        }else if(l == 4){
            printf("C>K\nEnter the value in Celcius");
            scanf("%lf", &C);
            K = C + 273;
            printf("It is %.2lf Kelvin", K);
        }else if(l == 5){
            printf("F>K\nEnter the value in Farenheit");
            scanf("%lf", &F);
            K = (((F-32)*5)/9)+273;
            printf("It is %.2lf Kelvin", K);
        }else if(l == 6){
            printf("K>F\nEnter the value in Kelvin");
            scanf("%lf", &K);
            F = (((K-273)*9)/5)+32;
            printf("It is %.2lf degree Farenheit", F);
        }else if(l == 0){
            goto home;
        }else{
            printf("Invalid\nPress 0 to return");
            scanf("%d", &go);
            if(go == 0){
                goto hometemp;
            }else{
                printf("Error");
            }
        }
    }else {
        printf("Invalid");
    }
    return 0;



}
