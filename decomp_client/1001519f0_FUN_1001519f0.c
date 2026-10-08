
undefined8 * FUN_1001519f0(undefined8 *param_1,long param_2)

{
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  if ((*(int *)(*(long *)(param_2 + 0x10) + 4) == 0) ||
     (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("Saved Paths",0xb);
  QSettings::beginGroup((QString *)&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100151a7a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100151a7a:
  QSettings::beginGroup((QString *)&local_30);
  QVariant::QVariant(&local_60,(QString *)(param_2 + 0x20));
  QSettings::value((QString *)&local_50,&local_30);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_60);
  QSettings::endGroup();
  QSettings::endGroup();
  *param_1 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100151b25;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100151b25:
  QSettings::~QSettings((QSettings *)&local_30);
  return param_1;
}

