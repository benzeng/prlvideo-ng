
void FUN_10078a0d0(undefined8 param_1)

{
  undefined8 uVar1;
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  int *local_a8 [4];
  QVariant local_88 [2];
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  uVar1 = CSdkCommunicator::eventHandlers();
  local_60 = (QArrayData *)QString::fromAscii_helper("handleStatUpdate",0x10);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  FUN_100a1c6b0(local_58,&local_60,param_1,&local_70);
  CEventHandlerStorage::addHandler(uVar1,0x186b6,local_58);
  QVariant::~QVariant(local_38);
  if (local_58[0] != (int *)0x0) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    local_19 = *local_58[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
      operator_delete(local_58[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10078a1b0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10078a1b0:
  uVar1 = CSdkCommunicator::eventHandlers();
  local_b0 = (QArrayData *)QString::fromAscii_helper("handlePerfStatUpdate",0x14);
  local_b8 = 0x80000000;
  local_c0.field7 = 0;
  FUN_100a1c6b0(local_a8,&local_b0,param_1,&local_c0);
  CEventHandlerStorage::addHandler(uVar1,0x18a25,local_a8);
  QVariant::~QVariant(local_88);
  if (local_a8[0] != (int *)0x0) {
    LOCK();
    *local_a8[0] = *local_a8[0] + -1;
    local_19 = *local_a8[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_a8[0] != (int *)0x0)) {
      operator_delete(local_a8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
  return;
}

