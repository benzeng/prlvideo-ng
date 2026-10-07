
int FUN_1008bc040(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar3 = FUN_100821870(param_2);
  iVar5 = -2;
  if ((lVar3 != 0) && (iVar5 = -1, param_1 != 0)) {
    param_3 = param_3 + 1;
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar1 = FUN_100885600(param_1);
    for (; param_3 < iVar1; param_3 = param_3 + 1) {
      puVar4 = (undefined8 *)FUN_100885620(param_1,param_3);
      iVar2 = FUN_1008230a0(*puVar4,lVar3);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return iVar5;
}

