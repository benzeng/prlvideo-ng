
bool FUN_100116fd0(QString *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  bool bVar6;
  Data_conflict local_70;
  undefined4 local_68;
  QVariant local_60;
  Data *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("Snapshots/VM With Snapshots Disabled",0x24);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  QSettings::value((QString *)&local_60,&local_40);
  QVariant::toStringList();
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant((QVariant *)&local_70);
  iVar1 = *(int *)(local_50 + 8);
  if (iVar1 < *(int *)(local_50 + 0xc)) {
    pDVar5 = local_50 + (long)iVar1 * 8 + 8;
    lVar3 = (long)*(int *)(local_50 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (lVar3 == 0) goto LAB_1001170b0;
      cVar2 = operator==((QString *)(pDVar5 + 8),param_1);
      pDVar5 = pDVar5 + 8;
      lVar3 = lVar3 + -8;
    } while (cVar2 == '\0');
    bVar6 = (int)((ulong)((long)pDVar5 -
                         (long)(local_50 + (ulong)*(uint *)(local_50 + 8) * 8 + 0x10)) >> 3) != -1;
  }
  else {
LAB_1001170b0:
    bVar6 = false;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100117141;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar3 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_100117120:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_100117120;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100117141:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100117171;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100117171:
  QSettings::~QSettings((QSettings *)&local_40);
  return bVar6;
}

