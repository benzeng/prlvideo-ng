
undefined8 FUN_100abdf70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    uVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100319c50();
    uVar1 = FUN_100331080(uVar1,param_2);
    *param_3 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

