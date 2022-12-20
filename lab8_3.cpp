char before(char x){
   if (x=='A'){
   return 'Z';
   }
   if(x=='0'){
   return '0';
   }
   if(x==toupper(x)){
   return x-1;
   }else{
   return '0';
   }
}
