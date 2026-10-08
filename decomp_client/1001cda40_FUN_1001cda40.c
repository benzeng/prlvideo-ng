
long * FUN_1001cda40(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(param_2 + 0x10);
  piVar3 = *(int **)(lVar2 + 0x18);
  *param_1 = (long)piVar3;
  if (*piVar3 != -1) {
    if (*piVar3 == 0) {
      QListData::detach((int)param_1);
      lVar4 = *param_1;
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar5 = (undefined8 *)
                 (*(long *)(lVar2 + 0x18) + 0x10 + (long)*(int *)(*(long *)(lVar2 + 0x18) + 8) * 8);
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar3 = (int *)*puVar5;
          *puVar6 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
  }
  piVar3 = *(int **)(lVar2 + 0x20);
  param_1[1] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(lVar2 + 0x28);
  param_1[2] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(lVar2 + 0x30);
  param_1[3] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(lVar2 + 0x38);
  param_1[4] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(lVar2 + 0x40);
  param_1[5] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(lVar2 + 0x48);
  param_1[6] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(lVar2 + 0x50);
  param_1[7] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(lVar2 + 0x60);
  param_1[8] = *(long *)(lVar2 + 0x58);
  return param_1;
}

