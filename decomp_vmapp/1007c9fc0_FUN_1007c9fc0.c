
void FUN_1007c9fc0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  uint local_300;
  QReadWriteLock local_2e0 [24];
  _func_void_Node_ptr *local_2c8;
  _func_void_Node_ptr *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  undefined8 local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  undefined8 local_290;
  Data *local_288;
  Data *local_280;
  Data *local_278;
  undefined4 local_270;
  Data *local_268;
  long *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  undefined8 local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  undefined8 local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  undefined8 local_218;
  long *local_210;
  long *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  undefined8 local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  undefined8 local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  long *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  undefined8 local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  undefined8 local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  undefined8 local_158;
  long *local_150;
  long *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  undefined8 local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  undefined8 local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  QArrayData *local_e8;
  QArrayData *local_e0;
  undefined8 local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined8 local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined8 local_70;
  long *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar17 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  FUN_100796f30(&local_68,uVar17);
  local_70 = 0;
  bVar21 = true;
  if (*(ushort *)(param_1 + 0x58) < 7) {
    if (*(ushort *)(param_1 + 0x58) == 6) {
      bVar21 = *(short *)(param_1 + 0x5a) != 0;
    }
    else {
      bVar21 = false;
    }
  }
  if ((((*(long *)(param_1 + 0xe0) == 0) || (*(long *)(*(long *)(param_1 + 0xe0) + 0x10) == 0)) ||
      (*(long *)(param_1 + 0xe8) == 0)) || (*(long *)(*(long *)(param_1 + 0xe8) + 0x10) == 0)) {
    local_80 = *(QArrayData **)(param_1 + 0x10);
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_59 = *(int *)local_80 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_59 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007cbcaa;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1007cbcaa:
    if (*(int *)local_80 == -1) {
LAB_1007cbdaf:
      local_300 = 0;
    }
    else {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_59 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007cbdaf;
      }
      local_300 = 0;
      QArrayData::deallocate(local_80,2,8);
    }
  }
  else if ((local_68 == (long *)0x0) || (local_68[2] == 0)) {
    local_90 = *(QArrayData **)(param_1 + 0x10);
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_59 = *(int *)local_90 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                  local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_59 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007cbd7d;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_1007cbd7d:
    if (*(int *)local_90 == -1) goto LAB_1007cbdaf;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_59 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1007cbdaf;
    }
    local_300 = 0;
    QArrayData::deallocate(local_90,2,8);
  }
  else {
    uVar1 = param_1 + 0x110;
    QMutex::lock();
    *(undefined2 *)(param_1 + 0x128) = 0;
    plVar2 = *(long **)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar10 = plVar2 + 1;
      lVar14 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = (long *)(param_1 + 200);
    if (local_68 != (long *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    plVar10 = (long *)*plVar2;
    *plVar2 = (long)local_68;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar14 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 3;
    QWaitCondition::wakeOne();
    QMutex::unlock();
    if (bVar21) {
      FUN_10078f010(&local_70);
    }
    uVar9 = uVar1 | 1;
    lVar14 = param_1 + 0x34;
    lVar15 = param_1 + 0x44;
    local_300 = 0;
    do {
      QMutex::lock();
      iVar7 = 6;
      uVar19 = uVar9;
      if (*(int *)(param_1 + 0xf0) != 1) {
        iVar5 = FUN_10087db60(*(undefined8 *)(param_1 + 0x140),10,0,0);
        if (bVar21) {
          local_98 = 0;
          FUN_10078f010(&local_98);
          uVar6 = FUN_10078f030(&local_70,&local_98);
          if (uVar6 < 10000) {
            uVar17 = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
            }
            plVar10 = (long *)FUN_100797860(uVar17,plVar2);
          }
          else {
            uVar17 = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
            }
            plVar10 = (long *)FUN_1007978c0(uVar17,plVar2);
          }
        }
        else {
          uVar17 = 0;
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
          }
          plVar10 = (long *)FUN_100797860(uVar17,plVar2);
        }
        if ((iVar5 < 1) && (plVar10 == (long *)0x0)) {
          cVar4 = QWaitCondition::wait((QMutex *)(param_1 + 0x100),uVar1);
          if (*(int *)(param_1 + 0xf0) != 1) {
            if (cVar4 == '\0') {
              uVar17 = 0;
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
              }
              plVar10 = (long *)FUN_1007978c0(uVar17,plVar2);
              goto LAB_1007ca330;
            }
            goto LAB_1007ca338;
          }
        }
        else {
LAB_1007ca330:
          if (plVar10 == (long *)0x0) {
LAB_1007ca338:
            uVar17 = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
            }
            plVar10 = (long *)FUN_100797860(uVar17,plVar2);
          }
          QMutex::unlock();
          iVar7 = FUN_10087db60(*(undefined8 *)(param_1 + 0x140),10,0,0);
          if (iVar7 != 0) {
            FUN_1007c97d0(param_1,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xd0),0,
                          0);
            iVar7 = 0x13;
            uVar19 = uVar1 & 0xfffffffffffffffe;
            if (plVar10 == (long *)0x0) goto LAB_1007cb780;
          }
          uVar19 = 0;
          if ((uVar1 & 0xfffffffffffffffe) != 0) {
            QMutex::lock();
            uVar19 = uVar9;
          }
          uVar6 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x130));
          iVar7 = 0x13;
          if ((plVar10 != (long *)0x0) && ((uVar6 & 0x3000) == 0)) {
            if ((uVar19 & 1) != 0) {
              uVar19 = 0;
              QMutex::unlock();
            }
            uVar17 = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
            }
            FUN_1007978c0(uVar17,plVar2);
            local_a0 = (long *)plVar10[0xc];
            if (local_a0 != (long *)0x0) {
              LOCK();
              *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
              UNLOCK();
            }
            FUN_10078f010(&local_a8);
            pcVar3 = *(code **)(local_a0[2] + 0x58);
            if (pcVar3 != (code *)0x0) {
              uVar17 = *(undefined8 *)(local_a0[2] + 0x68);
              FUN_1007d6bb0(&local_b0,lVar14);
              FUN_1007d6bb0(&local_b8,lVar15);
              (*pcVar3)(0,uVar17,&local_b0,&local_b8,0,&local_a0);
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_59 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007ca520;
                }
                QArrayData::deallocate(local_b8,2,8);
              }
LAB_1007ca520:
              if (*(int *)local_b0 != -1) {
                if (*(int *)local_b0 != 0) {
                  LOCK();
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  local_59 = *(int *)local_b0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007ca556;
                }
                QArrayData::deallocate(local_b0,2,8);
              }
LAB_1007ca556:
              FUN_10078f010(&local_c0);
              uVar6 = FUN_10078f030(&local_a8,&local_c0);
              local_a8 = local_c0;
              if (9999 < uVar6) {
                local_d0 = *(QArrayData **)(param_1 + 0x10);
                if (1 < *(int *)local_d0 + 1U) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + 1;
                  local_59 = *(int *)local_d0 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                FUN_1008e3970("","IOCommunication",0,
                              "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                              ,local_c8 + *(long *)(local_c8 + 0x10),uVar6);
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_59 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007ca625;
                  }
                  QArrayData::deallocate(local_c8,1,8);
                }
LAB_1007ca625:
                if (*(int *)local_d0 != -1) {
                  if (*(int *)local_d0 != 0) {
                    LOCK();
                    *(int *)local_d0 = *(int *)local_d0 + -1;
                    local_59 = *(int *)local_d0 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007ca65b;
                  }
                  QArrayData::deallocate(local_d0,2,8);
                }
              }
            }
LAB_1007ca65b:
            (**(code **)**(undefined8 **)(param_1 + 0x28))
                      (*(undefined8 **)(param_1 + 0x28),param_1,&local_a0);
            FUN_10078f010(&local_d8);
            uVar6 = FUN_10078f030(&local_a8,&local_d8);
            local_a8 = local_d8;
            if (9999 < uVar6) {
              local_e8 = *(QArrayData **)(param_1 + 0x10);
              if (1 < *(int *)local_e8 + 1U) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + 1;
                local_59 = *(int *)local_e8 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_1008e3970("","IOCommunication",0,
                            "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                            ,local_e0 + *(long *)(local_e0 + 0x10),uVar6);
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_59 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007ca740;
                }
                QArrayData::deallocate(local_e0,1,8);
              }
LAB_1007ca740:
              if (*(int *)local_e8 != -1) {
                if (*(int *)local_e8 != 0) {
                  LOCK();
                  *(int *)local_e8 = *(int *)local_e8 + -1;
                  local_59 = *(int *)local_e8 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007ca776;
                }
                QArrayData::deallocate(local_e8,2,8);
              }
            }
LAB_1007ca776:
            iVar7 = FUN_100794160(param_1 + 0xa0,*(undefined4 *)(local_a0[2] + 0x40));
            local_ec = 0xffffffff;
            if (*(int *)(local_a0[2] + 0x40) == 7) {
              local_ec = FUN_100790840(&local_a0);
            }
            if (iVar7 == 2) {
              local_300 = FUN_1007c91d0(param_1,*(undefined4 *)(param_1 + 0xf8),
                                        *(undefined4 *)(param_1 + 0xd0),plVar10 + 1,0x52,0,&local_ec
                                       );
            }
            else {
              local_300 = FUN_1007c8b60(param_1,*(undefined4 *)(param_1 + 0xf8),plVar10 + 1,0x52,0,
                                        &local_ec);
            }
            if (local_300 == 0) {
              lVar20 = local_a0[2];
              uVar6 = *(uint *)(lVar20 + 0x4c);
              uVar16 = 0x52;
              if ((ulong)uVar6 != 0) {
                if (uVar6 < 2) {
                  if (local_a0 == (long *)0x0) {
                    lVar20 = 0;
                  }
                  lVar20 = lVar20 + 0x88;
                }
                else {
                  lVar20 = lVar20 + 0x80 + (ulong)uVar6 * 8;
                }
                if (iVar7 == 2) {
                  iVar5 = uVar6 * 8;
                  if (uVar6 < 2) {
                    iVar5 = 8;
                  }
                  local_300 = FUN_1007c91d0(param_1,*(undefined4 *)(param_1 + 0xf8),
                                            *(undefined4 *)(param_1 + 0xd0),lVar20,iVar5,0,0);
                }
                else {
                  iVar5 = uVar6 * 8;
                  if (uVar6 < 2) {
                    iVar5 = 8;
                  }
                  local_300 = FUN_1007c8b60(param_1,*(undefined4 *)(param_1 + 0xf8),lVar20,iVar5);
                }
                if (local_300 != 0) {
                  uVar6 = local_300;
                  if ((local_300 & 0xfffffffe) == 8) {
                    uVar6 = 1;
                  }
                  FUN_10078f010(&local_158);
                  pcVar3 = *(code **)(local_a0[2] + 0x60);
                  if (pcVar3 != (code *)0x0) {
                    uVar17 = *(undefined8 *)(local_a0[2] + 0x68);
                    FUN_1007d6bb0(&local_160,lVar14);
                    FUN_1007d6bb0(&local_168,lVar15);
                    (*pcVar3)(1,uVar17,&local_160,&local_168);
                    if (*(int *)local_168 != -1) {
                      if (*(int *)local_168 != 0) {
                        LOCK();
                        *(int *)local_168 = *(int *)local_168 + -1;
                        local_59 = *(int *)local_168 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1007cadf6;
                      }
                      QArrayData::deallocate(local_168,2,8);
                    }
LAB_1007cadf6:
                    if (*(int *)local_160 != -1) {
                      if (*(int *)local_160 != 0) {
                        LOCK();
                        *(int *)local_160 = *(int *)local_160 + -1;
                        local_59 = *(int *)local_160 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1007cae2c;
                      }
                      QArrayData::deallocate(local_160,2,8);
                    }
LAB_1007cae2c:
                    FUN_10078f010(&local_170);
                    uVar8 = FUN_10078f030(&local_158,&local_170);
                    local_158 = local_170;
                    if (9999 < uVar8) {
                      local_180 = *(QArrayData **)(param_1 + 0x10);
                      if (1 < *(int *)local_180 + 1U) {
                        LOCK();
                        *(int *)local_180 = *(int *)local_180 + 1;
                        local_59 = *(int *)local_180 != 0;
                        UNLOCK();
                      }
                      QString::toLocal8Bit();
                      FUN_1008e3970("","IOCommunication",0,
                                    "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                                   );
                      if (*(int *)local_178 != -1) {
                        if (*(int *)local_178 != 0) {
                          LOCK();
                          *(int *)local_178 = *(int *)local_178 + -1;
                          local_59 = *(int *)local_178 != 0;
                          UNLOCK();
                          if ((bool)local_59) goto LAB_1007caefb;
                        }
                        QArrayData::deallocate(local_178,1,8);
                      }
LAB_1007caefb:
                      if (*(int *)local_180 != -1) {
                        if (*(int *)local_180 != 0) {
                          LOCK();
                          *(int *)local_180 = *(int *)local_180 + -1;
                          local_59 = *(int *)local_180 != 0;
                          UNLOCK();
                          if ((bool)local_59) goto LAB_1007caf31;
                        }
                        QArrayData::deallocate(local_180,2,8);
                      }
                    }
                  }
LAB_1007caf31:
                  (**(code **)(**(long **)(param_1 + 0x28) + 8))
                            (*(long **)(param_1 + 0x28),param_1,uVar6,&local_a0);
                  FUN_10078f010(&local_188);
                  uVar8 = FUN_10078f030(&local_158,&local_188);
                  local_158 = local_188;
                  if (9999 < uVar8) {
                    local_198 = *(QArrayData **)(param_1 + 0x10);
                    if (1 < *(int *)local_198 + 1U) {
                      LOCK();
                      *(int *)local_198 = *(int *)local_198 + 1;
                      local_59 = *(int *)local_198 != 0;
                      UNLOCK();
                    }
                    QString::toLocal8Bit();
                    FUN_1008e3970("","IOCommunication",0,
                                  "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                                 );
                    if (*(int *)local_190 != -1) {
                      if (*(int *)local_190 != 0) {
                        LOCK();
                        *(int *)local_190 = *(int *)local_190 + -1;
                        local_59 = *(int *)local_190 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1007cb01a;
                      }
                      QArrayData::deallocate(local_190,1,8);
                    }
LAB_1007cb01a:
                    if (*(int *)local_198 != -1) {
                      if (*(int *)local_198 != 0) {
                        LOCK();
                        *(int *)local_198 = *(int *)local_198 + -1;
                        local_59 = *(int *)local_198 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1007cb050;
                      }
                      QArrayData::deallocate(local_198,2,8);
                    }
                  }
LAB_1007cb050:
                  uVar17 = 0;
                  if (*plVar10 != 0) {
                    uVar17 = *(undefined8 *)(*plVar10 + 0x10);
                  }
                  FUN_1007964d0(uVar17,uVar6);
                  uVar17 = 0;
                  if (*plVar10 != 0) {
                    uVar17 = *(undefined8 *)(*plVar10 + 0x10);
                  }
                  local_1a0 = (QArrayData *)PTR_shared_null_100ba20d0;
                  local_1a8 = (long *)0x0;
                  FUN_100796540(uVar17,uVar6,&local_1a0,&local_1a8);
                  if (local_1a8 != (long *)0x0) {
                    LOCK();
                    plVar12 = local_1a8 + 1;
                    lVar20 = *plVar12;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)lVar20 == 1) {
                      (**(code **)(*local_1a8 + 0x10))();
                    }
                  }
                  if (*(int *)local_1a0 != -1) {
                    if (*(int *)local_1a0 != 0) {
                      LOCK();
                      *(int *)local_1a0 = *(int *)local_1a0 + -1;
                      local_59 = *(int *)local_1a0 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1007cb111;
                    }
                    QArrayData::deallocate(local_1a0,2,8);
                  }
LAB_1007cb111:
                  uVar17 = 0;
                  if (*(long *)(param_1 + 0x18) != 0) {
                    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
                  }
                  local_1b0 = (long *)*plVar2;
                  if (local_1b0 != (long *)0x0) {
                    LOCK();
                    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                    UNLOCK();
                  }
                  FUN_1007978e0(uVar17,&local_1b0,plVar10);
                  iVar7 = 6;
                  if (local_1b0 != (long *)0x0) {
                    LOCK();
                    plVar10 = local_1b0 + 1;
                    lVar20 = *plVar10;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)lVar20 == 1) {
                      (**(code **)(*local_1b0 + 0x10))();
                    }
                  }
                  goto LAB_1007cb753;
                }
                lVar13 = local_a0[2];
                uVar6 = *(uint *)(lVar13 + 0x4c);
                if ((ulong)uVar6 < 2) {
                  uVar11 = 0x5a;
                  uVar16 = 0x5a;
                  if (uVar6 == 0) goto LAB_1007cb274;
                }
                else {
                  uVar11 = (ulong)uVar6 * 8 + 0x52;
                }
                lVar18 = 0;
                uVar16 = uVar11;
                do {
                  iVar5 = *(int *)(lVar20 + 4 + lVar18 * 8);
                  if (iVar5 != 0) {
                    if (iVar7 == 2) {
                      lVar13 = *(long *)(lVar13 + 0x80 + lVar18 * 8);
                      uVar17 = 0;
                      if (lVar13 != 0) {
                        uVar17 = *(undefined8 *)(lVar13 + 0x10);
                      }
                      local_300 = FUN_1007c91d0(param_1,*(undefined4 *)(param_1 + 0xf8),
                                                *(undefined4 *)(param_1 + 0xd0),uVar17,iVar5,0,0);
                    }
                    else {
                      lVar13 = *(long *)(lVar13 + 0x80 + lVar18 * 8);
                      uVar17 = 0;
                      if (lVar13 != 0) {
                        uVar17 = *(undefined8 *)(lVar13 + 0x10);
                      }
                      local_300 = FUN_1007c8b60(param_1,*(undefined4 *)(param_1 + 0xf8),uVar17,iVar5
                                               );
                    }
                    if (local_300 != 0) {
                      uVar6 = local_300;
                      if ((local_300 & 0xfffffffe) == 8) {
                        uVar6 = 1;
                      }
                      FUN_10078f010(&local_1b8);
                      pcVar3 = *(code **)(local_a0[2] + 0x60);
                      if (pcVar3 != (code *)0x0) {
                        uVar17 = *(undefined8 *)(local_a0[2] + 0x68);
                        FUN_1007d6bb0(&local_1c0,lVar14);
                        FUN_1007d6bb0(&local_1c8,lVar15);
                        (*pcVar3)(1,uVar17,&local_1c0,&local_1c8);
                        if (*(int *)local_1c8 != -1) {
                          if (*(int *)local_1c8 != 0) {
                            LOCK();
                            *(int *)local_1c8 = *(int *)local_1c8 + -1;
                            local_59 = *(int *)local_1c8 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1007cb863;
                          }
                          QArrayData::deallocate(local_1c8,2,8);
                        }
LAB_1007cb863:
                        if (*(int *)local_1c0 != -1) {
                          if (*(int *)local_1c0 != 0) {
                            LOCK();
                            *(int *)local_1c0 = *(int *)local_1c0 + -1;
                            local_59 = *(int *)local_1c0 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1007cb899;
                          }
                          QArrayData::deallocate(local_1c0,2,8);
                        }
LAB_1007cb899:
                        FUN_10078f010(&local_1d0);
                        uVar8 = FUN_10078f030(&local_1b8,&local_1d0);
                        local_1b8 = local_1d0;
                        if (9999 < uVar8) {
                          local_1e0 = *(QArrayData **)(param_1 + 0x10);
                          if (1 < *(int *)local_1e0 + 1U) {
                            LOCK();
                            *(int *)local_1e0 = *(int *)local_1e0 + 1;
                            local_59 = *(int *)local_1e0 != 0;
                            UNLOCK();
                          }
                          QString::toLocal8Bit();
                          FUN_1008e3970("","IOCommunication",0,
                                        "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                                       );
                          if (*(int *)local_1d8 != -1) {
                            if (*(int *)local_1d8 != 0) {
                              LOCK();
                              *(int *)local_1d8 = *(int *)local_1d8 + -1;
                              local_59 = *(int *)local_1d8 != 0;
                              UNLOCK();
                              if ((bool)local_59) goto LAB_1007cb968;
                            }
                            QArrayData::deallocate(local_1d8,1,8);
                          }
LAB_1007cb968:
                          if (*(int *)local_1e0 != -1) {
                            if (*(int *)local_1e0 != 0) {
                              LOCK();
                              *(int *)local_1e0 = *(int *)local_1e0 + -1;
                              local_59 = *(int *)local_1e0 != 0;
                              UNLOCK();
                              if ((bool)local_59) goto LAB_1007cb99e;
                            }
                            QArrayData::deallocate(local_1e0,2,8);
                          }
                        }
                      }
LAB_1007cb99e:
                      (**(code **)(**(long **)(param_1 + 0x28) + 8))
                                (*(long **)(param_1 + 0x28),param_1,uVar6,&local_a0);
                      FUN_10078f010(&local_1e8);
                      uVar8 = FUN_10078f030(&local_1b8,&local_1e8);
                      local_1b8 = local_1e8;
                      if (9999 < uVar8) {
                        local_1f8 = *(QArrayData **)(param_1 + 0x10);
                        if (1 < *(int *)local_1f8 + 1U) {
                          LOCK();
                          *(int *)local_1f8 = *(int *)local_1f8 + 1;
                          local_59 = *(int *)local_1f8 != 0;
                          UNLOCK();
                        }
                        QString::toLocal8Bit();
                        FUN_1008e3970("","IOCommunication",0,
                                      "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                                     );
                        if (*(int *)local_1f0 != -1) {
                          if (*(int *)local_1f0 != 0) {
                            LOCK();
                            *(int *)local_1f0 = *(int *)local_1f0 + -1;
                            local_59 = *(int *)local_1f0 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1007cba87;
                          }
                          QArrayData::deallocate(local_1f0,1,8);
                        }
LAB_1007cba87:
                        if (*(int *)local_1f8 != -1) {
                          if (*(int *)local_1f8 != 0) {
                            LOCK();
                            *(int *)local_1f8 = *(int *)local_1f8 + -1;
                            local_59 = *(int *)local_1f8 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1007cbabd;
                          }
                          QArrayData::deallocate(local_1f8,2,8);
                        }
                      }
LAB_1007cbabd:
                      uVar17 = 0;
                      if (*plVar10 != 0) {
                        uVar17 = *(undefined8 *)(*plVar10 + 0x10);
                      }
                      FUN_1007964d0(uVar17,uVar6);
                      uVar17 = 0;
                      if (*plVar10 != 0) {
                        uVar17 = *(undefined8 *)(*plVar10 + 0x10);
                      }
                      local_200 = (QArrayData *)PTR_shared_null_100ba20d0;
                      local_208 = (long *)0x0;
                      FUN_100796540(uVar17,uVar6,&local_200,&local_208);
                      if (local_208 != (long *)0x0) {
                        LOCK();
                        plVar12 = local_208 + 1;
                        lVar20 = *plVar12;
                        *(int *)plVar12 = (int)*plVar12 + -1;
                        UNLOCK();
                        if ((int)lVar20 == 1) {
                          (**(code **)(*local_208 + 0x10))();
                        }
                      }
                      if (*(int *)local_200 != -1) {
                        if (*(int *)local_200 != 0) {
                          LOCK();
                          *(int *)local_200 = *(int *)local_200 + -1;
                          local_59 = *(int *)local_200 != 0;
                          UNLOCK();
                          if ((bool)local_59) goto LAB_1007cbb7e;
                        }
                        QArrayData::deallocate(local_200,2,8);
                      }
LAB_1007cbb7e:
                      uVar17 = 0;
                      if (*(long *)(param_1 + 0x18) != 0) {
                        uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
                      }
                      local_210 = (long *)*plVar2;
                      if (local_210 != (long *)0x0) {
                        LOCK();
                        *(int *)(local_210 + 1) = (int)local_210[1] + 1;
                        UNLOCK();
                      }
                      FUN_1007978e0(uVar17,&local_210,plVar10);
                      iVar7 = 6;
                      if (local_210 != (long *)0x0) {
                        LOCK();
                        plVar10 = local_210 + 1;
                        lVar20 = *plVar10;
                        *(int *)plVar10 = (int)*plVar10 + -1;
                        UNLOCK();
                        if ((int)lVar20 == 1) {
                          (**(code **)(*local_210 + 0x10))();
                        }
                      }
                      goto LAB_1007cb753;
                    }
                    uVar16 = uVar16 + *(uint *)(lVar20 + 4 + lVar18 * 8);
                    lVar13 = local_a0[2];
                  }
                  lVar18 = lVar18 + 1;
                } while ((uint)lVar18 < *(uint *)(lVar13 + 0x4c));
              }
LAB_1007cb274:
              LOCK();
              **(long **)(param_1 + 0x148) = **(long **)(param_1 + 0x148) + 1;
              UNLOCK();
              if (DAT_1011ccc18 != (code *)0x0) {
                (*DAT_1011ccc18)(*(undefined1 *)(param_1 + 0xf8),0x31,
                                 (ulong)(iVar7 == 2) | (uVar16 & 0x3ffff) << 0xe |
                                 (ulong)*(uint *)(local_a0[2] + 0x40) << 0x20 |
                                 (ulong)((*(uint *)(local_a0[2] + 0x4c) & 0xf) << 10) |
                                 (ulong)((*(uint *)(param_1 + 0x20) & 0xf) << 6) | 0x1c);
              }
              FUN_10078f010(&local_218);
              pcVar3 = *(code **)(local_a0[2] + 0x60);
              if (pcVar3 != (code *)0x0) {
                uVar17 = *(undefined8 *)(local_a0[2] + 0x68);
                FUN_1007d6bb0(&local_220,lVar14);
                FUN_1007d6bb0(&local_228,lVar15);
                (*pcVar3)(1,uVar17,&local_220,&local_228);
                if (*(int *)local_228 != -1) {
                  if (*(int *)local_228 != 0) {
                    LOCK();
                    *(int *)local_228 = *(int *)local_228 + -1;
                    local_59 = *(int *)local_228 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007cb39a;
                  }
                  QArrayData::deallocate(local_228,2,8);
                }
LAB_1007cb39a:
                if (*(int *)local_220 != -1) {
                  if (*(int *)local_220 != 0) {
                    LOCK();
                    *(int *)local_220 = *(int *)local_220 + -1;
                    local_59 = *(int *)local_220 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007cb3d0;
                  }
                  QArrayData::deallocate(local_220,2,8);
                }
LAB_1007cb3d0:
                FUN_10078f010(&local_230);
                uVar6 = FUN_10078f030(&local_218,&local_230);
                local_218 = local_230;
                if (9999 < uVar6) {
                  local_240 = *(QArrayData **)(param_1 + 0x10);
                  if (1 < *(int *)local_240 + 1U) {
                    LOCK();
                    *(int *)local_240 = *(int *)local_240 + 1;
                    local_59 = *(int *)local_240 != 0;
                    UNLOCK();
                  }
                  QString::toLocal8Bit();
                  FUN_1008e3970("","IOCommunication",0,
                                "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                               );
                  if (*(int *)local_238 != -1) {
                    if (*(int *)local_238 != 0) {
                      LOCK();
                      *(int *)local_238 = *(int *)local_238 + -1;
                      local_59 = *(int *)local_238 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1007cb49f;
                    }
                    QArrayData::deallocate(local_238,1,8);
                  }
LAB_1007cb49f:
                  if (*(int *)local_240 != -1) {
                    if (*(int *)local_240 != 0) {
                      LOCK();
                      *(int *)local_240 = *(int *)local_240 + -1;
                      local_59 = *(int *)local_240 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1007cb4d5;
                    }
                    QArrayData::deallocate(local_240,2,8);
                  }
                }
              }
LAB_1007cb4d5:
              (**(code **)(**(long **)(param_1 + 0x28) + 8))
                        (*(long **)(param_1 + 0x28),param_1,0,&local_a0);
              FUN_10078f010(&local_248);
              uVar6 = FUN_10078f030(&local_218,&local_248);
              local_218 = local_248;
              if (9999 < uVar6) {
                local_258 = *(QArrayData **)(param_1 + 0x10);
                if (1 < *(int *)local_258 + 1U) {
                  LOCK();
                  *(int *)local_258 = *(int *)local_258 + 1;
                  local_59 = *(int *)local_258 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                FUN_1008e3970("","IOCommunication",0,
                              "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                             );
                if (*(int *)local_250 != -1) {
                  if (*(int *)local_250 != 0) {
                    LOCK();
                    *(int *)local_250 = *(int *)local_250 + -1;
                    local_59 = *(int *)local_250 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007cb5bd;
                  }
                  QArrayData::deallocate(local_250,1,8);
                }
LAB_1007cb5bd:
                if (*(int *)local_258 != -1) {
                  if (*(int *)local_258 != 0) {
                    LOCK();
                    *(int *)local_258 = *(int *)local_258 + -1;
                    local_59 = *(int *)local_258 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007cb5f3;
                  }
                  QArrayData::deallocate(local_258,2,8);
                }
              }
LAB_1007cb5f3:
              uVar17 = 0;
              if (*plVar10 != 0) {
                uVar17 = *(undefined8 *)(*plVar10 + 0x10);
              }
              FUN_1007964d0(uVar17,0);
              uVar17 = 0;
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
              }
              plVar12 = (long *)FUN_1007978c0(uVar17,plVar2);
              if (plVar10 == plVar12) {
                FUN_10078f010(&local_70);
              }
              uVar17 = 0;
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
              }
              local_260 = (long *)*plVar2;
              if (local_260 != (long *)0x0) {
                LOCK();
                *(int *)(local_260 + 1) = (int)local_260[1] + 1;
                UNLOCK();
              }
              FUN_1007978e0(uVar17,&local_260,plVar10);
              if (local_260 != (long *)0x0) {
                LOCK();
                plVar10 = local_260 + 1;
                lVar20 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)(*local_260 + 0x10))();
                }
              }
              if (*(char *)(param_1 + 0x128) != '\0') {
                QMutex::lock();
                while ((((*(int *)(param_1 + 0xf0) == 3 && (*(char *)(param_1 + 0x128) != '\0')) &&
                        (plVar10 = *(long **)(param_1 + 0x120), plVar10 != (long *)0x0)) &&
                       ((plVar10[2] != 0 && (plVar10 == local_a0))))) {
                  QWaitCondition::wait((QMutex *)(param_1 + 0x100),uVar1);
                }
                iVar7 = *(int *)(param_1 + 0xf0);
                QMutex::unlock();
                if (iVar7 == 1) {
                  local_300 = 0;
                  iVar7 = 6;
                  goto LAB_1007cb753;
                }
              }
              iVar7 = 0;
              local_300 = 0;
            }
            else {
              uVar6 = local_300;
              if ((local_300 & 0xfffffffe) == 8) {
                uVar6 = 1;
              }
              FUN_10078f010(&local_f8);
              pcVar3 = *(code **)(local_a0[2] + 0x60);
              if (pcVar3 != (code *)0x0) {
                uVar17 = *(undefined8 *)(local_a0[2] + 0x68);
                FUN_1007d6bb0(&local_100,lVar14);
                FUN_1007d6bb0(&local_108,lVar15);
                (*pcVar3)(1,uVar17,&local_100,&local_108);
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_59 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007ca8ea;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_1007ca8ea:
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_59 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007ca920;
                  }
                  QArrayData::deallocate(local_100,2,8);
                }
LAB_1007ca920:
                FUN_10078f010(&local_110);
                uVar8 = FUN_10078f030(&local_f8,&local_110);
                local_f8 = local_110;
                if (9999 < uVar8) {
                  local_120 = *(QArrayData **)(param_1 + 0x10);
                  if (1 < *(int *)local_120 + 1U) {
                    LOCK();
                    *(int *)local_120 = *(int *)local_120 + 1;
                    local_59 = *(int *)local_120 != 0;
                    UNLOCK();
                  }
                  QString::toLocal8Bit();
                  FUN_1008e3970("","IOCommunication",0,
                                "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                               );
                  if (*(int *)local_118 != -1) {
                    if (*(int *)local_118 != 0) {
                      LOCK();
                      *(int *)local_118 = *(int *)local_118 + -1;
                      local_59 = *(int *)local_118 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1007ca9ef;
                    }
                    QArrayData::deallocate(local_118,1,8);
                  }
LAB_1007ca9ef:
                  if (*(int *)local_120 != -1) {
                    if (*(int *)local_120 != 0) {
                      LOCK();
                      *(int *)local_120 = *(int *)local_120 + -1;
                      local_59 = *(int *)local_120 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1007caa25;
                    }
                    QArrayData::deallocate(local_120,2,8);
                  }
                }
              }
LAB_1007caa25:
              (**(code **)(**(long **)(param_1 + 0x28) + 8))
                        (*(long **)(param_1 + 0x28),param_1,uVar6,&local_a0);
              FUN_10078f010(&local_128);
              uVar8 = FUN_10078f030(&local_f8,&local_128);
              local_f8 = local_128;
              if (9999 < uVar8) {
                local_138 = *(QArrayData **)(param_1 + 0x10);
                if (1 < *(int *)local_138 + 1U) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + 1;
                  local_59 = *(int *)local_138 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                FUN_1008e3970("","IOCommunication",0,
                              "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                             );
                if (*(int *)local_130 != -1) {
                  if (*(int *)local_130 != 0) {
                    LOCK();
                    *(int *)local_130 = *(int *)local_130 + -1;
                    local_59 = *(int *)local_130 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007cab0e;
                  }
                  QArrayData::deallocate(local_130,1,8);
                }
LAB_1007cab0e:
                if (*(int *)local_138 != -1) {
                  if (*(int *)local_138 != 0) {
                    LOCK();
                    *(int *)local_138 = *(int *)local_138 + -1;
                    local_59 = *(int *)local_138 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1007cab44;
                  }
                  QArrayData::deallocate(local_138,2,8);
                }
              }
LAB_1007cab44:
              uVar17 = 0;
              if (*plVar10 != 0) {
                uVar17 = *(undefined8 *)(*plVar10 + 0x10);
              }
              FUN_1007964d0(uVar17,uVar6);
              uVar17 = 0;
              if (*plVar10 != 0) {
                uVar17 = *(undefined8 *)(*plVar10 + 0x10);
              }
              local_140 = (QArrayData *)PTR_shared_null_100ba20d0;
              local_148 = (long *)0x0;
              FUN_100796540(uVar17,uVar6,&local_140,&local_148);
              if (local_148 != (long *)0x0) {
                LOCK();
                plVar12 = local_148 + 1;
                lVar20 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)(*local_148 + 0x10))();
                }
              }
              if (*(int *)local_140 != -1) {
                if (*(int *)local_140 != 0) {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + -1;
                  local_59 = *(int *)local_140 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007cac05;
                }
                QArrayData::deallocate(local_140,2,8);
              }
LAB_1007cac05:
              uVar17 = 0;
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
              }
              local_150 = (long *)*plVar2;
              if (local_150 != (long *)0x0) {
                LOCK();
                *(int *)(local_150 + 1) = (int)local_150[1] + 1;
                UNLOCK();
              }
              FUN_1007978e0(uVar17,&local_150,plVar10);
              iVar7 = 6;
              if (local_150 != (long *)0x0) {
                LOCK();
                plVar10 = local_150 + 1;
                lVar20 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)(*local_150 + 0x10))();
                }
              }
            }
LAB_1007cb753:
            if (local_a0 != (long *)0x0) {
              LOCK();
              plVar10 = local_a0 + 1;
              lVar20 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar20 == 1) {
                (**(code **)(*local_a0 + 0x10))();
              }
            }
          }
        }
      }
LAB_1007cb780:
      if ((uVar19 & 1) != 0) {
        QMutex::unlock();
      }
    } while (iVar7 != 6);
  }
  iVar7 = *(int *)(param_1 + 0x30);
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x30) = 0;
  QMutex::unlock();
  uVar6 = local_300;
  if (iVar7 == 1) {
    uVar6 = 9;
    if (local_300 != 0) {
      uVar6 = local_300;
    }
    uVar17 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    }
    FUN_1007979e0(&local_268,uVar17,param_1 + 200);
    local_288 = local_268;
    if (*(int *)local_268 != -1) {
      if (*(int *)local_268 == 0) {
        QListData::detach((int)&local_288);
        lVar14 = (long)*(int *)(local_288 + 8);
        if ((local_268 + (long)*(int *)(local_268 + 8) * 8 != local_288 + lVar14 * 8) &&
           (lVar15 = *(int *)(local_288 + 0xc) - lVar14,
           lVar15 != 0 && lVar14 <= *(int *)(local_288 + 0xc))) {
          _memcpy(local_288 + lVar14 * 8 + 0x10,local_268 + (long)*(int *)(local_268 + 8) * 8 + 0x10
                  ,lVar15 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_268 = *(int *)local_268 + 1;
        local_59 = *(int *)local_268 != 0;
        UNLOCK();
      }
    }
    local_280 = local_288 + (long)*(int *)(local_288 + 8) * 8 + 0x10;
    local_278 = local_288 + (long)*(int *)(local_288 + 0xc) * 8 + 0x10;
    if (*(int *)(local_288 + 8) != *(int *)(local_288 + 0xc)) {
      do {
        local_270 = 1;
        plVar2 = *(long **)local_280;
        uVar17 = 0;
        if (*plVar2 != 0) {
          uVar17 = *(undefined8 *)(*plVar2 + 0x10);
        }
        cVar4 = FUN_100796800(uVar17);
        if (cVar4 == '\0') {
          FUN_10078f010(&local_290);
          lVar14 = *(long *)(plVar2[0xc] + 0x10);
          pcVar3 = *(code **)(lVar14 + 0x58);
          if (pcVar3 != (code *)0x0) {
            uVar17 = *(undefined8 *)(lVar14 + 0x68);
            FUN_1007d6bb0(&local_298,param_1 + 0x34);
            FUN_1007d6bb0(&local_2a0,param_1 + 0x44);
            (*pcVar3)(0,uVar17,&local_298,&local_2a0,1,plVar2 + 0xc);
            if (*(int *)local_2a0 != -1) {
              if (*(int *)local_2a0 != 0) {
                LOCK();
                *(int *)local_2a0 = *(int *)local_2a0 + -1;
                local_59 = *(int *)local_2a0 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1007cbfd6;
              }
              QArrayData::deallocate(local_2a0,2,8);
            }
LAB_1007cbfd6:
            if (*(int *)local_298 != -1) {
              if (*(int *)local_298 != 0) {
                LOCK();
                *(int *)local_298 = *(int *)local_298 + -1;
                local_59 = *(int *)local_298 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1007cc00c;
              }
              QArrayData::deallocate(local_298,2,8);
            }
LAB_1007cc00c:
            FUN_10078f010(&local_2a8);
            uVar8 = FUN_10078f030(&local_290,&local_2a8);
            local_290 = local_2a8;
            if (9999 < uVar8) {
              local_2b8 = *(QArrayData **)(param_1 + 0x10);
              if (1 < *(int *)local_2b8 + 1U) {
                LOCK();
                *(int *)local_2b8 = *(int *)local_2b8 + 1;
                local_59 = *(int *)local_2b8 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_1008e3970("","IOCommunication",0,
                            "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                            ,local_2b0 + *(long *)(local_2b0 + 0x10),uVar8);
              if (*(int *)local_2b0 != -1) {
                if (*(int *)local_2b0 != 0) {
                  LOCK();
                  *(int *)local_2b0 = *(int *)local_2b0 + -1;
                  local_59 = *(int *)local_2b0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007cc0dd;
                }
                QArrayData::deallocate(local_2b0,1,8);
              }
LAB_1007cc0dd:
              if (*(int *)local_2b8 != -1) {
                if (*(int *)local_2b8 != 0) {
                  LOCK();
                  *(int *)local_2b8 = *(int *)local_2b8 + -1;
                  local_59 = *(int *)local_2b8 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1007cc120;
                }
                QArrayData::deallocate(local_2b8,2,8);
              }
            }
          }
LAB_1007cc120:
          uVar17 = 0;
          if (*plVar2 != 0) {
            uVar17 = *(undefined8 *)(*plVar2 + 0x10);
          }
          FUN_1007964d0(uVar17,1);
        }
        local_280 = local_280 + 8;
      } while (local_280 != local_278);
    }
    local_270 = 1;
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_59 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007cc198;
      }
      QListData::dispose(local_288);
    }
LAB_1007cc198:
    if (*(int *)local_268 != -1) {
      if (*(int *)local_268 != 0) {
        LOCK();
        *(int *)local_268 = *(int *)local_268 + -1;
        local_59 = *(int *)local_268 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1007cc1ef;
      }
      QListData::dispose(local_268);
    }
  }
LAB_1007cc1ef:
  QMutex::lock();
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  FUN_1007d6870(&local_48);
  *(undefined8 *)(param_1 + 0x3c) = local_40;
  *(undefined8 *)(param_1 + 0x34) = local_48;
  FUN_1007d6870(&local_58);
  *(undefined8 *)(param_1 + 0x4c) = local_50;
  *(undefined8 *)(param_1 + 0x44) = local_58;
  _memcpy((void *)(param_1 + 0x54),&DAT_100b4b000,0x48);
  FUN_100792a30(local_2e0);
  FUN_100792f60(param_1 + 0xa0,local_2e0);
  if (*(int *)(local_2c0 + 0x10) != -1) {
    if (*(int *)(local_2c0 + 0x10) != 0) {
      LOCK();
      pcVar3 = local_2c0 + 0x10;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      local_59 = *(int *)pcVar3 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1007cc2b3;
    }
    QHashData::free_helper(local_2c0);
  }
LAB_1007cc2b3:
  if (*(int *)(local_2c8 + 0x10) != -1) {
    if (*(int *)(local_2c8 + 0x10) != 0) {
      LOCK();
      pcVar3 = local_2c8 + 0x10;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      local_59 = *(int *)pcVar3 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1007cc2e8;
    }
    QHashData::free_helper(local_2c8);
  }
LAB_1007cc2e8:
  QReadWriteLock::~QReadWriteLock(local_2e0);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 1;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  if ((iVar7 == 1) && ((uVar6 & 0xfffffffe) != 8)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(*(long **)(param_1 + 0x28),param_1);
  }
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

