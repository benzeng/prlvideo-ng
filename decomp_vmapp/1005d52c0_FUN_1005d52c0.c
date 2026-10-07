
void FUN_1005d52c0(long *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  plVar4 = operator_new(0x58);
  lVar5 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar5;
  piVar2 = (int *)param_2[2];
  plVar4[4] = (long)piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(plVar4 + 4));
      lVar5 = plVar4[4];
      iVar1 = *(int *)(lVar5 + 8);
      if (iVar1 != *(int *)(lVar5 + 0xc)) {
        puVar6 = (undefined8 *)(param_2[2] + 0x10 + (long)*(int *)(param_2[2] + 8) * 8);
        puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
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
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  lVar5 = param_2[3];
  plVar4[6] = param_2[4];
  plVar4[5] = lVar5;
  QDateTime::QDateTime((QDateTime *)(plVar4 + 7),(QDateTime *)(param_2 + 5));
  plVar8 = plVar4 + 8;
  plVar4[8] = (long)plVar8;
  plVar4[9] = (long)plVar8;
  plVar4[10] = 0;
  for (plVar3 = (long *)param_2[7]; plVar3 != param_2 + 6; plVar3 = (long *)plVar3[1]) {
    FUN_1005d52c0(plVar8,plVar3 + 2);
  }
  plVar4[1] = (long)param_1;
  lVar5 = *param_1;
  *plVar4 = lVar5;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}

