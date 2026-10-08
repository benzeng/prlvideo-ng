
undefined8 FUN_100ddc410(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = 0xffffffea;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 4);
    uVar2 = 0;
    if (uVar3 != 0) {
      lVar4 = 0;
      do {
        pvVar1 = *(void **)(param_1 + 8 + lVar4 * 8);
        if (pvVar1 != (void *)0x1) {
          if (pvVar1 == (void *)0x0) {
            *(undefined8 *)(param_1 + 8 + lVar4 * 8) = 1;
          }
          else {
            _free(pvVar1);
            *(undefined8 *)(param_1 + 8 + lVar4 * 8) = 1;
            uVar3 = *(uint *)(param_1 + 4);
          }
        }
        lVar4 = lVar4 + 1;
        uVar2 = 0;
      } while ((uint)lVar4 < uVar3);
    }
  }
  return uVar2;
}

