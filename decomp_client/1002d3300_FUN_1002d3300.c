
undefined8 FUN_1002d3300(long param_1)

{
  int iVar1;
  Data *pDVar2;
  QObject *pQVar3;
  int *piVar4;
  QString *pQVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  long lVar11;
  QArrayData *local_50;
  long local_48;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("dbgdump",7);
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pQVar3 = (QObject *)FUN_100199b90(uVar6,&local_38,&local_40);
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar7 = *(int **)(param_1 + 0x38);
  if (piVar7 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x38);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar4;
    *(QObject **)(param_1 + 0x40) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_29 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar4);
    }
  }
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d3451;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar11 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_1002d3430:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_1002d3430;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1002d3451:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d3481;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002d3481:
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0x80000009;
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    return 0x80000009;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
  }
  QObject::connect(&local_48,uVar6,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onCreateDumpCompleted(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  pQVar5 = (QString *)CSearchParentHelper::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_50,uVar6);
  uVar6 = CSearchParentHelper::getParentForMessage(pQVar5,SUB81(&local_50,0),(QWidget *)0x0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d356a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002d356a:
  pQVar3 = operator_new(0x88);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1007e75b0(pQVar3,uVar6,uVar8);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x28);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar7;
    *(QObject **)(param_1 + 0x30) = pQVar3;
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
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  QWidget::setAttribute(uVar6,0x37,1);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_1007e7790(uVar6,0);
  CBaseDialog::openOrShow();
  return 0;
}

