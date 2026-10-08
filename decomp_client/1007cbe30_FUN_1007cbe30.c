
void FUN_1007cbe30(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  int *local_40;
  QString local_38;
  QString local_30;
  QVariant local_28;
  undefined1 local_11;
  
  FUN_100a04400(&local_30);
  FUN_1007caa20(&local_38);
  QSettings::QSettings((QSettings *)&local_28,&local_30,&local_38,(QObject *)0x0);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_11 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007cbe91;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007cbe91:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007cbec1;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1007cbec1:
  local_58 = (QArrayData *)QString::fromAscii_helper("Host MacOS Kaspersky Antivirus",0x1e);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_50,&local_28);
  QVariant::toStringList();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007cbf49;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007cbf49:
  local_70 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_70);
      iVar1 = local_70[2];
      if (iVar1 != local_70[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar4 = local_70 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_70[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_40;
          *(int **)piVar4 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_11 = *piVar2 != 0;
            UNLOCK();
          }
          piVar4 = piVar4 + 2;
          local_40 = local_40 + 2;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_11 = *local_40 != 0;
      UNLOCK();
    }
  }
  ClientStatistics::setKasperskyAntivirusInMacosHost(param_1 + 0x10,&local_70);
  FUN_100039a80(&local_70);
  FUN_100039a80(&local_40);
  QSettings::~QSettings((QSettings *)&local_28);
  return;
}

