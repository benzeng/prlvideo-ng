
void FUN_100b94ac0(void *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (*(long *)((long)param_1 + 0x10) != 0) {
    FUN_100b9c210();
  }
  puVar1 = *(undefined8 **)((long)param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    puVar3 = puVar1;
    while (pvVar2 != (void *)0x0) {
      puVar3 = puVar3 + 1;
      _free(pvVar2);
      pvVar2 = (void *)*puVar3;
    }
    _free(puVar1);
  }
  puVar1 = *(undefined8 **)((long)param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    puVar3 = puVar1;
    while (pvVar2 != (void *)0x0) {
      puVar3 = puVar3 + 1;
      _free(pvVar2);
      pvVar2 = (void *)*puVar3;
    }
    _free(puVar1);
  }
  if (*(void **)((long)param_1 + 0x38) != (void *)0x0) {
    _free(*(void **)((long)param_1 + 0x38));
  }
  if (*(void **)((long)param_1 + 0x40) != (void *)0x0) {
    _free(*(void **)((long)param_1 + 0x40));
  }
  if (*(void **)((long)param_1 + 0x48) != (void *)0x0) {
    _free(*(void **)((long)param_1 + 0x48));
  }
  _free(param_1);
  return;
}

