
short FUN_1009169e7(int param_1,long param_2,long param_3)

{
  undefined2 local_a;
  
  if (param_1 == 4) {
    local_a = (*(short *)(param_2 + 2) + *(short *)(param_3 + 2)) * 7;
  }
  else if (param_1 == 5) {
    local_a = *(short *)(param_2 + 2) + *(short *)(param_3 + 2);
  }
  else if (param_1 == 3) {
    local_a = (*(short *)(param_2 + 2) + *(short *)(param_3 + 2)) * 3;
  }
  else {
    local_a = 0;
  }
  return local_a;
}

