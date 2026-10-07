
undefined1 FUN_1007a0420(long param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  long *plVar2;
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
  undefined8 in_stack_fffffffffffffda8;
  undefined8 uVar14;
  QArrayData *local_200;
  QArrayData *local_1f0;
  QReadWriteLock local_1e8 [24];
  _func_void_Node_ptr *local_1d0;
  _func_void_Node_ptr *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  long *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  undefined8 local_178;
  char local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
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
  
  uVar15 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  FUN_100792a30(local_e8);
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
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
    local_100 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_100 + 1U) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      local_a9 = *(int *)local_100 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sHandshake error: protocol version read failed!",
                  local_f8 + *(long *)(local_f8 + 0x10));
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_a9 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_1007a0663;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_1007a0663:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_a9 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_1007a069f;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1007a069f:
    *(undefined4 *)(param_1 + 0xa4) = 3;
LAB_1007a06aa:
    uVar13 = 0;
  }
  else {
    if (local_80 != DAT_100b4b000) {
      local_110 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_110 + 1U) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + 1;
        local_a9 = *(int *)local_110 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sIO protocol magic bytes differs!",
                    local_108 + *(long *)(local_108 + 0x10));
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_a9 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0583;
        }
        QArrayData::deallocate(local_108,1,8);
      }
LAB_1007a0583:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_a9 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a069f;
        }
        QArrayData::deallocate(local_110,2,8);
      }
      goto LAB_1007a069f;
    }
    QMutex::lock();
    _memcpy((void *)(param_1 + 0xcc),&local_80,0x48);
    QMutex::unlock();
    if (local_7c != DAT_100b4b004) {
      local_120 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_120 + 1U) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + 1;
        local_a9 = *(int *)local_120 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sIO protocol major version number differs!",
                    local_118 + *(long *)(local_118 + 0x10));
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_a9 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0afd;
        }
        QArrayData::deallocate(local_118,1,8);
      }
LAB_1007a0afd:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_a9 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0b39;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1007a0b39:
      *(undefined4 *)(param_1 + 0xa4) = 4;
      goto LAB_1007a06aa;
    }
    if (local_7a != DAT_100b4b006) {
      local_130 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_130 + 1U) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + 1;
        local_a9 = *(int *)local_130 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sIO protocol minor version number differs!",
                    local_128 + *(long *)(local_128 + 0x10));
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_a9 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0885;
        }
        QArrayData::deallocate(local_128,1,8);
      }
LAB_1007a0885:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_a9 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a08c1;
        }
        QArrayData::deallocate(local_130,2,8);
      }
    }
LAB_1007a08c1:
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
      local_140 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_140 + 1U) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + 1;
        local_a9 = *(int *)local_140 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: handshake header read failed!",
                    local_138 + *(long *)(local_138 + 0x10));
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_a9 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0be0;
        }
        QArrayData::deallocate(local_138,1,8);
      }
LAB_1007a0be0:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_a9 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a069f;
        }
        QArrayData::deallocate(local_140,2,8);
      }
      goto LAB_1007a069f;
    }
    FUN_1007d6c60(local_a8,local_94);
    cVar8 = FUN_1007ea210(local_a8);
    if (cVar8 != '\0') {
      local_150 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_150 + 1U) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + 1;
        local_a9 = *(int *)local_150 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: handshake header parse failed!",
                    local_148 + *(long *)(local_148 + 0x10));
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_a9 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a09f6;
        }
        QArrayData::deallocate(local_148,1,8);
      }
LAB_1007a09f6:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_a9 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a069f;
        }
        QArrayData::deallocate(local_150,2,8);
      }
      goto LAB_1007a069f;
    }
    FUN_1007d6a70(&local_158,local_a8);
    QString::operator=(&local_f0,&local_158);
    if (*(int *)local_158.field0_0x0 != -1) {
      if (*(int *)local_158.field0_0x0 != 0) {
        LOCK();
        *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
        local_a9 = *(int *)local_158.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_1007a0c8b;
      }
      QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
    }
LAB_1007a0c8b:
    if ((local_98 == 0) || (0xc < local_98)) {
      local_168 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_168 + 1U) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_a9 = *(int *)local_168 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: sender type is wrong!",
                    local_160 + *(long *)(local_160 + 0x10));
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_a9 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a108f;
        }
        QArrayData::deallocate(local_160,1,8);
      }
LAB_1007a108f:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_a9 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a069f;
        }
        QArrayData::deallocate(local_168,2,8);
      }
      goto LAB_1007a069f;
    }
    local_b4 = 0;
    if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
       (uVar9 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar9 & 0x3000) == 0)) {
      local_bd = FUN_1007b59b0(param_1,param_2,&local_178,9,param_3,0,0);
    }
    else {
      local_bd = FUN_10079edb0(param_1,param_2,&local_178,9,&local_b4,1,CONCAT44(uVar15,param_3),0,0
                              );
    }
    if (local_bd == '\0') {
      local_188 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_188 + 1U) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + 1;
        local_a9 = *(int *)local_188 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: routing table header read failed!",
                    local_180 + *(long *)(local_180 + 0x10));
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_a9 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a119e;
        }
        QArrayData::deallocate(local_180,1,8);
      }
LAB_1007a119e:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_a9 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a069f;
        }
        QArrayData::deallocate(local_188,2,8);
      }
      goto LAB_1007a069f;
    }
    uVar9 = FUN_100794730(&local_178);
    if ((int)uVar9 == 0) {
      local_198 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_198 + 1U) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + 1;
        local_a9 = *(int *)local_198 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: routing table header parse failed!",
                    local_190 + *(long *)(local_190 + 0x10));
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_a9 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a127e;
        }
        QArrayData::deallocate(local_190,1,8);
      }
LAB_1007a127e:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_a9 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a069f;
        }
        QArrayData::deallocate(local_198,2,8);
      }
      goto LAB_1007a069f;
    }
    pvVar10 = operator_new__(uVar9 & 0xffffffff,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_1a0 = operator_new(0x18);
    *(undefined4 *)(local_1a0 + 1) = 1;
    local_1a0[2] = (long)pvVar10;
    *local_1a0 = (long)&PTR_FUN_100bef320;
    if (pvVar10 == (void *)0x0) {
      local_1b0 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_1b0 + 1U) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + 1;
        local_a9 = *(int *)local_1b0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                    local_1a8 + *(long *)(local_1a8 + 0x10));
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_a9 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a1ac1;
        }
        QArrayData::deallocate(local_1a8,1,8);
      }
LAB_1007a1ac1:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_a9 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a1afd;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
LAB_1007a1afd:
      *(undefined4 *)(param_1 + 0xa4) = 3;
LAB_1007a1b08:
      bVar6 = true;
    }
    else {
      puVar4 = (undefined8 *)local_1a0[2];
      *(char *)(puVar4 + 1) = local_170;
      *puVar4 = local_178;
      if (local_170 != '\0') {
        iVar12 = (int)uVar9 + -9;
        local_b0 = 0;
        if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
           (uVar11 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar11 & 0x3000) == 0)) {
          local_bd = FUN_1007b59b0(param_1,param_2,(long)puVar4 + 9,iVar12,param_3,0,0);
        }
        else {
          local_bd = FUN_10079edb0(param_1,param_2,(long)puVar4 + 9,iVar12,&local_b0,1,param_3,0,0);
        }
        if (local_bd == '\0') {
          local_1c0 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_1c0 + 1U) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + 1;
            local_a9 = *(int *)local_1c0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sHandshake error: routes read failed!",
                        local_1b8 + *(long *)(local_1b8 + 0x10));
          if (*(int *)local_1b8 != -1) {
            if (*(int *)local_1b8 != 0) {
              LOCK();
              *(int *)local_1b8 = *(int *)local_1b8 + -1;
              local_a9 = *(int *)local_1b8 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_1007a1388;
            }
            QArrayData::deallocate(local_1b8,1,8);
          }
LAB_1007a1388:
          if (*(int *)local_1c0 != -1) {
            if (*(int *)local_1c0 != 0) {
              LOCK();
              *(int *)local_1c0 = *(int *)local_1c0 + -1;
              local_a9 = *(int *)local_1c0 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_1007a1afd;
            }
            QArrayData::deallocate(local_1c0,2,8);
          }
          goto LAB_1007a1afd;
        }
      }
      FUN_1007944e0(local_1e8,&local_1a0,uVar9,&local_bd);
      FUN_100792f60(local_e8,local_1e8);
      if (*(int *)(local_1c8 + 0x10) != -1) {
        if (*(int *)(local_1c8 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_1c8 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_a9 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0eab;
        }
        QHashData::free_helper(local_1c8);
      }
LAB_1007a0eab:
      if (*(int *)(local_1d0 + 0x10) != -1) {
        if (*(int *)(local_1d0 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_1d0 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_a9 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_a9) goto LAB_1007a0ee6;
        }
        QHashData::free_helper(local_1d0);
      }
LAB_1007a0ee6:
      QReadWriteLock::~QReadWriteLock(local_1e8);
      if (local_bd == '\0') {
        pQVar5 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar5 + 1U) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + 1;
          local_a9 = *(int *)pQVar5 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sHandshake error: routing table parse failed!",
                      local_1f0 + *(long *)(local_1f0 + 0x10));
        if (*(int *)local_1f0 != -1) {
          if (*(int *)local_1f0 != 0) {
            LOCK();
            *(int *)local_1f0 = *(int *)local_1f0 + -1;
            local_a9 = *(int *)local_1f0 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a1468;
          }
          QArrayData::deallocate(local_1f0,1,8);
        }
LAB_1007a1468:
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_a9 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a1afd;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
        goto LAB_1007a1afd;
      }
      cVar8 = FUN_100793250(local_e8);
      bVar6 = false;
      if (cVar8 != '\0') {
        pQVar5 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar5 + 1U) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + 1;
          local_a9 = *(int *)pQVar5 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,
                      "%sHandshake error: routing table was not accepted by server!",
                      local_200 + *(long *)(local_200 + 0x10));
        if (*(int *)local_200 != -1) {
          if (*(int *)local_200 != 0) {
            LOCK();
            *(int *)local_200 = *(int *)local_200 + -1;
            local_a9 = *(int *)local_200 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a0fac;
          }
          QArrayData::deallocate(local_200,1,8);
        }
LAB_1007a0fac:
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_a9 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_a9) goto LAB_1007a0fe8;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_1007a0fe8:
        *(undefined4 *)(param_1 + 0xa4) = 6;
        goto LAB_1007a1b08;
      }
    }
    if (local_1a0 != (long *)0x0) {
      LOCK();
      plVar2 = local_1a0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_1a0 + 0x10))();
      }
    }
    if (bVar6) goto LAB_1007a06aa;
    QMutex::lock();
    QString::operator=((QString *)(param_1 + 0xb8),&local_f0);
    *(int *)(param_1 + 200) = local_98;
    FUN_100792f60(param_1 + 0x168,local_e8);
    uVar13 = 1;
    QMutex::unlock();
  }
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_a9 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a06e8;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_1007a06e8:
  if (*(int *)(local_c8 + 0x10) != -1) {
    if (*(int *)(local_c8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_c8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_a9 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a0723;
    }
    QHashData::free_helper(local_c8);
  }
LAB_1007a0723:
  if (*(int *)(local_d0 + 0x10) != -1) {
    if (*(int *)(local_d0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_d0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_a9 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1007a075e;
    }
    QHashData::free_helper(local_d0);
  }
LAB_1007a075e:
  QReadWriteLock::~QReadWriteLock(local_e8);
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

