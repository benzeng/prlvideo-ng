
void FUN_1005a5710(QString *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  QTypedArrayData<unsigned_short> *pQVar7;
  long local_148;
  CVirtualNetwork local_140 [216];
  QTypedArrayData<unsigned_short> *local_68;
  QTypedArrayData<unsigned_short> *local_60;
  QTypedArrayData<unsigned_short> *local_58;
  undefined4 local_50;
  Data *local_48;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_s_NetworkConfigStorage_1022744a0;
  iVar6 = -1;
  if (PTR_s_NetworkConfigStorage_1022744a0 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_NetworkConfigStorage_1022744a0);
    iVar6 = (int)sVar2;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  CMappingModel::startSubmit(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a578a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005a578a:
  pvVar3 = operator_new(0x50);
  local_38 = 0;
  local_40 = 0;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  pQVar7 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar7 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0)) {
    pQVar7 = param_1[8].field0_0x0;
  }
  FUN_1001f41a0(pvVar3,&local_38,&local_40,&local_48,pQVar7,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a5808;
    }
    QListData::dispose(local_48);
  }
LAB_1005a5808:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  local_68 = param_1[6].field0_0x0;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar4 = (long)*(int *)(local_68 + 8);
      pQVar7 = param_1[6].field0_0x0;
      if ((pQVar7 + (long)*(int *)(pQVar7 + 8) * 8 != local_68 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_68 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar4 * 8 + 0x10,pQVar7 + (long)*(int *)(pQVar7 + 8) * 8 + 0x10,lVar5 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      CVirtualNetwork::CVirtualNetwork(local_140,*(CVirtualNetwork **)local_60);
      FUN_1001f42d0(pvVar3,local_140,6);
      CVirtualNetwork::~CVirtualNetwork(local_140);
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a5922;
    }
    QListData::dispose((Data *)local_68);
  }
LAB_1005a5922:
  QObject::connect(&local_148,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onCommitPreferencesTaskFinished(PRL_RESULT)",0);
  if (local_148 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_148);
  CAbstractTask::execute();
  return;
}

