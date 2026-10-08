
undefined8 * FUN_1003da300(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  QVariant *pQVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined **ppuVar15;
  int iVar16;
  bool bVar17;
  QArrayData *local_1d8;
  undefined *local_1d0;
  long local_1c8;
  Data_conflict local_1c0;
  undefined4 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  _func_void_Node_ptr *local_170;
  int *local_168;
  int *local_160;
  int *local_158;
  int *local_150;
  uint local_148;
  QMapNodeBase *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  QVariant local_118;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  _func_void_Node_ptr *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  lVar7 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
  if (lVar7 == 0) {
    return param_1;
  }
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 == '\0') {
    return param_1;
  }
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  iVar5 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Custom",
                     0xffffffff,1);
  puVar3 = PTR_s_VmConfig_1021f1e00;
  if (iVar5 == 0) {
    iVar5 = -1;
    if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
      iVar5 = (int)sVar8;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
    FUN_1003ae3b0(&local_80,param_4,&local_88);
    FUN_1000626e0(&local_78,&local_80);
    local_70 = local_78;
    if (*local_78 != -1) {
      if (*local_78 == 0) {
        QListData::detach((int)&local_70);
        iVar5 = local_70[2];
        if (iVar5 != local_70[3]) {
          local_78 = local_78 + (long)local_78[2] * 2 + 4;
          piVar13 = local_70 + (long)iVar5 * 2 + 4;
          lVar7 = (long)local_70[3] * 8 + (long)iVar5 * -8;
          do {
            piVar2 = *(int **)local_78;
            *(int **)piVar13 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            local_78 = local_78 + 2;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_78 = *local_78 + 1;
        local_31 = *local_78 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)local_70[2] * 2 + 4;
    local_60 = local_70 + (long)local_70[3] * 2 + 4;
    local_58 = 1;
    FUN_100036370(&local_78);
    if (*(int *)(local_80 + 0x10) != -1) {
      if (*(int *)(local_80 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_80 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003dab74;
      }
      QHashData::free_helper(local_80);
    }
LAB_1003dab74:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003daba4;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1003daba4:
    if (local_58 != 0) {
      do {
        if (local_68 == local_60) break;
        local_90 = *(QArrayData **)local_68;
        if (1 < *(int *)local_90 + 1U) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
        if (local_58 != 0) {
          iVar5 = QString::compare_helper
                            (local_90 + *(long *)(local_90 + 0x10),*(int *)(local_90 + 4),
                             "Settings.SasProfile.Custom",0xffffffff,1);
          if (iVar5 == 0) {
            iVar5 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar8 = _strlen(puVar3);
              iVar5 = (int)sVar8;
            }
            local_98 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
            uVar9 = FUN_1003ae480(param_1,&local_98);
            pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_90);
            QVariant::QVariant(&local_a8,true);
            QVariant::operator=(pQVar10,&local_a8);
            QVariant::~QVariant(&local_a8);
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003db110;
              }
              QArrayData::deallocate(local_98,2,8);
            }
          }
          else {
            uVar9 = FUN_1003b0b10(*(undefined8 *)(param_2 + 0x18));
            cVar4 = FUN_1003be980(uVar9);
            if (cVar4 == '\0') {
              uVar9 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
              local_c0 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.AutoStart",0x1a);
              FUN_1003e1800(&local_b8,uVar9,&local_c0,0);
              iVar5 = QVariant::toInt((bool *)&local_b8);
              QVariant::~QVariant(&local_b8);
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_31 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003dace9;
                }
                QArrayData::deallocate(local_c0,2,8);
              }
LAB_1003dace9:
              if (iVar5 == 1) {
                iVar5 = -1;
                if (puVar3 != (undefined *)0x0) {
                  sVar8 = _strlen(puVar3);
                  iVar5 = (int)sVar8;
                }
                local_c8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
                uVar9 = FUN_1003ae480(param_1,&local_c8);
                pQVar10 = (QVariant *)FUN_1002edf40(uVar9);
                QVariant::QVariant(&local_d8,0);
                QVariant::operator=(pQVar10,&local_d8);
                QVariant::~QVariant(&local_d8);
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003db110;
                  }
                  QArrayData::deallocate(local_c8,2,8);
                }
              }
              else {
                uVar9 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
                local_f0 = (QArrayData *)
                           QString::fromAscii_helper("Settings.Startup.WindowMode",0x1b);
                FUN_1003e1800(&local_e8,uVar9,&local_f0,0);
                iVar5 = QVariant::toInt((bool *)&local_e8);
                QVariant::~QVariant(&local_e8);
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003daeec;
                  }
                  QArrayData::deallocate(local_f0,2,8);
                }
LAB_1003daeec:
                if (iVar5 == 5) {
                  iVar5 = -1;
                  if (puVar3 != (undefined *)0x0) {
                    sVar8 = _strlen(puVar3);
                    iVar5 = (int)sVar8;
                  }
                  local_f8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
                  uVar9 = FUN_1003ae480(param_1,&local_f8);
                  pQVar10 = (QVariant *)FUN_1002edf40(uVar9);
                  QVariant::QVariant(&local_108,0);
                  QVariant::operator=(pQVar10,&local_108);
                  QVariant::~QVariant(&local_108);
                  if (*(int *)local_f8 != -1) {
                    if (*(int *)local_f8 != 0) {
                      LOCK();
                      *(int *)local_f8 = *(int *)local_f8 + -1;
                      local_31 = *(int *)local_f8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1003db110;
                    }
                    QArrayData::deallocate(local_f8,2,8);
                  }
                }
                else {
                  uVar9 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
                  local_120 = (QArrayData *)
                              QString::fromAscii_helper("Settings.Shutdown.OnVmWindowClose",0x21);
                  FUN_1003e1800(&local_118,uVar9,&local_120,0);
                  iVar5 = QVariant::toInt((bool *)&local_118);
                  QVariant::~QVariant(&local_118);
                  if (*(int *)local_120 != -1) {
                    if (*(int *)local_120 != 0) {
                      LOCK();
                      *(int *)local_120 = *(int *)local_120 + -1;
                      local_31 = *(int *)local_120 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1003db040;
                    }
                    QArrayData::deallocate(local_120,2,8);
                  }
LAB_1003db040:
                  if (iVar5 == 5) {
                    iVar5 = -1;
                    if (puVar3 != (undefined *)0x0) {
                      sVar8 = _strlen(puVar3);
                      iVar5 = (int)sVar8;
                    }
                    local_128 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
                    uVar9 = FUN_1003ae480(param_1,&local_128);
                    pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_90);
                    QVariant::QVariant(&local_138,1);
                    QVariant::operator=(pQVar10,&local_138);
                    QVariant::~QVariant(&local_138);
                    if (*(int *)local_128 != -1) {
                      if (*(int *)local_128 != 0) {
                        LOCK();
                        *(int *)local_128 = *(int *)local_128 + -1;
                        local_31 = *(int *)local_128 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1003db110;
                      }
                      QArrayData::deallocate(local_128,2,8);
                    }
                  }
                }
              }
            }
          }
LAB_1003db110:
          local_58 = 0;
        }
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003db14d;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1003db14d:
        local_68 = local_68 + 2;
        uVar6 = local_58 ^ 1;
        bVar17 = local_58 != 1;
        local_58 = uVar6;
      } while (bVar17);
    }
    FUN_100036370(&local_70);
    goto LAB_1003db176;
  }
  CVmProfileHelper::StartupAndShutdown::get_profile_values();
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar8;
  }
  local_178 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  FUN_1003ae3b0(&local_170,param_4,&local_178);
  FUN_1000626e0(&local_168,&local_170);
  local_160 = local_168;
  if (*local_168 != -1) {
    if (*local_168 == 0) {
      QListData::detach((int)&local_160);
      iVar5 = local_160[2];
      if (iVar5 != local_160[3]) {
        local_168 = local_168 + (long)local_168[2] * 2 + 4;
        piVar13 = local_160 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_160[3] * 8 + (long)iVar5 * -8;
        do {
          piVar2 = *(int **)local_168;
          *(int **)piVar13 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_168 = local_168 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_168 = *local_168 + 1;
      local_31 = *local_168 != 0;
      UNLOCK();
    }
  }
  local_158 = local_160 + (long)local_160[2] * 2 + 4;
  local_150 = local_160 + (long)local_160[3] * 2 + 4;
  local_148 = 1;
  FUN_100036370(&local_168);
  if (*(int *)(local_170 + 0x10) != -1) {
    if (*(int *)(local_170 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_170 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003da5fd;
    }
    QHashData::free_helper(local_170);
  }
LAB_1003da5fd:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003da633;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1003da633:
  if (local_148 != 0) {
    do {
      if (local_158 == local_150) break;
      local_180.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_158;
      if (1 < *(int *)local_180.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_148 != 0) {
        iVar5 = QString::compare_helper
                          ((QArrayData *)
                           (local_180.field0_0x0 + *(long *)(local_180.field0_0x0 + 0x10)),
                           *(int *)(local_180.field0_0x0 + 4),"Settings.SasProfile.Custom",
                           0xffffffff,1);
        if (iVar5 == 0) {
          iVar5 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar8 = _strlen(puVar3);
            iVar5 = (int)sVar8;
          }
          local_188 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
          uVar9 = FUN_1003ae480(param_1,&local_188);
          pQVar10 = (QVariant *)FUN_1002edf40(uVar9);
          QVariant::QVariant(&local_198,false);
          QVariant::operator=(pQVar10,&local_198);
          QVariant::~QVariant(&local_198);
          if (*(int *)local_188 != -1) {
            if (*(int *)local_188 != 0) {
              LOCK();
              *(int *)local_188 = *(int *)local_188 + -1;
              local_31 = *(int *)local_188 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003daa40;
            }
            QArrayData::deallocate(local_188,2,8);
          }
        }
        else {
          iVar5 = QString::compare_helper
                            ((QArrayData *)
                             (local_180.field0_0x0 + *(long *)(local_180.field0_0x0 + 0x10)),
                             *(int *)(local_180.field0_0x0 + 4),"Settings.Startup.AutoStartDelay",
                             0xffffffff,1);
          if (iVar5 == 0) {
            iVar5 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar8 = _strlen(puVar3);
              iVar5 = (int)sVar8;
            }
            local_1a0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
            uVar9 = FUN_1003ae480(param_1,&local_1a0);
            pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_180);
            QVariant::QVariant(&local_1b0,5);
            QVariant::operator=(pQVar10,&local_1b0);
            QVariant::~QVariant(&local_1b0);
            if (*(int *)local_1a0 != -1) {
              if (*(int *)local_1a0 != 0) {
                LOCK();
                *(int *)local_1a0 = *(int *)local_1a0 + -1;
                local_31 = *(int *)local_1a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003daa40;
              }
              QArrayData::deallocate(local_1a0,2,8);
            }
          }
          else {
            local_1b8 = 0x80000000;
            local_1c0.field7 = 0;
            iVar5 = QString::compare_helper
                              (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                               "Manual",0xffffffff,1);
            local_1d0 = PTR_shared_null_1021e15e8;
            if (*(long *)(local_140 + 0x10) == 0) {
LAB_1003da85f:
              lVar11 = 0;
            }
            else {
              lVar7 = *(long *)(local_140 + 0x10);
              lVar14 = 0;
              do {
                while (lVar11 = lVar7, iVar16 = *(int *)(lVar11 + 0x18),
                      iVar16 < (int)(uint)(iVar5 != 0)) {
                  lVar7 = *(long *)(lVar11 + 0x10);
                  if (*(long *)(lVar11 + 0x10) == 0) {
                    if (lVar14 == 0) goto LAB_1003da85f;
                    iVar16 = *(int *)(lVar14 + 0x18);
                    lVar11 = lVar14;
                    goto LAB_1003da85b;
                  }
                }
                lVar7 = *(long *)(lVar11 + 8);
                lVar14 = lVar11;
              } while (*(long *)(lVar11 + 8) != 0);
LAB_1003da85b:
              if ((int)(uint)(iVar5 != 0) < iVar16) goto LAB_1003da85f;
            }
            ppuVar15 = (undefined **)(lVar11 + 0x20);
            if (lVar11 == 0) {
              ppuVar15 = &local_1d0;
            }
            FUN_1003df730(&local_1c8,ppuVar15);
            FUN_1003dec70(&local_1d0);
            uVar12 = (ulong)*(uint *)(local_1c8 + 8);
            lVar7 = 0;
            if ((int)*(uint *)(local_1c8 + 8) < *(int *)(local_1c8 + 0xc)) {
              do {
                cVar4 = operator==(*(QString **)(local_1c8 + 0x10 + ((int)uVar12 + lVar7) * 8),
                                   &local_180);
                if (cVar4 != '\0') {
                  QVariant::operator=((QVariant *)&local_1c0,
                                      (QVariant *)
                                      (*(long *)(local_1c8 + 0x10 +
                                                (*(int *)(local_1c8 + 8) + lVar7) * 8) + 8));
                }
                lVar7 = lVar7 + 1;
                uVar12 = (ulong)*(int *)(local_1c8 + 8);
              } while (lVar7 < (long)((long)*(int *)(local_1c8 + 0xc) - uVar12));
            }
            iVar5 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar8 = _strlen(puVar3);
              iVar5 = (int)sVar8;
            }
            local_1d8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
            uVar9 = FUN_1003ae480(param_1,&local_1d8);
            pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_180);
            QVariant::operator=(pQVar10,(QVariant *)&local_1c0);
            if (*(int *)local_1d8 != -1) {
              if (*(int *)local_1d8 != 0) {
                LOCK();
                *(int *)local_1d8 = *(int *)local_1d8 + -1;
                local_31 = *(int *)local_1d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003da97b;
              }
              QArrayData::deallocate(local_1d8,2,8);
            }
LAB_1003da97b:
            FUN_1003dec70(&local_1c8);
            QVariant::~QVariant((QVariant *)&local_1c0);
          }
        }
LAB_1003daa40:
        local_148 = 0;
      }
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003daa80;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_1003daa80:
      local_158 = local_158 + 2;
      uVar6 = local_148 ^ 1;
      bVar17 = local_148 != 1;
      local_148 = uVar6;
    } while (bVar17);
  }
  FUN_100036370(&local_160);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003db176;
    }
    if (*(long *)(local_140 + 0x10) != 0) {
      FUN_1003df6f0();
      QMapDataBase::freeTree(local_140,(int)*(undefined8 *)(local_140 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_140);
  }
LAB_1003db176:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

