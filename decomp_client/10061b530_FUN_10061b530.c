
undefined8 FUN_10061b530(long param_1,long param_2,uint param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  long local_90;
  QString local_88;
  CRequestInfo local_80 [8];
  QArrayData *local_78;
  int *local_68;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10015a060(&local_48,uVar3);
  QString::toUtf8();
  pQVar2 = local_40;
  lVar1 = *(long *)(local_40 + 0x10);
  uVar3 = FUN_100dd9170(param_3);
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"%s: sending [%s] request...",pQVar2 + lVar1,uVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061b5e3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10061b5e3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061b613;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10061b613:
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  CRequestInfo::CRequestInfo(local_80,param_3,&local_88,(QObject *)0x0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061b667;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10061b667:
  uVar3 = CSdkCommunicator::requestStorage();
  local_90 = param_2;
  if (param_2 != 0) {
    _PrlHandle_AddRef(param_2);
  }
  uVar3 = CRequestStorage::addRequest(uVar3,&local_90,local_80);
  if (local_90 != 0) {
    _PrlHandle_Free();
  }
  QVariant::~QVariant(&local_58);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_31 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061b71f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10061b71f:
  if (param_2 != 0) {
    _PrlHandle_Free(param_2);
  }
  return uVar3;
}

