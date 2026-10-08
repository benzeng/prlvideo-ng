
void FUN_1005ac380(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  QString *pQVar6;
  int iVar7;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
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
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
  if (lVar4 != 0) {
    cVar2 = '\x01';
    if ((((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
        (*(long *)(param_1 + 0x50) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
      cVar2 = CAbstractTask::canBeTerminated();
    }
    CAbstractWizardModel::wizardCtrl();
    lVar4 = CWizardController::parentWidget();
    if (lVar4 != 0) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::parentWidget();
      QWidget::window();
    }
    lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
    CAbstractWizardModel::wizardCtrl();
    lVar5 = CWizardController::parentWidget();
    if (lVar5 != 0) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::parentWidget();
      QWidget::window();
    }
    QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
    uVar3 = CWindowInterface::customWindowFlags();
    if (cVar2 == '\0') {
      uVar3 = uVar3 | 0x20;
    }
    else {
      uVar3 = uVar3 & 0xffffffdf;
    }
    CWindowInterface::setCustomWindowFlags(lVar4 + 0x30,uVar3);
  }
  if (1 < param_2) {
    if (param_2 != 2) {
      return;
    }
    lVar4 = CAbstractWizardModel::page((int)param_1);
    if (lVar4 != 0) {
      pQVar6 = (QString *)CAbstractWizardModel::page((int)param_1);
      QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_10221df20,0x1e0385b);
      CAntivirusInfo::productName();
      QString::arg(&local_50,&local_58,&local_60,0,0x20);
      CAbstractWizardPage::setTitle(pQVar6);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ac6af;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005ac6af:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ac6df;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005ac6df:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ac70f;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_1005ac70f:
    iVar7 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (iVar7 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      iVar7 = (int)*(undefined8 *)(param_1 + 0x60);
    }
    CAbstractProgressOperation::setProgress(iVar7);
    pQVar6 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      pQVar6 = *(QString **)(param_1 + 0x60);
    }
    local_68 = (QArrayData *)PTR_shared_null_1021e1288;
    CAbstractProgressOperation::setDescription(pQVar6);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ac78f;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005ac78f:
    pQVar6 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      pQVar6 = *(QString **)(param_1 + 0x60);
    }
    QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_10221df20,0x1e0385b);
    CAntivirusInfo::productName();
    QString::arg(&local_70,&local_78,&local_80,0,0x20);
    CAbstractProgressOperation::setName(pQVar6);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ac82a;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005ac82a:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ac85a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1005ac85a:
    if (*(int *)local_78 == -1) {
      return;
    }
    local_40 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_29 = 0;
    }
    goto LAB_1005ac87b;
  }
  iVar7 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (iVar7 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    iVar7 = (int)*(undefined8 *)(param_1 + 0x60);
  }
  CAbstractProgressOperation::setProgress(iVar7);
  pQVar6 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (pQVar6 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
    pQVar6 = *(QString **)(param_1 + 0x60);
  }
  QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_10221df20,0x1dda77d);
  CAntivirusInfo::productName();
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  CAbstractProgressOperation::setName(pQVar6);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ac59b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005ac59b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ac5cb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ac5cb:
  if (*(int *)local_40 == -1) {
    return;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return;
    }
    local_29 = 0;
  }
LAB_1005ac87b:
  QArrayData::deallocate(local_40,2,8);
  return;
}

