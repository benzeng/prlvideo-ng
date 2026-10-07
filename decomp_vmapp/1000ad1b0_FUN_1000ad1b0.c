
void FUN_1000ad1b0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1ac0) == param_2) {
    return;
  }
  FUN_1008e3970("","vm",0,"LW: online %d",param_2);
  *(int *)(param_1 + 0x1ac0) = param_2;
  FUN_1000ad0b0(param_1);
  return;
}

