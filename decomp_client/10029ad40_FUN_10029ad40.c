
undefined8 FUN_10029ad40(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  QObject *pQVar6;
  int *piVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QDateTime local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar1 = param_1 + 0x50;
  if (((*(byte *)(param_1 + 0x38) & 2) != 0) && (cVar2 = FUN_1007507b0(lVar1), cVar2 != '\0')) {
    uVar15 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar15 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar15 = *(undefined8 *)(param_1 + 0x20);
    }
    pQVar6 = (QObject *)FUN_10015ceb0(uVar15,lVar1);
    piVar7 = (int *)0x0;
    if (pQVar6 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    }
    piVar9 = *(int **)(param_1 + 0x28);
    if (piVar9 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x28);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar7;
      *(QObject **)(param_1 + 0x30) = pQVar6;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar7);
      }
    }
    if ((((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
        (*(long *)(param_1 + 0x30) != 0)) && (iVar5 = FUN_10018bce0(), iVar5 == 3)) {
      return 0;
    }
    FUN_10074a700(&local_38,lVar1);
    pvVar8 = operator_new(0x20);
    QDateTime::QDateTime(&local_40);
    FUN_1001e35f0(pvVar8,lVar1,&local_38,&local_40);
    QDateTime::~QDateTime(&local_40);
    uVar15 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar15 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar15 = *(undefined8 *)(param_1 + 0x20);
    }
    pQVar6 = (QObject *)FUN_10015bf80(uVar15,pvVar8,1);
    piVar7 = (int *)0x0;
    if (pQVar6 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    }
    piVar9 = *(int **)(param_1 + 0x28);
    if (piVar9 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x28);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar7;
      *(QObject **)(param_1 + 0x30) = pQVar6;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar7);
      }
    }
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
    return 0;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(".pvs",4);
  cVar2 = QString::endsWith(lVar1,&local_48,0);
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    local_50 = (QArrayData *)QString::fromAscii_helper(".pvsz",5);
    cVar2 = QString::endsWith(lVar1,&local_50,0);
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      local_58 = (QArrayData *)QString::fromAscii_helper(".pvm",4);
      cVar2 = QString::endsWith(lVar1,&local_58,0);
      cVar3 = '\x01';
      if (cVar2 == '\0') {
        local_60 = (QArrayData *)QString::fromAscii_helper(".pvmz",5);
        cVar2 = QString::endsWith(lVar1,&local_60,0);
        cVar3 = '\x01';
        if (cVar2 == '\0') {
          cVar3 = FUN_1007507b0(lVar1);
        }
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_29 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10029b039;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
LAB_10029b039:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10029b069;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_10029b069:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029b099;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10029b099:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029b0c9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10029b0c9:
  uVar15 = 0x80000009;
  if (cVar3 == '\0') {
    return 0x80000009;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(".pvsz",5);
  cVar2 = QString::endsWith(lVar1,&local_68,0);
  uVar13 = 1;
  if (cVar2 == '\0') {
    local_70 = (QArrayData *)QString::fromAscii_helper(".pvmz",5);
    bVar4 = QString::endsWith(lVar1,&local_70,0);
    uVar13 = (uint)bVar4;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029b155;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10029b155:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029b185;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10029b185:
  uVar10 = FUN_1001d50a0();
  uVar11 = FUN_1001d50d0(uVar10);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar14 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)
     ) {
    uVar14 = *(undefined8 *)(param_1 + 0x48);
  }
  plVar12 = (long *)FUN_1001db070(uVar11,uVar10,lVar1,uVar13 + 0x2713,uVar14,0);
  if (plVar12 != (long *)0x0) {
    cVar2 = CAbstractTask::isFinished();
    if (cVar2 == '\0') {
      iVar5 = (**(code **)(*plVar12 + 0x68))(plVar12);
      uVar15 = 0;
      if (iVar5 != 6) {
        CAbstractTask::setWaitForSubTaskCompletion();
        uVar15 = 0;
        QObject::connect(&local_78,plVar12,"2taskFinished(PRL_RESULT)",param_1,
                         "1subTaskCompleted(PRL_RESULT)",0);
        if (local_78 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_78);
      }
    }
    else {
      uVar15 = 0;
    }
  }
  return uVar15;
}

