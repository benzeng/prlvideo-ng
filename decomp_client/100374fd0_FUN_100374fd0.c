
undefined1 FUN_100374fd0(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 uVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QVariant local_60;
  Data *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return 0;
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("Console",7);
  QSettings::beginGroup((QString *)&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037504c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10037504c:
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
      if ((bool)local_29) goto LAB_1003750d4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003750d4:
  uVar2 = QtPrivate::QStringList_contains(&local_50,param_2,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100375171;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar5 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_100375150:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_100375150;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100375171:
  QSettings::~QSettings((QSettings *)&local_40);
  return uVar2;
}

