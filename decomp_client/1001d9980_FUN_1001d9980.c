
void FUN_1001d9980(undefined8 param_1,ulong param_2)

{
  QWidget *pQVar1;
  QWidget *pQVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  CTaskGenericId *pCVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  bool bVar15;
  bool bVar16;
  QWidget *local_1c8;
  int *local_1b8;
  QArrayData *local_1b0;
  int *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  uint uStack_18c;
  undefined4 local_188;
  undefined2 uStack_184;
  undefined1 uStack_182;
  undefined1 uStack_181;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined1 uStack_174;
  undefined2 uStack_173;
  undefined1 uStack_171;
  undefined2 local_16f;
  undefined1 local_16d;
  uint local_16c;
  QArrayData *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined **local_f0 [3];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QVariant local_a0;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001554a0(uVar7);
  if (lVar8 == 0) {
    return;
  }
  cVar3 = FUN_1001776f0(lVar8);
  if (cVar3 != '\0') {
    return;
  }
  iVar4 = FUN_10015a6e0(lVar8);
  if (iVar4 != 0) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    FUN_100df99c0("[AppController]","prl_client_app",3,"Server is disconnected");
    return;
  }
  if ((param_2 & 4) == 0) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if ((param_2 & 8) == 0) {
      if (DAT_102310928 == (void *)0x0) {
        pvVar10 = operator_new(0x18);
        FUN_1001d4a60(pvVar10);
        DAT_102273638 = 1;
        DAT_102310928 = pvVar10;
      }
      iVar4 = FUN_1001d4ba0(DAT_102310928);
      bVar15 = iVar4 != 2;
    }
  }
  QApplication::topLevelWidgets();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar12 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_58 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar12 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar13 * 8);
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
  if (*(int *)local_60 == -1) {
LAB_1001d9b38:
    bVar16 = true;
    local_1c8 = (QWidget *)0x0;
    if (local_50 != local_48) {
      local_1c8 = (QWidget *)0x0;
      do {
        pQVar1 = *(QWidget **)local_50;
        cVar3 = WidgetUtils::isVisibleTopLevelWindow(pQVar1);
        pQVar2 = local_1c8;
        if (cVar3 != '\0') {
          QObject::property((char *)&local_70);
          cVar3 = QVariant::toBool();
          QVariant::~QVariant(&local_70);
          if ((cVar3 == '\0') && (cVar3 = QWidget::isMinimized(), pQVar2 = pQVar1, cVar3 == '\0')) {
            if (bVar15) {
              FUN_100060bb0();
              iVar4 = FUN_100060df0(pQVar1);
              if ((iVar4 == 3) &&
                 (lVar12 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"CVmConsoleWindow"),
                 pQVar2 = local_1c8, lVar12 == 0)) goto LAB_1001d9c00;
            }
            if (DAT_10230ffd0 < 3) {
              bVar16 = false;
            }
            else {
              (*(code *)**(undefined8 **)pQVar1)(pQVar1);
              uVar7 = QMetaObject::className();
              QObject::objectName();
              QString::toLocal8Bit();
              FUN_100df99c0("[AppController]","prl_client_app",3,
                            "Suitable window is already opened: %s %s",uVar7,
                            local_78 + *(long *)(local_78 + 0x10));
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001d9e9d;
                }
                QArrayData::deallocate(local_78,1,8);
              }
LAB_1001d9e9d:
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001d9ecd;
                }
                QArrayData::deallocate(local_80,2,8);
              }
LAB_1001d9ecd:
              bVar16 = false;
            }
            goto LAB_1001d9c34;
          }
        }
LAB_1001d9c00:
        local_1c8 = pQVar2;
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
      bVar16 = true;
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_1001d9b24:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001d9b24;
    }
    bVar16 = true;
    local_1c8 = (QWidget *)0x0;
    if (local_40 != 0) goto LAB_1001d9b38;
  }
LAB_1001d9c34:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d9c5a;
    }
    QListData::dispose(local_58);
  }
LAB_1001d9c5a:
  if (!bVar16) {
    return;
  }
  if (local_1c8 != (QWidget *)0x0) {
    uVar7 = FUN_100370280();
    lVar12 = FUN_1003757d0(uVar7);
    if (lVar12 != 0) {
      uVar7 = FUN_100370280();
      local_1c8 = (QWidget *)FUN_1003757d0(uVar7);
      if (local_1c8 == (QWidget *)0x0) goto LAB_1001d9d28;
    }
    if (2 < DAT_10230ffd0) {
      (*(code *)**(undefined8 **)local_1c8)(local_1c8);
      uVar7 = QMetaObject::className();
      FUN_100df99c0("[AppController]","prl_client_app",3,"There is a suitable minimized window: %s",
                    uVar7);
    }
    uVar5 = QWidget::windowState();
    QWidget::setWindowState(local_1c8,uVar5 & 0xfffffffe);
    if (!bVar15) {
      return;
    }
    FUN_100060bb0();
    iVar4 = FUN_100060df0(local_1c8);
    if (iVar4 != 3) {
      return;
    }
    lVar12 = (**(code **)(*(long *)local_1c8 + 8))(local_1c8,"CVmConsoleWindow");
    if (lVar12 != 0) {
      return;
    }
  }
LAB_1001d9d28:
  uVar7 = FUN_100060bb0();
  FUN_1000609c0(uVar7);
  lVar12 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar12 != 0) {
    uVar7 = FUN_10018c280(lVar12);
    iVar4 = FUN_100319ae0(uVar7);
    if (iVar4 == 3) {
      QSettings::QSettings((QSettings *)&local_a0,(QObject *)0x0);
      local_a8 = (QArrayData *)
                 QString::fromAscii_helper("Application preferences/Show Tray Icon",0x26);
      QVariant::QVariant(&local_b8,true);
      QSettings::value((QString *)&local_90,&local_a0);
      cVar3 = QVariant::toBool();
      if (cVar3 == '\0') {
        if (DAT_102310928 == (void *)0x0) {
          pvVar10 = operator_new(0x18);
          FUN_1001d4a60(pvVar10);
          DAT_102273638 = 1;
          DAT_102310928 = pvVar10;
        }
        iVar4 = FUN_1001d4ba0(DAT_102310928);
        bVar16 = iVar4 == 2;
      }
      else {
        bVar16 = false;
      }
      QVariant::~QVariant(&local_90);
      QVariant::~QVariant(&local_b8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d9f6c;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1001d9f6c:
      QSettings::~QSettings((QSettings *)&local_a0);
      if (bVar16) {
        if (2 < DAT_10230ffd0) {
          FUN_10018d830(&local_c8,lVar12);
          QString::toUtf8();
          FUN_100df99c0("[AppController]","prl_client_app",3,"Try to open guest menu for [%s]",
                        local_c0 + *(long *)(local_c0 + 0x10));
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001da022;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_1001da022:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001da058;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
        }
LAB_1001da058:
        uVar7 = FUN_10018c280(lVar12);
        uVar7 = FUN_100319c80(uVar7);
        cVar3 = FUN_10033ab80(uVar7);
        if (2 < DAT_10230ffd0) {
          FUN_10018d830(&local_d8,lVar12);
          QString::toUtf8();
          pcVar14 = "not opened";
          if (cVar3 != '\0') {
            pcVar14 = "opened";
          }
          FUN_100df99c0("[AppController]","prl_client_app",3,"Guest menu %s for [%s]",
                        local_d0 + *(long *)(local_d0 + 0x10),pcVar14);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001da115;
            }
            QArrayData::deallocate(local_d0,1,8);
          }
LAB_1001da115:
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001da14b;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
        }
LAB_1001da14b:
        if (cVar3 != '\0') {
          return;
        }
      }
    }
  }
  iVar4 = FUN_10015d3a0(lVar8);
  uVar7 = FUN_100794960();
  iVar6 = FUN_100796670(uVar7,lVar8);
  if (iVar6 + iVar4 == 0) {
    pCVar9 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_f0,0x53);
    local_f0[0] = &PTR_FUN_10226c710;
    cVar3 = CTaskManager::isTaskRunning(pCVar9);
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_f0);
    if (cVar3 != '\0') {
      return;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("[AppController]","prl_client_app",3,"VM list is empty. Open New VM assistant");
    }
    pvVar10 = operator_new(0x100);
    local_168 = (QArrayData *)PTR_shared_null_1021e1288;
    local_160 = 0;
    local_158 = 0xff;
    local_154 = 0;
    local_150 = 0;
    local_148._8_4_ = (int)PTR_shared_null_1021e1288;
    local_148._0_8_ = PTR_shared_null_1021e1288;
    local_148._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_138._8_4_ = (int)PTR_shared_null_1021e15e8;
    local_138._0_8_ = PTR_shared_null_1021e15e8;
    local_138._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_128 = 0;
    local_120 = PTR_shared_null_1021e1288;
    local_118 = 0;
    local_114 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    FUN_10025b010(pvVar10,lVar8,0,&local_168);
    FUN_10005e410(&local_158);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001da348;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1001da348:
    CAbstractTask::execute();
    return;
  }
  if (bVar15) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("[AppController]","prl_client_app",3,"Open Control Center window");
    }
    FUN_1001e0340(param_1);
    return;
  }
  if (iVar6 + iVar4 == 1) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("[AppController]","prl_client_app",3,"Server contains only one VM");
    }
    iVar4 = FUN_10015d3a0(lVar8);
    if (iVar4 < 1) {
      CTaskManager::instance();
      CTaskManager::getRunningTasks((uint)&local_1a8);
      if (local_1a8[3] != local_1a8[2]) {
        if (*local_1a8 == -1) {
          return;
        }
        if (*local_1a8 != 0) {
          LOCK();
          *local_1a8 = *local_1a8 + -1;
          UNLOCK();
          if (*local_1a8 != 0) {
            return;
          }
          local_31 = 0;
        }
        FUN_100034010(&local_1a8,local_1a8);
        return;
      }
      cVar3 = FUN_100356a00();
      if (*local_1a8 != -1) {
        if (*local_1a8 != 0) {
          LOCK();
          *local_1a8 = *local_1a8 + -1;
          local_31 = *local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001da5c3;
        }
        FUN_100034010(&local_1a8,local_1a8);
      }
LAB_1001da5c3:
      if (cVar3 == '\0') {
        return;
      }
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("[AppController]","prl_client_app",3,"Open appliance window");
      }
      uVar7 = FUN_100794960();
      lVar12 = FUN_1007964d0(uVar7,lVar8,0);
      if (lVar12 == 0) {
        return;
      }
      uVar7 = FUN_10079c3d0();
      CAppliance::getApplianceId();
      FUN_10079c520(uVar7,&local_1b0,lVar8,0);
      if (*(int *)local_1b0 == -1) {
        return;
      }
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        UNLOCK();
        if (*(int *)local_1b0 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_1b0,2,8);
      return;
    }
    lVar8 = FUN_10015d330(lVar8,0);
    if (lVar8 != 0) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("[AppController]","prl_client_app",3,"Open VM window");
      }
      if (DAT_102310928 == (void *)0x0) {
        pvVar10 = operator_new(0x18);
        FUN_1001d4a60(pvVar10);
        DAT_102273638 = 1;
        DAT_102310928 = pvVar10;
      }
      uVar11 = FUN_1001d4b90(DAT_102310928);
      if ((uVar11 & 2) == 0) {
        if ((param_2 & 2) == 0) {
          uVar7 = FUN_10018c280(lVar8);
          local_1a0 = 3;
          local_198 = local_198 & 0xffffff00;
          uStack_19c = 0;
          uStack_194 = 0xffff;
          local_190 = 0;
          uStack_18c = uStack_18c & 0xffffff00;
        }
        else {
          local_16c = local_16c & 0xffffff00;
          uVar7 = FUN_10018c280(lVar8);
          local_188 = 3;
          uStack_184 = 0;
          uStack_182 = 1;
          uStack_181 = 1;
          local_180 = local_16c;
          uStack_17c = 0xffff;
          local_178 = 0;
          uStack_174 = 0;
          uStack_171 = local_16d;
          uStack_173 = local_16f;
        }
        FUN_10031a440(uVar7,0);
        return;
      }
      goto LAB_1001da73b;
    }
    if (DAT_10230ffd0 < 3) {
      return;
    }
    pcVar14 = "(!)Error: can\'t get single VM instance to open it\'s desktop";
    goto LAB_1001da76a;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[AppController]","prl_client_app",3,
                  "Server containts multiple VM\'s. Open Control Center window");
  }
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_1b8);
  if (local_1b8[3] == local_1b8[2]) {
    cVar3 = FUN_100356a00();
    if (cVar3 == '\0') {
      if (DAT_102310928 == (void *)0x0) {
        pvVar10 = operator_new(0x18);
        FUN_1001d4a60(pvVar10);
        DAT_102273638 = 1;
        DAT_102310928 = pvVar10;
      }
      uVar5 = FUN_1001d4b90(DAT_102310928);
      if (*local_1b8 != -1) {
        if (*local_1b8 != 0) {
          LOCK();
          *local_1b8 = *local_1b8 + -1;
          local_31 = *local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001da6ef;
        }
        FUN_100034010(&local_1b8,local_1b8);
      }
LAB_1001da6ef:
      if ((uVar5 & 2) == 0) goto LAB_1001da6f3;
    }
    else if (*local_1b8 != -1) {
      if (*local_1b8 != 0) {
        LOCK();
        *local_1b8 = *local_1b8 + -1;
        local_31 = *local_1b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001da714;
      }
      FUN_100034010(&local_1b8,local_1b8);
    }
LAB_1001da714:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("[AppController]","prl_client_app",3,
                    "Server containts multiple VM\'s. Open Control Center window");
    }
LAB_1001da73b:
    FUN_1001e0340(param_1);
    return;
  }
  if (*local_1b8 != -1) {
    if (*local_1b8 != 0) {
      LOCK();
      *local_1b8 = *local_1b8 + -1;
      local_31 = *local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001da6f3;
    }
    FUN_100034010(&local_1b8,local_1b8);
  }
LAB_1001da6f3:
  if (DAT_10230ffd0 < 3) {
    return;
  }
  pcVar14 = "VM opening is in process. Do nothing";
LAB_1001da76a:
  FUN_100df99c0("[AppController]","prl_client_app",3,pcVar14);
  return;
}

