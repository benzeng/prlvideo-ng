
undefined8 FUN_100580100(long param_1,long param_2)

{
  void *pvVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x1142) & 1) == 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
    pvVar1 = *(void **)(param_1 + 0x11b8);
    if (*(uint *)(param_1 + 0x11c0) < uVar2) {
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
        uVar2 = *(uint *)(param_2 + 0x10);
      }
      pvVar1 = _valloc((ulong)uVar2);
      *(void **)(param_1 + 0x11b8) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        FUN_1008e3970("","vdisk",0,"Error allocating memory for shadow buffer [size %u]",uVar2);
        return 0x80000002;
      }
      *(uint *)(param_1 + 0x11c0) = uVar2;
      uVar2 = *(uint *)(param_2 + 0x10);
    }
    _memcpy(pvVar1,*(void **)(param_2 + 8),(ulong)uVar2);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x11b8);
  }
  return 0;
}

