
undefined8 FUN_100194520(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QString local_f8;
  CRequestInfo local_f0 [8];
  QArrayData *local_e8;
  int *local_d8;
  QVariant local_c8;
  long local_b8;
  QString local_b0;
  QVariant local_a8;
  QVariant local_98;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QPixmap local_70 [32];
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  FUN_100188480(&local_40,param_1);
  lVar5 = FUN_1001547d0(uVar4,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019458f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10019458f:
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return 0;
  }
  iVar3 = FUN_10018bce0(param_1);
  if ((iVar3 == 3) || (iVar3 = FUN_10018bce0(param_1), iVar3 == 2)) {
    uVar4 = FUN_100152280();
    uVar4 = FUN_100152a20(uVar4,param_1 + 0x28);
    uVar4 = FUN_1001614b0(uVar4,param_2);
    return uVar4;
  }
  FUN_1009fd340(&local_50);
  FUN_1009fcdc0(&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100194642;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100194642:
  QPixmap::QPixmap(local_70);
  local_78 = (QArrayData *)QString::fromAscii_helper("png",3);
  cVar1 = FUN_100868600(&local_48,&local_78,local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001946a4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001946a4:
  local_80 = 0x80000000;
  local_88.field7 = 0;
  cVar2 = FUN_10011cdc0(param_1);
  if (cVar2 == '\0') {
    if (cVar1 != '\0') {
      QVariant::QVariant(&local_98,&local_48);
      QVariant::operator=((QVariant *)&local_88,&local_98);
      QVariant::~QVariant(&local_98);
    }
  }
  else {
    local_b0.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("force no screenshot",0x13);
    QVariant::QVariant(&local_a8,&local_b0);
    QVariant::operator=((QVariant *)&local_88,&local_a8);
    QVariant::~QVariant(&local_a8);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019476f;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
  }
LAB_10019476f:
  if (param_2 == 0x41e) {
    lVar5 = _PrlVm_GetPackedProblemReport(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    lVar5 = _PrlVm_GetProblemReport(*(undefined8 *)(param_1 + 0x40));
  }
  uVar4 = CSdkCommunicator::requestStorage();
  local_b8 = lVar5;
  if (lVar5 != 0) {
    _PrlHandle_AddRef(lVar5);
  }
  FUN_100188480(&local_f8,param_1);
  CRequestInfo::CRequestInfo(local_f0,param_2,&local_f8,(QVariant *)&local_88);
  uVar4 = CRequestStorage::addRequest(uVar4,&local_b8,local_f0);
  QVariant::~QVariant(&local_c8);
  if (local_d8 != (int *)0x0) {
    LOCK();
    *local_d8 = *local_d8 + -1;
    local_31 = *local_d8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_d8 != (int *)0x0)) {
      operator_delete(local_d8);
    }
  }
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019485e;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10019485e:
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100194894;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100194894:
  if (local_b8 != 0) {
    _PrlHandle_Free();
  }
  if (lVar5 != 0) {
    _PrlHandle_Free(lVar5);
  }
  QVariant::~QVariant((QVariant *)&local_88);
  QPixmap::~QPixmap(local_70);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar4;
}

