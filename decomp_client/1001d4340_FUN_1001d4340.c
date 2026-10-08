
byte FUN_1001d4340(void)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  CTaskGenericId *pCVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int local_c4;
  QArrayData *local_c0;
  QArrayData *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  undefined **local_88 [3];
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001554a0(uVar6);
  if (lVar7 == 0) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    FUN_100df99c0("","prl_client_app",3,"Server is disconnected. UIOptions: TrayIconOff");
    return 0;
  }
  iVar4 = FUN_10015a6e0(lVar7);
  bVar2 = 0;
  if (iVar4 == 0) {
    QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
    local_60 = (QArrayData *)
               QString::fromAscii_helper("Application preferences/Show Tray Icon",0x26);
    QVariant::QVariant(&local_70,true);
    QSettings::value((QString *)&local_48,&local_58);
    bVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d4411;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1001d4411:
    QSettings::~QSettings((QSettings *)&local_58);
  }
  pCVar8 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_88,0x53);
  local_88[0] = &PTR_FUN_10226c710;
  cVar3 = CTaskManager::isTaskRunning(pCVar8);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_88);
  if (cVar3 != '\0') {
    return bVar2;
  }
  QApplication::topLevelWidgets();
  local_a8 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 == 0) {
      QListData::detach((int)&local_a8);
      lVar9 = (long)*(int *)(local_a8 + 8);
      if ((local_b0 + (long)*(int *)(local_b0 + 8) * 8 != local_a8 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_a8 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_a8 + 0xc))) {
        _memcpy(local_a8 + lVar9 * 8 + 0x10,local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  local_90 = 1;
  if (*(int *)local_b0 == -1) {
LAB_1001d4587:
    if (local_a0 != local_98) {
      do {
        plVar1 = *(long **)local_a0;
        if (((*(byte *)(plVar1[5] + 9) & 0x80) != 0) &&
           (lVar9 = (**(code **)(*plVar1 + 8))(plVar1,"CControlCenterWindow"), lVar9 != 0)) {
          if (*(int *)local_a8 == -1) {
            return bVar2;
          }
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            UNLOCK();
            if (*(int *)local_a8 != 0) {
              return bVar2;
            }
            local_31 = 0;
          }
          QListData::dispose(local_a8);
          return bVar2;
        }
        local_a0 = local_a0 + 8;
        local_90 = 1;
      } while (local_a0 != local_98);
    }
  }
  else {
    if (*(int *)local_b0 == 0) {
LAB_1001d4579:
      QListData::dispose(local_b0);
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001d4579;
    }
    if (local_90 != 0) goto LAB_1001d4587;
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d461a;
    }
    QListData::dispose(local_a8);
  }
LAB_1001d461a:
  iVar4 = FUN_10015d3a0(lVar7);
  if (0 < iVar4) {
    iVar11 = 0;
    local_c4 = 0;
    iVar4 = 0;
    do {
      lVar9 = FUN_10015d330(lVar7,iVar11);
      if (lVar9 != 0) {
        uVar6 = FUN_10018c280(lVar9);
        iVar5 = FUN_100319ae0(uVar6);
        if ((iVar5 != 0) &&
           ((cVar3 = FUN_10031bab0(uVar6), cVar3 == '\0' ||
            (cVar3 = FUN_10031bde0(uVar6), cVar3 != '\0')))) {
          iVar4 = iVar4 + 1;
          cVar3 = FUN_10031bde0(uVar6);
          if (cVar3 != '\0') {
            if (2 < DAT_10230ffd0) {
              uVar6 = FUN_100319390(uVar6);
              FUN_100188480(&local_c0,uVar6);
              QString::toLocal8Bit();
              FUN_100df99c0("","prl_client_app",3,"VM %s is in Crystal mode.",
                            local_b8 + *(long *)(local_b8 + 0x10));
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001d4742;
                }
                QArrayData::deallocate(local_b8,1,8);
              }
LAB_1001d4742:
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_31 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001d4778;
                }
                QArrayData::deallocate(local_c0,2,8);
              }
            }
LAB_1001d4778:
            local_c4 = local_c4 + 1;
          }
        }
      }
      iVar11 = iVar11 + 1;
      iVar5 = FUN_10015d3a0(lVar7);
    } while (iVar11 < iVar5);
    if (0 < local_c4) {
      if (iVar4 == local_c4) {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",3,
                        "All displayed VMs (count=%d) are in Crystal. UIOptions: HideApplication | ShowTrayIcon"
                       );
        }
        bVar2 = bVar2 | 2;
      }
      else if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,
                      "VMs in Crystal count: %d, displayed VMs count: %d. UIOptions: ShowTrayIcon",
                      local_c4,iVar4);
      }
    }
  }
  return bVar2;
}

