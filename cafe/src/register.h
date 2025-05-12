#pragma once

#include<map>
#include<vector>
#include "item.h"

enum CurrencyType { BENJAMIN, TWENTY_DOLLAR, TEN_DOLLAR, FIVE_DOLLAR, DOLLAR, QUARTER, DIME, NICKEL, PENNY };

class Currency
{
   public:
       //costant expression: computable at compile time
       constexpr static float get_currency_value(CurrencyType type)
       {
           switch (type)
           { 
               case BENJAMIN: 
                   return 100.00;
               case TWENTY_DOLLAR: 
                   return 20.00;
               case TEN_DOLLAR: 
                   return 10.00;
               case FIVE_DOLLAR: 
                   return 5.00;
               case DOLLAR:
                   return 1.00;
               case QUARTER:
                   return 0.25;
               case DIME:
                   return 0.1;
               case NICKEL:
                   return 0.05;
               case PENNY:
                   return 0.01;
               default:
                   return 0.00f;
       }
    }
};

class Register
{
   public:
       std::map<CurrencyType, int> checkout(const std::_Adjust_manually_vector_aligned<Item>& items)
       {
           //initializes map
           //return {};
           std::map<CurrencyType, int> changeMap;
           float total = 0.00f; 
           float payment = 100.00f; 
           float change = payment - total; 

           const CurrencyType currencies[] =
           { BENJAMIN,
             TWENTY_DOLLAR,
             TEN_DOLLAR,
             FIVE_DOLLAR,
             DOLLAR,
             QUARTER,
             DIME,
             NICKEL,
             PENNY };

           for (const item : items)
           {
               total += item.price; 
           }


           for (CurrencyType currency : currencies)
           {
               float currencyValue = Currency::get_currency_value(currency);

               if (change >= currencyValue) 
               {
                   int count = static_cast<int>(change / currencyValue);
                   changeMap[currency] = count;
                   change = std::fmod(total, currency);
               }

           }

           return change; 
       }


};
