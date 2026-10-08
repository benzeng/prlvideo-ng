
void FUN_1001cda10(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 5000;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x68) != 2) {
    uVar1 = 0;
  }
  FUN_1001c9550(param_2,param_3,uVar1);
  return;
}

