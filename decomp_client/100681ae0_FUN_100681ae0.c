
void FUN_100681ae0(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  QStringList *pQVar5;
  long *plVar6;
  undefined8 uVar7;
  bool bVar8;
  long local_248;
  QArrayData *local_240;
  undefined4 local_238 [2];
  QArrayData *local_230;
  QArrayData *local_228;
  CDownloadedKeyInfo local_220 [240];
  QArrayData *local_130;
  CDownloadedKeyList local_128 [152];
  long local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  cVar1 = FUN_10061c760(param_2);
  bVar8 = SUB81(param_1,0);
  if (cVar1 != '\0') {
    CContentModel::setBusy(bVar8);
    FUN_10084a900(param_1,param_2);
    uVar2 = CAbstractWizardModel::currentPageId();
    if ((0xb < uVar2) || ((0x818U >> (uVar2 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar2;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  if (((int)param_2 < 0) &&
     ((9 < param_2 + 0x7ffb8fa7 || ((0x301U >> (param_2 + 0x7ffb8fa7 & 0x1f) & 1) == 0)))) {
    CContentModel::setBusy(bVar8);
    FUN_10084a900(param_1,param_2);
    iVar3 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar5 = (QStringList *)CWizardController::parentWidget();
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)(ulong)param_2,pQVar5,(QStringList *)&local_38.field0,
               (CSlotInfo *)&local_40,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_29 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_40);
    FUN_100039a80(&local_38);
    return;
  }
  lVar4 = QMetaObject::cast((QObject *)&PTR_PTR_102221c50);
  if (lVar4 == 0) {
    CContentModel::setBusy(bVar8);
    FUN_10084a900(param_1,param_2);
    return;
  }
  FUN_10062d340(&local_88,lVar4);
  CDownloadedKeyList::CDownloadedKeyList(local_128);
  local_130 = local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_29 = *(int *)local_88 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_128,SUB81(&local_130,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681c1e;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100681c1e:
  CDownloadedKeyInfo::CDownloadedKeyInfo(local_220);
  local_228 = local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_29 = *(int *)local_80 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_220,SUB81(&local_228,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_29 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681c99;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_100681c99:
  if (((*(int *)(local_88 + 4) == 0) || (*(int *)(local_80 + 4) == 0)) ||
     (*(int *)(local_90 + 0xc) == *(int *)(local_90 + 8))) {
    local_230 = *(QArrayData **)(lVar4 + 0x48);
    if (1 < *(int *)local_230 + 1U) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + 1;
      local_29 = *(int *)local_230 != 0;
      UNLOCK();
    }
    local_238[0] = 0;
    FUN_10067e380(param_1,&local_230,local_238);
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_29 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100681f29;
      }
      QArrayData::deallocate(local_230,2,8);
    }
  }
  else {
    CContentModel::setBusy(bVar8);
    FUN_10084a900(param_1,param_2);
    plVar6 = operator_new(0x208);
    local_240 = *(QArrayData **)(lVar4 + 0x48);
    if (1 < *(int *)local_240 + 1U) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + 1;
      local_29 = *(int *)local_240 != 0;
      UNLOCK();
    }
    CAbstractWizardModel::wizardCtrl();
    uVar7 = CWizardController::parentWidget();
    FUN_10063d000(plVar6,local_128,local_220,&local_240,uVar7);
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_29 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100681ed5;
      }
      QArrayData::deallocate(local_240,2,8);
    }
LAB_100681ed5:
    QObject::connect(&local_248,plVar6,"2finished(int)",param_1,
                     "1onExtendableSubscriptionsDialogClosed(int)",0);
    if (local_248 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_248);
    (**(code **)(*plVar6 + 0x1a0))(plVar6);
  }
LAB_100681f29:
  CDownloadedKeyInfo::~CDownloadedKeyInfo(local_220);
  CDownloadedKeyList::~CDownloadedKeyList(local_128);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681f71;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100681f71:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
  return;
}

