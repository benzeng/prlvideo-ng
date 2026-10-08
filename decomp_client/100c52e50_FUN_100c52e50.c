
undefined8 FUN_100c52e50(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_2 != 2) {
    if (param_2 == 0x1002) {
      (*(int **)(param_1 + 0x28))[1] = param_3;
    }
    else {
      uVar1 = 0xfffffffe;
      if ((param_2 == 0x1001) && (0xff < param_3)) {
        **(int **)(param_1 + 0x28) = param_3;
        return 1;
      }
    }
  }
  return uVar1;
}

