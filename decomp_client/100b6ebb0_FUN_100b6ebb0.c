
undefined4 FUN_100b6ebb0(long param_1,QString *param_2)

{
  QMapNodeBase *pQVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  QArrayData *pQVar7;
  uint uVar8;
  undefined4 uVar9;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QMapNodeBase *local_b0;
  QMapNodeBase *local_a8;
  QString local_a0;
  QString local_98;
  undefined1 local_89;
  bool local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_a8 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_b0 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  uVar8 = *(int *)(param_1 + 0x120) - 1;
  if ((7 < uVar8) || ((0xf9U >> (uVar8 & 0x1f) & 1) == 0)) {
    uVar9 = 0x80011003;
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","License",3,"Unknown license class");
    }
    goto LAB_100b6ed3f;
  }
  local_88[0x40] = false;
  local_88[0x41] = false;
  local_88[0x42] = false;
  local_88[0x43] = false;
  local_88[0x44] = false;
  local_88[0x45] = false;
  local_88[0x46] = false;
  local_88[0x47] = false;
  local_88[0x48] = false;
  local_88[0x49] = false;
  local_88[0x4a] = false;
  local_88[0x4b] = false;
  local_88[0x4c] = false;
  local_88[0x4d] = false;
  local_88[0x4e] = false;
  local_88[0x4f] = false;
  local_88[0x30] = false;
  local_88[0x31] = false;
  local_88[0x32] = false;
  local_88[0x33] = false;
  local_88[0x34] = false;
  local_88[0x35] = false;
  local_88[0x36] = false;
  local_88[0x37] = false;
  local_88[0x38] = false;
  local_88[0x39] = false;
  local_88[0x3a] = false;
  local_88[0x3b] = false;
  local_88[0x3c] = false;
  local_88[0x3d] = false;
  local_88[0x3e] = false;
  local_88[0x3f] = false;
  local_88[0x20] = false;
  local_88[0x21] = false;
  local_88[0x22] = false;
  local_88[0x23] = false;
  local_88[0x24] = false;
  local_88[0x25] = false;
  local_88[0x26] = false;
  local_88[0x27] = false;
  local_88[0x28] = false;
  local_88[0x29] = false;
  local_88[0x2a] = false;
  local_88[0x2b] = false;
  local_88[0x2c] = false;
  local_88[0x2d] = false;
  local_88[0x2e] = false;
  local_88[0x2f] = false;
  local_88[0x10] = false;
  local_88[0x11] = false;
  local_88[0x12] = false;
  local_88[0x13] = false;
  local_88[0x14] = false;
  local_88[0x15] = false;
  local_88[0x16] = false;
  local_88[0x17] = false;
  local_88[0x18] = false;
  local_88[0x19] = false;
  local_88[0x1a] = false;
  local_88[0x1b] = false;
  local_88[0x1c] = false;
  local_88[0x1d] = false;
  local_88[0x1e] = false;
  local_88[0x1f] = false;
  local_88[0] = false;
  local_88[1] = false;
  local_88[2] = false;
  local_88[3] = false;
  local_88[4] = false;
  local_88[5] = false;
  local_88[6] = false;
  local_88[7] = false;
  local_88[8] = false;
  local_88[9] = false;
  local_88[10] = false;
  local_88[0xb] = false;
  local_88[0xc] = false;
  local_88[0xd] = false;
  local_88[0xe] = false;
  local_88[0xf] = false;
  iVar2 = FUN_100b93cc0(*(int *)(param_1 + 0x120),&DAT_102314290);
  if (iVar2 == 0) {
    uVar9 = *(undefined4 *)(&DAT_101cdc180 + (long)(int)uVar8 * 4);
    *(undefined1 *)(param_1 + 0x124) = 1;
    iVar2 = FUN_100b6f460();
    if (iVar2 != 0) {
      uVar3 = FUN_100ba1750(uVar9);
      uVar4 = FUN_100b9d570();
      FUN_100df99c0("","License",0,"Failed to get active license (class %s), error: %s",uVar3,uVar4)
      ;
      goto LAB_100b6ed21;
    }
    _strlen(local_88);
    QString::fromUtf8_helper((char *)&local_98,(int)local_88);
    QString::operator=(&local_a0,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_89 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100b6eeb2;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100b6eeb2:
    pcVar5 = (char *)FUN_100b9e740();
    if (pcVar5 == (char *)0x0) {
LAB_100b6f142:
      uVar9 = 0xfffffff3;
      FUN_100df99c0("","License",0,"Unknown path to installed licenses folder ");
    }
    else {
      sVar6 = _strlen(pcVar5);
      pQVar7 = (QArrayData *)QString::fromAscii_helper(pcVar5,(int)sVar6);
      iVar2 = *(int *)(pQVar7 + 4);
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_89 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6ef09;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
LAB_100b6ef09:
      if (iVar2 == 0) goto LAB_100b6f142;
      local_d0 = (QArrayData *)QString::fromAscii_helper("%1\\%2",5);
      sVar6 = _strlen(pcVar5);
      local_d8 = (QArrayData *)QString::fromAscii_helper(pcVar5,(int)sVar6);
      QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
      local_e0 = (QArrayData *)local_a0.field0_0x0;
      if (1 < *(int *)local_a0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
        local_89 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::arg(&local_c0,&local_c8,&local_e0,0,0x20);
      QDir::toNativeSeparators(&local_b8);
      QString::operator=(param_2,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_89 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6f006;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_100b6f006:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_89 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6f042;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100b6f042:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_89 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6f07e;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100b6f07e:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_89 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6f0ba;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100b6f0ba:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_89 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6f0f6;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100b6f0f6:
      uVar9 = 0;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_89 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_100b6ed3f;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
    }
  }
  else {
    uVar3 = FUN_100b9d570();
    FUN_100df99c0("","License",0,"Can\'t initialize vzlic library %s",uVar3);
LAB_100b6ed21:
    uVar9 = 0x80011000;
    if (iVar2 + 0x12U < 0x1a) {
      uVar9 = *(undefined4 *)(&DAT_101cdc110 + (long)(int)(iVar2 + 0x12U) * 4);
    }
  }
LAB_100b6ed3f:
  pQVar1 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_89 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b6ed93;
    }
    if (*(long *)(local_b0 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100b6ed93:
  pQVar1 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_89 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100b6ede7;
    }
    if (*(long *)(local_a8 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100b6ede7:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      local_88[0] = *(int *)local_a0.field0_0x0 != 0;
      if (*(int *)local_a0.field0_0x0 != 0) goto LAB_100b6ee1d;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100b6ee1d:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

