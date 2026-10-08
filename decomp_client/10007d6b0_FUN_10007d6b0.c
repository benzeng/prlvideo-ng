
void FUN_10007d6b0(long param_1)

{
  undefined4 uVar1;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1a0))(&local_38);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_19 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1db9f37);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007d73a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10007d73a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007d76a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10007d76a:
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  QVariant::QVariant(&local_68,0);
  QSettings::value((QString *)&local_48,&local_58);
  uVar1 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_68);
  QSettings::~QSettings((QSettings *)&local_58);
  FUN_10007d320(param_1,uVar1);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

