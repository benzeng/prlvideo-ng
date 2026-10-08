
void FUN_10059d950(CMappingModel *param_1,QObject *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CDispUser *this;
  CDispUser *pCVar4;
  CDispCommonPreferences *this_00;
  CDispCommonPreferences *pCVar5;
  CParallelsNetworkConfig *this_01;
  CParallelsNetworkConfig *pCVar6;
  void *pvVar7;
  Data *pDVar8;
  undefined8 uVar9;
  QObject *pQVar10;
  undefined1 auVar11 [16];
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  Data *local_98;
  Data *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  lVar3 = 0;
  CMappingModel::CMappingModel(param_1,0);
  *(undefined ***)param_1 = &PTR_FUN_10221d610;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  if (param_2 != (QObject *)0x0) {
    lVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(long *)(param_1 + 0x38) = lVar3;
  *(QObject **)(param_1 + 0x40) = param_2;
  param_1[0x48] = (CMappingModel)0x0;
  param_1[0x49] = (CMappingModel)0x0;
  auVar11._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar11._0_8_ = PTR_shared_null_1021e15d0;
  auVar11._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar11;
  if (param_2 == (QObject *)0x0) {
    return;
  }
  this = operator_new(0xd0);
  pQVar10 = (QObject *)0x0;
  if ((lVar3 != 0) && (pQVar10 = (QObject *)0x0, *(int *)(lVar3 + 4) != 0)) {
    pQVar10 = param_2;
  }
  pCVar4 = (CDispUser *)FUN_10015a320(pQVar10);
  CDispUser::CDispUser(this,pCVar4);
  *(CDispUser **)(param_1 + 0x18) = this;
  this_00 = operator_new(0x160);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
  }
  pCVar5 = (CDispCommonPreferences *)FUN_10015a330(uVar9);
  CDispCommonPreferences::CDispCommonPreferences(this_00,pCVar5);
  *(CDispCommonPreferences **)(param_1 + 0x20) = this_00;
  this_01 = operator_new(0xd8);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
  }
  pCVar6 = (CParallelsNetworkConfig *)FUN_100175410(uVar9);
  CParallelsNetworkConfig::CParallelsNetworkConfig(this_01,pCVar6);
  *(CParallelsNetworkConfig **)(param_1 + 0x28) = this_01;
  iVar2 = CMappingModel::getSubmitPolicy();
  if (iVar2 == 1) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_1001605d0(uVar9);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_100160690(uVar9);
  }
  iVar2 = CMappingModel::getSubmitPolicy();
  cVar1 = '\x01';
  if (iVar2 == 0) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
    }
    QObject::connect(&local_40,uVar9,"2userProfileChanged(CDispUser)",param_1,
                     "1onUserPrefsFetchFinished()",0);
    if (local_40 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
    }
    QObject::connect(&local_48,uVar9,"2commonPrefsChanged(CDispCommonPreferences)",param_1,
                     "1onCommonPrefsFetchFinished()",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
    }
    QObject::connect(&local_50,uVar9,"2networkConfigChanged(CParallelsNetworkConfig)",param_1,
                     "1onNetworkConfigFetchFinished()",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_50 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
    }
    QObject::connect(&local_58,uVar9,"2appPreferencesCustomPasswordProtected(bool)",param_1,
                     "2lockedStateChanged()",0);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_58 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  if (DAT_102310998 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1006faf60(pvVar7);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar7;
  }
  QObject::connect(&local_60,DAT_102310998,"2remapsChanged(QString)",param_1,"2dataChanged()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_60 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (DAT_102310998 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1006faf60(pvVar7);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar7;
  }
  QObject::connect(&local_68,DAT_102310998,"2mouseRemapsChanged()",param_1,"2dataChanged()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_68 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  if (DAT_102310998 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1006faf60(pvVar7);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar7;
  }
  QObject::connect(&local_70,DAT_102310998,"2shortcutChanged(Actions::ActionType,CShortcutInfo)",
                   param_1,"2dataChanged()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_70 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  if (DAT_102310998 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1006faf60(pvVar7);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar7;
  }
  QObject::connect(&local_78,DAT_102310998,
                   "2grabHostShortcutsTypeChanged(Shortcuts::GrabHostShortcutsType)",param_1,
                   "2dataChanged()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_78 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1001a61d0(pvVar7);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar7;
  }
  QObject::connect(&local_80,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"2dataChanged()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_80 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1001a61d0(pvVar7);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar7;
  }
  QObject::connect(&local_88,DAT_1023108e0,"2vmRemoved(GUI::VmId)",param_1,"2dataChanged()",0);
  if ((cVar1 != '\0') && (local_88 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1001a61d0(pvVar7);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar7;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2submitFinished(PRL_RESULT)","2appPreferencesChanged()",0);
  CDispCommonPreferences::getPasswordProtectedOperations();
  CDispPasswordProtectedOperations::getLockedOperations();
  FUN_100118820(&local_98,0x13,0);
  param_1[0x4a] = (CMappingModel)0x0;
  cVar1 = FUN_1001756c0(0x24);
  if (cVar1 != '\0') {
    FUN_10012b980(&local_b8,&local_98);
    local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
    local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
    if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
      do {
        iVar2 = *(int *)(local_90 + 8);
        if (iVar2 != *(int *)(local_90 + 0xc)) {
          pDVar8 = local_90 + (long)iVar2 * 8 + 0x10;
          lVar3 = (long)*(int *)(local_90 + 0xc) * 8 + (long)iVar2 * -8;
          do {
            if (**(int **)pDVar8 == **(int **)local_b0) {
              param_1[0x4a] = (CMappingModel)0x1;
              break;
            }
            pDVar8 = pDVar8 + 8;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
        local_b0 = local_b0 + 8;
      } while (local_b0 != local_a8);
    }
    local_a0 = 1;
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059e13f;
      }
      iVar2 = *(int *)(local_b8 + 0xc);
      if (iVar2 != *(int *)(local_b8 + 8)) {
        lVar3 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar2 * -8;
        pDVar8 = local_b8 + (long)iVar2 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_b8);
    }
  }
LAB_10059e13f:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059e1af;
    }
    iVar2 = *(int *)(local_98 + 0xc);
    if (iVar2 != *(int *)(local_98 + 8)) {
      lVar3 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar2 * -8;
      pDVar8 = local_98 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_98);
  }
LAB_10059e1af:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_90 + 0xc);
    if (iVar2 != *(int *)(local_90 + 8)) {
      lVar3 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar2 * -8;
      pDVar8 = local_90 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_90);
  }
  return;
}

