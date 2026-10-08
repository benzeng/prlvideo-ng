
void FUN_1003a64a0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  QString QVar3;
  char *pcVar4;
  long local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  lVar1 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  QObject::sender();
  QObject::property((char *)&local_40);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  uVar2 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)FUN_1003b71e0(uVar2,&local_30);
  if (QVar3.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_1003a65ed;
  local_48 = (QArrayData *)*param_2;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  CVmHardDisk::setPassword(QVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a656d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003a656d:
  uVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  pcVar4 = (char *)FUN_100197bf0(uVar2,QVar3.field0_0x0,param_2);
  pcVar4[0x60] = '\x01';
  QVariant::QVariant(&local_58,&local_30);
  QObject::setProperty(pcVar4,(QVariant *)"hddStoragePath");
  QVariant::~QVariant(&local_58);
  QObject::connect(&local_60,pcVar4,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onHddPasswordChecked(PRL_RESULT)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
LAB_1003a65ed:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

