
void FUN_10067bba0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  QStringList *pQVar3;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  undefined1 local_58 [16];
  QArrayData *local_48;
  QArrayData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  CContentModel::setBusy(SUB81(param_1,0));
  iVar2 = CAbstractWizardModel::currentPageId();
  if ((iVar2 != 3) && (iVar2 = CAbstractWizardModel::currentPageId(), iVar2 != 4)) {
    FUN_10067bb10(param_1);
    return;
  }
  iVar2 = CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar3 = (QStringList *)CWizardController::parentWidget();
  puVar1 = PTR_shared_null_1021e15e8;
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/account-@LOCALE@",0x29);
  QLocale::QLocale((QLocale *)(local_58 + 8));
  FUN_100d3f730(&local_40,&local_48,local_58 + 8);
  FUN_1000341d0(&local_38,&local_40);
  local_58._0_8_ = puVar1;
  local_98 = (QArrayData *)
             QString::fromAscii_helper("1onRegistrationTasksFinishedSuccessfully()",0x2a);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3b8b,pQVar3,(QStringList *)&local_38.field0,(CSlotInfo *)local_58,
             SUB81(local_90,0));
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_29 = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10067bd26;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10067bd26:
  FUN_100039a80(local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10067bd5f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10067bd5f:
  QLocale::~QLocale((QLocale *)(local_58 + 8));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10067bd98;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10067bd98:
  FUN_100039a80(&local_38);
  return;
}

