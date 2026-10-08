
undefined8 FUN_100cad0d0(int *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 < *param_1) {
    lVar1 = *(long *)(*(long *)(param_1 + 4) + (long)param_2 * 8);
    if (lVar1 == 0) {
      param_1[8] = 4;
      param_1[9] = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100c60fc0(lVar1,param_3);
      param_1[8] = 0;
      param_1[9] = 0;
    }
  }
  else {
    param_1[8] = 3;
    param_1[9] = 0;
    uVar2 = 0;
  }
  return uVar2;
}

