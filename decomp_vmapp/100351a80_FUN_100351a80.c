
undefined4 FUN_100351a80(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    if (param_2 == 2) {
      return *(undefined4 *)(param_1 + 0xc);
    }
    uVar1 = 0;
    if (param_2 == 1) {
      return *(undefined4 *)(param_1 + 8);
    }
  }
  return uVar1;
}

