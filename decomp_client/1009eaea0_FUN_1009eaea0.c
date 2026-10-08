
long * FUN_1009eaea0(long *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int *local_3d8;
  QArrayData *local_3d0;
  QArrayData *local_3c8;
  QString local_3c0;
  QString local_3b8;
  QFileInfo local_3b0 [8];
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QArrayData *local_380;
  QArrayData *local_378;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  Data *local_210;
  Data *local_208;
  Data *local_200;
  undefined4 local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  Data *local_1e0;
  Data *local_1d8;
  Data *local_1d0;
  undefined4 local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  Data *local_1b0;
  Data *local_1a8;
  Data *local_1a0;
  undefined4 local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  Data *local_180;
  Data *local_178;
  Data *local_170;
  undefined4 local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  Data *local_150;
  Data *local_148;
  Data *local_140;
  undefined4 local_138;
  _func_void_Node_ptr *local_130;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  QArrayData *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  local_130 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  lVar5 = CProblemReport::getUserDefinedData();
  if (lVar5 != 0) {
    CProblemReport::getUserDefinedData();
    lVar5 = CRepUserDefinedData::getScreenShots();
    if (lVar5 != 0) {
      CProblemReport::getUserDefinedData();
      lVar5 = CRepUserDefinedData::getScreenShots();
      local_150 = *(Data **)(lVar5 + 0x98);
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 == 0) {
          QListData::detach((int)&local_150);
          lVar7 = (long)*(int *)(local_150 + 8);
          lVar5 = *(long *)(lVar5 + 0x98);
          if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_150 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_150 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_150 + 0xc))) {
            _memcpy(local_150 + lVar7 * 8 + 0x10,
                    (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + 1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
        }
      }
      local_148 = local_150 + (long)*(int *)(local_150 + 8) * 8 + 0x10;
      local_140 = local_150 + (long)*(int *)(local_150 + 0xc) * 8 + 0x10;
      if (*(int *)(local_150 + 8) != *(int *)(local_150 + 0xc)) {
        do {
          local_138 = 1;
          uVar6 = *(undefined8 *)local_148;
          CRepScreenShot::getName();
          FUN_1009eab80(&local_158,param_2,uVar6,&local_160);
          FUN_100062d00(&local_130,&local_158,local_128);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_31 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009eb037;
            }
            QArrayData::deallocate(local_158,2,8);
          }
LAB_1009eb037:
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009eb06d;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_1009eb06d:
          local_148 = local_148 + 8;
        } while (local_148 != local_140);
      }
      local_138 = 1;
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb0c5;
        }
        QListData::dispose(local_150);
      }
    }
  }
LAB_1009eb0c5:
  lVar5 = CProblemReport::getSystemLogs();
  if (lVar5 != 0) {
    lVar5 = CProblemReport::getSystemLogs();
    local_180 = *(Data **)(lVar5 + 0x98);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 == 0) {
        QListData::detach((int)&local_180);
        lVar7 = (long)*(int *)(local_180 + 8);
        lVar5 = *(long *)(lVar5 + 0x98);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_180 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_180 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_180 + 0xc))) {
          _memcpy(local_180 + lVar7 * 8 + 0x10,
                  (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + 1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
      }
    }
    local_178 = local_180 + (long)*(int *)(local_180 + 8) * 8 + 0x10;
    local_170 = local_180 + (long)*(int *)(local_180 + 0xc) * 8 + 0x10;
    if (*(int *)(local_180 + 8) != *(int *)(local_180 + 0xc)) {
      do {
        local_168 = 1;
        lVar5 = *(long *)local_178;
        if (lVar5 == 0) {
          local_190 = (QArrayData *)QString::fromAscii_helper("",0);
        }
        else {
          CRepSystemLog::getName();
        }
        FUN_1009eab80(&local_188,param_2,lVar5,&local_190);
        FUN_100062d00(&local_130,&local_188,local_120);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009eb22e;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_1009eb22e:
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009eb264;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_1009eb264:
        local_178 = local_178 + 8;
      } while (local_178 != local_170);
    }
    local_168 = 1;
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009eb2b9;
      }
      QListData::dispose(local_180);
    }
  }
LAB_1009eb2b9:
  local_1b0 = (Data *)param_2[0x1f];
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 == 0) {
      QListData::detach((int)&local_1b0);
      lVar7 = (long)*(int *)(local_1b0 + 8);
      lVar5 = param_2[0x1f];
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_1b0 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_1b0 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= *(int *)(local_1b0 + 0xc))) {
        _memcpy(local_1b0 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + 1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
    }
  }
  local_1a8 = local_1b0 + (long)*(int *)(local_1b0 + 8) * 8 + 0x10;
  local_1a0 = local_1b0 + (long)*(int *)(local_1b0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_1b0 + 8) != *(int *)(local_1b0 + 0xc)) {
    do {
      local_198 = 1;
      lVar5 = *(long *)local_1a8;
      if (lVar5 == 0) {
        local_1c0 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        CRepCrashDump::getNameInArchive();
      }
      FUN_1009eab80(&local_1b8,param_2,lVar5,&local_1c0);
      FUN_100062d00(&local_130,&local_1b8,local_118);
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb40e;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
LAB_1009eb40e:
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_31 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb444;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_1009eb444:
      local_1a8 = local_1a8 + 8;
    } while (local_1a8 != local_1a0);
  }
  local_198 = 1;
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eb499;
    }
    QListData::dispose(local_1b0);
  }
LAB_1009eb499:
  local_1e0 = (Data *)param_2[0x20];
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 == 0) {
      QListData::detach((int)&local_1e0);
      lVar7 = (long)*(int *)(local_1e0 + 8);
      lVar5 = param_2[0x20];
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_1e0 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_1e0 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= *(int *)(local_1e0 + 0xc))) {
        _memcpy(local_1e0 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
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
      lVar5 = *(long *)local_1d8;
      if (lVar5 == 0) {
        local_1f0 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        CRepMemoryDump::getNameInArchive();
      }
      FUN_1009eab80(&local_1e8,param_2,lVar5,&local_1f0);
      FUN_100062d00(&local_130,&local_1e8,local_110);
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb5ee;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_1009eb5ee:
      if (*(int *)local_1f0 != -1) {
        if (*(int *)local_1f0 != 0) {
          LOCK();
          *(int *)local_1f0 = *(int *)local_1f0 + -1;
          local_31 = *(int *)local_1f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb624;
        }
        QArrayData::deallocate(local_1f0,2,8);
      }
LAB_1009eb624:
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
      if ((bool)local_31) goto LAB_1009eb679;
    }
    QListData::dispose(local_1e0);
  }
LAB_1009eb679:
  local_210 = (Data *)param_2[0x1a];
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 == 0) {
      QListData::detach((int)&local_210);
      lVar7 = (long)*(int *)(local_210 + 8);
      lVar5 = param_2[0x1a];
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_210 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_210 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= *(int *)(local_210 + 0xc))) {
        _memcpy(local_210 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + 1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
    }
  }
  local_208 = local_210 + (long)*(int *)(local_210 + 8) * 8 + 0x10;
  local_200 = local_210 + (long)*(int *)(local_210 + 0xc) * 8 + 0x10;
  if (*(int *)(local_210 + 8) != *(int *)(local_210 + 0xc)) {
    do {
      local_1f8 = 1;
      lVar5 = *(long *)local_208;
      if (lVar5 == 0) {
        local_220 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        CRepVzReport::getNameInArchive();
      }
      FUN_1009eab80(&local_218,param_2,lVar5,&local_220);
      FUN_100062d00(&local_130,&local_218,local_108);
      if (*(int *)local_218 != -1) {
        if (*(int *)local_218 != 0) {
          LOCK();
          *(int *)local_218 = *(int *)local_218 + -1;
          local_31 = *(int *)local_218 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb7ce;
        }
        QArrayData::deallocate(local_218,2,8);
      }
LAB_1009eb7ce:
      if (*(int *)local_220 != -1) {
        if (*(int *)local_220 != 0) {
          LOCK();
          *(int *)local_220 = *(int *)local_220 + -1;
          local_31 = *(int *)local_220 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009eb804;
        }
        QArrayData::deallocate(local_220,2,8);
      }
LAB_1009eb804:
      local_208 = local_208 + 8;
    } while (local_208 != local_200);
  }
  local_1f8 = 1;
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eb85c;
    }
    QListData::dispose(local_210);
  }
LAB_1009eb85c:
  uVar6 = (**(code **)(*param_2 + 0xe8))(param_2);
  lVar5 = (**(code **)(*param_2 + 0xe8))(param_2);
  if (lVar5 == 0) {
    local_230 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    (**(code **)(*param_2 + 0xe8))(param_2);
    ClientInfo::getNameInArchive();
  }
  FUN_1009eab80(&local_228,param_2,uVar6,&local_230);
  FUN_100062d00(&local_130,&local_228,local_100);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eb920;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_1009eb920:
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eb956;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1009eb956:
  uVar6 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar5 = (**(code **)(*param_2 + 0xb8))(param_2);
  if (lVar5 == 0) {
    local_240 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    (**(code **)(*param_2 + 0xb8))(param_2);
    CRepAdvancedVmInfo::getNameInArchive();
  }
  FUN_1009eab80(&local_238,param_2,uVar6,&local_240);
  FUN_100062d00(&local_130,&local_238,local_f8);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eba1a;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1009eba1a:
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eba50;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_1009eba50:
  uVar6 = (**(code **)(*param_2 + 0xd8))(param_2);
  lVar5 = (**(code **)(*param_2 + 0xd8))(param_2);
  if (lVar5 == 0) {
    local_250 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    (**(code **)(*param_2 + 0xd8))(param_2);
    KeyboardMouseProfiles::getNameInArchive();
  }
  FUN_1009eab80(&local_248,param_2,uVar6,&local_250);
  FUN_100062d00(&local_130,&local_248,local_f0);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebb14;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_1009ebb14:
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebb4a;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_1009ebb4a:
  (**(code **)(*param_2 + 0xf8))(&local_260,param_2);
  FUN_1009ea7b0(&local_258,param_2,&local_260);
  FUN_100062d00(&local_130,&local_258,local_e8);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebbc6;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1009ebbc6:
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebbfc;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_1009ebbfc:
  (**(code **)(*param_2 + 0x108))(&local_270,param_2);
  FUN_1009ea7b0(&local_268,param_2,&local_270);
  FUN_100062d00(&local_130,&local_268,local_e0);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebc78;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1009ebc78:
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebcae;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_1009ebcae:
  (**(code **)(*param_2 + 0x118))(&local_280,param_2);
  FUN_1009ea7b0(&local_278,param_2,&local_280);
  FUN_100062d00(&local_130,&local_278,local_d8);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebd2a;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1009ebd2a:
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebd60;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_1009ebd60:
  (**(code **)(*param_2 + 0x128))(&local_290,param_2);
  FUN_1009ea7b0(&local_288,param_2,&local_290);
  FUN_100062d00(&local_130,&local_288,local_d0);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebddc;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1009ebddc:
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebe12;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_1009ebe12:
  (**(code **)(*param_2 + 0x138))(&local_2a0,param_2);
  FUN_1009ea7b0(&local_298,param_2,&local_2a0);
  FUN_100062d00(&local_130,&local_298,local_c8);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebe8e;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_1009ebe8e:
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebec4;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_1009ebec4:
  (**(code **)(*param_2 + 0x168))(&local_2b0,param_2);
  FUN_1009ea7b0(&local_2a8,param_2,&local_2b0);
  FUN_100062d00(&local_130,&local_2a8,local_c0);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_31 = *(int *)local_2a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebf40;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_1009ebf40:
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebf76;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_1009ebf76:
  (**(code **)(*param_2 + 0x148))(&local_2c0,param_2);
  FUN_1009ea7b0(&local_2b8,param_2,&local_2c0);
  FUN_100062d00(&local_130,&local_2b8,local_b8);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ebff2;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_1009ebff2:
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec028;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_1009ec028:
  (**(code **)(*param_2 + 0x158))(&local_2d0,param_2);
  FUN_1009ea7b0(&local_2c8,param_2,&local_2d0);
  FUN_100062d00(&local_130,&local_2c8,local_b0);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec0a4;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1009ec0a4:
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec0da;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_1009ec0da:
  (**(code **)(*param_2 + 0x1c8))(&local_2e0,param_2);
  FUN_1009ea7b0(&local_2d8,param_2,&local_2e0);
  FUN_100062d00(&local_130,&local_2d8,local_a8);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec156;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1009ec156:
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec18c;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_1009ec18c:
  (**(code **)(*param_2 + 0x1b8))(&local_2f0,param_2);
  FUN_1009ea7b0(&local_2e8,param_2,&local_2f0);
  FUN_100062d00(&local_130,&local_2e8,local_a0);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec208;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_1009ec208:
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec23e;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_1009ec23e:
  (**(code **)(*param_2 + 0x198))(&local_300,param_2);
  FUN_1009ea7b0(&local_2f8,param_2,&local_300);
  FUN_100062d00(&local_130,&local_2f8,local_98);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec2ba;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_1009ec2ba:
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec2f0;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_1009ec2f0:
  (**(code **)(*param_2 + 0x188))(&local_310,param_2);
  FUN_1009ea7b0(&local_308,param_2,&local_310);
  FUN_100062d00(&local_130,&local_308,local_90);
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec36c;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_1009ec36c:
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_31 = *(int *)local_310 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec3a2;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_1009ec3a2:
  (**(code **)(*param_2 + 0x178))(&local_320,param_2);
  FUN_1009ea7b0(&local_318,param_2,&local_320);
  FUN_100062d00(&local_130,&local_318,local_88);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_31 = *(int *)local_318 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec41b;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_1009ec41b:
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec451;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_1009ec451:
  (**(code **)(*param_2 + 0x1d8))(&local_330,param_2);
  FUN_1009ea7b0(&local_328,param_2,&local_330);
  FUN_100062d00(&local_130,&local_328,local_80);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_31 = *(int *)local_328 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec4ca;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_1009ec4ca:
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_31 = *(int *)local_330 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec500;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_1009ec500:
  (**(code **)(*param_2 + 0x1e8))(&local_340,param_2);
  FUN_1009ea7b0(&local_338,param_2,&local_340);
  FUN_100062d00(&local_130,&local_338,local_78);
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_31 = *(int *)local_338 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec579;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_1009ec579:
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_31 = *(int *)local_340 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec5af;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_1009ec5af:
  (**(code **)(*param_2 + 0x1f8))(&local_350,param_2);
  FUN_1009ea7b0(&local_348,param_2,&local_350);
  FUN_100062d00(&local_130,&local_348,local_70);
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_31 = *(int *)local_348 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec628;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_1009ec628:
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_31 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec65e;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_1009ec65e:
  (**(code **)(*param_2 + 0x208))(&local_360,param_2);
  FUN_1009ea7b0(&local_358,param_2,&local_360);
  FUN_100062d00(&local_130,&local_358,local_68);
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_31 = *(int *)local_358 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec6d7;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_1009ec6d7:
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_31 = *(int *)local_360 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec70d;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_1009ec70d:
  (**(code **)(*param_2 + 0x218))(&local_370,param_2);
  FUN_1009ea7b0(&local_368,param_2,&local_370);
  FUN_100062d00(&local_130,&local_368,local_60);
  if (*(int *)local_368 != -1) {
    if (*(int *)local_368 != 0) {
      LOCK();
      *(int *)local_368 = *(int *)local_368 + -1;
      local_31 = *(int *)local_368 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec786;
    }
    QArrayData::deallocate(local_368,2,8);
  }
LAB_1009ec786:
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec7bc;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_1009ec7bc:
  CProblemReport::getFilesMd5InProductBundle();
  FUN_1009ea7b0(&local_378,param_2,&local_380);
  FUN_100062d00(&local_130,&local_378,local_58);
  if (*(int *)local_378 != -1) {
    if (*(int *)local_378 != 0) {
      LOCK();
      *(int *)local_378 = *(int *)local_378 + -1;
      local_31 = *(int *)local_378 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec82e;
    }
    QArrayData::deallocate(local_378,2,8);
  }
LAB_1009ec82e:
  if (*(int *)local_380 != -1) {
    if (*(int *)local_380 != 0) {
      LOCK();
      *(int *)local_380 = *(int *)local_380 + -1;
      local_31 = *(int *)local_380 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec864;
    }
    QArrayData::deallocate(local_380,2,8);
  }
LAB_1009ec864:
  (**(code **)(*param_2 + 0x228))(&local_390,param_2);
  FUN_1009ea7b0(&local_388,param_2,&local_390);
  FUN_100062d00(&local_130,&local_388,local_50);
  if (*(int *)local_388 != -1) {
    if (*(int *)local_388 != 0) {
      LOCK();
      *(int *)local_388 = *(int *)local_388 + -1;
      local_31 = *(int *)local_388 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec8dd;
    }
    QArrayData::deallocate(local_388,2,8);
  }
LAB_1009ec8dd:
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_31 = *(int *)local_390 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec913;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_1009ec913:
  (**(code **)(*param_2 + 0x1a8))(&local_3a0,param_2);
  FUN_1009ea7b0(&local_398,param_2,&local_3a0);
  FUN_100062d00(&local_130,&local_398,local_48);
  if (*(int *)local_398 != -1) {
    if (*(int *)local_398 != 0) {
      LOCK();
      *(int *)local_398 = *(int *)local_398 + -1;
      local_31 = *(int *)local_398 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec98c;
    }
    QArrayData::deallocate(local_398,2,8);
  }
LAB_1009ec98c:
  if (*(int *)local_3a0 != -1) {
    if (*(int *)local_3a0 != 0) {
      LOCK();
      *(int *)local_3a0 = *(int *)local_3a0 + -1;
      local_31 = *(int *)local_3a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ec9c2;
    }
    QArrayData::deallocate(local_3a0,2,8);
  }
LAB_1009ec9c2:
  local_3c8 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_3c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[0x4d];
  if (1 < *(int *)local_3c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + 1;
    local_31 = *(int *)local_3c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_3c0);
  local_3b8.field0_0x0 = local_3c0.field0_0x0;
  if (1 < *(int *)local_3c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + 1;
    local_31 = *(int *)local_3c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e3a4b7);
  QString::append(&local_3b8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eca80;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009eca80:
  QFileInfo::QFileInfo(local_3b0,&local_3b8);
  QFileInfo::absoluteFilePath();
  FUN_100062d00(&local_130,&local_3a8,local_38);
  if (*(int *)local_3a8 != -1) {
    if (*(int *)local_3a8 != 0) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + -1;
      local_31 = *(int *)local_3a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ecaf3;
    }
    QArrayData::deallocate(local_3a8,2,8);
  }
LAB_1009ecaf3:
  QFileInfo::~QFileInfo(local_3b0);
  if (*(int *)local_3b8.field0_0x0 != -1) {
    if (*(int *)local_3b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
      local_31 = *(int *)local_3b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ecb35;
    }
    QArrayData::deallocate((QArrayData *)local_3b8.field0_0x0,2,8);
  }
LAB_1009ecb35:
  if (*(int *)local_3c0.field0_0x0 != -1) {
    if (*(int *)local_3c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + -1;
      local_31 = *(int *)local_3c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ecb6b;
    }
    QArrayData::deallocate((QArrayData *)local_3c0.field0_0x0,2,8);
  }
LAB_1009ecb6b:
  if (*(int *)local_3c8 != -1) {
    if (*(int *)local_3c8 != 0) {
      LOCK();
      *(int *)local_3c8 = *(int *)local_3c8 + -1;
      local_31 = *(int *)local_3c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ecba1;
    }
    QArrayData::deallocate(local_3c8,2,8);
  }
LAB_1009ecba1:
  puVar4 = PTR_shared_null_1021e1288;
  local_3d0 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000ab900(&local_130,&local_3d0);
  if (*(int *)local_3d0 != -1) {
    if (*(int *)local_3d0 != 0) {
      LOCK();
      *(int *)local_3d0 = *(int *)local_3d0 + -1;
      local_31 = *(int *)local_3d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ecbf8;
    }
    QArrayData::deallocate(local_3d0,2,8);
  }
LAB_1009ecbf8:
  FUN_1000625e0(&local_3d8,&local_130);
  *param_1 = (long)local_3d8;
  if (*local_3d8 != -1) {
    if (*local_3d8 == 0) {
      QListData::detach((int)param_1);
      lVar5 = *param_1;
      iVar2 = *(int *)(lVar5 + 8);
      if (iVar2 != *(int *)(lVar5 + 0xc)) {
        local_3d8 = local_3d8 + (long)local_3d8[2] * 2 + 4;
        puVar9 = (undefined8 *)(lVar5 + 0x10 + (long)iVar2 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_3d8;
          *puVar9 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          puVar9 = puVar9 + 1;
          local_3d8 = local_3d8 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_3d8 = *local_3d8 + 1;
      local_31 = *local_3d8 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_3d8);
  if (*(int *)puVar4 != -1) {
    if (*(int *)puVar4 != 0) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eccdc;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1009eccdc:
  if (*(int *)(local_130 + 0x10) != -1) {
    if (*(int *)(local_130 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_130 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_130);
  }
  return param_1;
}

