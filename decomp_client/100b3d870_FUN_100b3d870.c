
void FUN_100b3d870(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x38);
  piVar1 = (int *)*param_3;
  *puVar2 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_3[1];
  puVar2[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_3[2];
  puVar2[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)((long)puVar2 + 0x1c) = *(undefined1 *)((long)param_3 + 0x1c);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_3 + 3);
  piVar1 = (int *)param_3[4];
  puVar2[4] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_3 + 6);
  puVar2[5] = param_3[5];
  *param_2 = puVar2;
  return;
}

