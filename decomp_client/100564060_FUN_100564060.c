
void FUN_100564060(long param_1,undefined8 param_2)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  _func_void_Node_ptr *p_Var8;
  long *plVar9;
  long lVar10;
  Data *pDVar11;
  Data *pDVar12;
  ulong uVar13;
  long lVar14;
  QKeySequence *pQVar15;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  int local_174;
  Data *local_170;
  Data *local_168;
  Data *local_160;
  Data *local_158;
  int local_150;
  uint local_144;
  Data *local_140;
  Data *local_138;
  Data *local_130;
  undefined4 local_128;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  Data *local_108;
  Data *local_100;
  int local_f8;
  int *local_f0;
  Data *local_e8;
  Data *local_e0;
  undefined4 local_d8;
  Data *local_d0 [2];
  undefined4 local_bc;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  int local_98;
  _func_void_Node_ptr *local_90;
  Data *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  ulong local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_90 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_1005678e0(&local_b8);
  FUN_1000722f0(&local_b0,&local_b8);
  local_a8 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
  local_a0 = local_b0 + (long)*(int *)(local_b0 + 0xc) * 8 + 0x10;
  local_98 = 1;
  if (*(int *)local_b8 == -1) {
LAB_10056415c:
    if (local_a8 != local_a0) {
      do {
        local_bc = **(undefined4 **)local_a8;
        FUN_100566100(local_d0,param_2,&local_bc);
        uVar4 = FUN_100708300(local_d0);
        pDVar11 = local_d0[0];
        if (*(int *)local_d0[0] != -1) {
          if (*(int *)local_d0[0] != 0) {
            LOCK();
            *(int *)local_d0[0] = *(int *)local_d0[0] + -1;
            local_31 = *(int *)local_d0[0] != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100564224;
          }
          iVar5 = *(int *)(local_d0[0] + 0xc);
          if (iVar5 != *(int *)(local_d0[0] + 8)) {
            lVar14 = (long)*(int *)(local_d0[0] + 8) * 8 + (long)iVar5 * -8;
            pQVar15 = (QKeySequence *)(local_d0[0] + (long)iVar5 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar15);
              pQVar15 = pQVar15 + -8;
              lVar14 = lVar14 + 8;
            } while (lVar14 != 0);
          }
          QListData::dispose(pDVar11);
        }
LAB_100564224:
        if ((uVar4 & 4) == 0) {
          plVar6 = (long *)FUN_100565d60(&local_90,&local_bc);
          FUN_100566100(&local_e0,param_2,&local_bc);
          if ((Data *)*plVar6 != local_e0) {
            FUN_1005607f0(&local_88,&local_e0);
            pDVar11 = (Data *)*plVar6;
            *plVar6 = (long)local_88;
            local_88 = pDVar11;
            if (*(int *)pDVar11 != -1) {
              if (*(int *)pDVar11 != 0) {
                LOCK();
                *(int *)pDVar11 = *(int *)pDVar11 + -1;
                local_31 = *(int *)pDVar11 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100564310;
              }
              iVar5 = *(int *)(pDVar11 + 0xc);
              if (iVar5 != *(int *)(pDVar11 + 8)) {
                lVar14 = (long)*(int *)(pDVar11 + 8) * 8 + (long)iVar5 * -8;
                pDVar12 = pDVar11 + (long)iVar5 * 8 + 8;
                do {
                  QKeySequence::~QKeySequence((QKeySequence *)pDVar12);
                  pDVar12 = pDVar12 + -8;
                  lVar14 = lVar14 + 8;
                } while (lVar14 != 0);
              }
              QListData::dispose(pDVar11);
            }
          }
LAB_100564310:
          pDVar11 = local_e0;
          *(undefined4 *)(plVar6 + 1) = local_d8;
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005643a0;
            }
            iVar5 = *(int *)(local_e0 + 0xc);
            if (iVar5 != *(int *)(local_e0 + 8)) {
              lVar14 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar5 * -8;
              pQVar15 = (QKeySequence *)(local_e0 + (long)iVar5 * 8 + 8);
              do {
                QKeySequence::~QKeySequence(pQVar15);
                pQVar15 = pQVar15 + -8;
                lVar14 = lVar14 + 8;
              } while (lVar14 != 0);
            }
            QListData::dispose(pDVar11);
          }
        }
LAB_1005643a0:
        local_a8 = local_a8 + 8;
        local_98 = 1;
      } while (local_a8 != local_a0);
    }
  }
  else {
    if (*(int *)local_b8 == 0) {
LAB_10056410c:
      iVar5 = *(int *)(local_b8 + 0xc);
      if (iVar5 != *(int *)(local_b8 + 8)) {
        lVar14 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar5 * -8;
        pDVar11 = local_b8 + (long)iVar5 * 8 + 8;
        do {
          if (*(void **)pDVar11 != (void *)0x0) {
            operator_delete(*(void **)pDVar11);
          }
          pDVar11 = pDVar11 + -8;
          lVar14 = lVar14 + 8;
        } while (lVar14 != 0);
      }
      QListData::dispose(local_b8);
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10056410c;
    }
    if (local_98 != 0) goto LAB_10056415c;
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056443f;
    }
    iVar5 = *(int *)(local_b0 + 0xc);
    if (iVar5 != *(int *)(local_b0 + 8)) {
      lVar14 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = local_b0 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_b0);
  }
LAB_10056443f:
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_f0 != -1) {
    if (*local_f0 != 0) {
      LOCK();
      *local_f0 = *local_f0 + -1;
      local_31 = *local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005644a8;
    }
    FUN_100533ef0(&local_f0,local_f0);
  }
LAB_1005644a8:
  uVar4 = *(uint *)(local_e8 + 8);
  uVar13 = 0;
  if (*(uint *)(local_e8 + 0xc) != uVar4) {
    if (1 < *(uint *)local_e8) {
      FUN_100534020(&local_e8,*(uint *)(local_e8 + 4));
      uVar4 = *(uint *)(local_e8 + 8);
    }
    uVar13 = *(ulong *)(*(long *)(local_e8 + (long)(int)uVar4 * 8 + 0x10) + 8);
  }
  if ((DAT_1023122d0 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_1023122d0), iVar5 != 0)) {
    DAT_1023122c8 = PTR_shared_null_1021e15e8;
    ___cxa_atexit(FUN_100567a10,&DAT_1023122c8,0x100000000);
    ___cxa_guard_release(&DAT_1023122d0);
  }
  if (*(int *)(DAT_1023122c8 + 0xc) == *(int *)(DAT_1023122c8 + 8)) {
    uVar7 = FUN_1006b9420();
    FUN_1006b96e0(&local_118,uVar7);
    local_110 = local_118;
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 == 0) {
        QListData::detach((int)&local_110);
        lVar14 = (long)*(int *)(local_110 + 8);
        if ((local_118 + (long)*(int *)(local_118 + 8) * 8 != local_110 + lVar14 * 8) &&
           (lVar10 = *(int *)(local_110 + 0xc) - lVar14,
           lVar10 != 0 && lVar14 <= *(int *)(local_110 + 0xc))) {
          _memcpy(local_110 + lVar14 * 8 + 0x10,local_118 + (long)*(int *)(local_118 + 8) * 8 + 0x10
                  ,lVar10 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + 1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
      }
    }
    local_108 = local_110 + (long)*(int *)(local_110 + 8) * 8 + 0x10;
    local_100 = local_110 + (long)*(int *)(local_110 + 0xc) * 8 + 0x10;
    local_f8 = 1;
    if (*(int *)local_118 == -1) {
LAB_10056466c:
      for (; local_108 != local_100; local_108 = local_108 + 8) {
        FUN_1005651f0(*(undefined8 *)local_108);
        local_f8 = 1;
      }
    }
    else {
      if (*(int *)local_118 == 0) {
LAB_100564631:
        QListData::dispose(local_118);
      }
      else {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100564631;
      }
      if (local_f8 != 0) goto LAB_10056466c;
    }
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005646e7;
      }
      QListData::dispose(local_110);
    }
  }
LAB_1005646e7:
  local_120 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000722f0(&local_140,&DAT_1023122c8);
  p_Var2 = local_90;
  local_138 = local_140 + (long)*(int *)(local_140 + 8) * 8 + 0x10;
  local_130 = local_140 + (long)*(int *)(local_140 + 0xc) * 8 + 0x10;
  if (*(int *)(local_140 + 8) != *(int *)(local_140 + 0xc)) {
    do {
      local_128 = 1;
      local_144 = **(uint **)local_138;
      if (*(uint *)(p_Var2 + 0x20) != 0) {
        for (p_Var8 = *(_func_void_Node_ptr **)
                       (*(long *)(p_Var2 + 8) +
                       ((ulong)(*(uint *)(p_Var2 + 0x24) ^ local_144) %
                       (ulong)*(uint *)(p_Var2 + 0x20)) * 8); p_Var8 != p_Var2;
            p_Var8 = *(_func_void_Node_ptr **)p_Var8) {
          if ((*(uint *)(p_Var8 + 8) == (*(uint *)(p_Var2 + 0x24) ^ local_144)) &&
             (local_144 == *(uint *)(p_Var8 + 0xc))) {
            if (p_Var8 != p_Var2) {
              FUN_100071ff0(&local_120,&local_144);
            }
            break;
          }
        }
      }
      local_138 = local_138 + 8;
    } while (local_138 != local_130);
  }
  local_128 = 1;
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056484f;
    }
    iVar5 = *(int *)(local_140 + 0xc);
    if (iVar5 != *(int *)(local_140 + 8)) {
      lVar14 = (long)*(int *)(local_140 + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = local_140 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_140);
  }
LAB_10056484f:
  FUN_1005678e0(&local_170,&local_90);
  FUN_1000722f0(&local_168,&local_170);
  local_160 = local_168 + (long)*(int *)(local_168 + 8) * 8 + 0x10;
  local_158 = local_168 + (long)*(int *)(local_168 + 0xc) * 8 + 0x10;
  local_150 = 1;
  if (*(int *)local_170 == -1) {
LAB_10056491c:
    if (local_160 != local_158) {
      do {
        local_174 = **(int **)local_160;
        iVar5 = *(int *)(local_120 + 8);
        if (iVar5 != *(int *)(local_120 + 0xc)) {
          pDVar11 = local_120 + (long)iVar5 * 8 + 0x10;
          lVar14 = (long)*(int *)(local_120 + 0xc) * 8 + (long)iVar5 * -8;
          do {
            if (**(int **)pDVar11 == local_174) goto LAB_100564993;
            pDVar11 = pDVar11 + 8;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        FUN_100071ff0(&local_120,&local_174);
LAB_100564993:
        local_160 = local_160 + 8;
        local_150 = 1;
      } while (local_160 != local_158);
    }
  }
  else {
    if (*(int *)local_170 == 0) {
LAB_1005648cf:
      iVar5 = *(int *)(local_170 + 0xc);
      if (iVar5 != *(int *)(local_170 + 8)) {
        lVar14 = (long)*(int *)(local_170 + 8) * 8 + (long)iVar5 * -8;
        pDVar11 = local_170 + (long)iVar5 * 8 + 8;
        do {
          if (*(void **)pDVar11 != (void *)0x0) {
            operator_delete(*(void **)pDVar11);
          }
          pDVar11 = pDVar11 + -8;
          lVar14 = lVar14 + 8;
        } while (lVar14 != 0);
      }
      QListData::dispose(local_170);
    }
    else {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005648cf;
    }
    if (local_150 != 0) goto LAB_10056491c;
  }
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100564a1f;
    }
    iVar5 = *(int *)(local_168 + 0xc);
    if (iVar5 != *(int *)(local_168 + 8)) {
      lVar14 = (long)*(int *)(local_168 + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = local_168 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_168);
  }
LAB_100564a1f:
  uVar3 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x48));
  plVar6 = (long *)(param_1 + 0x20);
  FUN_100561c10(plVar6,&local_90,&local_120,uVar3);
  plVar9 = (long *)QAbstractItemView::selectionModel();
  pcVar1 = *(code **)(*plVar9 + 0x60);
  if (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x14)) {
    iVar5 = 0;
    do {
      local_50 = 0xffffffff;
      local_4c = 0xffffffff;
      local_40 = 0;
      local_48 = 0;
      (**(code **)(*plVar6 + 0x60))(local_68,plVar6,iVar5,0,&local_50);
      if (local_60 == (uVar13 & 0xffffffff)) {
        local_80 = 0xffffffff;
        local_7c = 0xffffffff;
        local_70 = 0;
        local_78 = 0;
        (**(code **)(*plVar6 + 0x60))(&local_190,plVar6,iVar5,0,&local_80);
        goto LAB_100564cb4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  local_190 = 0xffffffff;
  local_18c = 0xffffffff;
  local_180 = 0;
  local_188 = 0;
LAB_100564cb4:
  (*pcVar1)(plVar9,&local_190,0x22);
  FUN_100563d50(param_1);
  pDVar11 = local_120;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100564d3f;
    }
    iVar5 = *(int *)(local_120 + 0xc);
    if (iVar5 != *(int *)(local_120 + 8)) {
      lVar14 = (long)*(int *)(local_120 + 8) * 8 + (long)iVar5 * -8;
      pDVar12 = local_120 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar12 != (void *)0x0) {
          operator_delete(*(void **)pDVar12);
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(pDVar11);
  }
LAB_100564d3f:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100564daf;
    }
    iVar5 = *(int *)(local_e8 + 0xc);
    if (iVar5 != *(int *)(local_e8 + 8)) {
      lVar14 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = local_e8 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_e8);
  }
LAB_100564daf:
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper(p_Var2);
  }
  return;
}

