
undefined8 FUN_10088a600(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  uVar2 = 1;
  if (*param_1 != 0) {
    iVar1 = FUN_10088a4b0(param_2,param_1 + 2);
    uVar2 = 0xffffffff;
    if (-1 < iVar1) {
      *param_1 = 0;
      *param_3 = iVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

