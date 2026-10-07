
void FUN_100405300(long param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)((long)pvVar1 + 0x28);
  FUN_10070aed0();
  lVar2 = *(long *)((long)pvVar1 + 0x10);
  plVar3 = *(long **)((long)pvVar1 + 0x18);
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  _free(pvVar1);
  return;
}

