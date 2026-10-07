
void FUN_004088e0(void *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  
  puVar2 = PTR_g_PrlXLibAPI_0061bcf0;
  if (0 < *(int *)((long)param_1 + 0x28)) {
    iVar4 = 0;
    lVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar1 = (undefined8 *)(*(long *)((long)param_1 + 0x20) + lVar3);
      lVar3 = lVar3 + 0x18;
      (**(code **)(*(long *)(puVar2 + 0x10) + 0x30))(*puVar1);
    } while (iVar4 < *(int *)((long)param_1 + 0x28));
  }
  if (*(void **)((long)param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)((long)param_1 + 0x20));
  }
  puVar2 = PTR_g_PrlXLibAPI_0061bcf0;
  if (0 < *(int *)((long)param_1 + 0x38)) {
    iVar4 = 0;
    lVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar1 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar3);
      lVar3 = lVar3 + 0x18;
      (**(code **)(*(long *)(puVar2 + 0x10) + 0x28))(*puVar1);
    } while (iVar4 < *(int *)((long)param_1 + 0x38));
  }
  if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)((long)param_1 + 0x30));
  }
  if (*(long *)((long)param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 8))();
  }
  operator_delete(param_1);
  return;
}

