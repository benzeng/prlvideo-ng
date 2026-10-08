
void FUN_10060e940(long param_1)

{
  long lVar1;
  int iVar2;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QString local_48;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::sender();
  QObject::property((char *)&local_40);
  if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QVariant::toString();
    QString::operator=(&local_30,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10060e9c6;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10060e9c6:
  iVar2 = FUN_10060de60(param_1,&local_30);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"[onGracePeriodTimerTimeout] Seconds to show %d.",
                  iVar2 / 1000);
  }
  if (-1 < iVar2) {
    if (iVar2 < 10000) {
      lVar1 = *(long *)(param_1 + 0x10);
      local_88 = (int *)0x0;
      uStack_80 = 0;
      local_70 = 0;
      local_78 = 0;
      local_60 = 0x80000000;
      local_68.field7 = 0;
      local_58 = 1;
      FUN_10060a8b0(*(undefined8 *)(lVar1 + 0x10),4,&local_30,&local_88);
      FUN_10060cb40(*(undefined8 *)(lVar1 + 0x10),&local_30,0);
      QVariant::~QVariant((QVariant *)&local_68);
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        local_21 = *local_88 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_88 != (int *)0x0)) {
          operator_delete(local_88);
        }
      }
    }
    else {
      FUN_10060d6d0(param_1,&local_30);
    }
  }
  QVariant::~QVariant(&local_40);
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

