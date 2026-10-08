
undefined8 * FUN_100753190(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Third party converted vms",0x19);
  iVar1 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075320e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10075320e:
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      QSettings::setArrayIndex((int)&local_48);
      local_70 = (QArrayData *)QString::fromAscii_helper("Third party converted vms path",0x1e);
      local_78 = 0x80000000;
      local_80.field7 = 0;
      QSettings::value((QString *)&local_68,&local_48);
      QVariant::toString();
      FUN_1000341d0(param_1,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007532ad;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1007532ad:
      QVariant::~QVariant(&local_68);
      QVariant::~QVariant((QVariant *)&local_80);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007532ee;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1007532ee:
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  QSettings::endArray();
  QSettings::~QSettings((QSettings *)&local_48);
  return param_1;
}

