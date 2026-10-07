
long * FUN_1005d5850(long param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  plVar3 = param_2;
  if (param_3 != param_4) {
    plVar3 = operator_new(0x58);
    *plVar3 = 0;
    lVar4 = *(long *)(param_3 + 0x10);
    plVar3[3] = *(long *)(param_3 + 0x18);
    plVar3[2] = lVar4;
    piVar2 = *(int **)(param_3 + 0x20);
    plVar3[4] = (long)piVar2;
    if (*piVar2 != -1) {
      if (*piVar2 == 0) {
        QListData::detach((int)(plVar3 + 4));
        lVar4 = plVar3[4];
        iVar1 = *(int *)(lVar4 + 8);
        if (iVar1 != *(int *)(lVar4 + 0xc)) {
          puVar7 = (undefined8 *)
                   (*(long *)(param_3 + 0x20) + 0x10 +
                   (long)*(int *)(*(long *)(param_3 + 0x20) + 8) * 8);
          puVar8 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
          lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar7;
            *puVar8 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
            }
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
    lVar4 = *(long *)(param_3 + 0x28);
    plVar3[6] = *(long *)(param_3 + 0x30);
    plVar3[5] = lVar4;
    QDateTime::QDateTime((QDateTime *)(plVar3 + 7),(QDateTime *)(param_3 + 0x38));
    plVar9 = plVar3 + 8;
    plVar3[8] = (long)plVar9;
    plVar3[9] = (long)plVar9;
    plVar3[10] = 0;
    for (lVar4 = *(long *)(param_3 + 0x48); lVar4 != param_3 + 0x40; lVar4 = *(long *)(lVar4 + 8)) {
      FUN_1005d52c0(plVar9,lVar4 + 0x10);
    }
    lVar11 = 1;
    plVar9 = plVar3;
    for (lVar4 = *(long *)(param_3 + 8); lVar4 != param_4; lVar4 = *(long *)(lVar4 + 8)) {
      plVar5 = operator_new(0x58);
      lVar6 = *(long *)(lVar4 + 0x10);
      plVar5[3] = *(long *)(lVar4 + 0x18);
      plVar5[2] = lVar6;
      piVar2 = *(int **)(lVar4 + 0x20);
      plVar5[4] = (long)piVar2;
      if (*piVar2 != -1) {
        if (*piVar2 == 0) {
          QListData::detach((int)(plVar5 + 4));
          lVar6 = plVar5[4];
          iVar1 = *(int *)(lVar6 + 8);
          if (iVar1 != *(int *)(lVar6 + 0xc)) {
            puVar7 = (undefined8 *)
                     (*(long *)(lVar4 + 0x20) + 0x10 +
                     (long)*(int *)(*(long *)(lVar4 + 0x20) + 8) * 8);
            puVar8 = (undefined8 *)(lVar6 + 0x10 + (long)iVar1 * 8);
            lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              piVar2 = (int *)*puVar7;
              *puVar8 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                UNLOCK();
              }
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
      }
      lVar6 = *(long *)(lVar4 + 0x28);
      plVar5[6] = *(long *)(lVar4 + 0x30);
      plVar5[5] = lVar6;
      QDateTime::QDateTime((QDateTime *)(plVar5 + 7),(QDateTime *)(lVar4 + 0x38));
      plVar10 = plVar5 + 8;
      plVar5[8] = (long)plVar10;
      plVar5[9] = (long)plVar10;
      plVar5[10] = 0;
      for (lVar6 = *(long *)(lVar4 + 0x48); lVar6 != lVar4 + 0x40; lVar6 = *(long *)(lVar6 + 8)) {
        FUN_1005d52c0(plVar10,lVar6 + 0x10);
      }
      plVar9[1] = (long)plVar5;
      *plVar5 = (long)plVar9;
      lVar11 = lVar11 + 1;
      plVar9 = plVar5;
    }
    lVar4 = *param_2;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    *param_2 = (long)plVar9;
    plVar9[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar11;
  }
  return plVar3;
}

