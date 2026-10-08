
undefined8 FUN_10020bd70(char *param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QString *pQVar6;
  undefined1 uVar7;
  long *plVar8;
  QArrayData *local_50;
  QArrayData *local_48;
  Connection local_40 [8];
  Connection local_38 [15];
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
     (*(long *)(param_1 + 0x40) == 0)) {
    pQVar1 = operator_new(0x48);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
    }
    CPasswordDialog::CPasswordDialog((CPasswordDialog *)pQVar1,1,uVar4);
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    piVar3 = *(int **)(param_1 + 0x38);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_29 = *piVar2 != 0;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x38);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_29 = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x38));
        }
      }
      *(int **)(param_1 + 0x38) = piVar2;
      *(QObject **)(param_1 + 0x40) = pQVar1;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar2);
      }
    }
    pQVar1 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar1 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar1 = *(QObject **)(param_1 + 0x40);
    }
    CPasswordDialog::setPasswordValidator(pQVar1,param_1,"1checkPassword(QString)");
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x40);
    }
    uVar5 = 0;
    QObject::connect(local_38,uVar4,"2rejected()",param_1,"1onAuthCanceled()",0);
    QMetaObject::Connection::~Connection(local_38);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
    }
    pQVar6 = (QString *)0x0;
    QObject::connect(local_40,uVar5,"2accepted()",param_1,"1onAuthAccepted()",0);
    QMetaObject::Connection::~Connection(local_40);
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1ddbafb);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar6 = *(QString **)(param_1 + 0x40);
    }
    CPasswordDialog::setTitleText(pQVar6);
    uVar7 = false;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar7 = false, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar7 = (undefined1)*(undefined8 *)(param_1 + 0x40);
    }
    CPasswordDialog::setWarningShown((bool)uVar7);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10020bf7e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10020bf7e:
  pQVar6 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar6 = *(QString **)(param_1 + 0x40);
  }
  FUN_1001c72e0(&local_50);
  QWidget::setWindowTitle(pQVar6);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020bfdc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10020bfdc:
  plVar8 = (long *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar8 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    plVar8 = *(long **)(param_1 + 0x40);
  }
  (**(code **)(*plVar8 + 0x1a0))();
  return 0;
}

