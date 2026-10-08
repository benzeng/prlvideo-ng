
undefined8 * FUN_100d033c0(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 < 4) {
    lVar4 = (long)(int)param_3;
    lVar3 = *(long *)(param_2 + 0x110) + *(long *)(*(long *)(param_2 + 0x110) + 0x10);
    param_1[1] = *(undefined8 *)(lVar3 + 8 + lVar4 * 0x28);
    *param_1 = *(undefined8 *)(lVar3 + lVar4 * 0x28);
    piVar2 = *(int **)(lVar3 + 0x10 + lVar4 * 0x28);
    param_1[2] = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    param_1[4] = *(undefined8 *)(lVar3 + 0x20 + lVar4 * 0x28);
    param_1[3] = *(undefined8 *)(lVar3 + 0x18 + lVar4 * 0x28);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x110);
    lVar4 = *(long *)(lVar3 + 0x10);
    uVar1 = *(undefined8 *)(lVar3 + lVar4);
    param_1[1] = *(undefined8 *)(lVar3 + 8 + lVar4);
    *param_1 = uVar1;
    piVar2 = *(int **)(lVar3 + 0x10 + lVar4);
    param_1[2] = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x18 + lVar3);
    param_1[4] = *(undefined8 *)(lVar4 + 0x20 + lVar3);
    param_1[3] = uVar1;
  }
  return param_1;
}

