
void FUN_10060fc80(undefined8 param_1)

{
  int iVar1;
  QString local_40;
  QVariant local_38;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::sender();
  QObject::property((char *)&local_38);
  if ((local_38.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QVariant::toString();
    QString::operator=(&local_28,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10060fd04;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10060fd04:
  iVar1 = FUN_10060ee40(param_1,&local_28);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"[onOfflineActivationTimerTimeout] Seconds to show %d.",
                  iVar1 / 1000);
  }
  if (-1 < iVar1) {
    if (iVar1 < 10000) {
      FUN_1006082f0(param_1,&local_28,0,0);
    }
    FUN_10060f560(param_1,&local_28);
  }
  QVariant::~QVariant(&local_38);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

