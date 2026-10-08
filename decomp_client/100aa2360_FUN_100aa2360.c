
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_100aa2360(long param_1,int param_2,int param_3,void *param_4,uint param_5,int param_6,
             int *param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ssize_t sVar5;
  int *piVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  void *local_268;
  uint local_23c;
  QArrayData *local_230;
  QArrayData *local_220;
  QArrayData *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  msghdr local_1f8;
  iovec local_1c0;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  undefined8 local_170;
  long local_168;
  undefined8 uStack_160;
  QArrayData *local_158;
  QArrayData *local_150;
  undefined8 local_148;
  undefined1 local_139;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_148 = 0;
  if (param_6 != 0) {
    FUN_100a68840(&local_148);
  }
  iVar11 = param_3;
  if (param_3 <= param_2) {
    iVar11 = param_2;
  }
  uVar2 = 1 << ((byte)param_3 & 0x1f);
  local_268 = param_4;
  local_23c = param_5;
  do {
    iVar3 = *(int *)(param_1 + 0xd8);
    if (iVar3 <= iVar11) {
      local_158 = *(QArrayData **)(param_1 + 0x10);
      if (1 < *(int *)local_158 + 1U) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + 1;
        local_139 = *(int *)local_158 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,
                    "%sOut of resources! Descriptor \'%d\' exceeds max possible \'%d\'.",
                    local_150 + *(long *)(local_150 + 0x10),iVar11 + 1,
                    *(undefined4 *)(param_1 + 0xd8));
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_139 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aa2796;
        }
        QArrayData::deallocate(local_150,1,8);
      }
LAB_100aa2796:
      uVar9 = 1;
      if (*(int *)local_158 == -1) goto LAB_100aa2c4d;
      pQVar8 = local_158;
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_139 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100aa2c4d;
      }
LAB_100aa2c3e:
      QArrayData::deallocate(pQVar8,2,8);
      goto LAB_100aa2c4d;
    }
    uVar9 = 0;
    if (*(long *)(param_1 + 0xe8) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x10);
    }
    ___bzero(uVar9,(long)((int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3));
    uVar9 = 0;
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x10);
    }
    ___bzero(uVar9,(long)((int)(*(int *)(param_1 + 0xd8) + 7 +
                               ((uint)(*(int *)(param_1 + 0xd8) + 7 >> 0x1f) >> 0x1d)) >> 3));
    puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x10) + ((ulong)(long)param_2 >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    lVar4 = *(long *)(param_1 + 0xe0);
    puVar1 = (uint *)(*(long *)(lVar4 + 0x10) + ((ulong)(long)param_3 >> 5) * 4);
    *puVar1 = *puVar1 | uVar2;
    local_168 = 0;
    uStack_160 = 0;
    plVar10 = (long *)0x0;
    if (param_6 != 0) {
      local_170 = 0;
      FUN_100a68840(&local_170);
      iVar3 = FUN_100a68860(&local_148,&local_170);
      iVar3 = param_6 - iVar3;
      if (0 < iVar3) {
        local_168 = (long)(iVar3 / 1000);
        uStack_160 = CONCAT44(uStack_160._4_4_,(iVar3 % 1000) * 1000);
        lVar4 = *(long *)(param_1 + 0xe0);
        plVar10 = &local_168;
        goto LAB_100aa2554;
      }
      local_180 = *(QArrayData **)(param_1 + 0x10);
      if (1 < *(int *)local_180 + 1U) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + 1;
        local_139 = *(int *)local_180 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sWait for write failed: timeout expired!",
                    local_178 + *(long *)(local_178 + 0x10));
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_139 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aa294a;
        }
        QArrayData::deallocate(local_178,1,8);
      }
LAB_100aa294a:
      uVar9 = 1;
      if (*(int *)local_180 != -1) {
        pQVar8 = local_180;
        if (*(int *)local_180 == 0) goto LAB_100aa2c3e;
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        iVar11 = *(int *)local_180;
        UNLOCK();
joined_r0x000100aa297b:
        local_139 = iVar11 != 0;
        if (!(bool)local_139) goto LAB_100aa2c3e;
      }
      goto LAB_100aa2c4d;
    }
LAB_100aa2554:
    uVar9 = 0;
    if (lVar4 != 0) {
      uVar9 = *(undefined8 *)(lVar4 + 0x10);
    }
    uVar7 = 0;
    if (*(long *)(param_1 + 0xe8) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x10);
    }
    iVar3 = _select_DARWIN_EXTSN(iVar11 + 1,uVar9,uVar7,0,plVar10);
    if (iVar3 == 0) {
      local_190 = *(QArrayData **)(param_1 + 0x10);
      if (1 < *(int *)local_190 + 1U) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + 1;
        local_139 = *(int *)local_190 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sWait for write failed: timeout expired!",
                    local_188 + *(long *)(local_188 + 0x10));
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_139 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aa2870;
        }
        QArrayData::deallocate(local_188,1,8);
      }
LAB_100aa2870:
      uVar9 = 4;
      if (*(int *)local_190 != -1) {
        pQVar8 = local_190;
        if (*(int *)local_190 == 0) goto LAB_100aa2c3e;
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        iVar11 = *(int *)local_190;
        UNLOCK();
        goto joined_r0x000100aa297b;
      }
      goto LAB_100aa2c4d;
    }
    if (iVar3 < 0) {
      piVar6 = ___error();
      if (*piVar6 == 4) goto LAB_100aa26c4;
      local_1a0 = *(QArrayData **)(param_1 + 0x10);
      if (1 < *(int *)local_1a0 + 1U) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + 1;
        local_139 = *(int *)local_1a0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar8 = local_198 + *(long *)(local_198 + 0x10);
      piVar6 = ___error();
      uVar9 = FUN_100a9fcf0(*piVar6,local_138,0x100);
      FUN_100df99c0("","IOCommunication",0,"%sSelect failed (native error: %s)",pQVar8,uVar9);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_139 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aa2c0c;
        }
        QArrayData::deallocate(local_198,1,8);
      }
LAB_100aa2c0c:
      uVar9 = 1;
      if (*(int *)local_1a0 != -1) {
        pQVar8 = local_1a0;
        if (*(int *)local_1a0 == 0) goto LAB_100aa2c3e;
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        iVar11 = *(int *)local_1a0;
        UNLOCK();
        goto joined_r0x000100aa297b;
      }
      goto LAB_100aa2c4d;
    }
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xe0) + 0x10) + ((ulong)(long)param_3 >> 5) * 4) &
        uVar2) != 0) {
      uVar9 = 9;
      if (1 < DAT_10230ffd0) {
        local_1b0 = *(QArrayData **)(param_1 + 0x10);
        if (1 < *(int *)local_1b0 + 1U) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + 1;
          local_139 = *(int *)local_1b0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",2,"%sStop in progress for write thread",
                      local_1a8 + *(long *)(local_1a8 + 0x10));
        if (*(int *)local_1a8 != -1) {
          if (*(int *)local_1a8 != 0) {
            LOCK();
            *(int *)local_1a8 = *(int *)local_1a8 + -1;
            local_139 = *(int *)local_1a8 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_100aa2a3c;
          }
          QArrayData::deallocate(local_1a8,1,8);
        }
LAB_100aa2a3c:
        if (*(int *)local_1b0 != -1) {
          pQVar8 = local_1b0;
          if (*(int *)local_1b0 == 0) goto LAB_100aa2c3e;
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          iVar11 = *(int *)local_1b0;
          UNLOCK();
          goto joined_r0x000100aa297b;
        }
      }
      goto LAB_100aa2c4d;
    }
    local_1f8.msg_control = (undefined8 *)0x0;
    local_1f8.msg_controllen = 0;
    local_1f8.msg_flags = 0;
    local_1f8.msg_name = (void *)0x0;
    local_1f8.msg_namelen = 0;
    local_1f8._12_4_ = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1c0.iov_base = local_268;
    local_1c0.iov_len = (size_t)local_23c;
    local_1f8.msg_iov = &local_1c0;
    local_1f8.msg_iovlen = 1;
    local_1f8._28_4_ = 0;
    if ((param_7 != (int *)0x0) && (-1 < *param_7)) {
      local_208 = 0xffff00000010;
      uStack_200 = CONCAT44(*param_7,1);
      local_1f8.msg_control = &local_208;
      local_1f8.msg_controllen = 0x10;
      local_1f8.msg_flags = 0;
      *param_7 = -1;
    }
    sVar5 = _sendmsg(param_2,&local_1f8,0);
    if (sVar5 == 0) {
      pQVar8 = *(QArrayData **)(param_1 + 0x10);
      if (1 < *(int *)pQVar8 + 1U) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + 1;
        local_139 = *(int *)pQVar8 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sConnection was closed unexpectedly",
                    local_210 + *(long *)(local_210 + 0x10));
      if (*(int *)local_210 != -1) {
        if (*(int *)local_210 != 0) {
          LOCK();
          *(int *)local_210 = *(int *)local_210 + -1;
          local_139 = *(int *)local_210 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aa2b11;
        }
        QArrayData::deallocate(local_210,1,8);
      }
LAB_100aa2b11:
      uVar9 = 1;
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 == 0) goto LAB_100aa2c3e;
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        iVar11 = *(int *)pQVar8;
        UNLOCK();
        goto joined_r0x000100aa297b;
      }
      goto LAB_100aa2c4d;
    }
    if (sVar5 < 0) {
      piVar6 = ___error();
      if (*piVar6 != 4) {
        piVar6 = ___error();
        iVar11 = *piVar6;
        if ((iVar11 == 0x20) || (iVar11 == 0x36)) {
          if (1 < DAT_10230ffd0) {
            pQVar8 = *(QArrayData **)(param_1 + 0x10);
            if (1 < *(int *)pQVar8 + 1U) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + 1;
              local_139 = *(int *)pQVar8 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            lVar4 = *(long *)(local_220 + 0x10);
            piVar6 = ___error();
            uVar9 = FUN_100a9fcf0(*piVar6,local_138,0x100);
            FUN_100df99c0("","IOCommunication",2,
                          "%sWrite to socket failed because of known err (native error: %s)",
                          local_220 + lVar4,uVar9);
            if (*(int *)local_220 != -1) {
              if (*(int *)local_220 != 0) {
                LOCK();
                *(int *)local_220 = *(int *)local_220 + -1;
                local_139 = *(int *)local_220 != 0;
                UNLOCK();
                if ((bool)local_139) goto LAB_100aa2d55;
              }
              QArrayData::deallocate(local_220,1,8);
            }
LAB_100aa2d55:
            if (*(int *)pQVar8 != -1) {
              if (*(int *)pQVar8 != 0) {
                LOCK();
                *(int *)pQVar8 = *(int *)pQVar8 + -1;
                iVar3 = *(int *)pQVar8;
                UNLOCK();
                goto joined_r0x000100aa2d81;
              }
              goto LAB_100aa2e78;
            }
            goto LAB_100aa2e87;
          }
        }
        else {
          pQVar8 = *(QArrayData **)(param_1 + 0x10);
          if (1 < *(int *)pQVar8 + 1U) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + 1;
            local_139 = *(int *)pQVar8 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          lVar4 = *(long *)(local_230 + 0x10);
          piVar6 = ___error();
          uVar9 = FUN_100a9fcf0(*piVar6,local_138,0x100);
          FUN_100df99c0("","IOCommunication",0,"%sWrite to socket failed (native error: %s)",
                        local_230 + lVar4,uVar9);
          if (*(int *)local_230 != -1) {
            if (*(int *)local_230 != 0) {
              LOCK();
              *(int *)local_230 = *(int *)local_230 + -1;
              local_139 = *(int *)local_230 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100aa2e4b;
            }
            QArrayData::deallocate(local_230,1,8);
          }
LAB_100aa2e4b:
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              iVar3 = *(int *)pQVar8;
              UNLOCK();
joined_r0x000100aa2d81:
              local_139 = iVar3 != 0;
              if ((bool)local_139) goto LAB_100aa2e87;
            }
LAB_100aa2e78:
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_100aa2e87:
          uVar9 = 3;
          if (iVar11 == 0xe) goto LAB_100aa2c4d;
        }
        uVar9 = 8;
        if ((iVar11 != 0x20) && (iVar11 != 0x36)) {
          uVar9 = 1;
        }
        goto LAB_100aa2c4d;
      }
    }
    else {
      local_23c = local_23c - (int)sVar5;
      local_268 = (void *)((long)local_268 + sVar5);
    }
LAB_100aa26c4:
  } while (local_23c != 0);
  LOCK();
  plVar10 = (long *)(*(long *)(param_1 + 0x148) + 0x10);
  *plVar10 = *plVar10 + (ulong)param_5;
  UNLOCK();
  uVar9 = 0;
LAB_100aa2c4d:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

