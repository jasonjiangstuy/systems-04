int multiples_of_3_or_5(){
  int sum = 0;
  int pointer = 0;
  while (pointer < 100) {
    if ((pointer % 3) == 0){
      sum += pointer;
    }else if ((pointer % 5) == 0){
      sum += pointer;
    }
    pointer +=1 ;
  }
  return sum;
}
int notdivisiable(long num){
  // printf("%s\n", "test");
  int i = 0;
  for (i = 1; i <=20 ; i++){
    // printf("%d\n", i);
    if (num % i != 0){
      return 1; // if not notdivisiable true
    }
  }
  return 0; // if all divisiable false

}
long smallest_multiple(){
  long pointer = 20;
  while (notdivisiable(pointer)){
    // printf("%ld\n", pointer);
    pointer += 20;
  }
  return pointer;
}

int square_sum_diff(){
  int sum_of_squares = 0;
  int pointer;
  for (pointer = 1; pointer <= 100; pointer++){
    sum_of_squares += pointer * pointer;
  }
  int square_of_sum = 0;
  for (pointer = 1; pointer <= 100; pointer++){
    square_of_sum += pointer;
  }
  square_of_sum *= square_of_sum;
  return square_of_sum - sum_of_squares;
}