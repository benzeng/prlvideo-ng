
undefined1 FUN_10022aa20(char *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  QString *pQVar9;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  Connection local_40 [8];
  Connection local_38 [8];
  int local_30;
  undefined1 local_29;
  
  iVar3 = _PrlEvent_GetErrCode(*param_2,&local_30);
  if (iVar3 < 0) {
    return 0;
  }
  if (local_30 != 0x32f3) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0xc0);
  if (plVar1 != param_2) {
    if (*plVar1 != 0) {
      _PrlHandle_Free();
    }
    lVar2 = *param_2;
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef();
    }
  }
  if (((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    FUN_100812fc0(param_1,0);
    return 1;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    lVar2 = *(long *)(param_1 + 0x70);
    uVar7 = 0;
    if (lVar2 != 0) {
      uVar7 = 0;
      if ((*(long *)(lVar2 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(lVar2 + 0x10) + 4) != 0))
      {
        uVar7 = *(undefined8 *)(lVar2 + 0x18);
      }
    }
  }
  pQVar4 = operator_new(0x48);
  CPasswordDialog::CPasswordDialog((CPasswordDialog *)pQVar4,2,uVar7);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar6 = *(int **)(param_1 + 0xa0);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0xa0);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0xa0));
      }
    }
    *(int **)(param_1 + 0xa0) = piVar5;
    *(QObject **)(param_1 + 0xa8) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  pQVar4 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
    pQVar4 = *(QObject **)(param_1 + 0xa8);
  }
  CPasswordDialog::setPasswordValidator(pQVar4,param_1,"1validatePassword(QString)");
  uVar7 = 0;
  if ((*(long *)(param_1 + 0xa0) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
  }
  uVar8 = 0;
  QObject::connect(local_38,uVar7,"2accepted()",param_1,"1onAuthorizationAccepted()",0);
  QMetaObject::Connection::~Connection(local_38);
  if ((*(long *)(param_1 + 0xa0) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
  }
  QObject::connect(local_40,uVar8,"2rejected()",param_1,"1onAuthorizationRejected()",0);
  QMetaObject::Connection::~Connection(local_40);
  local_50 = *param_2;
  if (local_50 != 0) {
    _PrlHandle_AddRef();
  }
  MessageUtils::getMessageString(&local_48,&local_50,1);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  local_60 = *param_2;
  if (local_60 != 0) {
    _PrlHandle_AddRef();
  }
  MessageUtils::getMessageString(&local_58,&local_60,0);
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  pQVar9 = (QString *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (pQVar9 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
    pQVar9 = *(QString **)(param_1 + 0xa8);
  }
  CPasswordDialog::setTitleText(pQVar9);
  pQVar9 = (QString *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (pQVar9 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
    pQVar9 = *(QString **)(param_1 + 0xa8);
  }
  CPasswordDialog::setDescriptionText(pQVar9);
  pQVar9 = (QString *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (pQVar9 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) {
    pQVar9 = *(QString **)(param_1 + 0xa8);
  }
  FUN_1001c72e0(&local_68);
  QWidget::setWindowTitle(pQVar9);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022ad5b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10022ad5b:
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x1a0))();
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022ad9f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10022ad9f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 1;
}

