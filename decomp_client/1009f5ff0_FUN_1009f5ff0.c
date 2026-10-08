
int FUN_1009f5ff0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  QString QVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  long local_268 [2];
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QString local_238;
  QString local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QString local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  uint *local_1e8;
  Data *local_1e0;
  Data *local_1d8;
  Data *local_1d0;
  undefined4 local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  long local_1a0 [2];
  QArrayData *local_190;
  QString local_188;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  uint *local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  QArrayData *local_140;
  Data *local_138;
  Data *local_130;
  Data *local_128;
  undefined4 local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)*param_2;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  iVar6 = CBaseNode::fromString
                    ((QTypedArrayData<unsigned_short> *)(param_1 + 2),SUB81(&local_48,0),
                     (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6069;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009f6069:
  if (iVar6 < 0) {
    return iVar6;
  }
  bVar4 = (bool)CProblemReport::getAdvancedVmInfo();
  CBaseNode::toString(SUB81(&local_50,0),bVar4);
  local_58 = (QArrayData *)QString::fromAscii_helper("AdvancedVmInfo.xml",0x12);
  FUN_1009f2c60(param_1,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f60de;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009f60de:
  bVar4 = (bool)CProblemReport::getClientInfo();
  CBaseNode::toString(SUB81(&local_60,0),bVar4);
  QString::operator=(&local_50,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6133;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1009f6133:
  local_68 = (QArrayData *)QString::fromAscii_helper("ClientInfo.xml",0xe);
  FUN_1009f2c60(param_1,&local_50,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6188;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009f6188:
  lVar7 = CProblemReport::getKeyboardMouseProfiles();
  if (lVar7 != 0) {
    bVar4 = (bool)CProblemReport::getKeyboardMouseProfiles();
    CBaseNode::toString(SUB81(&local_70,0),bVar4);
    QString::operator=(&local_50,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009f61ee;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1009f61ee:
    local_78 = (QArrayData *)QString::fromAscii_helper("KeyboardMouseProfiles.xml",0x19);
    FUN_1009f2c60(param_1,&local_50,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009f6243;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1009f6243:
  pcVar2 = *(code **)(*param_1 + 0x100);
  CProblemReport::getHostStatistic();
  (*pcVar2)(param_1,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6293;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1009f6293:
  pcVar2 = *(code **)(*param_1 + 0x110);
  CProblemReport::getHostInfo();
  (*pcVar2)(param_1,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f62e3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1009f62e3:
  pcVar2 = *(code **)(*param_1 + 0x120);
  CProblemReport::getMoreHostInfo();
  (*pcVar2)(param_1,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f633f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1009f633f:
  pcVar2 = *(code **)(*param_1 + 0x130);
  CProblemReport::getAllProcesses();
  (*pcVar2)(param_1,&local_98);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f639b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1009f639b:
  pcVar2 = *(code **)(*param_1 + 0x140);
  CProblemReport::getAllProcessesSamples();
  (*pcVar2)(param_1,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f63f7;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1009f63f7:
  pcVar2 = *(code **)(*param_1 + 0x150);
  CProblemReport::getLoadedDrivers();
  (*pcVar2)(param_1,&local_a8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6453;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1009f6453:
  pcVar2 = *(code **)(*param_1 + 0x160);
  CProblemReport::getAllDrivers();
  (*pcVar2)(param_1,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f64af;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1009f64af:
  pcVar2 = *(code **)(*param_1 + 0x170);
  CProblemReport::getClientProxyInfo();
  (*pcVar2)(param_1,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f650b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1009f650b:
  pcVar2 = *(code **)(*param_1 + 0x180);
  CProblemReport::getAppConfig();
  (*pcVar2)(param_1,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6567;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1009f6567:
  pcVar2 = *(code **)(*param_1 + 400);
  CProblemReport::getNetConfig();
  (*pcVar2)(param_1,&local_c8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f65c3;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1009f65c3:
  pcVar2 = *(code **)(*param_1 + 0x1a0);
  CProblemReport::getMonitorData();
  (*pcVar2)(param_1,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f661f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1009f661f:
  pcVar2 = *(code **)(*param_1 + 0x1c0);
  CProblemReport::getPerformanceCounters();
  (*pcVar2)(param_1,&local_d8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f667b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1009f667b:
  pcVar2 = *(code **)(*param_1 + 0x1d0);
  CProblemReport::getVmConfig();
  (*pcVar2)(param_1,&local_e0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f66d7;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1009f66d7:
  pcVar2 = *(code **)(*param_1 + 0x1e0);
  CProblemReport::getVmUpdaterInfo();
  (*pcVar2)(param_1,&local_e8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6733;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1009f6733:
  pcVar2 = *(code **)(*param_1 + 0x1f0);
  CProblemReport::getGuestOs();
  (*pcVar2)(param_1,&local_f0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f678f;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1009f678f:
  pcVar2 = *(code **)(*param_1 + 0x200);
  CProblemReport::getVmDirectory();
  (*pcVar2)(param_1,&local_f8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f67eb;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1009f67eb:
  pcVar2 = *(code **)(*param_1 + 0x210);
  CProblemReport::getInstalledSoftware();
  (*pcVar2)(param_1,&local_100);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f6847;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1009f6847:
  pcVar2 = *(code **)(*param_1 + 0x220);
  CProblemReport::getAppSwitchPackages();
  (*pcVar2)(param_1,&local_108);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f68a3;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1009f68a3:
  pcVar2 = *(code **)(*param_1 + 0x298);
  CProblemReport::getFilesMd5InProductBundle();
  (*pcVar2)(param_1,&local_110);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f68ff;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1009f68ff:
  pcVar2 = *(code **)(*param_1 + 0x230);
  CProblemReport::getLaunchdInfo();
  (*pcVar2)(param_1,&local_118);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f695b;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1009f695b:
  lVar7 = CProblemReport::getUserDefinedData();
  if (lVar7 != 0) {
    CProblemReport::getUserDefinedData();
    lVar7 = CRepUserDefinedData::getScreenShots();
    if (lVar7 != 0) {
      CProblemReport::getUserDefinedData();
      lVar7 = CRepUserDefinedData::getScreenShots();
      local_138 = *(Data **)(lVar7 + 0x98);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 == 0) {
          QListData::detach((int)&local_138);
          lVar10 = (long)*(int *)(local_138 + 8);
          lVar7 = *(long *)(lVar7 + 0x98);
          if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_138 + lVar10 * 8) &&
             (lVar11 = *(int *)(local_138 + 0xc) - lVar10,
             lVar11 != 0 && lVar10 <= *(int *)(local_138 + 0xc))) {
            _memcpy(local_138 + lVar10 * 8 + 0x10,
                    (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar11 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + 1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
        }
      }
      local_130 = local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10;
      local_128 = local_138 + (long)*(int *)(local_138 + 0xc) * 8 + 0x10;
      if (*(int *)(local_138 + 8) != *(int *)(local_138 + 0xc)) {
        do {
          local_120 = 1;
          QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_130;
          if (QVar3.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
            CRepScreenShot::getName();
            if (*(int *)(local_140 + 4) == 0) {
              bVar4 = false;
            }
            else {
              CRepScreenShot::getData();
              local_150.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("no data",7);
              cVar5 = operator==(&local_148,&local_150);
              if (cVar5 == '\0') {
                CRepScreenShot::getData();
                bVar4 = *(int *)(local_158 + 4) != 0;
                if (*(int *)local_158 != -1) {
                  if (*(int *)local_158 != 0) {
                    LOCK();
                    *(int *)local_158 = *(int *)local_158 + -1;
                    local_31 = *(int *)local_158 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1009f6b20;
                  }
                  QArrayData::deallocate(local_158,2,8);
                }
              }
              else {
                bVar4 = false;
              }
LAB_1009f6b20:
              if (*(int *)local_150.field0_0x0 != -1) {
                if (*(int *)local_150.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                  local_31 = *(int *)local_150.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6b56;
                }
                QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
              }
LAB_1009f6b56:
              if (*(int *)local_148.field0_0x0 != -1) {
                if (*(int *)local_148.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                  local_31 = *(int *)local_148.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6b8c;
                }
                QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
              }
            }
LAB_1009f6b8c:
            if (*(int *)local_140 != -1) {
              if (*(int *)local_140 != 0) {
                LOCK();
                *(int *)local_140 = *(int *)local_140 + -1;
                local_31 = *(int *)local_140 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009f6bc2;
              }
              QArrayData::deallocate(local_140,2,8);
            }
LAB_1009f6bc2:
            if (bVar4) {
              CRepScreenShot::getName();
              local_170 = (QArrayData *)QString::fromAscii_helper("/",1);
              QString::split(&local_160,&local_168,&local_170,0,1);
              if (*(int *)local_170 != -1) {
                if (*(int *)local_170 != 0) {
                  LOCK();
                  *(int *)local_170 = *(int *)local_170 + -1;
                  local_31 = *(int *)local_170 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6c49;
                }
                QArrayData::deallocate(local_170,2,8);
              }
LAB_1009f6c49:
              if (*(int *)local_168 != -1) {
                if (*(int *)local_168 != 0) {
                  LOCK();
                  *(int *)local_168 = *(int *)local_168 + -1;
                  local_31 = *(int *)local_168 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6c7f;
                }
                QArrayData::deallocate(local_168,2,8);
              }
LAB_1009f6c7f:
              if (1 < *local_160) {
                FUN_100036c40(&local_160,local_160[1]);
              }
              local_178 = *(QArrayData **)(local_160 + (long)(int)local_160[3] * 2 + 2);
              if (1 < *(int *)local_178 + 1U) {
                LOCK();
                *(int *)local_178 = *(int *)local_178 + 1;
                local_31 = *(int *)local_178 != 0;
                UNLOCK();
              }
              CRepScreenShot::setName(QVar3);
              if (*(int *)local_178 != -1) {
                if (*(int *)local_178 != 0) {
                  LOCK();
                  *(int *)local_178 = *(int *)local_178 + -1;
                  local_31 = *(int *)local_178 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6d07;
                }
                QArrayData::deallocate(local_178,2,8);
              }
LAB_1009f6d07:
              local_190 = (QArrayData *)QString::fromAscii_helper("/",1);
              local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0x4d];
              if (1 < *(int *)local_188.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + 1;
                local_31 = *(int *)local_188.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_188);
              if (1 < *local_160) {
                FUN_100036c40(&local_160,local_160[1]);
              }
              local_180.field0_0x0 = local_188.field0_0x0;
              if (1 < *(int *)local_188.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + 1;
                local_31 = *(int *)local_188.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_180);
              if (*(int *)local_188.field0_0x0 != -1) {
                if (*(int *)local_188.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
                  local_31 = *(int *)local_188.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6dda;
                }
                QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
              }
LAB_1009f6dda:
              if (*(int *)local_190 != -1) {
                if (*(int *)local_190 != 0) {
                  LOCK();
                  *(int *)local_190 = *(int *)local_190 + -1;
                  local_31 = *(int *)local_190 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6e10;
                }
                QArrayData::deallocate(local_190,2,8);
              }
LAB_1009f6e10:
              QFile::QFile((QFile *)local_1a0,&local_180);
              cVar5 = QFile::open((QFile *)local_1a0,2);
              if (cVar5 != '\0') {
                CRepScreenShot::getData();
                QString::toUtf8();
                QByteArray::fromBase64((QByteArray *)&local_1a8);
                QIODevice::write((char *)local_1a0,
                                 (longlong)(local_1a8 + *(long *)(local_1a8 + 0x10)));
                if (*(int *)local_1a8 != -1) {
                  if (*(int *)local_1a8 != 0) {
                    LOCK();
                    *(int *)local_1a8 = *(int *)local_1a8 + -1;
                    local_31 = *(int *)local_1a8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1009f6eb5;
                  }
                  QArrayData::deallocate(local_1a8,1,8);
                }
LAB_1009f6eb5:
                if (*(int *)local_1b0 != -1) {
                  if (*(int *)local_1b0 != 0) {
                    LOCK();
                    *(int *)local_1b0 = *(int *)local_1b0 + -1;
                    local_31 = *(int *)local_1b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1009f6eeb;
                  }
                  QArrayData::deallocate(local_1b0,1,8);
                }
LAB_1009f6eeb:
                if (*(int *)local_1b8 != -1) {
                  if (*(int *)local_1b8 != 0) {
                    LOCK();
                    *(int *)local_1b8 = *(int *)local_1b8 + -1;
                    local_31 = *(int *)local_1b8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1009f6f30;
                  }
                  QArrayData::deallocate(local_1b8,2,8);
                }
              }
LAB_1009f6f30:
              (**(code **)(local_1a0[0] + 0x70))((QFile *)local_1a0);
              local_1c0 = (QArrayData *)PTR_shared_null_1021e1288;
              CRepScreenShot::setData(QVar3);
              if (*(int *)local_1c0 != -1) {
                if (*(int *)local_1c0 != 0) {
                  LOCK();
                  *(int *)local_1c0 = *(int *)local_1c0 + -1;
                  local_31 = *(int *)local_1c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6f93;
                }
                QArrayData::deallocate(local_1c0,2,8);
              }
LAB_1009f6f93:
              QFile::~QFile((QFile *)local_1a0);
              if (*(int *)local_180.field0_0x0 != -1) {
                if (*(int *)local_180.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
                  local_31 = *(int *)local_180.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f6fd1;
                }
                QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
              }
LAB_1009f6fd1:
              FUN_100039a80(&local_160);
            }
          }
          local_130 = local_130 + 8;
        } while (local_130 != local_128);
      }
      local_120 = 1;
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009f7032;
        }
        QListData::dispose(local_138);
      }
    }
  }
LAB_1009f7032:
  lVar7 = CProblemReport::getSystemLogs();
  if (lVar7 != 0) {
    lVar7 = CProblemReport::getSystemLogs();
    local_1e0 = *(Data **)(lVar7 + 0x98);
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 == 0) {
        QListData::detach((int)&local_1e0);
        lVar10 = (long)*(int *)(local_1e0 + 8);
        lVar7 = *(long *)(lVar7 + 0x98);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_1e0 + lVar10 * 8) &&
           (lVar11 = *(int *)(local_1e0 + 0xc) - lVar10,
           lVar11 != 0 && lVar10 <= *(int *)(local_1e0 + 0xc))) {
          _memcpy(local_1e0 + lVar10 * 8 + 0x10,
                  (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar11 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + 1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
      }
    }
    local_1d8 = local_1e0 + (long)*(int *)(local_1e0 + 8) * 8 + 0x10;
    local_1d0 = local_1e0 + (long)*(int *)(local_1e0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_1e0 + 8) != *(int *)(local_1e0 + 0xc)) {
      do {
        local_1c8 = 1;
        QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_1d8;
        if (QVar3.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
          CRepSystemLog::getName();
          local_1f8 = (QArrayData *)QString::fromAscii_helper("/",1);
          QString::split(&local_1e8,&local_1f0,&local_1f8,0,1);
          if (*(int *)local_1f8 != -1) {
            if (*(int *)local_1f8 != 0) {
              LOCK();
              *(int *)local_1f8 = *(int *)local_1f8 + -1;
              local_31 = *(int *)local_1f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009f718f;
            }
            QArrayData::deallocate(local_1f8,2,8);
          }
LAB_1009f718f:
          if (*(int *)local_1f0 != -1) {
            if (*(int *)local_1f0 != 0) {
              LOCK();
              *(int *)local_1f0 = *(int *)local_1f0 + -1;
              local_31 = *(int *)local_1f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009f71c5;
            }
            QArrayData::deallocate(local_1f0,2,8);
          }
LAB_1009f71c5:
          if (1 < *local_1e8) {
            FUN_100036c40(&local_1e8,local_1e8[1]);
          }
          local_200.field0_0x0 =
               *(QTypedArrayData<unsigned_short> **)(local_1e8 + (long)(int)local_1e8[3] * 2 + 2);
          if (1 < *(int *)local_200.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + 1;
            local_31 = *(int *)local_200.field0_0x0 != 0;
            UNLOCK();
          }
          if (*(int *)(local_200.field0_0x0 + 4) != 0) {
            local_208 = (QArrayData *)QString::fromAscii_helper(".log",4);
            cVar5 = QString::endsWith(&local_200,&local_208,1);
            if (*(int *)local_208 != -1) {
              if (*(int *)local_208 != 0) {
                LOCK();
                *(int *)local_208 = *(int *)local_208 + -1;
                local_31 = *(int *)local_208 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009f727e;
              }
              QArrayData::deallocate(local_208,2,8);
            }
LAB_1009f727e:
            if (cVar5 == '\0') {
              QString::fromUtf8_helper((char *)&local_40,0x1e3a48c);
              QString::append(&local_200);
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009f72e0;
                }
                QArrayData::deallocate(local_40,2,8);
              }
            }
LAB_1009f72e0:
            local_210 = (QArrayData *)local_200.field0_0x0;
            if (1 < *(int *)local_200.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + 1;
              local_31 = *(int *)local_200.field0_0x0 != 0;
              UNLOCK();
            }
            CRepSystemLog::setName(QVar3);
            if (*(int *)local_210 != -1) {
              if (*(int *)local_210 != 0) {
                LOCK();
                *(int *)local_210 = *(int *)local_210 + -1;
                local_31 = *(int *)local_210 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009f7344;
              }
              QArrayData::deallocate(local_210,2,8);
            }
LAB_1009f7344:
            CRepSystemLog::getData();
            CRepSystemLog::getName();
            FUN_1009f2c60(param_1,&local_218,&local_220);
            if (*(int *)local_220 != -1) {
              if (*(int *)local_220 != 0) {
                LOCK();
                *(int *)local_220 = *(int *)local_220 + -1;
                local_31 = *(int *)local_220 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009f73ae;
              }
              QArrayData::deallocate(local_220,2,8);
            }
LAB_1009f73ae:
            if (*(int *)local_218 != -1) {
              if (*(int *)local_218 != 0) {
                LOCK();
                *(int *)local_218 = *(int *)local_218 + -1;
                local_31 = *(int *)local_218 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009f73e4;
              }
              QArrayData::deallocate(local_218,2,8);
            }
LAB_1009f73e4:
            local_228 = (QArrayData *)PTR_shared_null_1021e1288;
            CRepSystemLog::setData(QVar3);
            if (*(int *)local_228 != -1) {
              if (*(int *)local_228 != 0) {
                LOCK();
                *(int *)local_228 = *(int *)local_228 + -1;
                local_31 = *(int *)local_228 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009f7437;
              }
              QArrayData::deallocate(local_228,2,8);
            }
          }
LAB_1009f7437:
          if (*(int *)local_200.field0_0x0 != -1) {
            if (*(int *)local_200.field0_0x0 != 0) {
              LOCK();
              *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
              local_31 = *(int *)local_200.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009f746d;
            }
            QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
          }
LAB_1009f746d:
          FUN_100039a80(&local_1e8);
        }
        local_1d8 = local_1d8 + 8;
      } while (local_1d8 != local_1d0);
    }
    local_1c8 = 1;
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009f74ca;
      }
      QListData::dispose(local_1e0);
    }
  }
LAB_1009f74ca:
  if (*(int *)(param_1[0x1f] + 8) < *(int *)(param_1[0x1f] + 0xc)) {
    plVar1 = param_1 + 0x1f;
    uVar12 = 0;
    do {
      plVar8 = (long *)FUN_1009f8d60(plVar1,uVar12 & 0xffffffff);
      if (*plVar8 != 0) {
        local_240 = (QArrayData *)QString::fromAscii_helper("/",1);
        local_238.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0x4d];
        if (1 < *(int *)local_238.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + 1;
          local_31 = *(int *)local_238.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_238);
        local_250 = (QArrayData *)QString::fromAscii_helper("CrashDump%1",0xb);
        QString::arg(&local_248,&local_250,uVar12,0,10,0x20);
        local_230.field0_0x0 = local_238.field0_0x0;
        if (1 < *(int *)local_238.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + 1;
          local_31 = *(int *)local_238.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_230);
        if (*(int *)local_248 != -1) {
          if (*(int *)local_248 != 0) {
            LOCK();
            *(int *)local_248 = *(int *)local_248 + -1;
            local_31 = *(int *)local_248 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f75ff;
          }
          QArrayData::deallocate(local_248,2,8);
        }
LAB_1009f75ff:
        if (*(int *)local_250 != -1) {
          if (*(int *)local_250 != 0) {
            LOCK();
            *(int *)local_250 = *(int *)local_250 + -1;
            local_31 = *(int *)local_250 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f7635;
          }
          QArrayData::deallocate(local_250,2,8);
        }
LAB_1009f7635:
        if (*(int *)local_238.field0_0x0 != -1) {
          if (*(int *)local_238.field0_0x0 != 0) {
            LOCK();
            *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
            local_31 = *(int *)local_238.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f766b;
          }
          QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
        }
LAB_1009f766b:
        if (*(int *)local_240 != -1) {
          if (*(int *)local_240 != 0) {
            LOCK();
            *(int *)local_240 = *(int *)local_240 + -1;
            local_31 = *(int *)local_240 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f76a1;
          }
          QArrayData::deallocate(local_240,2,8);
        }
LAB_1009f76a1:
        puVar9 = (undefined8 *)FUN_1009f8d60(plVar1,uVar12 & 0xffffffff);
        QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar9;
        local_258 = (QArrayData *)local_230.field0_0x0;
        if (1 < *(int *)local_230.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + 1;
          local_31 = *(int *)local_230.field0_0x0 != 0;
          UNLOCK();
        }
        CRepCrashDump::setNameInArchive(QVar3);
        if (*(int *)local_258 != -1) {
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_31 = *(int *)local_258 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f770f;
          }
          QArrayData::deallocate(local_258,2,8);
        }
LAB_1009f770f:
        QFile::QFile((QFile *)local_268,&local_230);
        cVar5 = QFile::open((QFile *)local_268,2);
        if (cVar5 != '\0') {
          FUN_1009f8d60(plVar1,uVar12 & 0xffffffff);
          CRepCrashDump::getDump();
          QByteArray::fromBase64((QByteArray *)&local_270);
          QIODevice::write((char *)local_268,(longlong)(local_270 + *(long *)(local_270 + 0x10)));
          if (*(int *)local_270 != -1) {
            if (*(int *)local_270 != 0) {
              LOCK();
              *(int *)local_270 = *(int *)local_270 + -1;
              local_31 = *(int *)local_270 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009f77ab;
            }
            QArrayData::deallocate(local_270,1,8);
          }
LAB_1009f77ab:
          if (*(int *)local_278 != -1) {
            if (*(int *)local_278 != 0) {
              LOCK();
              *(int *)local_278 = *(int *)local_278 + -1;
              local_31 = *(int *)local_278 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009f77f0;
            }
            QArrayData::deallocate(local_278,1,8);
          }
        }
LAB_1009f77f0:
        (**(code **)(local_268[0] + 0x70))((QFile *)local_268);
        puVar9 = (undefined8 *)FUN_1009f8d60(plVar1,uVar12 & 0xffffffff);
        local_280 = (QArrayData *)PTR_shared_null_1021e1288;
        CRepCrashDump::setDump(*puVar9,&local_280);
        if (*(int *)local_280 != -1) {
          if (*(int *)local_280 != 0) {
            LOCK();
            *(int *)local_280 = *(int *)local_280 + -1;
            local_31 = *(int *)local_280 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f785d;
          }
          QArrayData::deallocate(local_280,1,8);
        }
LAB_1009f785d:
        QFile::~QFile((QFile *)local_268);
        if (*(int *)local_230.field0_0x0 != -1) {
          if (*(int *)local_230.field0_0x0 != 0) {
            LOCK();
            *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
            local_31 = *(int *)local_230.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009f789b;
          }
          QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
        }
      }
LAB_1009f789b:
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)*(int *)(*plVar1 + 0xc) - (long)*(int *)(*plVar1 + 8));
  }
  (**(code **)(*param_1 + 0x278))(param_1);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return 0;
}

