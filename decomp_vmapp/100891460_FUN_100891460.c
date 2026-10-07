
undefined8 FUN_100891460(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 == 3) {
    if (param_3 < 1) {
      return 0;
    }
    **(int **)(param_1 + 0x78) = param_3;
  }
  else if (param_2 == 2) {
    *param_4 = **(undefined4 **)(param_1 + 0x78);
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_100894680(param_1);
    **(int **)(param_1 + 0x78) = iVar1 << 3;
  }
  return 1;
}

