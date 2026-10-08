
void FUN_100327ba0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((long)param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)param_2 + 0xc) = uVar2;
  *(undefined8 *)((long)param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  piVar3 = *(int **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = piVar3;
  param_2[6] = uVar2;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  return;
}

