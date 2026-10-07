
long FUN_1005f87c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_1007ea6f0(param_2,param_3);
  if (iVar2 != 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    lVar3 = param_2 + 0x30;
    while ((param_2 = 0, lVar1 != lVar3 &&
           (param_2 = FUN_1005f87c0(param_1,lVar1 + 0x10,param_3), param_2 == 0))) {
      lVar1 = *(long *)(lVar1 + 8);
    }
  }
  return param_2;
}

