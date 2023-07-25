/*
 Write a programe to findout income tax based on given condition take monthly income as input
yearly income     tax rate
<3,00,000         5%

>=3,00,000
<5,00,000         10%

>=5,00,000
<8,00,000         20%

>=8,00,000        30%

 */
#include<stdio.h>
void main()
{

    int income,m_income;
    float tex,amount;

    printf("Enter monthly income  ");
    scanf("%d", &m_income);
    income = m_income * 12;

    if (income < 300000)
    {
        tex = (income * 5) / 100;
       
    }
    else if (income >= 300000 && income < 500000)
    {
        tex = (income * 10) / 100;
    }
    else if (income>=500000 && income<800000)
    {
        tex = (income * 20) / 100;

    }
    else if (income>=800000)
    {
        tex = (income * 30) / 100;
    }
    
    
        amount = income - tex;
        printf("Your total yearly  income is %.2f ", amount);
}
