
void FUN_10070b140(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  (**(code **)((long)pvVar1 + 8))();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar1 + 0x10);
  _free(pvVar1);
  return;
}

