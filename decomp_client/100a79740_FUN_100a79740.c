
undefined1
FUN_100a79740(long param_1,uint param_2,void *param_3,uint param_4,uint *param_5,int param_6,
             int param_7,int *param_8,undefined1 *param_9)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  ssize_t sVar6;
  int *piVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  QArrayData *pQVar13;
  ulong *puVar14;
  int local_25c;
  QArrayData *local_220;
  QArrayData *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  msghdr local_1f8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 uStack_170;
  QArrayData *local_168;
  QArrayData *local_160;
  undefined8 local_158;
  undefined1 local_149;
  iovec local_148;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = 0;
  }
  *param_5 = 0;
  local_158 = 0;
  if (0 < param_7) {
    FUN_100a68840(&local_158);
  }
  local_25c = *(int *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
  plVar1 = (long *)(param_1 + 0x388);
  do {
    lVar11 = *plVar1;
    uVar10 = *(uint *)(lVar11 + 4);
    if (param_4 <= uVar10) goto LAB_100a79e56;
    uVar2 = *(uint *)(param_1 + 0x2e8);
    uVar9 = uVar2;
    if ((int)uVar2 < (int)param_2) {
      uVar9 = param_2;
    }
    iVar3 = *(int *)(param_1 + 0x2f0);
    if (iVar3 <= (int)uVar9) {
      local_168 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_168 + 1U) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_149 = *(int *)local_168 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,
                    "%sOut of resources! Descriptor \'%d\' exceeds max possible \'%d\'.",
                    local_160 + *(long *)(local_160 + 0x10),uVar9 + 1,
                    *(undefined4 *)(param_1 + 0x2f0));
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_149 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_149) goto LAB_100a79d25;
        }
        QArrayData::deallocate(local_160,1,8);
      }
LAB_100a79d25:
      if (*(int *)local_168 == -1) goto LAB_100a7a239;
      pQVar13 = local_168;
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        iVar3 = *(int *)local_168;
        UNLOCK();
joined_r0x000100a79d51:
        local_149 = iVar3 != 0;
        if ((bool)local_149) goto LAB_100a7a239;
      }
LAB_100a7a244:
      QArrayData::deallocate(pQVar13,2,8);
      uVar8 = 0;
      goto LAB_100a7a255;
    }
    uVar12 = 0;
    if (*(long *)(param_1 + 0x2f8) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0x10);
    }
    ___bzero(uVar12,(long)((int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3));
    lVar4 = *(long *)(param_1 + 0x2f8);
    lVar11 = *(long *)(lVar4 + 0x10);
    puVar5 = (uint *)(lVar11 + ((ulong)(long)(int)param_2 >> 5) * 4);
    *puVar5 = *puVar5 | 1 << ((byte)param_2 & 0x1f);
    if (param_6 != 2) {
      puVar5 = (uint *)(lVar11 + ((ulong)(long)(int)uVar2 >> 5) * 4);
      *puVar5 = *puVar5 | 1 << ((byte)uVar2 & 0x1f);
    }
    local_178 = 0;
    uStack_170 = 0;
    if (param_7 < 1) {
      if (param_7 < 0) {
        local_178 = 0;
        uStack_170 = 0;
        goto LAB_100a79950;
      }
      puVar14 = (ulong *)0x0;
    }
    else {
      local_180 = 0;
      FUN_100a68840(&local_180);
      iVar3 = FUN_100a68860(&local_158,&local_180);
      if (iVar3 == param_7) {
        local_190 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_190 + 1U) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + 1;
          local_149 = *(int *)local_190 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",0,"%sWait for read failed: timeout expired",
                      local_188 + *(long *)(local_188 + 0x10));
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_149 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_149) goto LAB_100a79f51;
          }
          QArrayData::deallocate(local_188,1,8);
        }
LAB_100a79f51:
        if (*(int *)local_190 != -1) {
          pQVar13 = local_190;
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            iVar3 = *(int *)local_190;
            UNLOCK();
            goto joined_r0x000100a79d51;
          }
          goto LAB_100a7a244;
        }
        goto LAB_100a7a239;
      }
      local_178 = (ulong)(uint)(param_7 - iVar3) / 1000;
      uStack_170 = CONCAT44(uStack_170._4_4_,((uint)(param_7 - iVar3) % 1000) * 1000);
      lVar4 = *(long *)(param_1 + 0x2f8);
LAB_100a79950:
      puVar14 = &local_178;
    }
    uVar12 = 0;
    if (lVar4 != 0) {
      uVar12 = *(undefined8 *)(lVar4 + 0x10);
    }
    iVar3 = _select_DARWIN_EXTSN(uVar9 + 1,uVar12,0,0,puVar14);
    if (iVar3 == 0) {
      local_1a0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_1a0 + 1U) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + 1;
        local_149 = *(int *)local_1a0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sWait for read failed: timeout expired!",
                    local_198 + *(long *)(local_198 + 0x10));
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_149 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_149) goto LAB_100a79dfa;
        }
        QArrayData::deallocate(local_198,1,8);
      }
LAB_100a79dfa:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_149 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_149) goto LAB_100a79e36;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100a79e36:
      if (param_9 == (undefined1 *)0x0) {
LAB_100a7a239:
        uVar8 = 0;
      }
      else {
        *param_9 = 1;
        uVar8 = 0;
      }
      goto LAB_100a7a255;
    }
    if (iVar3 < 0) {
      piVar7 = ___error();
      if (*piVar7 == 4) goto LAB_100a79b63;
      local_1b0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_1b0 + 1U) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + 1;
        local_149 = *(int *)local_1b0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar13 = local_1a8;
      lVar11 = *(long *)(local_1a8 + 0x10);
      uVar12 = FUN_100a9fde0(local_138,0x100);
      FUN_100df99c0("","IOCommunication",0,"%sSelect failed (native error: %s)",pQVar13 + lVar11,
                    uVar12);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_149 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_149) goto LAB_100a7a12b;
        }
        QArrayData::deallocate(local_1a8,1,8);
      }
LAB_100a7a12b:
      if (*(int *)local_1b0 != -1) {
        pQVar13 = local_1b0;
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          iVar3 = *(int *)local_1b0;
          UNLOCK();
          goto joined_r0x000100a79d51;
        }
        goto LAB_100a7a244;
      }
      goto LAB_100a7a239;
    }
    if ((param_6 != 2) &&
       ((*(uint *)(*(long *)(*(long *)(param_1 + 0x2f8) + 0x10) + ((ulong)(long)(int)uVar2 >> 5) * 4
                  ) >> (uVar2 & 0x1f) & 1) != 0)) {
      if (1 < DAT_10230ffd0) {
        local_1c0 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_1c0 + 1U) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + 1;
          local_149 = *(int *)local_1c0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",2,"%sStop in progress for read thread",
                      local_1b8 + *(long *)(local_1b8 + 0x10));
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_149 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_149) goto LAB_100a7a213;
          }
          QArrayData::deallocate(local_1b8,1,8);
        }
LAB_100a7a213:
        if (*(int *)local_1c0 != -1) {
          pQVar13 = local_1c0;
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            iVar3 = *(int *)local_1c0;
            UNLOCK();
            goto joined_r0x000100a79d51;
          }
          goto LAB_100a7a244;
        }
      }
      goto LAB_100a7a239;
    }
    local_1f8.msg_control = (void *)0x0;
    local_1f8.msg_controllen = 0;
    local_1f8.msg_flags = 0;
    local_1f8.msg_iov = (iovec *)0x0;
    local_1f8.msg_iovlen = 0;
    local_1f8._28_4_ = 0;
    local_1f8.msg_name = (void *)0x0;
    local_1f8._8_8_ = 0;
    local_208 = 0;
    uStack_200 = 0;
    puVar5 = (uint *)*plVar1;
    if ((*puVar5 < 2) && (0x40000 < (puVar5[2] & 0x7fffffff))) {
      puVar5[2] = puVar5[2] | 0x80000000;
    }
    else {
      iVar3 = puVar5[1] + 1;
      if (puVar5[1] < 0x40000) {
        iVar3 = 0x40001;
      }
      QByteArray::reallocData(plVar1,iVar3,1);
    }
    puVar5 = (uint *)*plVar1;
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(plVar1,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*plVar1;
    }
    local_148.iov_base = (void *)(*(long *)(puVar5 + 4) + (ulong)uVar10 + (long)puVar5);
    iVar3 = (puVar5[2] & 0x7fffffff) - 1;
    if ((puVar5[2] & 0x7fffffff) == 0) {
      iVar3 = 0;
    }
    local_148.iov_len = (size_t)(iVar3 - uVar10);
    local_1f8.msg_iov = &local_148;
    local_1f8.msg_iovlen = 1;
    local_1f8.msg_name = (void *)0x0;
    local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
    local_1f8.msg_control = &local_208;
    local_1f8.msg_controllen = 0x10;
    sVar6 = _recvmsg(param_2,&local_1f8,0);
    if (sVar6 == 0) {
      if (DAT_10230ffd0 < 2) goto LAB_100a7a239;
      pQVar13 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar13 + 1U) {
        LOCK();
        *(int *)pQVar13 = *(int *)pQVar13 + 1;
        local_149 = *(int *)pQVar13 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",2,
                    "%sSocket graceful shutdown detected. No worries, everything goes fine.",
                    local_210 + *(long *)(local_210 + 0x10));
      if (*(int *)local_210 != -1) {
        if (*(int *)local_210 != 0) {
          LOCK();
          *(int *)local_210 = *(int *)local_210 + -1;
          local_149 = *(int *)local_210 != 0;
          UNLOCK();
          if ((bool)local_149) goto LAB_100a7a039;
        }
        QArrayData::deallocate(local_210,1,8);
      }
LAB_100a7a039:
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 == 0) goto LAB_100a7a244;
        LOCK();
        *(int *)pQVar13 = *(int *)pQVar13 + -1;
        iVar3 = *(int *)pQVar13;
        UNLOCK();
joined_r0x000100a7a065:
        local_149 = iVar3 != 0;
        if (!(bool)local_149) goto LAB_100a7a244;
      }
      goto LAB_100a7a239;
    }
    if (sVar6 < 0) {
      piVar7 = ___error();
      if (((*piVar7 != 4) && (piVar7 = ___error(), *piVar7 != 0x23)) &&
         (piVar7 = ___error(), *piVar7 != 0x23)) {
        pQVar13 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar13 + 1U) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + 1;
          local_149 = *(int *)pQVar13 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar11 = *(long *)(local_220 + 0x10);
        uVar12 = FUN_100a9fde0(local_138,0x100);
        FUN_100df99c0("","IOCommunication",0,"%sRead from socket failed (native error: %s)",
                      local_220 + lVar11,uVar12);
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 != 0) {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + -1;
            local_149 = *(int *)local_220 != 0;
            UNLOCK();
            if ((bool)local_149) goto LAB_100a79c36;
          }
          QArrayData::deallocate(local_220,1,8);
        }
LAB_100a79c36:
        if (*(int *)pQVar13 == -1) goto LAB_100a7a239;
        if (*(int *)pQVar13 == 0) goto LAB_100a7a244;
        LOCK();
        *(int *)pQVar13 = *(int *)pQVar13 + -1;
        iVar3 = *(int *)pQVar13;
        UNLOCK();
        goto joined_r0x000100a7a065;
      }
    }
    else {
      QByteArray::resize((int)plVar1);
      if (local_1f8.msg_controllen == 0x10) {
        local_25c = uStack_200._4_4_;
      }
    }
LAB_100a79b63:
  } while (param_6 == 1);
  lVar11 = *plVar1;
  uVar10 = *(uint *)(lVar11 + 4);
LAB_100a79e56:
  if (uVar10 < param_4) {
    param_4 = uVar10;
  }
  *param_5 = param_4;
  _memcpy(param_3,(void *)(lVar11 + *(long *)(lVar11 + 0x10)),(ulong)param_4);
  QByteArray::remove((int)plVar1,0);
  *(int *)(param_1 + 0x390) = local_25c;
  if ((param_8 != (int *)0x0) && (*param_8 < 0)) {
    *param_8 = local_25c;
  }
  LOCK();
  *(long *)(param_1 + 0x3b0) = *(long *)(param_1 + 0x3b0) + (ulong)*param_5;
  UNLOCK();
  uVar8 = 1;
LAB_100a7a255:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

