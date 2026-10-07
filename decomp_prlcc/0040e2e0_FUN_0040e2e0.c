
undefined8 FUN_0040e2e0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((ulong)param_4 + 0xc <= (ulong)param_3) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x18) = param_3;
    lVar2 = FUN_0040e1f0(param_1,param_4);
    if ((*(int *)(lVar2 + 4) == 0x1000) || (*(int *)(lVar2 + 4) == -0x53234546)) {
      uVar1 = FUN_0040e220(param_1);
      if (param_3 < uVar1) {
        return 0xfffffffc;
      }
      uVar3 = FUN_0040e290(param_1);
      return uVar3;
    }
  }
  return 0xfffffffd;
}

