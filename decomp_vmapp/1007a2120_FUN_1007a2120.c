
undefined1 FUN_1007a2120(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  int iVar12;
  undefined1 uVar13;
  undefined8 in_stack_fffffffffffffd88;
  undefined8 uVar14;
  QArrayData *local_238;
  QArrayData *local_228;
  QArrayData *local_218;
  QReadWriteLock local_210 [24];
  _func_void_Node_ptr *local_1f8;
  _func_void_Node_ptr *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  long *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  undefined8 local_1a0;
  char local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QReadWriteLock local_110 [24];
  _func_void_Node_ptr *local_f8;
  _func_void_Node_ptr *local_f0;
  QReadWriteLock local_e8 [24];
  _func_void_Node_ptr *local_d0;
  _func_void_Node_ptr *local_c8;
  char local_bd;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a9;
  undefined1 local_a8 [16];
  int local_98;
  undefined1 local_94 [20];
  int local_80;
  short local_7c;
  short local_7a;
  long local_38;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulong)in_stack_fffffffffffffd88 >> 0x20);
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  if (*(int *)(param_1 + 0x68) != 1) {
    uVar13 = 0;
    goto LAB_1007a3a93;
  }
  local_bd = '\0';
  FUN_100792a30(local_e8);
  FUN_100792a30(local_110);
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_bc = 0;
  if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
     (uVar9 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar9 & 0x3000) == 0)) {
    uVar15 = 0;
    local_bd = FUN_1007b59b0(param_1,param_2,&local_80,0x48,param_3,0,0);
  }
  else {
    uVar14 = CONCAT44(uVar15,param_3);
    local_bd = FUN_10079edb0(param_1,param_2,&local_80,0x48,&local_bc,1,uVar14,0,0);
    uVar15 = (undefined4)((ulong)uVar14 >> 0x20);
  }
  if (local_bd == '\0') {
    local_128 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_a9 = *(int *)local_128 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sHandshake error: protocol version read failed!",
                  local_120 + *(long *)(local_120 + 0x10));
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_a9 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_1007a2356;
      }
      QArrayData::deallocate(local_120,1,8);
    }
LAB_1007a2356:
    if (*(int *)local_128 == -1) {
      uVar13 = 0;
    }
    else {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_a9 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_a9) {
          uVar13 = 0;
          goto LAB_1007a3953;
        }
      }
      QArrayData::deallocate(local_128,2,8);
      uVar13 = 0;
    }
  }
  else if (local_80 == DAT_100b4b000) {
    if (local_7c == DAT_100b4b004) {
      if (local_7a != DAT_100b4b006) {
        local_158 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_158 + 1U) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + 1;
          local_a9 = *(int *)local_158 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sIO protocol minor version number differs!",
                      local_150 + *(long *)(local_150 + 0x10));
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_a9 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a2449;
          }
          QArrayData::deallocate(local_150,1,8);
        }
LAB_1007a2449:
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_a9 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a2485;
          }
          QArrayData::deallocate(local_158,2,8);
        }
      }
LAB_1007a2485:
      local_b8 = 0;
      if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
         (uVar9 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar9 & 0x3000) == 0)) {
        uVar15 = 0;
        local_bd = FUN_1007b59b0(param_1,param_2,&local_98,0x14,param_3,0,0);
      }
      else {
        uVar14 = CONCAT44(uVar15,param_3);
        local_bd = FUN_10079edb0(param_1,param_2,&local_98,0x14,&local_b8,1,uVar14,0,0);
        uVar15 = (undefined4)((ulong)uVar14 >> 0x20);
      }
      if (local_bd == '\0') {
        local_168 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_168 + 1U) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + 1;
          local_a9 = *(int *)local_168 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sHandshake error: handshake header read failed!",
                      local_160 + *(long *)(local_160 + 0x10));
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_a9 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a27a7;
          }
          QArrayData::deallocate(local_160,1,8);
        }
LAB_1007a27a7:
        if (*(int *)local_168 == -1) {
          uVar13 = 0;
        }
        else {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_a9 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_a9) {
              uVar13 = 0;
              goto LAB_1007a3953;
            }
          }
          QArrayData::deallocate(local_168,2,8);
          uVar13 = 0;
        }
      }
      else {
        FUN_1007d6c60(local_a8,local_94);
        cVar8 = FUN_1007ea210(local_a8);
        if (cVar8 == '\0') {
          FUN_1007d6a70(&local_180,local_a8);
          QString::operator=(&local_118,&local_180);
          if (*(int *)local_180.field0_0x0 != -1) {
            if (*(int *)local_180.field0_0x0 != 0) {
              LOCK();
              *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
              local_a9 = *(int *)local_180.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_1007a283f;
            }
            QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
          }
LAB_1007a283f:
          if ((local_98 == 0) || (0xc < local_98)) {
            local_190 = *(QArrayData **)(param_1 + 0x18);
            if (1 < *(int *)local_190 + 1U) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + 1;
              local_a9 = *(int *)local_190 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_1008e3970("","IOCommunication",0,"%sHandshake error: sender type is wrong!",
                          local_188 + *(long *)(local_188 + 0x10));
            if (*(int *)local_188 != -1) {
              if (*(int *)local_188 != 0) {
                LOCK();
                *(int *)local_188 = *(int *)local_188 + -1;
                local_a9 = *(int *)local_188 != 0;
                UNLOCK();
                if ((bool)local_a9) goto LAB_1007a2c58;
              }
              QArrayData::deallocate(local_188,1,8);
            }
LAB_1007a2c58:
            if (*(int *)local_190 == -1) {
              uVar13 = 0;
            }
            else {
              if (*(int *)local_190 != 0) {
                LOCK();
                *(int *)local_190 = *(int *)local_190 + -1;
                local_a9 = *(int *)local_190 != 0;
                UNLOCK();
                if ((bool)local_a9) {
                  uVar13 = 0;
                  goto LAB_1007a3953;
                }
              }
              QArrayData::deallocate(local_190,2,8);
              uVar13 = 0;
            }
          }
          else {
            local_b4 = 0;
            if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
               (uVar9 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar9 & 0x3000) == 0)) {
              local_bd = FUN_1007b59b0(param_1,param_2,&local_1a0,9,param_3,0,0);
            }
            else {
              local_bd = FUN_10079edb0(param_1,param_2,&local_1a0,9,&local_b4,1,
                                       CONCAT44(uVar15,param_3),0,0);
            }
            if (local_bd == '\0') {
              local_1b0 = *(QArrayData **)(param_1 + 0x18);
              if (1 < *(int *)local_1b0 + 1U) {
                LOCK();
                *(int *)local_1b0 = *(int *)local_1b0 + 1;
                local_a9 = *(int *)local_1b0 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_1008e3970("","IOCommunication",0,
                            "%sHandshake error: routing table header read failed!",
                            local_1a8 + *(long *)(local_1a8 + 0x10));
              if (*(int *)local_1a8 != -1) {
                if (*(int *)local_1a8 != 0) {
                  LOCK();
                  *(int *)local_1a8 = *(int *)local_1a8 + -1;
                  local_a9 = *(int *)local_1a8 != 0;
                  UNLOCK();
                  if ((bool)local_a9) goto LAB_1007a2d4f;
                }
                QArrayData::deallocate(local_1a8,1,8);
              }
LAB_1007a2d4f:
              if (*(int *)local_1b0 == -1) {
                uVar13 = 0;
              }
              else {
                if (*(int *)local_1b0 != 0) {
                  LOCK();
                  *(int *)local_1b0 = *(int *)local_1b0 + -1;
                  local_a9 = *(int *)local_1b0 != 0;
                  UNLOCK();
                  if ((bool)local_a9) {
                    uVar13 = 0;
                    goto LAB_1007a3953;
                  }
                }
                QArrayData::deallocate(local_1b0,2,8);
                uVar13 = 0;
              }
            }
            else {
              uVar9 = FUN_100794730(&local_1a0);
              if ((int)uVar9 == 0) {
                local_1c0 = *(QArrayData **)(param_1 + 0x18);
                if (1 < *(int *)local_1c0 + 1U) {
                  LOCK();
                  *(int *)local_1c0 = *(int *)local_1c0 + 1;
                  local_a9 = *(int *)local_1c0 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                FUN_1008e3970("","IOCommunication",0,
                              "%sHandshake error: routing table header parse failed!",
                              local_1b8 + *(long *)(local_1b8 + 0x10));
                if (*(int *)local_1b8 != -1) {
                  if (*(int *)local_1b8 != 0) {
                    LOCK();
                    *(int *)local_1b8 = *(int *)local_1b8 + -1;
                    local_a9 = *(int *)local_1b8 != 0;
                    UNLOCK();
                    if ((bool)local_a9) goto LAB_1007a2e83;
                  }
                  QArrayData::deallocate(local_1b8,1,8);
                }
LAB_1007a2e83:
                if (*(int *)local_1c0 == -1) {
                  uVar13 = 0;
                }
                else {
                  if (*(int *)local_1c0 != 0) {
                    LOCK();
                    *(int *)local_1c0 = *(int *)local_1c0 + -1;
                    local_a9 = *(int *)local_1c0 != 0;
                    UNLOCK();
                    if ((bool)local_a9) {
                      uVar13 = 0;
                      goto LAB_1007a3953;
                    }
                  }
                  QArrayData::deallocate(local_1c0,2,8);
                  uVar13 = 0;
                }
              }
              else {
                pvVar10 = operator_new__(uVar9 & 0xffffffff,(nothrow_t *)PTR_nothrow_100ba21c8);
                local_1c8 = operator_new(0x18);
                *(undefined4 *)(local_1c8 + 1) = 1;
                local_1c8[2] = (long)pvVar10;
                *local_1c8 = (long)&PTR_FUN_100bef320;
                if (pvVar10 == (void *)0x0) {
                  local_1d8 = *(QArrayData **)(param_1 + 0x18);
                  if (1 < *(int *)local_1d8 + 1U) {
                    LOCK();
                    *(int *)local_1d8 = *(int *)local_1d8 + 1;
                    local_a9 = *(int *)local_1d8 != 0;
                    UNLOCK();
                  }
                  QString::toLocal8Bit();
                  FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                                local_1d0 + *(long *)(local_1d0 + 0x10));
                  if (*(int *)local_1d0 != -1) {
                    if (*(int *)local_1d0 != 0) {
                      LOCK();
                      *(int *)local_1d0 = *(int *)local_1d0 + -1;
                      local_a9 = *(int *)local_1d0 != 0;
                      UNLOCK();
                      if ((bool)local_a9) goto LAB_1007a375f;
                    }
                    QArrayData::deallocate(local_1d0,1,8);
                  }
LAB_1007a375f:
                  bVar6 = true;
                  if (*(int *)local_1d8 == -1) {
                    cVar8 = '\0';
                  }
                  else {
                    if (*(int *)local_1d8 != 0) {
                      LOCK();
                      *(int *)local_1d8 = *(int *)local_1d8 + -1;
                      local_a9 = *(int *)local_1d8 != 0;
                      UNLOCK();
                      if ((bool)local_a9) {
                        cVar8 = '\0';
                        goto LAB_1007a37ae;
                      }
                    }
                    QArrayData::deallocate(local_1d8,2,8);
                    cVar8 = '\0';
                  }
                }
                else {
                  puVar4 = (undefined8 *)local_1c8[2];
                  *(char *)(puVar4 + 1) = local_198;
                  *puVar4 = local_1a0;
                  if (local_198 != '\0') {
                    iVar12 = (int)uVar9 + -9;
                    local_b0 = 0;
                    if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
                       (uVar11 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)),
                       (uVar11 & 0x3000) == 0)) {
                      local_bd = FUN_1007b59b0(param_1,param_2,(long)puVar4 + 9,iVar12,param_3,0,0);
                    }
                    else {
                      local_bd = FUN_10079edb0(param_1,param_2,(long)puVar4 + 9,iVar12,&local_b0,1,
                                               param_3,0,0);
                    }
                    if (local_bd == '\0') {
                      local_1e8 = *(QArrayData **)(param_1 + 0x18);
                      if (1 < *(int *)local_1e8 + 1U) {
                        LOCK();
                        *(int *)local_1e8 = *(int *)local_1e8 + 1;
                        local_a9 = *(int *)local_1e8 != 0;
                        UNLOCK();
                      }
                      QString::toLocal8Bit();
                      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: routes read failed!",
                                    local_1e0 + *(long *)(local_1e0 + 0x10));
                      if (*(int *)local_1e0 != -1) {
                        if (*(int *)local_1e0 != 0) {
                          LOCK();
                          *(int *)local_1e0 = *(int *)local_1e0 + -1;
                          local_a9 = *(int *)local_1e0 != 0;
                          UNLOCK();
                          if ((bool)local_a9) goto LAB_1007a2fa4;
                        }
                        QArrayData::deallocate(local_1e0,1,8);
                      }
LAB_1007a2fa4:
                      bVar6 = true;
                      if (*(int *)local_1e8 == -1) {
                        cVar8 = '\0';
                      }
                      else {
                        if (*(int *)local_1e8 != 0) {
                          LOCK();
                          *(int *)local_1e8 = *(int *)local_1e8 + -1;
                          local_a9 = *(int *)local_1e8 != 0;
                          UNLOCK();
                          if ((bool)local_a9) {
                            cVar8 = '\0';
                            goto LAB_1007a37ae;
                          }
                        }
                        QArrayData::deallocate(local_1e8,2,8);
                        cVar8 = '\0';
                      }
                      goto LAB_1007a37ae;
                    }
                  }
                  FUN_1007944e0(local_210,&local_1c8,uVar9,&local_bd);
                  FUN_100792f60(local_110,local_210);
                  if (*(int *)(local_1f0 + 0x10) != -1) {
                    if (*(int *)(local_1f0 + 0x10) != 0) {
                      LOCK();
                      pcVar2 = local_1f0 + 0x10;
                      *(int *)pcVar2 = *(int *)pcVar2 + -1;
                      local_a9 = *(int *)pcVar2 != 0;
                      UNLOCK();
                      if ((bool)local_a9) goto LAB_1007a2a4d;
                    }
                    QHashData::free_helper(local_1f0);
                  }
LAB_1007a2a4d:
                  if (*(int *)(local_1f8 + 0x10) != -1) {
                    if (*(int *)(local_1f8 + 0x10) != 0) {
                      LOCK();
                      pcVar2 = local_1f8 + 0x10;
                      *(int *)pcVar2 = *(int *)pcVar2 + -1;
                      local_a9 = *(int *)pcVar2 != 0;
                      UNLOCK();
                      if ((bool)local_a9) goto LAB_1007a2a88;
                    }
                    QHashData::free_helper(local_1f8);
                  }
LAB_1007a2a88:
                  QReadWriteLock::~QReadWriteLock(local_210);
                  if (local_bd == '\0') {
                    pQVar5 = *(QArrayData **)(param_1 + 0x18);
                    if (1 < *(int *)pQVar5 + 1U) {
                      LOCK();
                      *(int *)pQVar5 = *(int *)pQVar5 + 1;
                      local_a9 = *(int *)pQVar5 != 0;
                      UNLOCK();
                    }
                    QString::toLocal8Bit();
                    FUN_1008e3970("","IOCommunication",0,
                                  "%sHandshake error: routing table parse failed!",
                                  local_218 + *(long *)(local_218 + 0x10));
                    if (*(int *)local_218 != -1) {
                      if (*(int *)local_218 != 0) {
                        LOCK();
                        *(int *)local_218 = *(int *)local_218 + -1;
                        local_a9 = *(int *)local_218 != 0;
                        UNLOCK();
                        if ((bool)local_a9) goto LAB_1007a3062;
                      }
                      QArrayData::deallocate(local_218,1,8);
                    }
LAB_1007a3062:
                    bVar6 = true;
                    if (*(int *)pQVar5 == -1) {
                      cVar8 = '\0';
                    }
                    else {
                      if (*(int *)pQVar5 != 0) {
                        LOCK();
                        *(int *)pQVar5 = *(int *)pQVar5 + -1;
                        local_a9 = *(int *)pQVar5 != 0;
                        UNLOCK();
                        if ((bool)local_a9) {
                          cVar8 = '\0';
                          goto LAB_1007a37ae;
                        }
                      }
                      QArrayData::deallocate(pQVar5,2,8);
                      cVar8 = '\0';
                    }
                  }
                  else {
                    cVar8 = FUN_100793250(local_110);
                    if (cVar8 == '\0') {
                      cVar8 = FUN_100793350(*(undefined8 *)(param_1 + 0x28),local_110,local_e8);
                      bVar6 = false;
                      goto LAB_1007a37ae;
                    }
                    pQVar5 = *(QArrayData **)(param_1 + 0x18);
                    if (1 < *(int *)pQVar5 + 1U) {
                      LOCK();
                      *(int *)pQVar5 = *(int *)pQVar5 + 1;
                      local_a9 = *(int *)pQVar5 != 0;
                      UNLOCK();
                    }
                    QString::toLocal8Bit();
                    FUN_1008e3970("","IOCommunication",0,
                                  "%sHandshake error: routing table is wrong!",
                                  local_228 + *(long *)(local_228 + 0x10));
                    if (*(int *)local_228 != -1) {
                      if (*(int *)local_228 != 0) {
                        LOCK();
                        *(int *)local_228 = *(int *)local_228 + -1;
                        local_a9 = *(int *)local_228 != 0;
                        UNLOCK();
                        if ((bool)local_a9) goto LAB_1007a2b53;
                      }
                      QArrayData::deallocate(local_228,1,8);
                    }
LAB_1007a2b53:
                    bVar6 = true;
                    if (*(int *)pQVar5 == -1) {
                      cVar8 = '\0';
                    }
                    else {
                      if (*(int *)pQVar5 != 0) {
                        LOCK();
                        *(int *)pQVar5 = *(int *)pQVar5 + -1;
                        local_a9 = *(int *)pQVar5 != 0;
                        UNLOCK();
                        if ((bool)local_a9) {
                          cVar8 = '\0';
                          goto LAB_1007a37ae;
                        }
                      }
                      QArrayData::deallocate(pQVar5,2,8);
                      cVar8 = '\0';
                    }
                  }
                }
LAB_1007a37ae:
                if (local_1c8 != (long *)0x0) {
                  LOCK();
                  plVar1 = local_1c8 + 1;
                  lVar7 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)(*local_1c8 + 0x10))();
                  }
                }
                if (bVar6) {
                  uVar13 = 0;
                }
                else if (cVar8 == '\0') {
                  pQVar5 = *(QArrayData **)(param_1 + 0x18);
                  if (1 < *(int *)pQVar5 + 1U) {
                    LOCK();
                    *(int *)pQVar5 = *(int *)pQVar5 + 1;
                    local_a9 = *(int *)pQVar5 != 0;
                    UNLOCK();
                  }
                  QString::toLocal8Bit();
                  FUN_1008e3970("","IOCommunication",0,
                                "%sHandshake error: can\'t accept client\'s table!",
                                local_238 + *(long *)(local_238 + 0x10));
                  if (*(int *)local_238 != -1) {
                    if (*(int *)local_238 != 0) {
                      LOCK();
                      *(int *)local_238 = *(int *)local_238 + -1;
                      local_a9 = *(int *)local_238 != 0;
                      UNLOCK();
                      if ((bool)local_a9) goto LAB_1007a390d;
                    }
                    QArrayData::deallocate(local_238,1,8);
                  }
LAB_1007a390d:
                  if (*(int *)pQVar5 == -1) {
                    uVar13 = 0;
                  }
                  else {
                    if (*(int *)pQVar5 != 0) {
                      LOCK();
                      *(int *)pQVar5 = *(int *)pQVar5 + -1;
                      local_a9 = *(int *)pQVar5 != 0;
                      UNLOCK();
                      if ((bool)local_a9) {
                        uVar13 = 0;
                        goto LAB_1007a3953;
                      }
                    }
                    QArrayData::deallocate(pQVar5,2,8);
                    uVar13 = 0;
                  }
                }
                else {
                  QMutex::lock();
                  _memcpy((void *)(param_1 + 0xcc),&local_80,0x48);
                  QString::operator=((QString *)(param_1 + 0xb8),&local_118);
                  *(int *)(param_1 + 200) = local_98;
                  FUN_100792f60(param_1 + 0x168,local_e8);
                  uVar13 = 1;
                  QMutex::unlock();
                }
              }
            }
          }
        }
        else {
          local_178 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_178 + 1U) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + 1;
            local_a9 = *(int *)local_178 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sHandshake error: handshake header parse failed!",
                        local_170 + *(long *)(local_170 + 0x10));
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_a9 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_1007a25b9;
            }
            QArrayData::deallocate(local_170,1,8);
          }
LAB_1007a25b9:
          if (*(int *)local_178 == -1) {
            uVar13 = 0;
          }
          else {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_a9 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_a9) {
                uVar13 = 0;
                goto LAB_1007a3953;
              }
            }
            QArrayData::deallocate(local_178,2,8);
            uVar13 = 0;
          }
        }
      }
    }
    else {
      local_148 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_148 + 1U) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + 1;
        local_a9 = *(int *)local_148 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sIO protocol major version number differs!",
                    local_140 + *(long *)(local_140 + 0x10));
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_a9 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a26b7;
        }
        QArrayData::deallocate(local_140,1,8);
      }
LAB_1007a26b7:
      if (*(int *)local_148 == -1) {
        uVar13 = 0;
      }
      else {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_a9 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_a9) {
            uVar13 = 0;
            goto LAB_1007a3953;
          }
        }
        QArrayData::deallocate(local_148,2,8);
        uVar13 = 0;
      }
    }
  }
  else {
    local_138 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_138 + 1U) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      local_a9 = *(int *)local_138 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sIO protocol magic bytes differs!",
                  local_130 + *(long *)(local_130 + 0x10));
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_a9 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_1007a229f;
      }
      QArrayData::deallocate(local_130,1,8);
    }
LAB_1007a229f:
    if (*(int *)local_138 == -1) {
      uVar13 = 0;
    }
    else {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_a9 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_a9) {
          uVar13 = 0;
          goto LAB_1007a3953;
        }
      }
      QArrayData::deallocate(local_138,2,8);
      uVar13 = 0;
    }
  }
LAB_1007a3953:
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_a9 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a398f;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1007a398f:
  if (*(int *)(local_f0 + 0x10) != -1) {
    if (*(int *)(local_f0 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_f0 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_a9 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a39ca;
    }
    QHashData::free_helper(local_f0);
  }
LAB_1007a39ca:
  if (*(int *)(local_f8 + 0x10) != -1) {
    if (*(int *)(local_f8 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_f8 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_a9 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a3a05;
    }
    QHashData::free_helper(local_f8);
  }
LAB_1007a3a05:
  QReadWriteLock::~QReadWriteLock(local_110);
  if (*(int *)(local_c8 + 0x10) != -1) {
    if (*(int *)(local_c8 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_c8 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_a9 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a3a4c;
    }
    QHashData::free_helper(local_c8);
  }
LAB_1007a3a4c:
  if (*(int *)(local_d0 + 0x10) != -1) {
    if (*(int *)(local_d0 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_d0 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_a9 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a3a87;
    }
    QHashData::free_helper(local_d0);
  }
LAB_1007a3a87:
  QReadWriteLock::~QReadWriteLock(local_e8);
LAB_1007a3a93:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

