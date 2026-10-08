
void FUN_100a40040(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_2 < 0) {
    return;
  }
  puVar2 = (uint *)*param_1;
  uVar3 = puVar2[2];
  if ((int)(puVar2[3] - uVar3) <= param_2) {
    return;
  }
  if (1 < *puVar2) {
    FUN_100a3f750(param_1,puVar2[1]);
    puVar2 = (uint *)*param_1;
    uVar3 = puVar2[2];
  }
  pvVar1 = *(void **)(puVar2 + ((long)param_2 + (long)(int)uVar3) * 2 + 4);
  if (pvVar1 == (void *)0x0) goto LAB_100a400bc;
  piVar4 = *(int **)((long)pvVar1 + 8);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 != 0) goto LAB_100a400b4;
      piVar4 = *(int **)((long)pvVar1 + 8);
    }
    FUN_100a3fda0((undefined8 *)((long)pvVar1 + 8),piVar4);
  }
LAB_100a400b4:
  operator_delete(pvVar1);
LAB_100a400bc:
  QListData::remove((int)param_1);
  return;
}

