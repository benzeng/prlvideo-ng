
void FUN_1007afca0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x28) == 7) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x28) != 2) {
      return;
    }
    uVar1 = 0;
    if (*(int *)(param_2 + 0x74) < 1) {
      uVar1 = 2;
    }
  }
  FUN_1007afce0(param_1,param_3,uVar1);
  return;
}

