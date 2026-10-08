
void FUN_1003fb300(undefined8 param_1,char *param_2,undefined8 param_3,undefined4 param_4,
                  char param_5,long param_6)

{
  code *pcVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  size_t sVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  QString *pQVar15;
  undefined8 *puVar16;
  QList *pQVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  bool bVar22;
  QVariant local_300;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  int *local_2e0;
  int *local_2d8;
  int *local_2d0;
  uint local_2c8;
  QVariant local_2c0;
  undefined1 local_2b0 [8];
  int *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  undefined4 local_290 [2];
  QArrayData *local_288;
  QArrayData *local_280;
  byte local_278;
  undefined1 local_277;
  Data *local_270;
  Data *local_268;
  Data *local_260;
  undefined4 local_258;
  Data *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  undefined4 local_238 [2];
  QArrayData *local_230;
  QArrayData *local_228;
  byte local_220;
  undefined1 local_21f;
  Data *local_218;
  Data *local_210;
  Data *local_208;
  undefined4 local_200;
  Data *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  undefined4 local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  byte local_1c8;
  undefined1 local_1c7;
  Data *local_1c0;
  Data *local_1b8;
  Data *local_1b0;
  undefined4 local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  undefined4 local_190 [2];
  QArrayData *local_188;
  QArrayData *local_180;
  byte local_178;
  undefined1 local_177;
  Data *local_170;
  Data *local_168;
  Data *local_160;
  undefined4 local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  undefined4 local_140 [2];
  QArrayData *local_138;
  QArrayData *local_130;
  byte local_128;
  undefined1 local_127;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  undefined4 local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined4 local_f0 [2];
  QArrayData *local_e8;
  QArrayData *local_e0;
  byte local_d8;
  undefined1 local_d7;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  undefined4 local_a8 [2];
  QArrayData *local_a0;
  QArrayData *local_98;
  byte local_90;
  undefined1 local_8f;
  QArrayData *local_88;
  QArrayData *local_80;
  Data *local_78;
  undefined *local_70;
  int local_68;
  undefined4 local_64;
  int *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  _func_void_Node_ptr *local_48;
  int local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  lVar10 = FUN_1003b0a60(param_3);
  if (lVar10 == 0) {
    return;
  }
  iVar6 = FileDevSelectorHelpers::getSelectorType(param_4);
  if ((*(uint *)(param_6 + 8) & 0x3fffffff) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1003af220(&local_48,param_6);
    puVar4 = PTR_s_widgetType_1021f1e98;
    iVar6 = -1;
    if (PTR_s_widgetType_1021f1e98 != (undefined *)0x0) {
      sVar11 = _strlen(PTR_s_widgetType_1021f1e98);
      iVar6 = (int)sVar11;
    }
    local_50 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar6);
    iVar6 = FUN_1002edf40(&local_48,&local_50);
    if (DAT_102273fd0 == 0) {
      DAT_102273fd0 = FUN_10041cb70("CPrlFileDevSelector::FileDevSelectorType",0xffffffffffffffff,1)
      ;
    }
    uVar20 = DAT_102273fd0;
    uVar7 = QVariant::userType();
    if (uVar20 == uVar7) {
      piVar12 = (int *)QVariant::constData();
      iVar6 = *piVar12;
    }
    else {
      cVar5 = QVariant::convert(iVar6,(void *)(ulong)uVar20);
      iVar6 = 0;
      if (cVar5 != '\0') {
        iVar6 = local_3c;
      }
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fb42d;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1003fb42d:
    puVar4 = PTR_s_widgetMode_1021f1ea0;
    iVar8 = -1;
    if (PTR_s_widgetMode_1021f1ea0 != (undefined *)0x0) {
      sVar11 = _strlen(PTR_s_widgetMode_1021f1ea0);
      iVar8 = (int)sVar11;
    }
    local_58 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar8);
    iVar8 = FUN_1002edf40(&local_48,&local_58);
    if (DAT_102273ff0 == 0) {
      DAT_102273ff0 = FUN_10041ccc0("CPrlFileDevSelector::FileDevSelectorMode",0xffffffffffffffff,1)
      ;
    }
    uVar20 = DAT_102273ff0;
    uVar7 = QVariant::userType();
    if (uVar20 == uVar7) {
      puVar13 = (undefined4 *)QVariant::constData();
      uVar9 = *puVar13;
    }
    else {
      cVar5 = QVariant::convert(iVar8,(void *)(ulong)uVar20);
      uVar9 = 0;
      if (cVar5 != '\0') {
        uVar9 = local_38;
      }
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fb4f0;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1003fb4f0:
    if (*(int *)(local_48 + 0x10) != -1) {
      if (*(int *)(local_48 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_48 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fb51b;
      }
      QHashData::free_helper(local_48);
    }
  }
LAB_1003fb51b:
  puVar4 = PTR_shared_null_1021e15e8;
  local_70 = PTR_shared_null_1021e15e8;
  local_68 = iVar6;
  local_64 = uVar9;
  FUN_10041a130(&local_60,&local_70);
  if (*(int *)puVar4 != -1) {
    if (*(int *)puVar4 != 0) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fb567;
    }
    FUN_10041a960(&local_70,PTR_shared_null_1021e15e8);
  }
LAB_1003fb567:
  uVar14 = FUN_1003b0a60(param_3);
  lVar10 = FUN_10015a340(uVar14);
  local_78 = (Data *)puVar4;
  switch(param_4) {
  case 3:
    FUN_1004195e0(&local_78,*(undefined8 *)(lVar10 + 0x140));
    break;
  default:
    goto switchD_1003fb59d_caseD_4;
  case 5:
    if (param_5 == '\0') {
      uVar14 = FUN_1001d50a0();
      lVar10 = FUN_1001d5130(uVar14);
      plVar18 = *(long **)(lVar10 + 0x148);
      local_d0 = (Data *)*plVar18;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 == 0) {
          QListData::detach((int)&local_d0);
          lVar19 = (long)*(int *)(local_d0 + 8);
          lVar10 = *plVar18;
          if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_d0 + lVar19 * 8) &&
             (lVar21 = *(int *)(local_d0 + 0xc) - lVar19,
             lVar21 != 0 && lVar19 <= *(int *)(local_d0 + 0xc))) {
            _memcpy(local_d0 + lVar19 * 8 + 0x10,
                    (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar21 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + 1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
        }
      }
      local_c8 = local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10;
      local_c0 = local_d0 + (long)*(int *)(local_d0 + 0xc) * 8 + 0x10;
      if (*(int *)(local_d0 + 8) != *(int *)(local_d0 + 0xc)) {
        do {
          local_b8 = 1;
          plVar18 = *(long **)local_c8;
          (**(code **)(*plVar18 + 0xb8))(&local_f8,plVar18);
          (**(code **)(*plVar18 + 0xa8))(&local_100,plVar18);
          local_f0[0] = 4;
          local_e8 = local_f8;
          if (1 < *(int *)local_f8 + 1U) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + 1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
          }
          local_e0 = local_100;
          if (1 < *(int *)local_100 + 1U) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + 1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
          }
          local_d8 = 0;
          local_d7 = 0;
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fbda3;
            }
            QArrayData::deallocate(local_100,2,8);
          }
LAB_1003fbda3:
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fbdd9;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_1003fbdd9:
          uVar9 = FileDevSelectorHelpers::getEmulationType(local_f0[0],5);
          local_d8 = FUN_1003b84e0(param_3,5,uVar9,&local_e8,0xffffffff,0);
          local_d8 = local_d8 ^ 1;
          FUN_100419750(&local_60,local_f0);
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fbe56;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
LAB_1003fbe56:
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fbe8c;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_1003fbe8c:
          local_c8 = local_c8 + 8;
        } while (local_c8 != local_c0);
      }
      local_b8 = 1;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QListData::dispose(local_d0);
      }
    }
    else {
      uVar14 = FUN_1003b0a60(param_3);
      FUN_10015a320(uVar14);
      CDispUser::getUserWorkspace();
      CDispUserWorkspace::getUserHomeFolder();
      pQVar15 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
      CPrlFileDevSelector::setServerUserHomeFolder(pQVar15);
      FUN_1004195e0(&local_78,*(undefined8 *)(lVar10 + 0x148));
      if (*(int *)(local_78 + 0xc) != *(int *)(local_78 + 8)) {
        puVar16 = (undefined8 *)FUN_1004196a0(&local_78,0);
        (**(code **)(*(long *)*puVar16 + 0xa8))(&local_88);
        iVar6 = QString::compare_helper
                          (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),
                           "Default CD/DVD-ROM",0xffffffff,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fb692;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1003fb692:
        if (iVar6 != 0) {
          puVar16 = (undefined8 *)FUN_1004196a0(&local_78,0);
          (**(code **)(*(long *)*puVar16 + 0xb8))(&local_b0);
          local_98 = (QArrayData *)QString::fromAscii_helper("Default CD/DVD-ROM",0x12);
          local_a8[0] = 4;
          local_a0 = local_b0;
          if (1 < *(int *)local_b0 + 1U) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + 1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
          }
          iVar6 = *(int *)local_98;
          if (1 < iVar6 + 1U) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + 1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            iVar6 = *(int *)local_98;
          }
          local_90 = 0;
          local_8f = 0;
          if (iVar6 != -1) {
            if (iVar6 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fb747;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1003fb747:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fb77d;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_1003fb77d:
          uVar9 = FileDevSelectorHelpers::getEmulationType(local_a8[0],5);
          local_90 = FUN_1003b84e0(param_3,5,uVar9,&local_a0,0xffffffff,0);
          local_90 = local_90 ^ 1;
          FUN_100419750(&local_60,local_a8);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fb7fe;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1003fb7fe:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fb834;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
        }
      }
LAB_1003fb834:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
    break;
  case 6:
    if ((local_68 == 4) && (cVar5 = FUN_100d80630(1), cVar5 == '\0')) {
      plVar18 = *(long **)(lVar10 + 0x150);
      local_120 = (Data *)*plVar18;
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 == 0) {
          QListData::detach((int)&local_120);
          lVar19 = (long)*(int *)(local_120 + 8);
          lVar10 = *plVar18;
          if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_120 + lVar19 * 8) &&
             (lVar21 = *(int *)(local_120 + 0xc) - lVar19,
             lVar21 != 0 && lVar19 <= *(int *)(local_120 + 0xc))) {
            _memcpy(local_120 + lVar19 * 8 + 0x10,
                    (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar21 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + 1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
        }
      }
      local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
      local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
      if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
        do {
          local_108 = 1;
          cVar5 = FUN_100111b00(*(undefined8 *)local_118);
          if (cVar5 != '\0') {
            CHwHardDisk::getDeviceId();
            CHwHardDisk::getDeviceName();
            local_140[0] = 5;
            local_138 = local_148;
            if (1 < *(int *)local_148 + 1U) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + 1;
              local_31 = *(int *)local_148 != 0;
              UNLOCK();
            }
            local_130 = local_150;
            if (1 < *(int *)local_150 + 1U) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + 1;
              local_31 = *(int *)local_150 != 0;
              UNLOCK();
            }
            local_128 = 0;
            local_127 = 0;
            if (*(int *)local_150 != -1) {
              if (*(int *)local_150 != 0) {
                LOCK();
                *(int *)local_150 = *(int *)local_150 + -1;
                local_31 = *(int *)local_150 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fc005;
              }
              QArrayData::deallocate(local_150,2,8);
            }
LAB_1003fc005:
            if (*(int *)local_148 != -1) {
              if (*(int *)local_148 != 0) {
                LOCK();
                *(int *)local_148 = *(int *)local_148 + -1;
                local_31 = *(int *)local_148 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fc03b;
              }
              QArrayData::deallocate(local_148,2,8);
            }
LAB_1003fc03b:
            uVar9 = FileDevSelectorHelpers::getEmulationType(local_140[0],6);
            local_128 = FUN_1003b84e0(param_3,6,uVar9,&local_138,0xffffffff,0);
            local_128 = local_128 ^ 1;
            FUN_100419750(&local_60,local_140);
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                local_31 = *(int *)local_130 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fc0b8;
              }
              QArrayData::deallocate(local_130,2,8);
            }
LAB_1003fc0b8:
            if (*(int *)local_138 != -1) {
              if (*(int *)local_138 != 0) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + -1;
                local_31 = *(int *)local_138 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fc0f0;
              }
              QArrayData::deallocate(local_138,2,8);
            }
          }
LAB_1003fc0f0:
          local_118 = local_118 + 8;
        } while (local_118 != local_110);
      }
      local_108 = 1;
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QListData::dispose(local_120);
      }
    }
    break;
  case 10:
    FUN_1004195e0(&local_78,*(undefined8 *)(lVar10 + 0x158));
    break;
  case 0xb:
    FUN_1004195e0(&local_78,*(undefined8 *)(lVar10 + 0x160));
    plVar18 = *(long **)(lVar10 + 0x188);
    local_170 = (Data *)*plVar18;
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 == 0) {
        QListData::detach((int)&local_170);
        lVar19 = (long)*(int *)(local_170 + 8);
        lVar10 = *plVar18;
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_170 + lVar19 * 8) &&
           (lVar21 = *(int *)(local_170 + 0xc) - lVar19,
           lVar21 != 0 && lVar19 <= *(int *)(local_170 + 0xc))) {
          _memcpy(local_170 + lVar19 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar21 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + 1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
      }
    }
    local_168 = local_170 + (long)*(int *)(local_170 + 8) * 8 + 0x10;
    local_160 = local_170 + (long)*(int *)(local_170 + 0xc) * 8 + 0x10;
    if (*(int *)(local_170 + 8) != *(int *)(local_170 + 0xc)) {
      do {
        local_158 = 1;
        plVar18 = *(long **)local_168;
        (**(code **)(*plVar18 + 0xb8))(&local_198,plVar18);
        (**(code **)(*plVar18 + 0xa8))(&local_1a0,plVar18);
        local_190[0] = 8;
        local_188 = local_198;
        if (1 < *(int *)local_198 + 1U) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + 1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
        }
        local_180 = local_1a0;
        if (1 < *(int *)local_1a0 + 1U) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + 1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
        }
        local_178 = 0;
        local_177 = 0;
        if (*(int *)local_1a0 != -1) {
          if (*(int *)local_1a0 != 0) {
            LOCK();
            *(int *)local_1a0 = *(int *)local_1a0 + -1;
            local_31 = *(int *)local_1a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fbb43;
          }
          QArrayData::deallocate(local_1a0,2,8);
        }
LAB_1003fbb43:
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_31 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fbb79;
          }
          QArrayData::deallocate(local_198,2,8);
        }
LAB_1003fbb79:
        uVar9 = FileDevSelectorHelpers::getEmulationType(local_190[0],0xb);
        local_178 = FUN_1003b84e0(param_3,0xb,uVar9,&local_188,0xffffffff,0);
        local_178 = local_178 ^ 1;
        FUN_100419750(&local_60,local_190);
        if (*(int *)local_180 != -1) {
          if (*(int *)local_180 != 0) {
            LOCK();
            *(int *)local_180 = *(int *)local_180 + -1;
            local_31 = *(int *)local_180 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fbbf6;
          }
          QArrayData::deallocate(local_180,2,8);
        }
LAB_1003fbbf6:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fbc2c;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_1003fbc2c:
        local_168 = local_168 + 8;
      } while (local_168 != local_160);
    }
    local_158 = 1;
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QListData::dispose(local_170);
    }
  }
  local_1c0 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_1c0);
      lVar10 = (long)*(int *)(local_1c0 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_1c0 + lVar10 * 8) &&
         (lVar19 = *(int *)(local_1c0 + 0xc) - lVar10,
         lVar19 != 0 && lVar10 <= *(int *)(local_1c0 + 0xc))) {
        _memcpy(local_1c0 + lVar10 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar19 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_1b8 = local_1c0 + (long)*(int *)(local_1c0 + 8) * 8 + 0x10;
  local_1b0 = local_1c0 + (long)*(int *)(local_1c0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_1c0 + 8) != *(int *)(local_1c0 + 0xc)) {
    do {
      local_1a8 = 1;
      plVar18 = *(long **)local_1b8;
      uVar9 = FileDevSelectorHelpers::getRealDeviceItemType(param_4,0);
      (**(code **)(*plVar18 + 0xb8))(&local_1e8,plVar18);
      (**(code **)(*plVar18 + 0xa8))(&local_1f0,plVar18);
      local_1d8 = local_1e8;
      if (1 < *(int *)local_1e8 + 1U) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + 1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
      }
      local_1d0 = local_1f0;
      if (1 < *(int *)local_1f0 + 1U) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + 1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
      }
      local_1c8 = 0;
      local_1c7 = 0;
      local_1e0 = uVar9;
      if (*(int *)local_1f0 != -1) {
        if (*(int *)local_1f0 != 0) {
          LOCK();
          *(int *)local_1f0 = *(int *)local_1f0 + -1;
          local_31 = *(int *)local_1f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc2c1;
        }
        QArrayData::deallocate(local_1f0,2,8);
      }
LAB_1003fc2c1:
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc2f7;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_1003fc2f7:
      uVar9 = FileDevSelectorHelpers::getEmulationType(local_1e0,param_4);
      local_1c8 = FUN_1003b84e0(param_3,param_4,uVar9,&local_1d8,0xffffffff,0);
      local_1c8 = local_1c8 ^ 1;
      FUN_100419750(&local_60);
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc370;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_1003fc370:
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_31 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc3a6;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
LAB_1003fc3a6:
      local_1b8 = local_1b8 + 8;
    } while (local_1b8 != local_1b0);
  }
  puVar4 = PTR_shared_null_1021e15e8;
  local_1a8 = 1;
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fc402;
    }
    QListData::dispose(local_1c0);
  }
LAB_1003fc402:
  pQVar17 = (QList *)CPrlFileDevSelectorWidget::getFileDevSelector();
  local_1f8 = (Data *)puVar4;
  CPrlFileDevSelector::initMenuGroup2(pQVar17);
  local_218 = local_1f8;
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 == 0) {
      QListData::detach((int)&local_218);
      lVar10 = (long)*(int *)(local_218 + 8);
      if ((local_1f8 + (long)*(int *)(local_1f8 + 8) * 8 != local_218 + lVar10 * 8) &&
         (lVar19 = *(int *)(local_218 + 0xc) - lVar10,
         lVar19 != 0 && lVar10 <= *(int *)(local_218 + 0xc))) {
        _memcpy(local_218 + lVar10 * 8 + 0x10,local_1f8 + (long)*(int *)(local_1f8 + 8) * 8 + 0x10,
                lVar19 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + 1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
    }
  }
  local_210 = local_218 + (long)*(int *)(local_218 + 8) * 8 + 0x10;
  local_208 = local_218 + (long)*(int *)(local_218 + 0xc) * 8 + 0x10;
  if (*(int *)(local_218 + 8) != *(int *)(local_218 + 0xc)) {
    do {
      local_200 = 1;
      uVar9 = CPrlFileDevSelectorItem::getType();
      CPrlFileDevSelectorItem::getSystemName();
      CPrlFileDevSelectorItem::getUserFriendlyName();
      local_230 = local_240;
      if (1 < *(int *)local_240 + 1U) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + 1;
        local_31 = *(int *)local_240 != 0;
        UNLOCK();
      }
      local_228 = local_248;
      if (1 < *(int *)local_248 + 1U) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + 1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
      }
      local_220 = 0;
      local_21f = 1;
      local_238[0] = uVar9;
      if (*(int *)local_248 != -1) {
        if (*(int *)local_248 != 0) {
          LOCK();
          *(int *)local_248 = *(int *)local_248 + -1;
          local_31 = *(int *)local_248 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc58f;
        }
        QArrayData::deallocate(local_248,2,8);
      }
LAB_1003fc58f:
      if (*(int *)local_240 != -1) {
        if (*(int *)local_240 != 0) {
          LOCK();
          *(int *)local_240 = *(int *)local_240 + -1;
          local_31 = *(int *)local_240 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc5c5;
        }
        QArrayData::deallocate(local_240,2,8);
      }
LAB_1003fc5c5:
      uVar9 = FileDevSelectorHelpers::getEmulationType(local_238[0],param_4);
      local_220 = FUN_1003b84e0(param_3,param_4,uVar9,&local_230,0xffffffff,0);
      local_220 = local_220 ^ 1;
      FUN_100419750(&local_60,local_238);
      if (*(int *)local_228 != -1) {
        if (*(int *)local_228 != 0) {
          LOCK();
          *(int *)local_228 = *(int *)local_228 + -1;
          local_31 = *(int *)local_228 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc63e;
        }
        QArrayData::deallocate(local_228,2,8);
      }
LAB_1003fc63e:
      if (*(int *)local_230 != -1) {
        if (*(int *)local_230 != 0) {
          LOCK();
          *(int *)local_230 = *(int *)local_230 + -1;
          local_31 = *(int *)local_230 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc674;
        }
        QArrayData::deallocate(local_230,2,8);
      }
LAB_1003fc674:
      local_210 = local_210 + 8;
    } while (local_210 != local_208);
  }
  puVar4 = PTR_shared_null_1021e15e8;
  local_200 = 1;
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fc6d7;
    }
    QListData::dispose(local_218);
  }
LAB_1003fc6d7:
  if (*(int *)(local_1f8 + 0xc) != *(int *)(local_1f8 + 8)) {
    do {
      plVar18 = (long *)FUN_100419880(&local_1f8);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    } while (*(int *)(local_1f8 + 0xc) != *(int *)(local_1f8 + 8));
  }
  pQVar17 = (QList *)CPrlFileDevSelectorWidget::getFileDevSelector();
  local_250 = (Data *)puVar4;
  CPrlFileDevSelector::initMenuGroup3(pQVar17);
  local_270 = local_250;
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 == 0) {
      QListData::detach((int)&local_270);
      lVar10 = (long)*(int *)(local_270 + 8);
      if ((local_250 + (long)*(int *)(local_250 + 8) * 8 != local_270 + lVar10 * 8) &&
         (lVar19 = *(int *)(local_270 + 0xc) - lVar10,
         lVar19 != 0 && lVar10 <= *(int *)(local_270 + 0xc))) {
        _memcpy(local_270 + lVar10 * 8 + 0x10,local_250 + (long)*(int *)(local_250 + 8) * 8 + 0x10,
                lVar19 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + 1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
    }
  }
  local_268 = local_270 + (long)*(int *)(local_270 + 8) * 8 + 0x10;
  local_260 = local_270 + (long)*(int *)(local_270 + 0xc) * 8 + 0x10;
  if (*(int *)(local_270 + 8) != *(int *)(local_270 + 0xc)) {
    do {
      local_258 = 1;
      uVar9 = CPrlFileDevSelectorItem::getType();
      CPrlFileDevSelectorItem::getSystemName();
      CPrlFileDevSelectorItem::getUserFriendlyName();
      local_288 = local_298;
      if (1 < *(int *)local_298 + 1U) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + 1;
        local_31 = *(int *)local_298 != 0;
        UNLOCK();
      }
      local_280 = local_2a0;
      if (1 < *(int *)local_2a0 + 1U) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + 1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
      }
      local_278 = 0;
      local_277 = 1;
      local_290[0] = uVar9;
      if (*(int *)local_2a0 != -1) {
        if (*(int *)local_2a0 != 0) {
          LOCK();
          *(int *)local_2a0 = *(int *)local_2a0 + -1;
          local_31 = *(int *)local_2a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc89f;
        }
        QArrayData::deallocate(local_2a0,2,8);
      }
LAB_1003fc89f:
      if (*(int *)local_298 != -1) {
        if (*(int *)local_298 != 0) {
          LOCK();
          *(int *)local_298 = *(int *)local_298 + -1;
          local_31 = *(int *)local_298 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc8d5;
        }
        QArrayData::deallocate(local_298,2,8);
      }
LAB_1003fc8d5:
      uVar9 = FileDevSelectorHelpers::getEmulationType(local_290[0],param_4);
      local_278 = FUN_1003b84e0(param_3,param_4,uVar9,&local_288,0xffffffff,0);
      local_278 = local_278 ^ 1;
      FUN_100419750(&local_60,local_290);
      if (*(int *)local_280 != -1) {
        if (*(int *)local_280 != 0) {
          LOCK();
          *(int *)local_280 = *(int *)local_280 + -1;
          local_31 = *(int *)local_280 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc94e;
        }
        QArrayData::deallocate(local_280,2,8);
      }
LAB_1003fc94e:
      if (*(int *)local_288 != -1) {
        if (*(int *)local_288 != 0) {
          LOCK();
          *(int *)local_288 = *(int *)local_288 + -1;
          local_31 = *(int *)local_288 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fc984;
        }
        QArrayData::deallocate(local_288,2,8);
      }
LAB_1003fc984:
      local_268 = local_268 + 8;
    } while (local_268 != local_260);
  }
  local_258 = 1;
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fc9e0;
    }
    QListData::dispose(local_270);
  }
LAB_1003fc9e0:
  if (*(int *)(local_250 + 0xc) != *(int *)(local_250 + 8)) {
    do {
      plVar18 = (long *)FUN_100419880(&local_250);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    } while (*(int *)(local_250 + 0xc) != *(int *)(local_250 + 8));
  }
  QObject::blockSignals(SUB81(param_2,0));
  QObject::property((char *)&local_2c0);
  FUN_10041d030(local_2b0,&local_2c0);
  QVariant::~QVariant(&local_2c0);
  cVar5 = FUN_10041a360(local_2b0,&local_68);
  if (cVar5 == '\0') {
    CPrlFileDevSelectorWidget::clearUp();
    uVar14 = CPrlFileDevSelectorWidget::getFileDevSelector();
    CPrlFileDevSelector::setMode(uVar14,local_64);
    CPrlFileDevSelectorWidget::setCustomWidgetType(param_2,local_68);
    FUN_10041a130(&local_2e0,&local_60);
    local_2d8 = local_2e0 + (long)local_2e0[2] * 2 + 4;
    local_2d0 = local_2e0 + (long)local_2e0[3] * 2 + 4;
    local_2c8 = 1;
    if (local_2e0[2] != local_2e0[3]) {
      do {
        puVar13 = *(undefined4 **)local_2d8;
        pQVar2 = *(QArrayData **)(puVar13 + 2);
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        uVar9 = *puVar13;
        pQVar3 = *(QArrayData **)(puVar13 + 4);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        if (local_2c8 != 0) {
          if (*(ushort *)(puVar13 + 6) < 0x100) {
            if (1 < *(int *)pQVar2 + 1U) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + 1;
              local_31 = *(int *)pQVar2 != 0;
              UNLOCK();
            }
            if (1 < *(int *)pQVar3 + 1U) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + 1;
              local_31 = *(int *)pQVar3 != 0;
              UNLOCK();
            }
            local_2f0 = pQVar3;
            local_2e8 = pQVar2;
            CPrlFileDevSelectorWidget::addFileDevItem(param_2,uVar9,&local_2e8,&local_2f0);
            if (*(int *)local_2f0 != -1) {
              if (*(int *)local_2f0 != 0) {
                LOCK();
                *(int *)local_2f0 = *(int *)local_2f0 + -1;
                local_31 = *(int *)local_2f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fcbcb;
              }
              QArrayData::deallocate(local_2f0,2,8);
            }
LAB_1003fcbcb:
            if (*(int *)local_2e8 != -1) {
              if (*(int *)local_2e8 != 0) {
                LOCK();
                *(int *)local_2e8 = *(int *)local_2e8 + -1;
                local_31 = *(int *)local_2e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fcc10;
              }
              QArrayData::deallocate(local_2e8,2,8);
            }
          }
LAB_1003fcc10:
          local_2c8 = 0;
        }
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fcc45;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_1003fcc45:
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fcc74;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_1003fcc74:
        local_2d8 = local_2d8 + 2;
        uVar20 = local_2c8 ^ 1;
        bVar22 = local_2c8 != 1;
        local_2c8 = uVar20;
      } while ((bVar22) && (local_2d8 != local_2d0));
    }
    if (*local_2e0 != -1) {
      if (*local_2e0 != 0) {
        LOCK();
        *local_2e0 = *local_2e0 + -1;
        local_31 = *local_2e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fccdc;
      }
      FUN_10041a960(&local_2e0,local_2e0);
    }
  }
LAB_1003fccdc:
  FUN_1003fde20();
  QObject::blockSignals(SUB81(param_2,0));
  if (DAT_102273fd8 == 0) {
    DAT_102273fd8 = FUN_10041d260("FileDevSelectorInitInfo",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_300,DAT_102273fd8,&local_68,0);
  QObject::setProperty(param_2,(QVariant *)"InitInfo");
  QVariant::~QVariant(&local_300);
  if (*local_2a8 != -1) {
    if (*local_2a8 != 0) {
      LOCK();
      *local_2a8 = *local_2a8 + -1;
      local_31 = *local_2a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fcd85;
    }
    FUN_10041a960(&local_2a8,local_2a8);
  }
LAB_1003fcd85:
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fcdb1;
    }
    QListData::dispose(local_250);
  }
LAB_1003fcdb1:
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto switchD_1003fb59d_caseD_4;
    }
    QListData::dispose(local_1f8);
  }
switchD_1003fb59d_caseD_4:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fce03;
    }
    QListData::dispose(local_78);
  }
LAB_1003fce03:
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      UNLOCK();
      if (*local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10041a960(&local_60,local_60);
  }
  return;
}

