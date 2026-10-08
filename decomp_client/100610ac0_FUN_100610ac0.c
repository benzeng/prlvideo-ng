
void FUN_100610ac0(undefined8 param_1)

{
  int iVar1;
  QVariant local_a0;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  undefined1 local_50 [40];
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::sender();
  QObject::property(local_50 + 0x18);
  if ((local_50._32_4_ & 0x3fffffff) != 0) {
    QVariant::toString();
    QString::operator=(&local_28,(QString *)(local_50 + 0x10));
    if (*(int *)local_50._16_8_ != -1) {
      if (*(int *)local_50._16_8_ != 0) {
        LOCK();
        *(int *)local_50._16_8_ = *(int *)local_50._16_8_ + -1;
        local_19 = *(int *)local_50._16_8_ != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100610b47;
      }
      QArrayData::deallocate((QArrayData *)local_50._16_8_,2,8);
    }
  }
LAB_100610b47:
  iVar1 = FUN_10060fe50();
  if (iVar1 < 0) goto LAB_100610c55;
  iVar1 = CMessageManager::instance();
  local_50._8_8_ = PTR_shared_null_1021e15e8;
  local_50._0_8_ = PTR_shared_null_1021e15e8;
  local_90 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onExpiredVolumeLicenseMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                        ,0x56);
  QVariant::QVariant(&local_a0,&local_28);
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x80015430,(QStringList *)0x0,(QStringList *)(local_50 + 8),
             (CSlotInfo *)local_50,SUB81(local_88,0));
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_19 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100610c43;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100610c43:
  FUN_100039a80(local_50);
  FUN_100039a80(local_50 + 8);
LAB_100610c55:
  QVariant::~QVariant((QVariant *)(local_50 + 0x18));
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

