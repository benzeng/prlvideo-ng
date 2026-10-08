
void FUN_10007d020(long param_1)

{
  long lVar1;
  char cVar2;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_var;
  uint extraout_var_00;
  QSize local_88;
  QVariant local_80;
  QVariant local_70;
  QVariant local_60;
  QString local_50 [2];
  uint local_40;
  uint uStack_3c;
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
  QString::fromUtf8_helper((char *)&local_28,0x1db9f2a);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007d0aa;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10007d0aa:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007d0da;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10007d0da:
  FUN_10007c850(param_1);
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  cVar2 = QSettings::contains(local_50);
  local_40 = extraout_EAX;
  uStack_3c = extraout_var;
  if (cVar2 != '\0') {
    QSettings::QSettings((QSettings *)&local_70,(QObject *)0x0);
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    local_88.field0_0x0 = (*(int *)(lVar1 + 0x1c) + 1) - *(int *)(lVar1 + 0x14);
    local_88.field1_0x4 = (*(int *)(lVar1 + 0x20) + 1) - *(int *)(lVar1 + 0x18);
    QVariant::QVariant(&local_80,&local_88);
    QSettings::value((QString *)&local_60,&local_70);
    QVariant::toSize();
    local_40 = extraout_EAX_00;
    uStack_3c = extraout_var_00;
    QVariant::~QVariant(&local_60);
    QVariant::~QVariant(&local_80);
    QSettings::~QSettings((QSettings *)&local_70);
  }
  QSettings::~QSettings((QSettings *)local_50);
  if ((int)extraout_var < (int)uStack_3c) {
    uStack_3c = extraout_var;
  }
  if (-1 < (int)(uStack_3c | local_40)) {
    QWidget::resize(*(QSize **)(param_1 + 0x10));
  }
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

