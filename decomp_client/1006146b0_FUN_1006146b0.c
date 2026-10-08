
void FUN_1006146b0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  piVar3 = *(int **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = piVar3;
  param_2[3] = uVar2;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  QVariant::QVariant((QVariant *)(param_2 + 6),(QVariant *)(param_1 + 0x30));
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 0x40);
  return;
}

