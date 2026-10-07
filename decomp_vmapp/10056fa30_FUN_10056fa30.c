
undefined4 FUN_10056fa30(long *param_1,ulong param_2,long param_3,long param_4)

{
  void *pvVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  size_t sVar9;
  code **ppcVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  bool bVar19;
  long local_258;
  undefined4 local_228 [2];
  ulong local_220;
  ulong local_218;
  QArrayData *local_210;
  undefined1 local_208;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  ulong local_1f0;
  QArrayData *local_1e8;
  undefined1 local_1e0;
  code *local_1d8;
  long *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined8 local_1b8;
  QArrayData *local_1b0;
  QFileInfo local_1a8 [8];
  QArrayData *local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  long *local_180;
  QString local_178;
  undefined8 local_170;
  ulong local_168;
  long local_160;
  QString local_158;
  undefined1 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  ulong local_140;
  long local_138;
  QString local_130;
  undefined1 local_128;
  long *local_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  undefined8 *local_108;
  undefined1 local_f1;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [40];
  undefined1 local_88 [8];
  undefined1 *local_80;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar18 = param_1 + 0x233;
  if (((ulong)plVar18 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    plVar18 = (long *)((ulong)plVar18 | 1);
  }
  plVar11 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar11 = *(long **)(param_1[1] + 0x10);
  }
  (**(code **)(*plVar11 + 0x60))();
  QMutex::lock();
  FUN_100098d30(local_b0);
  local_118 = (undefined8 *)0x0;
  puStack_110 = (undefined8 *)0x0;
  local_108 = (undefined8 *)0x0;
  local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_148 = 0;
  local_128 = 0;
  local_138 = 0;
  local_140 = 0;
  local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_170 = (ulong)local_170._4_4_ << 0x20;
  local_150 = 0;
  local_160 = 0;
  local_168 = 0;
  uVar7 = 0x80019016;
  if ((param_1[0x225] != param_1[0x226]) &&
     (uVar7 = 0x80000003, (*(byte *)(param_1 + 0x228) & 3) != 0)) {
    uVar6 = (**(code **)(*param_1 + 0x158))(param_1);
    if (uVar6 < 2) {
      if ((((param_2 % (ulong)*(uint *)((long)param_1 + 0x114c) == 0) &&
           (param_2 % (ulong)*(uint *)(param_1 + 0x229) == 0)) &&
          (param_2 % (ulong)*(uint *)(param_1 + 0x224) == 0)) &&
         (uVar7 = 0x80000001, (long *)param_1[0x255] == param_1 + 0x255)) {
        uVar6 = (**(code **)(*param_1 + 0x388))(param_1);
        param_2 = uVar6 + param_2;
        uVar7 = 0x80021011;
        if (param_2 < (ulong)param_1[0x22a]) {
          (**(code **)(*param_1 + 0x400))(param_1,0,local_b0);
          for (; local_80 != local_88; local_80 = *(undefined1 **)(local_80 + 8)) {
            if (1 < *(int *)(local_80 + 0x10) - 1U) goto LAB_10056fc37;
          }
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("ChangeCapacity","vdisk",2,
                          "[DecreaseCapacity] Decrease from %llu sect to %llu sect",param_1[0x22a],
                          param_2);
          }
          plVar11 = param_1 + 2;
          FUN_1005ab5b0();
          FUN_1005b1e80(plVar11);
          local_168 = 0;
          plVar12 = (long *)param_1[0x225];
          plVar3 = (long *)param_1[0x226];
          local_258 = 0;
          local_120 = plVar12;
          if (plVar12 != plVar3) {
            local_258 = 0;
            do {
              local_120 = plVar12;
              FUN_100590b50(*plVar12,&local_148);
              if (param_2 <= local_140) {
                if (puStack_110 == local_108) {
                  FUN_10057ef60(&local_118,&local_120);
                }
                else {
                  *puStack_110 = plVar12;
                  puStack_110 = puStack_110 + 1;
                }
                if (local_168 <= local_140) {
                  local_160 = local_138;
                  local_170 = CONCAT44(uStack_144,local_148);
                  local_168 = local_140;
                  QString::operator=(&local_158,&local_130);
                  local_150 = local_128;
                  local_258 = *plVar12;
                }
              }
              plVar12 = plVar12 + 1;
              local_120 = plVar12;
            } while (plVar3 != plVar12);
          }
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("ChangeCapacity","vdisk",2,"[DecreaseCapacity] Delete %u storages",
                          (ulong)((long)puStack_110 - (long)local_118) >> 3);
          }
LAB_10056ff4a:
          do {
            if (puStack_110 == local_118) goto LAB_10057036f;
            local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
            plVar12 = (long *)puStack_110[-1];
            puStack_110 = puStack_110 + -1;
            plVar3 = (long *)*plVar12;
            local_120 = plVar12;
            (**(code **)(*param_1 + 0x360))(param_1);
            plVar14 = (long *)0x0;
            if (param_1[1] != 0) {
              plVar14 = *(long **)(param_1[1] + 0x10);
            }
            pcVar4 = *(code **)(*plVar14 + 0x148);
            FUN_100585000(&local_180,plVar3);
            (*pcVar4)(plVar14,&local_180);
            if (local_180 != (long *)0x0) {
              LOCK();
              plVar14 = local_180 + 1;
              lVar8 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)(*local_180 + 0x10))();
              }
            }
            pvVar1 = (void *)(((long)plVar12 - param_1[0x225] & 0xfffffffffffffff8U) + 8 +
                             param_1[0x225]);
            sVar9 = param_1[0x226] - (long)pvVar1;
            _memmove(plVar12,pvVar1,sVar9);
            lVar15 = (sVar9 & 0xfffffffffffffff8) + (long)plVar12;
            lVar8 = param_1[0x226];
            if (lVar8 != lVar15) {
              param_1[0x226] = (~((lVar8 + -8) - lVar15) & 0xfffffffffffffff8U) + lVar8;
            }
            FUN_100590b50(plVar3,&local_148);
            *(int *)((long)param_1 + 0x118c) = (int)((ulong)(param_1[0x226] - param_1[0x225]) >> 3);
            param_1[0x22a] = param_1[0x22a] - local_138;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            (**(code **)(*param_1 + 0x408))(param_1);
            plVar12 = (long *)0x0;
            if (param_1[1] != 0) {
              plVar12 = *(long **)(param_1[1] + 0x10);
            }
            (**(code **)(*plVar12 + 0x18))();
            local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
            QString::operator=(&local_178,&local_130);
            cVar5 = QDir::isRelativePath(&local_178);
            if (cVar5 != '\0') {
              plVar12 = (long *)0x0;
              if (param_1[1] != 0) {
                plVar12 = *(long **)(param_1[1] + 0x10);
              }
              cVar5 = (**(code **)(*plVar12 + 0x48))(plVar12,&local_188);
              if (cVar5 != '\0') {
                QFileInfo::QFileInfo(local_1a8,&local_188);
                QFileInfo::absolutePath();
                local_1b0 = (QArrayData *)QString::fromAscii_helper("/",1);
                local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1a0;
                if (1 < *(int *)local_1a0 + 1U) {
                  LOCK();
                  *(int *)local_1a0 = *(int *)local_1a0 + 1;
                  local_f1 = *(int *)local_1a0 != 0;
                  UNLOCK();
                }
                QString::append(&local_198);
                local_190.field0_0x0 = local_198.field0_0x0;
                if (1 < *(int *)local_198.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + 1;
                  local_f1 = *(int *)local_198.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_190);
                QString::operator=(&local_178,&local_190);
                if (*(int *)local_190.field0_0x0 != -1) {
                  if (*(int *)local_190.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
                    local_f1 = *(int *)local_190.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_f1) goto LAB_10057021d;
                  }
                  QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
                }
LAB_10057021d:
                if (*(int *)local_198.field0_0x0 != -1) {
                  if (*(int *)local_198.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
                    local_f1 = *(int *)local_198.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_f1) goto LAB_100570259;
                  }
                  QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
                }
LAB_100570259:
                if (*(int *)local_1b0 != -1) {
                  if (*(int *)local_1b0 != 0) {
                    LOCK();
                    *(int *)local_1b0 = *(int *)local_1b0 + -1;
                    local_f1 = *(int *)local_1b0 != 0;
                    UNLOCK();
                    if ((bool)local_f1) goto LAB_100570295;
                  }
                  QArrayData::deallocate(local_1b0,2,8);
                }
LAB_100570295:
                if (*(int *)local_1a0 != -1) {
                  if (*(int *)local_1a0 != 0) {
                    LOCK();
                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                    local_f1 = *(int *)local_1a0 != 0;
                    UNLOCK();
                    if ((bool)local_f1) goto LAB_1005702d1;
                  }
                  QArrayData::deallocate(local_1a0,2,8);
                }
LAB_1005702d1:
                QFileInfo::~QFileInfo(local_1a8);
              }
            }
            QFile::remove(&local_178);
            if (*(int *)local_188.field0_0x0 != -1) {
              if (*(int *)local_188.field0_0x0 != 0) {
                LOCK();
                *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
                local_f1 = *(int *)local_188.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_f1) goto LAB_100570321;
              }
              QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
            }
LAB_100570321:
            if (*(int *)local_178.field0_0x0 != -1) {
              if (*(int *)local_178.field0_0x0 != 0) {
                LOCK();
                *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
                local_f1 = *(int *)local_178.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_f1) goto LAB_10056ff4a;
              }
              QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
            }
          } while( true );
        }
      }
    }
    else {
LAB_10056fc37:
      uVar7 = 0x80021035;
    }
  }
LAB_10056fc3d:
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_f1 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_10056fc79;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_10056fc79:
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_f1 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_10056fcb5;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_10056fcb5:
  if (local_118 != (undefined8 *)0x0) {
    if (puStack_110 != local_118) {
      puStack_110 = (undefined8 *)
                    ((~((long)puStack_110 + (-8 - (long)local_118)) & 0xfffffffffffffff8U) +
                    (long)puStack_110);
    }
    operator_delete(local_118);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_f1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_10056fd20;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10056fd20:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_f1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_10056fd56;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10056fd56:
  FUN_100098f20(local_88);
  QMutex::unlock();
  if (((ulong)plVar18 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
LAB_10057036f:
  lVar15 = param_1[0x225];
  lVar8 = param_1[0x226];
  if (lVar8 == lVar15) {
    FUN_1008e3970("ChangeCapacity","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_Storages.size() > 0","DiskStatesImp.cpp",0xb8c,"DecreaseCapacity");
    lVar15 = param_1[0x225];
    lVar8 = param_1[0x226];
  }
  local_168 = 0;
  if (lVar8 != lVar15) {
    uVar16 = 0;
    uVar17 = 1;
    do {
      FUN_100590b50(*(undefined8 *)(lVar15 + uVar16 * 8),&local_148);
      if (local_140 < local_168) {
        lVar15 = param_1[0x225];
      }
      else {
        local_160 = local_138;
        local_170 = CONCAT44(uStack_144,local_148);
        local_168 = local_140;
        QString::operator=(&local_158,&local_130);
        local_150 = local_128;
        lVar15 = param_1[0x225];
        local_258 = *(long *)(lVar15 + uVar16 * 8);
      }
      bVar19 = uVar17 < (ulong)(param_1[0x226] - lVar15 >> 3);
      uVar16 = uVar17;
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (bVar19);
  }
  param_1[0x22f] = param_3;
  param_1[0x230] = param_4;
  *(undefined8 *)((long)param_1 + 0x118c) = 0x100000000;
  local_1d8 = FUN_10056afc0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1d0 = param_1;
  if (param_2 == param_1[0x22a]) {
    (**(code **)(*param_1 + 0x2b0))(local_c0,param_1);
    FUN_1005b1b60(param_1,local_c0);
    (**(code **)(*param_1 + 0x2b0))(local_d0,param_1);
    FUN_1005b2bb0(plVar11,local_d0);
    (**(code **)(*param_1 + 0x360))(param_1);
    iVar13 = 0x3ed;
    ppcVar10 = &local_1d8;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("ChangeCapacity","vdisk",2,"[DecreaseCapacity] Done storage deletion");
    }
    while( true ) {
      pcVar4 = *ppcVar10;
      if ((pcVar4 == (code *)0x0) && (uVar7 = 0, ppcVar10[4] == (code *)0x0)) goto LAB_10056fc3d;
      if ((-1 < iVar13) && (1 < *(uint *)(ppcVar10 + 2))) {
        iVar2 = *(int *)((long)ppcVar10 + 0x14);
        if (iVar13 < *(int *)((long)ppcVar10 + 0x14)) {
          *(int *)((long)ppcVar10 + 0x14) = iVar13;
          uVar7 = 0;
          goto LAB_10056fc3d;
        }
        *(int *)((long)ppcVar10 + 0x14) = iVar13;
        iVar13 = (uint)(iVar13 - iVar2) / *(uint *)(ppcVar10 + 2) + *(int *)(ppcVar10 + 3);
        *(int *)(ppcVar10 + 3) = iVar13;
      }
      if (pcVar4 != (code *)0x0) break;
      ppcVar10 = (code **)ppcVar10[4];
    }
    uVar7 = 0;
    (*pcVar4)(iVar13,ppcVar10[1]);
  }
  else {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("ChangeCapacity","vdisk",2,
                    "[DecreaseCapacity] Decrease last storage\'s capacity");
    }
    local_1e8 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_200[0] = 0;
    local_1e0 = 0;
    local_1f0 = 0;
    local_1f8 = 0;
    local_210 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_228[0] = 0;
    local_208 = 0;
    local_218 = 0;
    local_220 = 0;
    FUN_100590b50(local_258,local_228);
    if (param_2 < local_220) {
      FUN_1008e3970("ChangeCapacity","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "uiSize >= oldStorageParams.uStart","DiskStatesImp.cpp",0xbbe,"DecreaseCapacity"
                   );
    }
    ppcVar10 = &local_1d8;
    uVar7 = FUN_100590880(local_258,param_2 - local_220,ppcVar10);
    FUN_100590b50(local_258,local_200);
    if (local_218 < local_1f0) {
      FUN_1008e3970("ChangeCapacity","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "newStorageParams.uSize <= oldStorageParams.uSize","DiskStatesImp.cpp",0xbcb,
                    "DecreaseCapacity");
    }
    if (local_1f0 - local_218 != 0) {
      param_1[0x22a] = param_1[0x22a] + (local_1f0 - local_218);
      (**(code **)(*param_1 + 0x408))();
      plVar12 = (long *)0x0;
      if (param_1[1] != 0) {
        plVar12 = *(long **)(param_1[1] + 0x10);
      }
      (**(code **)(*plVar12 + 0x18))();
    }
    (**(code **)(*param_1 + 0x2b0))(local_e0,param_1);
    FUN_1005b1b60(param_1,local_e0);
    (**(code **)(*param_1 + 0x2b0))(local_f0,param_1);
    FUN_1005b2bb0(plVar11,local_f0);
    iVar13 = 0x3ed;
    while( true ) {
      pcVar4 = *ppcVar10;
      if ((pcVar4 == (code *)0x0) && (ppcVar10[4] == (code *)0x0)) goto LAB_100570882;
      if ((-1 < iVar13) && (1 < *(uint *)(ppcVar10 + 2))) {
        iVar2 = *(int *)((long)ppcVar10 + 0x14);
        if (iVar13 < *(int *)((long)ppcVar10 + 0x14)) {
          *(int *)((long)ppcVar10 + 0x14) = iVar13;
          goto LAB_100570882;
        }
        *(int *)((long)ppcVar10 + 0x14) = iVar13;
        iVar13 = (uint)(iVar13 - iVar2) / *(uint *)(ppcVar10 + 2) + *(int *)(ppcVar10 + 3);
        *(int *)(ppcVar10 + 3) = iVar13;
      }
      if (pcVar4 != (code *)0x0) break;
      ppcVar10 = (code **)ppcVar10[4];
    }
    (*pcVar4)(iVar13,ppcVar10[1]);
LAB_100570882:
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("ChangeCapacity","vdisk",2,
                    "[DecreaseCapacity] Done after decrease last storage\'s capacity, result = 0x%X"
                    ,uVar7);
    }
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_f1 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_f1) goto LAB_1005708ee;
      }
      QArrayData::deallocate(local_210,2,8);
    }
LAB_1005708ee:
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_f1 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_f1) goto LAB_10056fc3d;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
  }
  goto LAB_10056fc3d;
}

