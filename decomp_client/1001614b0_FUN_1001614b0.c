
undefined8 FUN_1001614b0(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QString local_d0;
  CRequestInfo local_c8 [8];
  QArrayData *local_c0;
  int *local_b0;
  QVariant local_a0;
  long local_90;
  QVariant local_88;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QPixmap local_60 [32];
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_1009fd340(&local_40);
  FUN_1009fcdc0(&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100161510;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100161510:
  QPixmap::QPixmap(local_60);
  local_68 = (QArrayData *)QString::fromAscii_helper("png",3);
  cVar1 = FUN_100868600(&local_38,&local_68,local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100161571;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100161571:
  local_70 = 0x80000000;
  local_78.field7 = 0;
  if (cVar1 != '\0') {
    QVariant::QVariant(&local_88,&local_38);
    QVariant::operator=((QVariant *)&local_78,&local_88);
    QVariant::~QVariant(&local_88);
  }
  if (param_2 == 0x41e) {
    lVar2 = _PrlSrv_GetPackedProblemReport(*(undefined8 *)(param_1 + 0x80),0);
  }
  else {
    lVar2 = _PrlSrv_GetProblemReport(*(undefined8 *)(param_1 + 0x80));
  }
  uVar3 = CSdkCommunicator::requestStorage();
  local_90 = lVar2;
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CRequestInfo::CRequestInfo(local_c8,param_2,&local_d0,(QVariant *)&local_78);
  uVar3 = CRequestStorage::addRequest(uVar3,&local_90,local_c8);
  QVariant::~QVariant(&local_a0);
  if (local_b0 != (int *)0x0) {
    LOCK();
    *local_b0 = *local_b0 + -1;
    local_29 = *local_b0 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_b0 != (int *)0x0)) {
      operator_delete(local_b0);
    }
  }
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100161698;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100161698:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_29 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001616ce;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1001616ce:
  if (local_90 != 0) {
    _PrlHandle_Free();
  }
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  QVariant::~QVariant((QVariant *)&local_78);
  QPixmap::~QPixmap(local_60);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar3;
}

