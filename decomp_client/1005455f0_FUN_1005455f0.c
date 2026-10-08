
bool FUN_1005455f0(void)

{
  char cVar1;
  int iVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  bool bVar6;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  QVariant local_78;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QSettings local_48 [16];
  Data *local_38;
  undefined1 local_29;
  
  iVar2 = MessageUtils::getHiddenMessagesCount();
  if (iVar2 != 0) {
    return true;
  }
  QSettings::QSettings(local_48,(QObject *)0x0);
  QSettings::childGroups();
  local_50 = (QArrayData *)QString::fromAscii_helper("PresentationMode",0x10);
  cVar1 = QtPrivate::QStringList_contains(&local_38,&local_50,1);
  bVar6 = true;
  if (cVar1 == '\0') {
    QSettings::QSettings((QSettings *)&local_78,(QObject *)0x0);
    local_80 = (QArrayData *)
               QString::fromAscii_helper("Shared Applications/Deferred Extensions",0x27);
    local_88 = 0x80000000;
    local_90.field7 = 0;
    QSettings::value((QString *)&local_68,&local_78);
    QVariant::toString();
    bVar6 = *(int *)(local_58 + 4) != 0;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005456ea;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1005456ea:
    QVariant::~QVariant(&local_68);
    QVariant::~QVariant((QVariant *)&local_90);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10054572f;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10054572f:
    QSettings::~QSettings((QSettings *)&local_78);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100545768;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100545768:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005457f1;
    }
    iVar2 = *(int *)(local_38 + 0xc);
    if (iVar2 != *(int *)(local_38 + 8)) {
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_38 + (long)iVar2 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1005457d0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1005457d0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_38);
  }
LAB_1005457f1:
  QSettings::~QSettings(local_48);
  return bVar6;
}

