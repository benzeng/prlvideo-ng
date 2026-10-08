
void FUN_1005a8440(CAbstractWizardPageFlow *param_1)

{
  CAbstractWizardPageFlow *pCVar1;
  QString *pQVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  CAbstractProgressOperation *this;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  long local_50;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  pCVar1 = param_1 + 0x38;
  lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar6 == 0) {
    QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  }
  CAntivirusInfo::availableAntiviruses(&local_40,lVar6 != 0);
  FUN_1005ad390(pCVar1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a84ef;
    }
    QListData::dispose(local_40);
  }
LAB_1005a84ef:
  this = operator_new(0x40);
  CAbstractProgressOperation::CAbstractProgressOperation(this,(QObject *)param_1);
  this->field0_0x0 = (undefined4 **)&DAT_1022745a0;
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar8 = *(int **)(param_1 + 0x58);
  if (piVar8 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + 0x58);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar7;
    *(CAbstractProgressOperation **)(param_1 + 0x60) = this;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  iVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    iVar5 = (int)*(undefined8 *)(param_1 + 0x60);
  }
  CAbstractProgressOperation::setProgress(iVar5);
  pvVar9 = operator_new(0x20);
  FUN_1005ad6b0(pvVar9,param_1);
  CAbstractWizardModel::setPageFlow(param_1);
  pvVar9 = operator_new(0x10);
  FUN_1005ad780(pvVar9,param_1);
  CAbstractWizardModel::setPageFactory((CAbstractWizardPageFactory *)param_1);
  pvVar9 = operator_new(0x18);
  FUN_1005ade70(pvVar9,param_1);
  CAbstractWizardModel::setActionStateProvider((CAbstractWizardActionStateProvider *)param_1);
  pvVar9 = operator_new(0x18);
  FUN_1005aec80(pvVar9,param_1);
  CAbstractWizardModel::setActionHandler((CAbstractWizardActionHandler *)param_1);
  QObject::connect(&local_48,param_1,"2currentPageIdChanged(int,int)",param_1,
                   "1onCurrentPageIdChanged(int)",0);
  if (local_48 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_1,"2aboutToEnterPage(CAbstractWizardPage*)",param_1,
                     "1onAboutToEnterPage(CAbstractWizardPage*)",0);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_1,"2aboutToEnterPage(CAbstractWizardPage*)",param_1,
                     "1onAboutToEnterPage(CAbstractWizardPage*)",0);
    if ((cVar4 != '\0') && (local_50 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  local_70 = *(Data **)pCVar1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar11 = (long)*(int *)(local_70 + 8);
      lVar6 = *(long *)pCVar1;
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_70 + lVar11 * 8) &&
         (lVar12 = *(int *)(local_70 + 0xc) - lVar11,
         lVar12 != 0 && lVar11 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar11 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      puVar3 = PTR_shared_null_1021e1288;
      if (local_58 != 0) {
        pQVar2 = *(QString **)local_68;
        iVar5 = CAntivirusInfo::developer(pQVar2);
        if (iVar5 == 0) {
          uVar10 = CAntivirusInfo::installationType();
          lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
          if (lVar6 == 0) {
            QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
          }
          bVar13 = uVar10 == (lVar6 != 0);
        }
        else {
          bVar13 = false;
        }
        if (*(int *)puVar3 != -1) {
          if (*(int *)puVar3 != 0) {
            LOCK();
            *(int *)puVar3 = *(int *)puVar3 + -1;
            local_31 = *(int *)puVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a8842;
          }
          QArrayData::deallocate((QArrayData *)puVar3,2,8);
        }
LAB_1005a8842:
        if (bVar13) {
          if (*(QString **)(param_1 + 0x40) != pQVar2) {
            *(QString **)(param_1 + 0x40) = pQVar2;
            FUN_10083efe0(param_1,pQVar2);
            lVar6 = CAbstractWizardModel::wizardCtrl();
            if (lVar6 != 0) {
              CAbstractWizardModel::wizardCtrl();
              CWizardController::updateWizardActions();
            }
          }
        }
        else {
          local_58 = 0;
        }
      }
      local_68 = local_68 + 8;
      uVar10 = local_58 ^ 1;
      bVar13 = local_58 != 1;
      local_58 = uVar10;
    } while ((bVar13) && (local_68 != local_60));
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return;
}

