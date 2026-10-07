
void FUN_100485570(long param_1,void *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  QArrayData *pQVar3;
  long *plVar4;
  int *piVar5;
  uint *puVar6;
  ulong *puVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  ulong *puVar13;
  long *plVar14;
  Data *pDVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int local_300 [2];
  undefined1 local_2f8 [40];
  undefined8 local_2d0;
  QArrayData *local_2c8;
  long *local_2c0;
  ulong *local_2b8;
  QArrayData *local_2b0;
  long local_2a8;
  long *local_2a0;
  int local_298 [2];
  undefined1 local_290 [40];
  undefined8 local_268;
  QArrayData *local_260;
  long *local_258;
  ulong *local_250;
  long local_248;
  void *local_240;
  int local_238 [2];
  undefined1 local_230 [40];
  undefined8 local_208;
  QArrayData *local_200;
  long *local_1f8;
  int local_1f0 [2];
  QString local_1e8;
  undefined4 local_1e0;
  int *local_1d8;
  int *local_1d0;
  int *local_1c8;
  long *local_1c0;
  int *local_1b8;
  undefined4 local_1b0;
  int *local_1a8;
  long *local_1a0;
  int *local_198;
  undefined4 local_190;
  int local_188 [2];
  undefined1 local_180 [40];
  undefined8 local_158;
  QArrayData *local_150;
  long *local_148;
  long local_140;
  int local_138 [2];
  undefined1 local_130 [40];
  undefined8 local_108;
  QArrayData *local_100;
  long *local_f8;
  undefined8 local_f0;
  void *local_e8;
  void *local_e0;
  int local_d8 [2];
  undefined1 local_d0 [40];
  undefined8 local_a8;
  QArrayData *local_a0;
  long *local_98;
  long local_90;
  int local_88 [2];
  undefined1 local_80 [40];
  undefined8 local_58;
  QArrayData *local_50;
  long *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  pQVar3 = *(QArrayData **)((long)param_2 + 0x30);
  uVar11 = *(undefined8 *)((long)param_2 + 0x38);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  plVar4 = *(long **)((long)param_2 + 0x28);
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar4 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100485636;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100485636:
  local_1e0 = *(undefined4 *)((long)param_2 + 0x20);
  local_1f0[0] = 0;
  local_1e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_1d8 = (int *)*param_3;
  if (*local_1d8 != -1) {
    if (*local_1d8 == 0) {
      QListData::detach((int)&local_1d8);
      iVar8 = local_1d8[2];
      if (iVar8 != local_1d8[3]) {
        puVar16 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        piVar17 = local_1d8 + (long)iVar8 * 2 + 4;
        lVar9 = (long)local_1d8[3] * 8 + (long)iVar8 * -8;
        do {
          piVar19 = (int *)*puVar16;
          *(int **)piVar17 = piVar19;
          if (1 < *piVar19 + 1U) {
            LOCK();
            *piVar19 = *piVar19 + 1;
            local_31 = *piVar19 != 0;
            UNLOCK();
          }
          piVar17 = piVar17 + 2;
          puVar16 = puVar16 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_1d8 = *local_1d8 + 1;
      local_31 = *local_1d8 != 0;
      UNLOCK();
    }
  }
  local_1d0 = *(int **)((long)param_2 + 0x18);
  if (*local_1d0 != -1) {
    if (*local_1d0 == 0) {
      QListData::detach((int)&local_1d0);
      iVar8 = local_1d0[2];
      if (iVar8 != local_1d0[3]) {
        puVar16 = (undefined8 *)
                  (*(long *)((long)param_2 + 0x18) + 0x10 +
                  (long)*(int *)(*(long *)((long)param_2 + 0x18) + 8) * 8);
        piVar17 = local_1d0 + (long)iVar8 * 2 + 4;
        lVar9 = (long)local_1d0[3] * 8 + (long)iVar8 * -8;
        do {
          piVar19 = (int *)*puVar16;
          *(int **)piVar17 = piVar19;
          if (1 < *piVar19 + 1U) {
            LOCK();
            *piVar19 = *piVar19 + 1;
            local_31 = *piVar19 != 0;
            UNLOCK();
          }
          piVar17 = piVar17 + 2;
          puVar16 = puVar16 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_1d0 = *local_1d0 + 1;
      local_31 = *local_1d0 != 0;
      UNLOCK();
    }
  }
  local_1a8 = local_1d8;
  if (*local_1d8 != -1) {
    if (*local_1d8 == 0) {
      QListData::detach((int)&local_1a8);
      iVar8 = local_1a8[2];
      if (iVar8 != local_1a8[3]) {
        piVar17 = local_1d8 + (long)local_1d8[2] * 2 + 4;
        piVar19 = local_1a8 + (long)iVar8 * 2 + 4;
        lVar9 = (long)local_1a8[3] * 8 + (long)iVar8 * -8;
        do {
          piVar5 = *(int **)piVar17;
          *(int **)piVar19 = piVar5;
          if (1 < *piVar5 + 1U) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          piVar19 = piVar19 + 2;
          piVar17 = piVar17 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_1d8 = *local_1d8 + 1;
      local_31 = *local_1d8 != 0;
      UNLOCK();
    }
  }
  lVar21 = (long)local_1a8[2];
  local_1a0 = (long *)(local_1a8 + lVar21 * 2 + 4);
  lVar9 = (long)local_1a8[3];
  local_198 = local_1a8 + lVar9 * 2 + 4;
  if (local_1a8[2] != local_1a8[3]) {
    lVar18 = lVar9 * 8 + lVar21 * -8;
    do {
      if (*(int *)(*local_1a0 + 4) != 0) {
        local_1f0[0] = *(int *)(*local_1a0 + 4) + 4 + local_1f0[0];
      }
      local_1a0 = local_1a0 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
    local_1a0 = (long *)(local_1a8 + ((ulong)(lVar21 * -8 + -8 + lVar9 * 8) >> 2) + lVar21 * 2 + 6);
  }
  local_190 = 1;
  FUN_100013180(&local_1a8);
  local_1c8 = local_1d0;
  if (*local_1d0 != -1) {
    if (*local_1d0 == 0) {
      QListData::detach((int)&local_1c8);
      iVar8 = local_1c8[2];
      if (iVar8 != local_1c8[3]) {
        piVar17 = local_1d0 + (long)local_1d0[2] * 2 + 4;
        piVar19 = local_1c8 + (long)iVar8 * 2 + 4;
        lVar9 = (long)local_1c8[3] * 8 + (long)iVar8 * -8;
        do {
          piVar5 = *(int **)piVar17;
          *(int **)piVar19 = piVar5;
          if (1 < *piVar5 + 1U) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          piVar19 = piVar19 + 2;
          piVar17 = piVar17 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_1d0 = *local_1d0 + 1;
      local_31 = *local_1d0 != 0;
      UNLOCK();
    }
  }
  lVar21 = (long)local_1c8[2];
  local_1c0 = (long *)(local_1c8 + lVar21 * 2 + 4);
  lVar9 = (long)local_1c8[3];
  local_1b8 = local_1c8 + lVar9 * 2 + 4;
  if (local_1c8[2] != local_1c8[3]) {
    lVar18 = lVar9 * 8 + lVar21 * -8;
    do {
      if (*(int *)(*local_1c0 + 4) != 0) {
        local_1f0[0] = *(int *)(*local_1c0 + 4) + 4 + local_1f0[0];
      }
      local_1c0 = local_1c0 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
    local_1c0 = (long *)(local_1c8 + ((ulong)(lVar21 * -8 + -8 + lVar9 * 8) >> 2) + lVar21 * 2 + 6);
  }
  local_1b0 = 1;
  FUN_100013180(&local_1c8);
  local_238[0] = *(int *)((long)param_2 + 0x40);
  if (local_238[0] == 2) {
    QString::operator=(&local_1e8,(QString *)((long)param_2 + 0x10));
    local_238[0] = *(int *)((long)param_2 + 0x40);
  }
  FUN_100494b20(local_230,local_1f0);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = *(long *)((long)param_2 + 8);
  local_208 = uVar11;
  local_200 = pQVar3;
  local_1f8 = plVar4;
  iVar8 = QString::compare_helper
                    (*(long *)(lVar9 + 0x10) + lVar9,*(undefined4 *)(lVar9 + 4),"FAKE_SESSION_UUID",
                     0xffffffff,1);
  if (iVar8 == 0) {
    pvVar12 = operator_new(0x38);
    FUN_10047e480(pvVar12,(long)param_2 + 0x28);
    *(undefined1 *)((long)pvVar12 + 0x20) = 1;
    lVar9 = param_1 + 0x50;
    local_250 = (ulong *)0x0;
    local_298[0] = local_238[0];
    local_248 = lVar9;
    local_240 = pvVar12;
    FUN_100494b20(local_290,local_230);
    local_260 = local_200;
    if (1 < *(int *)local_200 + 1U) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + 1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
    }
    local_258 = local_1f8;
    if (local_1f8 != (long *)0x0) {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
    }
    local_268 = local_208;
    local_298[0] = local_238[0];
    puVar13 = operator_new(8);
    *puVar13 = param_1 + 0x38;
    QMutex::lock();
    *(byte *)puVar13 = (byte)*puVar13 | 1;
    puVar6 = *(uint **)(param_1 + 0x48);
    uVar2 = puVar6[2];
    local_250 = puVar13;
    if (puVar6[3] == uVar2) {
      local_138[0] = local_298[0];
      FUN_100494b20(local_130,local_290);
      local_100 = local_260;
      if (1 < *(int *)local_260 + 1U) {
        LOCK();
        *(int *)local_260 = *(int *)local_260 + 1;
        local_31 = *(int *)local_260 != 0;
        UNLOCK();
      }
      local_f8 = local_258;
      if (local_258 != (long *)0x0) {
        LOCK();
        *(int *)(local_258 + 1) = (int)local_258[1] + 1;
        UNLOCK();
      }
      local_108 = local_268;
      local_138[0] = local_298[0];
      uVar11 = FUN_100494df0(pvVar12,local_138);
      FUN_100486ad0(local_138);
      local_f0 = uVar11;
      FUN_100496560(param_1 + 0x58,&local_f0);
      local_240 = (void *)0x0;
      local_e8 = pvVar12;
      FUN_1004965c0(lVar9,&local_e8);
      local_250 = (ulong *)0x0;
      if ((*puVar13 & 1) != 0) {
        *puVar13 = *puVar13 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar13);
    }
    else {
      plVar14 = (long *)(param_1 + 0x48);
      if (1 < *puVar6) {
        pDVar15 = (Data *)QListData::detach((int)plVar14);
        lVar21 = *plVar14;
        lVar18 = (long)*(int *)(lVar21 + 8);
        puVar1 = (uint *)(lVar21 + 0x10 + lVar18 * 8);
        if ((puVar6 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
           (lVar20 = *(int *)(lVar21 + 0xc) - lVar18,
           lVar20 != 0 && lVar18 <= *(int *)(lVar21 + 0xc))) {
          _memcpy(puVar1,puVar6 + (long)(int)uVar2 * 2 + 4,lVar20 * 8);
        }
        if (*(int *)pDVar15 != -1) {
          if (*(int *)pDVar15 != 0) {
            LOCK();
            *(int *)pDVar15 = *(int *)pDVar15 + -1;
            local_31 = *(int *)pDVar15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004860b2;
          }
          QListData::dispose(pDVar15);
        }
      }
LAB_1004860b2:
      lVar21 = *(long *)(*plVar14 + 0x10 + (long)*(int *)(*plVar14 + 8) * 8);
      local_188[0] = local_298[0];
      local_140 = lVar21;
      FUN_100494b20(local_180,local_290);
      local_150 = local_260;
      if (1 < *(int *)local_260 + 1U) {
        LOCK();
        *(int *)local_260 = *(int *)local_260 + 1;
        local_31 = *(int *)local_260 != 0;
        UNLOCK();
      }
      local_148 = local_258;
      if (local_258 != (long *)0x0) {
        LOCK();
        *(int *)(local_258 + 1) = (int)local_258[1] + 1;
        UNLOCK();
      }
      local_158 = local_268;
      local_188[0] = local_298[0];
      iVar8 = FUN_100494f50(pvVar12,local_188,lVar21);
      FUN_100486ad0(local_188);
      if (iVar8 < 0) {
        local_250 = (ulong *)0x0;
        if ((*puVar13 & 1) != 0) {
          *puVar13 = *puVar13 & 0xfffffffffffffffe;
          QMutex::unlock();
        }
        operator_delete(puVar13);
        local_240 = (void *)0x0;
        FUN_10047e550(pvVar12);
        operator_delete(pvVar12);
      }
      else {
        FUN_100036ff0(plVar14,&local_140);
        local_240 = (void *)0x0;
        local_e0 = pvVar12;
        FUN_1004965c0(lVar9,&local_e0);
        local_250 = (ulong *)0x0;
        if ((*puVar13 & 1) != 0) {
          *puVar13 = *puVar13 & 0xfffffffffffffffe;
          QMutex::unlock();
        }
        operator_delete(puVar13);
        if (lVar21 != 0) {
          FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),lVar21,0);
        }
      }
    }
    FUN_100486ad0(local_298);
    FUN_100484cd0(&local_250);
LAB_10048627e:
    FUN_100485310(param_2);
    operator_delete(param_2);
  }
  else {
    local_2a0 = (long *)(param_1 + 0x50);
    local_2b8 = (ulong *)0x0;
    local_2b0 = *(QArrayData **)((long)param_2 + 8);
    if (1 < *(int *)local_2b0 + 1U) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + 1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
    }
    local_2a8 = 0;
    local_300[0] = local_238[0];
    FUN_100494b20(local_2f8,local_230);
    local_2c8 = local_200;
    if (1 < *(int *)local_200 + 1U) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + 1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
    }
    local_2c0 = local_1f8;
    if (local_1f8 != (long *)0x0) {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
    }
    local_2d0 = local_208;
    local_300[0] = local_238[0];
    if (local_2b8 == (ulong *)0x0) {
      puVar10 = operator_new(8);
      *puVar10 = param_1 + 0x38;
      QMutex::lock();
      puVar13 = local_2b8;
      *(byte *)puVar10 = (byte)*puVar10 | 1;
      puVar7 = local_2b8;
      if ((local_2b8 != puVar10) && (puVar7 = puVar10, local_2b8 != (ulong *)0x0)) {
        if ((*local_2b8 & 1) != 0) {
          *local_2b8 = *local_2b8 & 0xfffffffffffffffe;
          local_2b8 = puVar10;
          QMutex::unlock();
          puVar10 = local_2b8;
        }
        local_2b8 = puVar10;
        operator_delete(puVar13);
        puVar7 = local_2b8;
      }
      local_2b8 = puVar7;
      if (((*(int *)(*local_2a0 + 0xc) == *(int *)(*local_2a0 + 8)) ||
          (lVar9 = FUN_10047def0(local_2a0,&local_2b0), lVar9 == 0)) || (*(int *)(lVar9 + 0xc) != 1)
         ) {
        puVar13 = local_2b8;
        local_2a8 = 0;
        if (local_2b8 != (ulong *)0x0) {
          local_2b8 = (ulong *)0x0;
          if ((*puVar13 & 1) != 0) {
            *puVar13 = *puVar13 & 0xfffffffffffffffe;
            QMutex::unlock();
          }
LAB_100485fb7:
          operator_delete(puVar13);
        }
      }
      else {
        puVar6 = *(uint **)(param_1 + 0x48);
        uVar2 = puVar6[2];
        local_2a8 = lVar9;
        if (puVar6[3] == uVar2) {
          local_88[0] = local_300[0];
          FUN_100494b20(local_80,local_2f8);
          local_50 = local_2c8;
          if (1 < *(int *)local_2c8 + 1U) {
            LOCK();
            *(int *)local_2c8 = *(int *)local_2c8 + 1;
            local_31 = *(int *)local_2c8 != 0;
            UNLOCK();
          }
          local_48 = local_2c0;
          if (local_2c0 != (long *)0x0) {
            LOCK();
            *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
            UNLOCK();
          }
          local_58 = local_2d0;
          local_88[0] = local_300[0];
          uVar11 = FUN_100494df0(lVar9,local_88);
          FUN_100486ad0(local_88);
          local_40 = uVar11;
          FUN_100496560(param_1 + 0x58,&local_40);
          puVar13 = local_2b8;
          local_2a8 = 0;
          if (local_2b8 != (ulong *)0x0) {
            local_2b8 = (ulong *)0x0;
            if ((*puVar13 & 1) != 0) {
              *puVar13 = *puVar13 & 0xfffffffffffffffe;
              QMutex::unlock();
            }
            goto LAB_100485fb7;
          }
        }
        else {
          plVar14 = (long *)(param_1 + 0x48);
          if (1 < *puVar6) {
            pDVar15 = (Data *)QListData::detach((int)plVar14);
            lVar9 = *plVar14;
            lVar21 = (long)*(int *)(lVar9 + 8);
            puVar1 = (uint *)(lVar9 + 0x10 + lVar21 * 8);
            if ((puVar6 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
               (lVar18 = *(int *)(lVar9 + 0xc) - lVar21,
               lVar18 != 0 && lVar21 <= *(int *)(lVar9 + 0xc))) {
              _memcpy(puVar1,puVar6 + (long)(int)uVar2 * 2 + 4,lVar18 * 8);
            }
            if (*(int *)pDVar15 != -1) {
              if (*(int *)pDVar15 != 0) {
                LOCK();
                *(int *)pDVar15 = *(int *)pDVar15 + -1;
                local_31 = *(int *)pDVar15 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004863cb;
              }
              QListData::dispose(pDVar15);
            }
          }
LAB_1004863cb:
          lVar21 = local_2a8;
          lVar9 = *(long *)(*plVar14 + 0x10 + (long)*(int *)(*plVar14 + 8) * 8);
          local_d8[0] = local_300[0];
          local_90 = lVar9;
          FUN_100494b20(local_d0,local_2f8);
          local_a0 = local_2c8;
          if (1 < *(int *)local_2c8 + 1U) {
            LOCK();
            *(int *)local_2c8 = *(int *)local_2c8 + 1;
            local_31 = *(int *)local_2c8 != 0;
            UNLOCK();
          }
          local_98 = local_2c0;
          if (local_2c0 != (long *)0x0) {
            LOCK();
            *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
            UNLOCK();
          }
          local_a8 = local_2d0;
          local_d8[0] = local_300[0];
          iVar8 = FUN_100494f50(lVar21,local_d8,lVar9);
          FUN_100486ad0(local_d8);
          puVar13 = local_2b8;
          if (iVar8 < 0) {
            local_2a8 = 0;
            if (local_2b8 != (ulong *)0x0) {
              local_2b8 = (ulong *)0x0;
              if ((*puVar13 & 1) != 0) {
                *puVar13 = *puVar13 & 0xfffffffffffffffe;
                QMutex::unlock();
              }
              goto LAB_100485fb7;
            }
          }
          else {
            FUN_100036ff0(plVar14,&local_90);
            puVar13 = local_2b8;
            local_2a8 = 0;
            if (local_2b8 != (ulong *)0x0) {
              local_2b8 = (ulong *)0x0;
              if ((*puVar13 & 1) != 0) {
                *puVar13 = *puVar13 & 0xfffffffffffffffe;
                QMutex::unlock();
              }
              operator_delete(puVar13);
              if (lVar9 != 0) {
                FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),lVar9,0);
              }
            }
          }
        }
      }
    }
    FUN_100486ad0(local_300);
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_31 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100486001;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
LAB_100486001:
    puVar13 = local_2b8;
    if (local_2b8 != (ulong *)0x0) {
      if ((*local_2b8 & 1) != 0) {
        *local_2b8 = *local_2b8 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar13);
    }
    if (param_2 != (void *)0x0) goto LAB_10048627e;
  }
  FUN_100486ad0(local_238);
  FUN_100013180(&local_1d0);
  FUN_100013180(&local_1d8);
  if (*(int *)local_1e8.field0_0x0 != -1) {
    if (*(int *)local_1e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
      local_31 = *(int *)local_1e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004862f6;
    }
    QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
  }
LAB_1004862f6:
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar14 = plVar4 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

