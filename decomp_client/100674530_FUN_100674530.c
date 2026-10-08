
void FUN_100674530(CAbstractWizardModel *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QDateTime local_68;
  QVariant local_60;
  QArrayData *local_50;
  Data_conflict local_48;
  QString local_40 [2];
  undefined1 local_29;
  
  *(undefined ***)param_1 = &PTR_FUN_102224230;
  if (*(long **)(param_1 + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x180) + 0x20))();
  }
  if (((*(long *)(param_1 + 0x130) != 0) && (*(int *)(*(long *)(param_1 + 0x130) + 4) != 0)) &&
     (*(long **)(param_1 + 0x138) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x78))();
  }
  if (((param_1[0x198] != (CAbstractWizardModel)0x0) && (*(long *)(param_1 + 0x58) != 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x58) + 4) != 0 && (*(long *)(param_1 + 0x60) != 0)))) {
    QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_10015a2b0(&local_50,uVar2);
    QString::fromUtf8_helper(&local_48.field0,0x1e0721e);
    QString::append((QString *)&local_48);
    QDateTime::currentDateTime();
    QVariant::QVariant(&local_60,&local_68);
    QSettings::setValue(local_40,(QVariant *)&local_48);
    QVariant::~QVariant(&local_60);
    QDateTime::~QDateTime(&local_68);
    if (*(int *)local_48.field15 != -1) {
      if (*(int *)local_48.field15 != 0) {
        LOCK();
        *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
        local_29 = *(int *)local_48.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100674677;
      }
      QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
    }
LAB_100674677:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006746a7;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1006746a7:
    QSettings::~QSettings((QSettings *)local_40);
  }
  piVar1 = *(int **)(param_1 + 0x188);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x188) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x188));
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x170);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674711;
      pQVar3 = *(QArrayData **)(param_1 + 0x170);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100674711:
  pQVar3 = *(QArrayData **)(param_1 + 0x140);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674747;
      pQVar3 = *(QArrayData **)(param_1 + 0x140);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100674747:
  piVar1 = *(int **)(param_1 + 0x130);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x130) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x130));
    }
  }
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x120) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x120));
    }
  }
  FUN_10064e770(param_1 + 0x100);
  FUN_100252c80(param_1 + 0xd8);
  FUN_100252e70(param_1 + 0x80);
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x68));
    }
  }
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x58));
    }
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  CAbstractWizardModel::~CAbstractWizardModel(param_1);
  return;
}

