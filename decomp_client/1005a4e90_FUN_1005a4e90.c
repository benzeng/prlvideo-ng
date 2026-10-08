
void FUN_1005a4e90(QString *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  Data *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 4) == 0) {
LAB_1005a4f91:
    CMappingModel::submitStorage(param_1);
    return;
  }
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_UserPreferences_102274480,0xffffffff,1);
  if (iVar3 != 0) {
    lVar1 = *param_2;
    iVar3 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_DispPreferences_102274488,0xffffffff,1);
    if (iVar3 != 0) {
      lVar1 = *param_2;
      iVar3 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                         PTR_s_ShortcutsStorage_102274490,0xffffffff,1);
      if (iVar3 != 0) {
        lVar1 = *param_2;
        iVar3 = QString::compare_helper
                          (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                           PTR_s_SendKeyToVmListStorage_102274498,0xffffffff,1);
        if (iVar3 != 0) {
          lVar1 = *param_2;
          iVar3 = QString::compare_helper
                            (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                             PTR_s_NetworkConfigStorage_1022744a0,0xffffffff,1);
          if (iVar3 != 0) goto LAB_1005a4f91;
        }
      }
    }
  }
  lVar1 = *param_2;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_ShortcutsStorage_102274490,0xffffffff,1);
  if (iVar3 == 0) {
    FUN_1005a36d0(param_1);
    return;
  }
  lVar1 = *param_2;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_SendKeyToVmListStorage_102274498,0xffffffff,1);
  if (iVar3 == 0) {
    FUN_1005a34c0(param_1);
    return;
  }
  lVar1 = *param_2;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_NetworkConfigStorage_1022744a0,0xffffffff,1);
  if (iVar3 == 0) {
    FUN_1005a5710(param_1);
    return;
  }
  pQVar6 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar6 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0)) {
    pQVar6 = param_1[8].field0_0x0;
  }
  FUN_10015aa50(&local_38,pQVar6);
  lVar1 = local_38;
  CBaseNode::toString(SUB81(&local_48,0),SUB81(param_1[3].field0_0x0,0));
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar3 = _PrlUsrCfg_FromString(lVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a50e3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1005a50e3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a5113;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005a5113:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  if (iVar3 < 0) {
    pcVar5 = "(!)Error: failed to update the user profile object with new data";
    goto LAB_1005a5428;
  }
  pQVar6 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar6 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0)) {
    pQVar6 = param_1[8].field0_0x0;
  }
  FUN_10015aa80(&local_50,pQVar6);
  lVar1 = local_50;
  CBaseNode::toString(SUB81(&local_60,0),SUB81(param_1[4].field0_0x0,0));
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  iVar3 = _PrlDispCfg_FromString(lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a51d5;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005a51d5:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a5205;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005a5205:
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar3) {
    CMappingModel::dataChanged();
    local_68 = (Data *)PTR_shared_null_1021e15e8;
    iVar3 = CMappingModel::getSubmitPolicy();
    if (iVar3 == 0) {
      local_6c = 0;
      FUN_100129840(&local_68,&local_6c);
      local_70 = 1;
      FUN_100129840(&local_68,&local_70);
    }
    local_74 = 2;
    FUN_100129840(&local_68,&local_74);
    local_78 = 3;
    FUN_100129840(&local_68,&local_78);
    local_7c = 8;
    FUN_100129840(&local_68,&local_7c);
    local_80 = 9;
    FUN_100129840(&local_68,&local_80);
    pvVar4 = operator_new(0x50);
    pQVar6 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar6 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0))
    {
      pQVar6 = param_1[8].field0_0x0;
    }
    FUN_10015aa50(&local_88,pQVar6);
    pQVar6 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar6 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0))
    {
      pQVar6 = param_1[8].field0_0x0;
    }
    FUN_10015aa80(&local_90,pQVar6);
    pQVar6 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar6 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0))
    {
      pQVar6 = param_1[8].field0_0x0;
    }
    FUN_1001f41a0(pvVar4,&local_88,&local_90,&local_68,pQVar6,1);
    if (local_90 != 0) {
      _PrlHandle_Free();
    }
    if (local_88 != 0) {
      _PrlHandle_Free();
    }
    QObject::connect(&local_98,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                     "1onCommitTaskFinished(PRL_RESULT)",0);
    if (local_98 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    iVar3 = CMappingModel::getSubmitPolicy();
    if (iVar3 == 1) {
      QObject::connect(&local_a0,pvVar4,"2userProfileFetchFinished(PRL_RESULT)",param_1,
                       "1onUserPrefsFetchFinished()",0);
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else if (local_a0 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a0);
      QObject::connect(&local_a8,pvVar4,"2commonPrefsFetchFinished(PRL_RESULT)",param_1,
                       "1onCommonPrefsFetchFinished()",0);
      if ((cVar2 != '\0') && (local_a8 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
    }
    *(undefined1 *)&param_1[9].field0_0x0 = 0;
    CMappingModel::startSubmit(param_1);
    CAbstractTask::execute();
    if (*(int *)local_68 == -1) {
      return;
    }
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_68);
    return;
  }
  pcVar5 = "(!)Error: failed to update the server preferences object with new data";
LAB_1005a5428:
  FUN_100df99c0("","prl_client_app",0,pcVar5);
  CMappingModel::endSubmit((int)param_1);
  return;
}

