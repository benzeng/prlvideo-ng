
undefined1 FUN_10006bda0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  CHostHardwareInfo *this;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_1d8;
  long local_1d0;
  long local_1c0;
  long local_1b8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  CVmInfo local_180 [168];
  QArrayData *local_d8;
  QArrayData *local_d0;
  long *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  long local_a0;
  CBaseNode *local_98;
  CBaseNode *local_90;
  QString local_88 [3];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar10 = **(long **)(param_2 + 0xf8);
  uVar11 = (ulong)*(uint *)(lVar10 + 8);
  lVar15 = 0;
  lVar13 = 0;
  local_1b8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1d8 = 0;
  if ((int)*(uint *)(lVar10 + 8) < *(int *)(lVar10 + 0xc)) {
    lVar17 = 0;
    local_1b8 = 0;
    local_1d0 = 0;
    local_1c0 = 0;
    local_1d8 = 0;
    lVar14 = 0;
    lVar16 = 0;
    do {
      lVar10 = *(long *)(lVar10 + 0x10 + ((int)uVar11 + lVar17) * 8);
      CVmEventParameter::getParamName();
      iVar9 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "vm_cfg",0xffffffff);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006bec9;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10006bec9:
      lVar13 = lVar14;
      lVar15 = lVar10;
      lVar2 = local_1d8;
      lVar3 = local_1d0;
      lVar4 = local_1b8;
      if (iVar9 != 0) {
        CVmEventParameter::getParamName();
        iVar9 = QString::compare_helper
                          (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),
                           "disp_common_prefs",0xffffffff);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006bf35;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_10006bf35:
        lVar13 = lVar10;
        lVar15 = lVar16;
        if (iVar9 != 0) {
          CVmEventParameter::getParamName();
          iVar9 = QString::compare_helper
                            (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),
                             "vm_network_config_prefs",0xffffffff);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10006bfa0;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_10006bfa0:
          lVar13 = lVar14;
          lVar4 = lVar10;
          if (iVar9 != 0) {
            CVmEventParameter::getParamName();
            iVar9 = QString::compare_helper
                              (local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(local_58 + 4),
                               "host_hw_info",0xffffffff);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10006c00b;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_10006c00b:
            lVar3 = lVar10;
            lVar4 = local_1b8;
            if (iVar9 != 0) {
              CVmEventParameter::getParamName();
              iVar9 = QString::compare_helper
                                (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4)
                                 ,"encrypted_vm_password_hash",0xffffffff);
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10006c076;
                }
                QArrayData::deallocate(local_60,2,8);
              }
LAB_10006c076:
              lVar2 = lVar10;
              lVar3 = local_1d0;
              if (iVar9 != 0) {
                CVmEventParameter::getParamName();
                iVar9 = QString::compare_helper
                                  (local_68 + *(long *)(local_68 + 0x10),
                                   *(undefined4 *)(local_68 + 4),"encrypted_vm_test_plugins_path",
                                   0xffffffff);
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_31 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10006c0e1;
                  }
                  QArrayData::deallocate(local_68,2,8);
                }
LAB_10006c0e1:
                lVar2 = local_1d8;
                if (iVar9 != 0) {
                  CVmEventParameter::getParamName();
                  iVar9 = QString::compare_helper
                                    (local_70 + *(long *)(local_70 + 0x10),
                                     *(undefined4 *)(local_70 + 4),"vm_tis_backup",0xffffffff);
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_31 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10006c14c;
                    }
                    QArrayData::deallocate(local_70,2,8);
                  }
LAB_10006c14c:
                  if (iVar9 == 0) {
                    local_1c0 = lVar10;
                  }
                }
              }
            }
          }
        }
      }
      local_1b8 = lVar4;
      local_1d0 = lVar3;
      local_1d8 = lVar2;
      lVar17 = lVar17 + 1;
      lVar10 = **(long **)(param_2 + 0xf8);
      uVar11 = (ulong)*(int *)(lVar10 + 8);
      lVar14 = lVar13;
      lVar16 = lVar15;
    } while (lVar17 < (long)((long)*(int *)(lVar10 + 0xc) - uVar11));
  }
  local_88[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  bVar5 = FUN_100075330(&local_a0,param_2);
  if (((local_1d8 != 0 && (local_1b8 != 0 && (lVar13 != 0 && lVar15 != 0))) & bVar5) != 1) {
    FUN_1008e3970("","vm",0,"Error (!) Failed to get VM configurations [%p, %p, %p, %p, lic=%d ]",
                  lVar15,lVar13,local_1b8,local_1d8,bVar5);
    uVar7 = 0;
    goto LAB_10006c970;
  }
  CVmEventParameter::getParamValue();
  iVar9 = CBaseNode::fromString
                    ((CBaseNode *)(param_1 + 0x38),(QTypedArrayData<unsigned_short> *)&local_a8,
                     false,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006c2a3;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10006c2a3:
  if (iVar9 != 0) {
    FUN_1008e3970("","vm",0);
  }
  CVmEventParameter::getParamValue();
  iVar9 = CBaseNode::fromString
                    ((CBaseNode *)(param_1 + 0x128),(QTypedArrayData<unsigned_short> *)&local_b0,
                     false,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006c358;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10006c358:
  if (iVar9 != 0) {
    FUN_1008e3970("","vm",0);
  }
  CVmEventParameter::getParamValue();
  iVar9 = CBaseNode::fromString
                    ((CBaseNode *)(param_1 + 0x288),(QTypedArrayData<unsigned_short> *)&local_b8,
                     false,(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006c40c;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10006c40c:
  if (iVar9 != 0) {
    FUN_1008e3970("","vm",0);
  }
  CVmEventParameter::getParamValue();
  QString::operator=(local_88,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006c4aa;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_10006c4aa:
  if (local_1d0 != 0) {
    this = operator_new(0x1c8);
    CHostHardwareInfo::CHostHardwareInfo(this);
    local_c8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (local_c8 == (long *)0x0) {
      (**(code **)(*(long *)this + 0x88))(this);
      local_c8 = (long *)0x0;
      this = (CHostHardwareInfo *)0x0;
    }
    else {
      *(undefined4 *)(local_c8 + 1) = 1;
      local_c8[2] = (long)this;
      *local_c8 = (long)&PTR_FUN_100bfbb80;
    }
    CVmEventParameter::getParamValue();
    iVar9 = CBaseNode::fromString
                      ((CBaseNode *)this,(QTypedArrayData<unsigned_short> *)&local_d0,false,
                       (QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006c5c4;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_10006c5c4:
    if (iVar9 != 0) {
      FUN_1008e3970("","vm",0);
    }
    uVar12 = 0;
    if (*(long *)(DAT_1011c3698 + 0x1108) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(DAT_1011c3698 + 0x1108) + 0x10);
    }
    FUN_1000d7320(uVar12,&local_c8);
    if (local_c8 != (long *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
  }
  local_a0 = param_1 + 0x28;
  local_98 = (CBaseNode *)(param_1 + 0x128);
  local_90 = (CBaseNode *)(param_1 + 0x288);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmEncryption();
  cVar6 = CVmEncryption::isEnabled();
  if (cVar6 != '\0') {
    CDispCommonPreferences::getWorkspacePreferences();
    cVar6 = CDispWorkspacePreferences::isPluginsAllowed();
    if ((cVar6 != '\0') && (DAT_1011b6384 == '\0')) {
      DAT_1011b6384 = '\x01';
      FUN_1006eb040(&local_d8);
      iVar9 = FUN_100615e70(&local_d8);
      if (iVar9 < 0) {
        FUN_1007dd120(iVar9);
        FUN_1008e3970("","vm",0);
      }
      else {
        FUN_1008e3970("","vm",0);
      }
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006c766;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
  }
LAB_10006c766:
  uVar7 = FUN_1000b0980(*(undefined8 *)(param_1 + 0x20),&local_a0);
  if (local_1c0 == 0) goto LAB_10006c970;
  CVmInfo::CVmInfo(local_180);
  CVmEventParameter::getParamValue();
  iVar9 = CBaseNode::fromString
                    ((CBaseNode *)local_180,(QTypedArrayData<unsigned_short> *)&local_188,false,
                     (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006c802;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10006c802:
  if (iVar9 == 0) {
    lVar10 = CVmInfo::getGuestOsInformation();
    lVar13 = *(long *)(param_1 + 0x20) + 0x10840;
    if (lVar10 == 0) {
      local_198 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100471ab0(lVar13,&local_198);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006c964;
        }
        QArrayData::deallocate(local_198,2,8);
      }
    }
    else {
      bVar8 = (bool)CVmInfo::getGuestOsInformation();
      CBaseNode::toString(SUB81(&local_1a0,0),bVar8);
      FUN_100471ab0(lVar13,&local_1a0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006c964;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x20);
    local_190 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100471ab0(lVar10 + 0x10840,&local_190);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006c964;
      }
      QArrayData::deallocate(local_190,2,8);
    }
  }
LAB_10006c964:
  CVmInfo::~CVmInfo(local_180);
LAB_10006c970:
  if (*(int *)local_88[0].field0_0x0 != -1) {
    if (*(int *)local_88[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_88[0].field0_0x0 = *(int *)local_88[0].field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88[0].field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88[0].field0_0x0,2,8);
  }
  return uVar7;
}

