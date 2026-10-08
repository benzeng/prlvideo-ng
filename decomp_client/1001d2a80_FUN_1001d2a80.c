
undefined1 FUN_1001d2a80(long param_1)

{
  int iVar1;
  int iVar2;
  QWidget *pQVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  int *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  int local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  if (((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
       (*(long *)(param_1 + 0x20) != 0)) && (cVar5 = CAbstractTask::isFinished(), cVar5 == '\0')) ||
     (*(char *)(param_1 + 0x31) != '\0')) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar8 = "Application is on quit already.";
    goto LAB_1001d2c43;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 0xc) != *(int *)(*(long *)(param_1 + 0x28) + 8)) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar8 = "Rejected to close the application: waiting for silent start.";
    goto LAB_1001d2c43;
  }
  lVar6 = CTaskManager::instance();
  FUN_100033e80(&local_a0,lVar6 + 0x10);
  iVar1 = local_a0[3];
  iVar2 = local_a0[2];
  if (*local_a0 != -1) {
    if (*local_a0 != 0) {
      LOCK();
      *local_a0 = *local_a0 + -1;
      local_31 = *local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d2b44;
    }
    FUN_100034010(&local_a0,local_a0);
  }
LAB_1001d2b44:
  if (iVar1 != iVar2) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar8 = "Rejected to close the application: some tasks are still running.";
LAB_1001d2c43:
    FUN_100df99c0("[APP_QUIT]","prl_client_app",3,pcVar8);
    return 0;
  }
  cVar5 = FUN_100356a00();
  if (cVar5 == '\0') {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar8 = "Rejected to close the application: some displays are still opened.";
    goto LAB_1001d2c43;
  }
  QApplication::topLevelWidgets();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar6 * 8) &&
         (lVar9 = *(int *)(local_58 + 0xc) - lVar6, lVar9 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == 0) {
LAB_1001d2ca4:
    QListData::dispose(local_60);
LAB_1001d2ca9:
    if (local_40 != 0) goto LAB_1001d2cb7;
  }
  else {
    if (*(int *)local_60 != -1) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001d2ca4;
      goto LAB_1001d2ca9;
    }
LAB_1001d2cb7:
    if (local_50 != local_48) {
      do {
        cVar5 = WidgetUtils::isVisibleTopLevelWindow(*(QWidget **)local_50);
        bVar4 = true;
        if (cVar5 != '\0') goto LAB_1001d2ceb;
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
    }
  }
  bVar4 = false;
LAB_1001d2ceb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d2d11;
    }
    QListData::dispose(local_58);
  }
LAB_1001d2d11:
  if (!bVar4) {
    return 1;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",3,
                  "Rejected to close the application: some top level windows are still opened.");
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",3,"Application windows with WA_QuitOnClose set:");
  }
  QApplication::topLevelWidgets();
  local_80 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_80);
      lVar6 = (long)*(int *)(local_80 + 8);
      if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_80 + lVar6 * 8) &&
         (lVar9 = *(int *)(local_80 + 0xc) - lVar6, lVar9 != 0 && lVar6 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar6 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  if (*(int *)local_88 == 0) {
LAB_1001d2e28:
    QListData::dispose(local_88);
LAB_1001d2e2d:
    if (local_68 == 0) goto LAB_1001d2fad;
  }
  else if (*(int *)local_88 != -1) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + -1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
    if (!(bool)local_31) goto LAB_1001d2e28;
    goto LAB_1001d2e2d;
  }
  if (local_78 != local_70) {
    do {
      pQVar3 = *(QWidget **)local_78;
      cVar5 = WidgetUtils::isVisibleTopLevelWindow(pQVar3);
      if ((2 < DAT_10230ffd0) && (cVar5 == '\x01')) {
        (*(code *)**(undefined8 **)pQVar3)(pQVar3);
        uVar7 = QMetaObject::className();
        QObject::objectName();
        QString::toUtf8();
        if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
        }
        pcVar8 = "FALSE";
        if ((*(uint *)(*(long *)(pQVar3 + 0x28) + 8) & 0x8000) != 0) {
          pcVar8 = "TRUE";
        }
        FUN_100df99c0("[APP_QUIT]","prl_client_app",3,
                      ">> Window class: %s, object name: %s, is visible: %s",uVar7,
                      local_90 + *(long *)(local_90 + 0x10),pcVar8);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d2f58;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1001d2f58:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d2f90;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
LAB_1001d2f90:
      local_78 = local_78 + 8;
      local_68 = 1;
    } while (local_78 != local_70);
  }
LAB_1001d2fad:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QListData::dispose(local_80);
  }
  return 0;
}

