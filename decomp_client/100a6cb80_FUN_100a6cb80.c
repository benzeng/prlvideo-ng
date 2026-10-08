
undefined1 FUN_100a6cb80(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  _func_void_Node_ptr *p_Var4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  bool bVar19;
  undefined4 local_108;
  undefined4 uStack_104;
  ulong local_100;
  undefined8 local_f8;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  int local_d0;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 local_c0;
  int local_bc;
  undefined8 local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  QReadWriteLock local_88 [8];
  undefined4 local_80;
  int iStack_7c;
  undefined1 local_78;
  undefined1 local_70 [16];
  QReadWriteLock local_60 [8];
  ulong local_58;
  _func_void_Node_ptr *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  FUN_100a6c630(local_60);
  QReadWriteLock::QReadWriteLock(local_88,0);
  local_80 = 0;
  iStack_7c = 0;
  local_78 = 1;
  local_70._8_4_ = (int)PTR_shared_null_1021e15d0;
  local_70._0_8_ = PTR_shared_null_1021e15d0;
  local_70._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  uVar10 = param_1;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForRead();
    uVar10 = param_1 | 1;
  }
  uVar17 = (ulong)*(uint *)(param_1 + 8);
  iVar16 = *(int *)(param_1 + 0xc);
  iVar15 = (int)(local_58 >> 0x20);
  uVar8 = (uint)local_58;
  if (iVar16 == 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    puVar7 = puVar5;
    if (*(uint *)(puVar5 + 4) != 0) {
      uVar9 = *(uint *)((long)puVar5 + 0x24) ^ uVar8;
      for (puVar3 = *(undefined8 **)(puVar5[1] + ((ulong)uVar9 % (ulong)*(uint *)(puVar5 + 4)) * 8);
          (puVar7 = puVar5, puVar3 != puVar5 &&
          ((*(uint *)(puVar3 + 1) != uVar9 ||
           (puVar7 = puVar3, uVar8 != *(uint *)((long)puVar3 + 0xc)))));
          puVar3 = (undefined8 *)*puVar3) {
      }
    }
    if (iVar15 == 0) {
      if (puVar7 != puVar5) {
        uVar17 = local_58 & 0xffffffff;
      }
      iVar16 = 0;
    }
    else {
      uVar17 = local_58;
      iVar16 = iVar15;
      if (puVar7 == puVar5) {
        uVar14 = 0;
        goto LAB_100a6d27f;
      }
    }
LAB_100a6cc95:
    local_80 = (undefined4)uVar17;
    iStack_7c = iVar16;
    FUN_100a6e370(&local_b0);
    local_a8 = local_b0;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 == 0) {
        QListData::detach((int)&local_a8);
        lVar11 = (long)*(int *)(local_a8 + 8);
        if ((local_b0 + (long)*(int *)(local_b0 + 8) * 8 != local_a8 + lVar11 * 8) &&
           (lVar13 = *(int *)(local_a8 + 0xc) - lVar11,
           lVar13 != 0 && lVar11 <= *(int *)(local_a8 + 0xc))) {
          _memcpy(local_a8 + lVar11 * 8 + 0x10,local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10,
                  lVar13 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
    }
    local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
    local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
    local_90 = 1;
    if (*(int *)local_b0 == -1) {
LAB_100a6cd94:
      if (local_a0 != local_98) {
        do {
          local_b8 = *(undefined8 *)local_a0;
          if (*(uint *)(local_48 + 0x20) != 0) {
            uVar8 = *(uint *)(local_48 + 0x24) ^ (uint)local_b8;
            uVar9 = (uint)((ulong)local_b8 >> 0x20);
            uVar8 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar9;
            for (p_Var4 = *(_func_void_Node_ptr **)
                           (*(long *)(local_48 + 8) +
                           ((ulong)uVar8 % (ulong)*(uint *)(local_48 + 0x20)) * 8);
                p_Var4 != local_48; p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
              if (((*(uint *)(p_Var4 + 8) == uVar8) && ((uint)local_b8 == *(uint *)(p_Var4 + 0xc)))
                 && (uVar9 == *(uint *)(p_Var4 + 0x10))) {
                if (p_Var4 != local_48) goto LAB_100a6ce73;
                break;
              }
            }
          }
          if (*(int *)(param_1 + 0xc) == 0) {
            local_c0 = local_80;
            local_bc = iStack_7c;
            puVar5 = (undefined8 *)&local_c0;
          }
          else {
            local_c8 = *(undefined4 *)(param_1 + 8);
            iStack_c4 = *(int *)(param_1 + 0xc);
            puVar5 = (undefined8 *)&local_c8;
          }
          uVar12 = *puVar5;
          puVar5 = (undefined8 *)FUN_100a6e4b0(&local_48,&local_b8);
          *puVar5 = uVar12;
LAB_100a6ce73:
          local_a0 = local_a0 + 8;
          local_90 = 1;
        } while (local_a0 != local_98);
      }
    }
    else {
      if (*(int *)local_b0 == 0) {
LAB_100a6cd82:
        QListData::dispose(local_b0);
      }
      else {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100a6cd82;
      }
      if (local_90 != 0) goto LAB_100a6cd94;
    }
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a6cec1;
      }
      QListData::dispose(local_a8);
    }
LAB_100a6cec1:
    FUN_100a6e370(&local_f0,&local_48);
    local_e8 = local_f0;
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 == 0) {
        QListData::detach((int)&local_e8);
        lVar11 = (long)*(int *)(local_e8 + 8);
        if ((local_f0 + (long)*(int *)(local_f0 + 8) * 8 != local_e8 + lVar11 * 8) &&
           (lVar13 = *(int *)(local_e8 + 0xc) - lVar11,
           lVar13 != 0 && lVar11 <= *(int *)(local_e8 + 0xc))) {
          _memcpy(local_e8 + lVar11 * 8 + 0x10,local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10,
                  lVar13 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + 1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
      }
    }
    local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
    local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
    local_d0 = 1;
    if (*(int *)local_f0 == -1) {
LAB_100a6cfb2:
      if (local_e0 != local_d8) {
LAB_100a6cfd1:
        uVar12 = *(undefined8 *)local_e0;
        local_f8 = uVar12;
        puVar6 = (uint *)FUN_100a6e4b0(&local_48,&local_f8);
        puVar5 = *(undefined8 **)(param_1 + 0x18);
        if (*(uint *)(puVar5 + 4) != 0) {
          uVar9 = (uint)uVar12;
          uVar8 = *(uint *)((long)puVar5 + 0x24) ^ uVar9;
          uVar18 = (uint)((ulong)uVar12 >> 0x20);
          uVar8 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar18;
          puVar7 = *(undefined8 **)(puVar5[1] + ((ulong)uVar8 % (ulong)*(uint *)(puVar5 + 4)) * 8);
          for (puVar3 = puVar7; puVar3 != puVar5; puVar3 = (undefined8 *)*puVar3) {
            if (((*(uint *)(puVar3 + 1) == uVar8) && (uVar9 == *(uint *)((long)puVar3 + 0xc))) &&
               (uVar18 == *(uint *)(puVar3 + 2))) {
              if (puVar3 != puVar5) {
                bVar19 = *(int *)((long)puVar5 + 0x14) == 0;
                goto LAB_100a6d0e6;
              }
              break;
            }
          }
        }
        puVar5 = *(undefined8 **)(param_1 + 0x20);
        uVar8 = *(uint *)(puVar5 + 4);
        if (puVar6[1] == 0) {
          if (uVar8 != 0) {
            uVar9 = *(uint *)((long)puVar5 + 0x24) ^ *puVar6;
            for (puVar7 = *(undefined8 **)(puVar5[1] + ((ulong)uVar9 % (ulong)uVar8) * 8);
                puVar7 != puVar5; puVar7 = (undefined8 *)*puVar7) {
              if ((*(uint *)(puVar7 + 1) == uVar9) && (*puVar6 == *(uint *)((long)puVar7 + 0xc))) {
                if (puVar7 != puVar5) {
                  puVar5 = (undefined8 *)FUN_100a6e4b0(local_70,&local_f8);
                  goto LAB_100a6d0cd;
                }
                break;
              }
            }
          }
          uVar12 = CONCAT44(iStack_7c,local_80);
          puVar5 = (undefined8 *)FUN_100a6e4b0(local_70,&local_f8);
          *puVar5 = uVar12;
          goto LAB_100a6d1f2;
        }
        iVar16 = 1;
        if (uVar8 != 0) {
          uVar9 = *(uint *)((long)puVar5 + 0x24) ^ *puVar6;
          puVar7 = *(undefined8 **)(puVar5[1] + ((ulong)uVar9 % (ulong)uVar8) * 8);
          while( true ) {
            if (puVar7 == puVar5) goto LAB_100a6d221;
            if ((*(uint *)(puVar7 + 1) == uVar9) && (*puVar6 == *(uint *)((long)puVar7 + 0xc)))
            break;
            puVar7 = (undefined8 *)*puVar7;
          }
          if (puVar7 != puVar5) {
            puVar5 = (undefined8 *)FUN_100a6e4b0(local_70,&local_f8);
LAB_100a6d0cd:
            uVar12 = *(undefined8 *)puVar6;
            goto LAB_100a6d17f;
          }
        }
        goto LAB_100a6d221;
      }
LAB_100a6d21b:
      iVar16 = 8;
    }
    else {
      if (*(int *)local_f0 == 0) {
LAB_100a6cf9a:
        QListData::dispose(local_f0);
      }
      else {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100a6cf9a;
      }
      iVar16 = 8;
      if (local_d0 != 0) goto LAB_100a6cfb2;
    }
LAB_100a6d221:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a6d24d;
      }
      QListData::dispose(local_e8);
    }
LAB_100a6d24d:
    if (iVar16 == 8) {
      if (0 < *(int *)(local_70._0_8_ + 0x14)) {
        local_78 = 0;
      }
      uVar14 = 1;
      FUN_100a6c790(param_3,local_88);
    }
    else {
      uVar14 = 0;
    }
  }
  else {
    if ((*(uint *)(param_1 + 8) == uVar8) || (iVar15 == 0)) goto LAB_100a6cc95;
    uVar14 = 0;
  }
LAB_100a6d27f:
  if ((uVar10 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (*(int *)(local_70._8_8_ + 0x10) != -1) {
    if (*(int *)(local_70._8_8_ + 0x10) != 0) {
      LOCK();
      pcVar1 = (code *)(local_70._8_8_ + 0x10);
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6d2c4;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_70._8_8_);
  }
LAB_100a6d2c4:
  if (*(int *)(local_70._0_8_ + 0x10) != -1) {
    if (*(int *)(local_70._0_8_ + 0x10) != 0) {
      LOCK();
      pcVar1 = (code *)(local_70._0_8_ + 0x10);
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6d2f3;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_70._0_8_);
  }
LAB_100a6d2f3:
  QReadWriteLock::~QReadWriteLock(local_88);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6d32b;
    }
    QHashData::free_helper(local_40);
  }
LAB_100a6d32b:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6d35a;
    }
    QHashData::free_helper(local_48);
  }
LAB_100a6d35a:
  QReadWriteLock::~QReadWriteLock(local_60);
  return uVar14;
LAB_100a6d0e6:
  local_100 = 0;
  uVar17 = 0;
  if (bVar19) goto LAB_100a6d124;
  if (((*(uint *)(puVar7 + 1) == uVar8) && (uVar9 == *(uint *)((long)puVar7 + 0xc))) &&
     (uVar18 == *(uint *)(puVar7 + 2))) {
    local_100 = 0;
    uVar17 = 0;
    if (puVar7 != puVar5) {
      uVar17 = *(ulong *)((long)puVar7 + 0x14) & 0xffffffff;
      local_100 = *(ulong *)((long)puVar7 + 0x14) & 0xffffffff00000000;
    }
    goto LAB_100a6d124;
  }
  puVar7 = (undefined8 *)*puVar7;
  bVar19 = puVar7 == puVar5;
  goto LAB_100a6d0e6;
LAB_100a6d124:
  local_100 = local_100 | uVar17;
  local_108 = 0;
  uStack_104 = 0;
  cVar2 = FUN_100a6cad0(param_1,&local_100,puVar6,&local_108);
  iVar16 = 1;
  if (cVar2 == '\0') goto LAB_100a6d221;
  puVar5 = (undefined8 *)FUN_100a6e4b0(local_70,&local_f8);
  uVar12 = CONCAT44(uStack_104,local_108);
LAB_100a6d17f:
  *puVar5 = uVar12;
LAB_100a6d1f2:
  local_e0 = local_e0 + 8;
  local_d0 = 1;
  if (local_e0 == local_d8) goto LAB_100a6d21b;
  goto LAB_100a6cfd1;
}

