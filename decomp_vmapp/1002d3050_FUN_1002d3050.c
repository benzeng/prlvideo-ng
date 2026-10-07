
void FUN_1002d3050(undefined8 param_1,long *param_2,ulong param_3,long param_4,uint param_5,
                  uint param_6)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  
  pvVar1 = (void *)(param_4 + 0x4d8 + (ulong)param_5);
  if ((*(byte *)((long)param_2 + 0xc) & 0x40) != 0) {
    sVar3 = 8;
    if (param_6 < 8) {
      sVar3 = (ulong)param_6;
    }
    _memcpy(pvVar1,param_2 + (param_3 & 0xffffffff),sVar3);
    return;
  }
  if ((param_6 != 0) && (lVar2 = (param_3 & 0xffffffff) + *param_2, lVar2 != 0)) {
    FUN_10008cba0(DAT_1011c3688,pvVar1,lVar2,param_6);
    return;
  }
  return;
}

