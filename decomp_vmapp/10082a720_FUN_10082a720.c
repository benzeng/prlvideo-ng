
undefined8 FUN_10082a720(long param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_2c;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = FUN_100894720(param_4);
  iVar2 = FUN_1008946d0(uVar3);
  uVar3 = 0;
  if (-1 < iVar2) {
    *param_3 = (long)iVar2;
    if (param_2 != 0) {
      iVar2 = FUN_100829ff0(lVar1 + 0x20,param_2,&local_2c);
      if (iVar2 == 0) {
        return 0;
      }
      *param_3 = (ulong)local_2c;
    }
    uVar3 = 1;
  }
  return uVar3;
}

