
undefined8 FUN_1002883c0(char *param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  QString *pQVar8;
  undefined1 uVar9;
  int iVar10;
  long local_b8;
  long local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::property((char *)&local_58);
  QVariant::toString();
  iVar1 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028844c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10028844c:
  QVariant::~QVariant(&local_58);
  uVar7 = 0x80000009;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_102206370,0x1de1ed4);
    }
    else {
      QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_102206370,0x1de1e6c);
    }
    QString::operator=(&local_38,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002885e6;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1002885e6:
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_102206370,0x1de1f8c);
    }
    else {
      QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_102206370,0x1de1f24);
    }
    QString::operator=(&local_40,&local_68);
    iVar10 = 0;
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
    break;
  case 1:
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_70,(char *)&PTR_staticMetaObject_102206370,0x1de2049);
    }
    else {
      QMetaObject::tr((char *)&local_70,(char *)&PTR_staticMetaObject_102206370,0x1de1fee);
    }
    QString::operator=(&local_38,&local_70);
    iVar10 = 2;
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
    break;
  case 2:
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_102206370,0x1de20b1);
    }
    else {
      QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_102206370,0x1de207e);
    }
    QString::operator=(&local_38,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002886de;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1002886de:
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_102206370,0x1de20e5);
    }
    else {
      QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_102206370,0x1de1f24);
    }
    QString::operator=(&local_40,&local_80);
    iVar10 = 1;
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
    break;
  case 3:
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_88,(char *)&PTR_staticMetaObject_102206370,0x1de21a3);
    }
    else {
      QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_102206370,0x1de214a);
      uVar7 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
      FUN_10018d830(&local_98,uVar7);
      QString::arg(&local_88,&local_90,&local_98,0,0x20);
    }
    QString::operator=(&local_38,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_29 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100288769;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_100288769:
    iVar10 = 2;
    if (iVar1 != 0) {
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002887ad;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1002887ad:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) break;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    }
    break;
  default:
    goto switchD_100288476_default;
  }
  pQVar4 = operator_new(0x48);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
  }
  CPasswordDialog::CPasswordDialog((CPasswordDialog *)pQVar4,iVar10,uVar7);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar6 = *(int **)(param_1 + 0x40);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x40);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x40));
      }
    }
    *(int **)(param_1 + 0x40) = piVar5;
    *(QObject **)(param_1 + 0x48) = pQVar4;
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
  pQVar8 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    pQVar8 = *(QString **)(param_1 + 0x48);
  }
  FUN_1001c72e0(&local_a0);
  QWidget::setWindowTitle(pQVar8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002889b7;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002889b7:
  pQVar8 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    pQVar8 = *(QString **)(param_1 + 0x48);
  }
  CPasswordDialog::setTitleText(pQVar8);
  pQVar8 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    pQVar8 = *(QString **)(param_1 + 0x48);
  }
  local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
  CPasswordDialog::setDescriptionText(pQVar8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100288a48;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100288a48:
  lVar2 = *(long *)(param_1 + 0x40);
  pQVar8 = (QString *)0x0;
  if (local_40.field0_0x0 == (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    if ((lVar2 != 0) && (pQVar8 = (QString *)0x0, *(int *)(lVar2 + 4) != 0)) {
      pQVar8 = *(QString **)(param_1 + 0x48);
    }
    CPasswordDialog::setWarningShown(SUB81(pQVar8,0));
  }
  else {
    if ((lVar2 != 0) && (pQVar8 = (QString *)0x0, *(int *)(lVar2 + 4) != 0)) {
      pQVar8 = *(QString **)(param_1 + 0x48);
    }
    CPasswordDialog::setWarningText(pQVar8);
    uVar9 = false;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar9 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar9 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    }
    CPasswordDialog::setWarningShown((bool)uVar9);
  }
  cVar3 = '\x01';
  if (iVar10 != 0) {
    if (iVar10 == 2) {
      CPasswordDialog::hideSavePassword();
    }
    pQVar4 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar4 = *(QObject **)(param_1 + 0x48);
    }
    cVar3 = CPasswordDialog::setPasswordValidator(pQVar4,param_1,"1checkLockdownPassword(QString)");
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
  }
  QObject::connect(&local_b0,uVar7,"2rejected()",param_1,"1onPasswordDlgCanceled()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_b0 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
  }
  QObject::connect(&local_b8,uVar7,"2accepted()",param_1,"1onPasswordDlgAccepted()",0);
  if ((cVar3 != '\0') && (local_b8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar7 = 0;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x1a0))();
switchD_100288476_default:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100288c2a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100288c2a:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar7;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar7;
}

