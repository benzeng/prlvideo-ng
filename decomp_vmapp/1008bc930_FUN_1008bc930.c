
int FUN_1008bc930(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    param_3 = param_3 + 1;
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar1 = FUN_100885600(param_1);
    for (; param_3 < iVar1; param_3 = param_3 + 1) {
      puVar3 = (undefined8 *)FUN_100885620(param_1,param_3);
      iVar2 = FUN_1008230a0(*puVar3,param_2);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}

