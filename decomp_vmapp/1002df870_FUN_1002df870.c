
undefined8
FUN_1002df870(long param_1,char param_2,uint param_3,short param_4,ushort param_5,void *param_6,
             uint *param_7)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_3 != 6) {
    uVar2 = FUN_1002dc480(param_1,param_2,param_3 & 0xff,param_4,param_5);
    return uVar2;
  }
  uVar2 = 0x20;
  if (param_2 < '\0') {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    if (param_5 < *(byte *)(lVar1 + 4)) {
      if (param_4 == 0x2100) {
        uVar3 = 9;
        if (*param_7 < 9) {
          uVar3 = *param_7;
        }
        *param_7 = uVar3;
        pvVar4 = (void *)(lVar1 + 0x12 + (ulong)param_5 * 0x19);
      }
      else {
        if (param_4 != 0x2200) {
          return 0x20;
        }
        lVar1 = *(long *)(param_1 + 0x48);
        lVar5 = (ulong)param_5 * 0x10;
        uVar3 = *(uint *)(lVar1 + lVar5);
        if (*param_7 < uVar3) {
          uVar3 = *param_7;
        }
        *param_7 = uVar3;
        pvVar4 = *(void **)(lVar1 + 8 + lVar5);
      }
      _memcpy(param_6,pvVar4,(ulong)uVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}

