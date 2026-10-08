
void FUN_1004e72a0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  long *param_5)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  piVar2 = (int *)*param_4;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)*param_5;
  param_1[1] = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 1));
      lVar3 = param_1[1];
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        puVar4 = (undefined8 *)(*param_5 + 0x10 + (long)*(int *)(*param_5 + 8) * 8);
        puVar5 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *puVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  return;
}

