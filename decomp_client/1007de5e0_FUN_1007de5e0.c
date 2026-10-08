
void FUN_1007de5e0(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  QString *pQVar6;
  int iVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  CAbstractWizardModel::wizardCtrl();
  lVar4 = CWizardController::parentWidget();
  if (lVar4 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222e630);
  if (lVar4 != 0) {
    cVar2 = '\x01';
    if ((((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
        (*(long *)(param_1 + 0x30) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
      cVar2 = CAbstractTask::canBeTerminated();
    }
    CAbstractWizardModel::wizardCtrl();
    lVar4 = CWizardController::parentWidget();
    if (lVar4 != 0) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::parentWidget();
      QWidget::window();
    }
    lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222e630);
    CAbstractWizardModel::wizardCtrl();
    lVar5 = CWizardController::parentWidget();
    if (lVar5 != 0) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::parentWidget();
      QWidget::window();
    }
    QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222e630);
    uVar3 = CWindowInterface::customWindowFlags();
    if (cVar2 == '\0') {
      uVar3 = uVar3 | 0x20;
    }
    else {
      uVar3 = uVar3 & 0xffffffdf;
    }
    CWindowInterface::setCustomWindowFlags(lVar4 + 0x30,uVar3);
  }
  if (param_2 < 2) {
    iVar7 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (iVar7 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      iVar7 = (int)*(undefined8 *)(param_1 + 0x40);
    }
    CAbstractProgressOperation::setProgress(iVar7);
    pQVar6 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar6 = *(QString **)(param_1 + 0x40);
    }
    QMetaObject::tr((char *)&local_38,(char *)&PTR_staticMetaObject_10222e8e0,0x1dd1ed6);
    CAbstractProgressOperation::setName(pQVar6);
    if (*(int *)local_38 == -1) {
      return;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    goto LAB_1007de8cd;
  }
  if ((param_2 & 0xfffffffe) != 2) {
    return;
  }
  iVar7 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (iVar7 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    iVar7 = (int)*(undefined8 *)(param_1 + 0x40);
  }
  CAbstractProgressOperation::setProgress(iVar7);
  pQVar6 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar6 = *(QString **)(param_1 + 0x40);
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  CAbstractProgressOperation::setDescription(pQVar6);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007de866;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007de866:
  pQVar6 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar6 = *(QString **)(param_1 + 0x40);
  }
  QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_10222e8e0,0x1e00bae);
  CAbstractProgressOperation::setName(pQVar6);
  if (*(int *)local_48 == -1) {
    return;
  }
  local_38 = local_48;
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return;
    }
    local_29 = 0;
  }
LAB_1007de8cd:
  QArrayData::deallocate(local_38,2,8);
  return;
}

