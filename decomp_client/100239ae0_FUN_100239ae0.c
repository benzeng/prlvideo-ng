
void FUN_100239ae0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  piVar2 = *(int **)(param_2 + 2);
  *(int **)(param_1 + 2) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  piVar2 = *(int **)(param_2 + 6);
  *(int **)(param_1 + 6) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 6));
      lVar3 = *(long *)(param_1 + 6);
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        puVar6 = (undefined8 *)
                 (*(long *)(param_2 + 6) + 0x10 + (long)*(int *)(*(long *)(param_2 + 6) + 8) * 8);
        puVar7 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *puVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
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
  piVar2 = *(int **)(param_2 + 8);
  *(int **)(param_1 + 8) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 8));
      lVar3 = *(long *)(param_1 + 8);
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        puVar6 = (undefined8 *)
                 (*(long *)(param_2 + 8) + 0x10 + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 8);
        puVar7 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *puVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
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
  piVar2 = *(int **)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(int **)(param_1 + 10) = piVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  QVariant::QVariant((QVariant *)(param_1 + 0x12),(QVariant *)(param_2 + 0x12));
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  piVar2 = *(int **)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(int **)(param_1 + 0x18) = piVar2;
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  QVariant::QVariant((QVariant *)(param_1 + 0x20),(QVariant *)(param_2 + 0x20));
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  piVar2 = *(int **)(param_2 + 0x26);
  *(int **)(param_1 + 0x26) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(param_2 + 0x28);
  *(int **)(param_1 + 0x28) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(param_2 + 0x2a);
  if (*piVar2 == 0) {
    uVar4 = QMapDataBase::createData();
    *(undefined8 *)(param_1 + 0x2a) = uVar4;
    if (*(long *)(*(long *)(param_2 + 0x2a) + 0x10) != 0) {
      puVar5 = (ulong *)FUN_10023a060(*(long *)(*(long *)(param_2 + 0x2a) + 0x10),uVar4);
      lVar3 = *(long *)(param_1 + 0x2a);
      *(ulong **)(lVar3 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | lVar3 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*piVar2 == -1) {
    *(int **)(param_1 + 0x2a) = piVar2;
  }
  else {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  }
  return;
}

