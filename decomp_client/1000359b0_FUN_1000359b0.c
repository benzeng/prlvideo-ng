
void FUN_1000359b0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("alive",5);
  FUN_100036660(&local_40,param_2,&local_48);
  QVariant::toString();
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Today Extension Notification: Alive = %s",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100035a56;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100035a56:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100035a86;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100035a86:
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100035abf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100035abf:
  local_60 = (QArrayData *)QString::fromAscii_helper("alive",5);
  FUN_100036660(&local_58,param_2,&local_60);
  uVar1 = QVariant::toBool();
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100035b29;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100035b29:
  if (*(char *)(param_1 + 0x39) == '\0') {
    QTimer::start();
  }
  else {
    QTimer::stop();
    FUN_1000352c0(param_1);
  }
  return;
}

