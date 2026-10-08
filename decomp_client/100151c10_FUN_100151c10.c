
void FUN_100151c10(long param_1,QString *param_2)

{
  QVariant local_48;
  QArrayData *local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("Saved Paths",0xb);
  QSettings::beginGroup(local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100151c9a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100151c9a:
  QSettings::beginGroup(local_30);
  QVariant::QVariant(&local_48,param_2);
  QSettings::setValue(local_30,(QVariant *)(param_1 + 0x18));
  QVariant::~QVariant(&local_48);
  QSettings::endGroup();
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

