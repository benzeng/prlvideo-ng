
undefined1 FUN_100527f00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar7 = *(uint *)(param_2 + 0x18);
  if ((ulong)uVar7 == 0) {
    uVar6 = 0;
  }
  else {
    lVar1 = (ulong)uVar7 * 2 + 0xff;
    uVar3 = *(uint *)(param_3 + 0x40);
    if ((int)((ulong)lVar1 >> 8) != (int)((ulong)uVar3 * 2 + 0xff >> 8)) {
      _free(*(void **)(param_3 + 0x48));
      uVar8 = (ulong)((uint)lVar1 & 0xffffff00);
      pvVar5 = _malloc(uVar8);
      *(void **)(param_3 + 0x48) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        FUN_1008e3970("CHRSERVER","ChrDAStorage",0,
                      "Failed to alocate memory for new window caption (%d bytes)",uVar8);
        *(undefined4 *)(param_3 + 0x40) = 0;
        return 0;
      }
      uVar7 = *(uint *)(param_2 + 0x18);
      uVar3 = *(uint *)(param_3 + 0x40);
    }
    pvVar5 = (void *)(param_2 + 0x30 + (ulong)*(uint *)(param_2 + 0x14) * 0x10);
    pvVar2 = *(void **)(param_3 + 0x48);
    if ((uVar7 == uVar3) && (iVar4 = _memcmp(pvVar2,pvVar5,(ulong)uVar3 * 2), iVar4 == 0)) {
      return 0;
    }
    _memcpy(pvVar2,pvVar5,(ulong)uVar7 * 2);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_2 + 0x18);
    uVar6 = 1;
  }
  return uVar6;
}

