
void FUN_1005f2c00(QObject *param_1)

{
  QObject *pQVar1;
  int iVar2;
  long *plVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f4b60;
  pQVar1 = param_1 + 0x18;
  lVar6 = *(long *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar6 + 8);
  if (iVar2 != *(int *)(lVar6 + 0xc)) {
    plVar3 = (long *)(lVar6 + 0x10 + (long)iVar2 * 8);
    lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x20))();
      }
      plVar3 = plVar3 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  FUN_1005e7870(pQVar1);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  QTimer::~QTimer((QTimer *)(param_1 + 0x60));
  QTimer::~QTimer((QTimer *)(param_1 + 0x40));
  pQVar4 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005f2cde;
      pQVar4 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005f2cde:
  pDVar5 = *(Data **)pQVar1;
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_1005f2d02;
      pDVar5 = *(Data **)pQVar1;
    }
    QListData::dispose(pDVar5);
  }
LAB_1005f2d02:
  QObject::~QObject(param_1);
  return;
}

