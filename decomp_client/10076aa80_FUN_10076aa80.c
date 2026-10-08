
void FUN_10076aa80(undefined8 param_1)

{
  undefined8 uVar1;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  uVar1 = CSdkCommunicator::eventHandlers();
  local_60 = (QArrayData *)QString::fromAscii_helper("handleCleanUpEvent",0x12);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  FUN_100a1c6b0(local_58,&local_60,param_1,&local_70);
  CEventHandlerStorage::addHandler(uVar1,0x186f1,local_58);
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
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

