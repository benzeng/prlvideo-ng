
undefined8 FUN_100c35470(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_100c26db0(param_2,0);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == -1) {
      return 1;
    }
    param_1 = param_1 + 1;
    iVar1 = FUN_100c27200(param_2);
    if (iVar1 == 0) break;
    iVar1 = *param_1;
  }
  return 0;
}

