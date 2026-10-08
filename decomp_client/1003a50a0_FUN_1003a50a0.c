
void FUN_1003a50a0(QObject *param_1)

{
  QObject *pQVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  QString *pQVar5;
  char cVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  QMapNodeBase *pQVar12;
  long lVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  bool local_31;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f1c50;
  pQVar1 = param_1 + 0x28;
  FUN_1003ae190(&local_60,pQVar1);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar2 = local_58[2];
      if (iVar2 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar9 = local_58 + (long)iVar2 * 2 + 4;
        lVar7 = (long)local_58[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_60;
          *(int **)piVar9 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_60 = local_60 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  FUN_100039a80(&local_60);
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      pQVar5 = local_50;
      local_78 = 0;
      uStack_70 = 0;
      lVar7 = *(long *)(*(long *)pQVar1 + 0x10);
      lVar13 = 0;
      if (*(long *)(*(long *)pQVar1 + 0x10) == 0) {
LAB_1003a5208:
        lVar10 = 0;
      }
      else {
        do {
          while (lVar10 = lVar7, cVar6 = operator<((QString *)(lVar10 + 0x18),pQVar5), cVar6 != '\0'
                ) {
            lVar7 = *(long *)(lVar10 + 0x10);
            if (*(long *)(lVar10 + 0x10) == 0) {
              lVar10 = lVar13;
              if (lVar13 == 0) goto LAB_1003a5208;
              goto LAB_1003a51f8;
            }
          }
          lVar7 = *(long *)(lVar10 + 8);
          lVar13 = lVar10;
        } while (*(long *)(lVar10 + 8) != 0);
LAB_1003a51f8:
        cVar6 = operator<(pQVar5,(QString *)(lVar10 + 0x18));
        if (cVar6 != '\0') goto LAB_1003a5208;
      }
      puVar8 = (undefined8 *)(lVar10 + 0x20);
      if (lVar10 == 0) {
        puVar8 = &local_78;
      }
      piVar9 = (int *)*puVar8;
      if (piVar9 != (int *)0x0) {
        plVar4 = (long *)puVar8[1];
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
        plVar11 = (long *)0x0;
        if (piVar9[1] != 0) {
          plVar11 = plVar4;
        }
        LOCK();
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        local_31 = *piVar9 != 0;
        if (*piVar9 == 0) {
          operator_delete(piVar9);
        }
        if ((plVar11 != (long *)0x0) && (cVar6 = CAbstractTask::isFinished(), cVar6 == '\0')) {
          (**(code **)(*plVar11 + 0x78))(plVar11,0x80000275);
        }
      }
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  FUN_100039a80(&local_58);
  pQVar12 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003a52e2;
      pQVar12 = *(QMapNodeBase **)(param_1 + 0x38);
    }
    if (*(long *)(pQVar12 + 0x10) != 0) {
      FUN_1003ae950();
      QMapDataBase::freeTree(pQVar12,(int)*(undefined8 *)(pQVar12 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar12);
  }
LAB_1003a52e2:
  pQVar12 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003a532a;
      pQVar12 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar12 + 0x10) != 0) {
      FUN_1003ae8c0();
      QMapDataBase::freeTree(pQVar12,(int)*(undefined8 *)(pQVar12 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar12);
  }
LAB_1003a532a:
  pQVar12 = *(QMapNodeBase **)pQVar1;
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003a5372;
      pQVar12 = *(QMapNodeBase **)pQVar1;
    }
    if (*(long *)(pQVar12 + 0x10) != 0) {
      FUN_1003ae8c0();
      QMapDataBase::freeTree(pQVar12,(int)*(undefined8 *)(pQVar12 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar12);
  }
LAB_1003a5372:
  QObject::~QObject(param_1);
  return;
}

