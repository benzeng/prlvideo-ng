
void FUN_100374bc0(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  char cVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  QVariant local_90;
  Data_conflict local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QVariant local_60;
  AnonymousUnion0 local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("Console",7);
  QSettings::beginGroup((QString *)&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100374c32;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100374c32:
  local_68 = (QArrayData *)QString::fromAscii_helper("Undocked Consoles",0x11);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  QSettings::value((QString *)&local_60,&local_40);
  QVariant::toStringList();
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100374cba;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100374cba:
  if (param_3 == '\0') {
    cVar2 = QtPrivate::QStringList_contains(&local_50,param_2,1);
    if (cVar2 != '\0') {
      FUN_1000e5580(&local_50,param_2);
    }
  }
  else {
    cVar2 = QtPrivate::QStringList_contains(&local_50,param_2,1);
    if (cVar2 == '\0') {
      FUN_1000341d0(&local_50,param_2);
    }
  }
  local_80.field7 = QString::fromAscii_helper("Undocked Consoles",0x11);
  QVariant::QVariant(&local_90,(QStringList *)&local_50.field0);
  QSettings::setValue((QString *)&local_40,(QVariant *)&local_80);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80.field15 != -1) {
    if (*(int *)local_80.field15 != 0) {
      LOCK();
      *(int *)local_80.field15 = *(int *)local_80.field15 + -1;
      local_29 = *(int *)local_80.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100374d78;
    }
    QArrayData::deallocate((QArrayData *)local_80.field15,2,8);
  }
LAB_100374d78:
  if (*(int *)local_50.field1 != -1) {
    if (*(int *)local_50.field1 != 0) {
      LOCK();
      *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
      local_29 = *(int *)local_50.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100374e01;
    }
    iVar1 = *(int *)(local_50.field1 + 0xc);
    if (iVar1 != *(int *)(local_50.field1 + 8)) {
      lVar5 = (long)*(int *)(local_50.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = (Data *)(local_50.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_100374de0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_100374de0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)local_50.field1);
  }
LAB_100374e01:
  QSettings::~QSettings((QSettings *)&local_40);
  return;
}

