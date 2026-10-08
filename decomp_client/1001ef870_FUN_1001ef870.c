
undefined8 FUN_1001ef870(char *param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QString *pQVar6;
  long *plVar7;
  QArrayData *local_60;
  QArrayData *local_58;
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
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
    }
    CPasswordDialog::CPasswordDialog((CPasswordDialog *)pQVar1,2,uVar4);
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
    uVar4 = 0;
    QObject::connect(local_40,uVar5,"2accepted()",param_1,"1onAuthAccepted()",0);
    QMetaObject::Connection::~Connection(local_40);
    QMetaObject::tr((char *)&local_50,(char *)&PTR_staticMetaObject_1021ffdb0,0x1dda96e);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d830(&local_58,uVar4);
    QString::arg(&local_48,&local_50,&local_58,0,0x20);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001efa76;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001efa76:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001efaa6;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1001efaa6:
    pQVar6 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar6 = *(QString **)(param_1 + 0x40);
    }
    CPasswordDialog::setTitleText(pQVar6);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001efaf6;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1001efaf6:
  pQVar6 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar6 = *(QString **)(param_1 + 0x40);
  }
  FUN_1001c72e0(&local_60);
  QWidget::setWindowTitle(pQVar6);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001efb54;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001efb54:
  plVar7 = (long *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar7 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    plVar7 = *(long **)(param_1 + 0x40);
  }
  (**(code **)(*plVar7 + 0x1a0))();
  return 0;
}

