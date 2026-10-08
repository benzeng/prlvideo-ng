
undefined4 FUN_100b6f630(long param_1,QString *param_2,undefined4 param_3)

{
  long lVar1;
  int *piVar2;
  QArrayData *pQVar3;
  QMapNodeBase *pQVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  QArrayData *local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  int *local_c0;
  uint local_b8;
  QMapNodeBase *local_b0;
  QMapNodeBase *local_a8;
  QString local_a0;
  QString local_98;
  undefined1 local_89;
  char local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_a8 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_b0 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_38 = lVar1;
  if (param_2->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_2,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_89 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100b6f6ed;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
  }
LAB_100b6f6ed:
  iVar5 = FUN_100b93cc0(*(undefined4 *)(param_1 + 0x120),&DAT_102314290);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x124) = 1;
    iVar5 = FUN_100b6f460();
    if (iVar5 != 0) {
      uVar6 = FUN_100ba1750(param_3);
      uVar7 = FUN_100b9d570();
      FUN_100df99c0("","License",0,"Failed to get active license (class %s), error: %s",uVar6,uVar7)
      ;
      goto LAB_100b6f792;
    }
    _strlen(local_88);
    QString::fromUtf8_helper((char *)&local_98,(int)local_88);
    QString::operator=(param_2,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_89 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100b6f811;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100b6f811:
    FUN_100b7c510(&local_d8,&local_a8);
    local_d0 = local_d8;
    if (*local_d8 != -1) {
      if (*local_d8 == 0) {
        QListData::detach((int)&local_d0);
        iVar5 = local_d0[2];
        if (iVar5 != local_d0[3]) {
          local_d8 = local_d8 + (long)local_d8[2] * 2 + 4;
          piVar9 = local_d0 + (long)iVar5 * 2 + 4;
          lVar8 = (long)local_d0[3] * 8 + (long)iVar5 * -8;
          do {
            piVar2 = *(int **)local_d8;
            *(int **)piVar9 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_89 = *piVar2 != 0;
              UNLOCK();
            }
            piVar9 = piVar9 + 2;
            local_d8 = local_d8 + 2;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *local_d8 = *local_d8 + 1;
        local_89 = *local_d8 != 0;
        UNLOCK();
      }
    }
    local_c8 = local_d0 + (long)local_d0[2] * 2 + 4;
    local_c0 = local_d0 + (long)local_d0[3] * 2 + 4;
    local_b8 = 1;
    FUN_100036370(&local_d8);
    if (local_b8 != 0) {
      do {
        if (local_c8 == local_c0) break;
        pQVar3 = *(QArrayData **)local_c8;
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_89 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        if (local_b8 != 0) {
          local_b8 = 0;
        }
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_89 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_100b6f986;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100b6f986:
        local_c8 = local_c8 + 2;
        uVar10 = local_b8 ^ 1;
        bVar12 = local_b8 != 1;
        local_b8 = uVar10;
      } while (bVar12);
    }
    FUN_100036370(&local_d0);
    iVar5 = FUN_100b61850(param_1,param_2,&local_a8,&local_b0);
    uVar10 = 0xb;
    if (iVar5 != 0) {
      QString::trimmed();
      iVar5 = *(int *)(local_e0 + 4);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_89 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6fa2f;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100b6fa2f:
      uVar10 = 0x12;
      if (0x22 < iVar5) {
        *(undefined1 *)(param_1 + 0x125) = 1;
      }
    }
LAB_100b6fa42:
    uVar11 = *(undefined4 *)(&DAT_101cdc110 + (long)(int)uVar10 * 4);
  }
  else {
    uVar6 = FUN_100b9d570();
    FUN_100df99c0("","License",0,"Can\'t initialize vzlic library %s",uVar6);
LAB_100b6f792:
    uVar10 = iVar5 + 0x12;
    uVar11 = 0x80011000;
    if (uVar10 < 0x1a) goto LAB_100b6fa42;
  }
  pQVar4 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_89 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b6faa4;
    }
    if (*(long *)(local_b0 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100b6faa4:
  pQVar4 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_89 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b6faf8;
    }
    if (*(long *)(local_a8 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100b6faf8:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

