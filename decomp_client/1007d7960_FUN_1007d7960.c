
void FUN_1007d7960(void)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  int *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  FUN_100a04400(&local_38);
  FUN_1007caa20(&local_40);
  QSettings::QSettings((QSettings *)local_30,&local_38,&local_40,(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d79c0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007d79c0:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d79f0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007d79f0:
  local_48 = (QArrayData *)QString::fromAscii_helper("Sba Installations",0x11);
  QSettings::beginGroup(local_30);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d7a42;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007d7a42:
  QSettings::allKeys();
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"SBA INSTALL: found %d installation(s), removing all...",
                  local_50[3] - local_50[2]);
  }
  local_70 = local_50;
  if (*local_50 != -1) {
    if (*local_50 == 0) {
      QListData::detach((int)&local_70);
      iVar1 = local_70[2];
      if (iVar1 != local_70[3]) {
        local_50 = local_50 + (long)local_50[2] * 2 + 4;
        piVar6 = local_70 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_70[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_50;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_19 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_50 = local_50 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_50 = *local_50 + 1;
      local_19 = *local_50 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  if (local_70[2] != local_70[3]) {
    do {
      pQVar3 = *(QArrayData **)local_68;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_19 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        QSettings::remove(local_30);
        local_58 = 0;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_19 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1007d7bb1;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1007d7bb1:
      local_68 = local_68 + 2;
      uVar5 = local_58 ^ 1;
      bVar7 = local_58 != 1;
      local_58 = uVar5;
    } while ((bVar7) && (local_68 != local_60));
  }
  FUN_100039a80(&local_70);
  FUN_100039a80(&local_50);
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

