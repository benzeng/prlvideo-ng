
void FUN_100116740(QString *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  QArrayData *local_88;
  QVariant local_80;
  Data_conflict local_70;
  undefined4 local_68;
  QVariant local_60;
  AnonymousUnion0 local_50;
  Data_conflict local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48.field7 = QString::fromAscii_helper("Snapshots/VM With Snapshots Disabled",0x24);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  QSettings::value((QString *)&local_60,&local_40);
  QVariant::toStringList();
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant((QVariant *)&local_70);
  iVar1 = *(int *)(local_50.field1 + 8);
  if (iVar1 < *(int *)(local_50.field1 + 0xc)) {
    pDVar5 = (Data *)(local_50.field1 + (long)iVar1 * 8 + 8);
    lVar3 = (long)*(int *)(local_50.field1 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (lVar3 == 0) goto LAB_100116908;
      cVar2 = operator==((QString *)(pDVar5 + 8),param_1);
      pDVar5 = pDVar5 + 8;
      lVar3 = lVar3 + -8;
    } while (cVar2 == '\0');
    if ((int)((ulong)((long)pDVar5 -
                     (long)(local_50.field1 + (ulong)*(uint *)(local_50.field1 + 8) * 8 + 0x10)) >>
             3) != -1) {
      FUN_1000e5580(&local_50,param_1);
      QVariant::QVariant(&local_80,(QStringList *)&local_50.field0);
      QSettings::setValue((QString *)&local_40,(QVariant *)&local_48);
      QVariant::~QVariant(&local_80);
      pQVar4 = (QArrayData *)param_1->field0_0x0;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","prl_client_app",0,"Removed vm %s from list",
                    local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001168d2;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1001168d2:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100116908;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_100116908:
  if (*(int *)local_50.field1 != -1) {
    if (*(int *)local_50.field1 != 0) {
      LOCK();
      *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
      local_29 = *(int *)local_50.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100116991;
    }
    iVar1 = *(int *)(local_50.field1 + 0xc);
    if (iVar1 != *(int *)(local_50.field1 + 8)) {
      lVar3 = (long)*(int *)(local_50.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = (Data *)(local_50.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_100116970:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_100116970;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)local_50.field1);
  }
LAB_100116991:
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_29 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001169c1;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1001169c1:
  QSettings::~QSettings((QSettings *)&local_40);
  return;
}

