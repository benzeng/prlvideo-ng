
void FUN_1007dade0(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  
  if (param_1 != (void *)0x0) {
    uVar2 = *(uint *)((long)param_1 + 4);
    if (uVar2 != 0) {
      lVar3 = 0;
      do {
        pvVar1 = *(void **)((long)param_1 + lVar3 * 8 + 8);
        if ((void *)0x1 < pvVar1) {
          _free(pvVar1);
          uVar2 = *(uint *)((long)param_1 + 4);
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < uVar2);
    }
    _free(param_1);
    return;
  }
  return;
}

