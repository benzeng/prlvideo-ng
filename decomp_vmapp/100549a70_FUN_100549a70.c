
undefined1 FUN_100549a70(long param_1)

{
  void *pvVar1;
  char cVar2;
  
  cVar2 = FUN_10054e3d0(*(undefined8 *)(param_1 + 0xc0),param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_10054d6c0(*(undefined8 *)(param_1 + 0xc0));
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_10054eed0(*(undefined8 *)(param_1 + 0xc0));
    if (cVar2 != '\0') {
      pvVar1 = *(void **)(param_1 + 0xc0);
      if (pvVar1 != (void *)0x0) {
        FUN_100546d50(pvVar1);
        operator_delete(pvVar1);
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 1;
      return 1;
    }
  }
  pvVar1 = *(void **)(param_1 + 0xc0);
  if (pvVar1 != (void *)0x0) {
    FUN_100546d50(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_100549720(param_1);
  return 0;
}

