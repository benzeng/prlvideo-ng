
undefined8 FUN_10085a270(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_10084bbb0(param_2,0);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == -1) {
      return 1;
    }
    param_1 = param_1 + 1;
    iVar1 = FUN_10084c000(param_2);
    if (iVar1 == 0) break;
    iVar1 = *param_1;
  }
  return 0;
}

