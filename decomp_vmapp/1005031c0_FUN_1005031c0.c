
undefined8 FUN_1005031c0(long param_1,ulong param_2,void *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *param_5 = 0;
  lVar1 = *(long *)(param_1 + 0x58);
  if (param_2 < *(uint *)(lVar1 + 4)) {
    uVar3 = *(uint *)(lVar1 + 4) - (int)param_2;
    if (param_4 < uVar3) {
      uVar3 = param_4;
    }
    *param_5 = uVar3;
    _memcpy(param_3,(void *)(param_2 + *(long *)(lVar1 + 0x10) + lVar1),(ulong)uVar3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

