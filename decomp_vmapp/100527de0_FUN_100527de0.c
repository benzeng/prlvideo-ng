
undefined8 FUN_100527de0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  uVar5 = (ulong)uVar2;
  uVar1 = *(uint *)(param_3 + 0x1c);
  if ((uVar5 == 0) || (uVar2 != uVar1)) {
    if (uVar2 == 0) {
      if (*(void **)(param_3 + 0x38) != (void *)0x0) {
        *(undefined4 *)(param_3 + 0x1c) = 0;
        _free(*(void **)(param_3 + 0x38));
        *(undefined8 *)(param_3 + 0x38) = 0;
        return 1;
      }
      return 0;
    }
    lVar6 = uVar5 * 0x10 + 0xff;
    uVar2 = uVar1;
    if ((int)((ulong)lVar6 >> 8) != (int)((ulong)uVar1 * 0x10 + 0xff >> 8)) {
      _free(*(void **)(param_3 + 0x38));
      uVar5 = (ulong)((uint)lVar6 & 0xffffff00);
      pvVar4 = _malloc(uVar5);
      *(void **)(param_3 + 0x38) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_1008e3970("CHRSERVER","ChrDAStorage",0,
                      "Failed to alocate memory for new window shape (%d bytes)",uVar5);
        *(undefined4 *)(param_3 + 0x1c) = 0;
        return 1;
      }
      uVar5 = (ulong)*(uint *)(param_2 + 0x14);
      uVar2 = *(uint *)(param_3 + 0x1c);
    }
    if ((uint)uVar5 != uVar2) {
      pvVar4 = *(void **)(param_3 + 0x38);
      goto LAB_100527eaa;
    }
  }
  pvVar4 = *(void **)(param_3 + 0x38);
  iVar3 = _memcmp((void *)(param_2 + 0x30),pvVar4,(ulong)uVar2 << 4);
  if (iVar3 == 0) {
    return 0;
  }
LAB_100527eaa:
  _memcpy(pvVar4,(void *)(param_2 + 0x30),uVar5 << 4);
  return 1;
}

