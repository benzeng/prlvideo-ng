
void FUN_1006824b0(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  QStringList *pQVar5;
  bool bVar6;
  undefined4 local_88 [2];
  QArrayData *local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  uVar2 = 0;
  if (param_2 != 0x80047064) {
    uVar2 = param_2;
  }
  cVar1 = FUN_10061c760(uVar2);
  bVar6 = SUB81(param_1,0);
  if (cVar1 == '\0') {
    if ((int)uVar2 < 0) {
      CContentModel::setBusy(bVar6);
      FUN_10084a900(param_1,uVar2);
      iVar3 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar5 = (QStringList *)CWizardController::parentWidget();
      local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
      local_78 = (int *)0x0;
      uStack_70 = 0;
      local_60 = 0;
      local_68 = 0;
      local_50 = 0x80000000;
      local_58.field7 = 0;
      local_48 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)(ulong)uVar2,pQVar5,(QStringList *)&local_30.field0,
                 (CSlotInfo *)&local_38,SUB81(&local_78,0));
      QVariant::~QVariant((QVariant *)&local_58);
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        local_21 = *local_78 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
          operator_delete(local_78);
        }
      }
      FUN_100039a80(&local_38);
      FUN_100039a80(&local_30);
    }
    else {
      lVar4 = QMetaObject::cast((QObject *)&PTR_PTR_102221d80);
      if (lVar4 == 0) {
        CContentModel::setBusy(bVar6);
        FUN_10084a900(param_1,uVar2);
        return;
      }
      local_80 = *(QArrayData **)(lVar4 + 0x50);
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
      }
      local_88[0] = 0;
      FUN_10067e380(param_1,&local_80,local_88);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          UNLOCK();
          if (*(int *)local_80 != 0) {
            return;
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
    return;
  }
  CContentModel::setBusy(bVar6);
  FUN_10084a900(param_1,uVar2);
  uVar2 = CAbstractWizardModel::currentPageId();
  if ((0xb < uVar2) || ((0x818U >> (uVar2 & 0x1f) & 1) == 0)) {
    *(uint *)(param_1 + 0x164) = uVar2;
  }
  CAbstractWizardModel::goToPage(param_1,3,0);
  return;
}

