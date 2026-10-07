
int FUN_10056e830(long *param_1,long param_2,code *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 ******ppppppuVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int local_23c;
  undefined8 ****local_210;
  code *local_208;
  long *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  QString local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined8 *****local_1b8;
  undefined8 *****local_1b0;
  undefined8 local_1a8;
  undefined8 *****local_1a0;
  undefined8 *****local_198;
  long local_190;
  code *local_188;
  long *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160 [2];
  long local_158;
  ulong local_150;
  QArrayData *local_148;
  undefined1 local_140;
  undefined4 local_138 [2];
  undefined8 local_130;
  ulong local_128;
  QArrayData *local_120;
  undefined1 local_118;
  int local_110 [2];
  undefined8 local_108;
  undefined8 local_100;
  QArrayData *local_f8;
  undefined1 local_f0;
  int local_e8;
  bool local_e1;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  int local_98;
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("ChangeCapacity","vdisk",2,"[IncreaseCapacity] Start");
  }
  local_e8 = 0;
  plVar14 = param_1 + 0x233;
  if (((ulong)plVar14 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    plVar14 = (long *)((ulong)plVar14 | 1);
  }
  plVar18 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar18 = *(long **)(param_1[1] + 0x10);
  }
  (**(code **)(*plVar18 + 0x60))();
  QMutex::lock();
  FUN_100098d30(local_b0);
  if (param_2 == 0) {
    iVar20 = -0x7ffdefef;
  }
  else {
    iVar20 = -0x7ffe6fea;
    if ((param_1[0x225] != param_1[0x226]) &&
       (iVar20 = -0x7ffffffd, (*(byte *)(param_1 + 0x228) & 3) != 0)) {
      uVar7 = (**(code **)(*param_1 + 0x158))(param_1);
      iVar20 = -0x7ffdefcb;
      if (uVar7 < 2) {
        (**(code **)(*param_1 + 0x400))(param_1,0,local_b0);
        puVar1 = (undefined8 *)param_1[0x226];
        for (puVar15 = (undefined8 *)param_1[0x225]; puVar15 != puVar1; puVar15 = puVar15 + 1) {
          local_110[0] = 0;
          local_f0 = 0;
          local_100 = 0;
          local_108 = 0;
          local_f8 = (QArrayData *)PTR_shared_null_100ba20d0;
          FUN_100590b50(*puVar15,local_110);
          bVar5 = true;
          if (local_110[0] - 1U < 2) {
            bVar5 = false;
            if (local_98 == 0) {
              local_98 = (**(code **)(*(long *)*puVar15 + 0x28))();
              bVar5 = false;
            }
          }
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_e1 = *(int *)local_f8 != 0;
              UNLOCK();
              if (local_e1) goto LAB_10056ea4c;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_10056ea4c:
          if (bVar5) goto LAB_10056ec68;
        }
        if ((local_98 == 0) && (*(int *)(param_2 + 0x18) == 0)) {
          iVar20 = -0x7ffdefef;
        }
        else {
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("ChangeCapacity","vdisk",2,
                          "[IncreaseCapacity] Increase disk: from %llu sect to %llu sect (padding %u)"
                          ,param_1[0x22a],*(undefined8 *)(param_2 + 0x10),(int)param_1[0x22b]);
          }
          plVar18 = param_1 + 2;
          FUN_1005ab5b0(plVar18);
          FUN_1005b1e80(plVar18);
          if (*(long *)(param_2 + 0x38) == 0) {
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("ChangeCapacity","vdisk",2,
                            "[IncreaseCapacity] Increase last/single storage");
            }
            lVar13 = *(long *)(param_2 + 0x10);
            uVar7 = (**(code **)(*param_1 + 0x388))(param_1);
            iVar20 = -0x7ffdefef;
            if ((ulong)param_1[0x22a] < (ulong)uVar7 + lVar13) {
              uVar4 = *(undefined8 *)
                       (param_1[0x225] +
                       (ulong)((int)((ulong)(param_1[0x226] - param_1[0x225]) >> 3) - 1) * 8);
              local_120 = (QArrayData *)PTR_shared_null_100ba20d0;
              local_138[0] = 0;
              local_118 = 0;
              local_128 = 0;
              local_130 = 0;
              local_148 = (QArrayData *)PTR_shared_null_100ba20d0;
              local_160[0] = 0;
              local_140 = 0;
              local_150 = 0;
              local_158 = 0;
              FUN_100590b50(uVar4,local_160);
              lVar11 = local_158;
              lVar13 = *(long *)(param_2 + 0x10);
              uVar7 = (**(code **)(*param_1 + 0x388))(param_1);
              param_1[0x22f] = (long)param_3;
              param_1[0x230] = param_4;
              *(undefined8 *)((long)param_1 + 0x118c) = 0x100000000;
              local_188 = FUN_10056afc0;
              local_178 = 0;
              uStack_174 = 0;
              local_170 = 0;
              local_168 = 0;
              local_180 = param_1;
              local_e8 = FUN_1005906e0(uVar4,(ulong)uVar7 + (lVar13 - lVar11),&local_188);
              FUN_100590b50(uVar4,local_138);
              if (local_128 < local_150) {
                FUN_1008e3970("ChangeCapacity","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                              "newStorageParams.uSize >= oldStorageParams.uSize","DiskStatesImp.cpp"
                              ,0xa03,"IncreaseCapacity");
              }
              if (local_128 - local_150 != 0) {
                param_1[0x22a] = param_1[0x22a] + (local_128 - local_150);
                (**(code **)(*param_1 + 0x408))();
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("ChangeCapacity","vdisk",2,"[IncreaseCapacity] Disk size updated");
                }
              }
              if (*(int *)local_148 != -1) {
                if (*(int *)local_148 != 0) {
                  LOCK();
                  *(int *)local_148 = *(int *)local_148 + -1;
                  local_e1 = *(int *)local_148 != 0;
                  UNLOCK();
                  if (local_e1) goto LAB_10056efdb;
                }
                QArrayData::deallocate(local_148,2,8);
              }
LAB_10056efdb:
              if (*(int *)local_120 != -1) {
                if (*(int *)local_120 != 0) {
                  LOCK();
                  *(int *)local_120 = *(int *)local_120 + -1;
                  local_e1 = *(int *)local_120 != 0;
                  UNLOCK();
                  if (local_e1) goto LAB_10056f634;
                }
                QArrayData::deallocate(local_120,2,8);
              }
LAB_10056f634:
              plVar19 = (long *)0x0;
              if (param_1[1] != 0) {
                plVar19 = *(long **)(param_1[1] + 0x10);
              }
              (**(code **)(*plVar19 + 0x18))();
              (**(code **)(*param_1 + 0x2b0))(local_d0);
              FUN_1005b1b60(param_1,local_d0);
              (**(code **)(*param_1 + 0x2b0))(local_e0,param_1);
              FUN_1005b2bb0(plVar18,local_e0);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("ChangeCapacity","vdisk",2,
                              "[IncreaseCapacity] Done with err. code = 0x%X",local_e8);
              }
              iVar20 = local_e8;
              if (param_3 != (code *)0x0) {
                iVar20 = 0x3ed;
                if (local_e8 < 0) {
                  iVar20 = local_e8;
                }
                (*param_3)(iVar20,1000,param_4);
                iVar20 = local_e8;
              }
            }
          }
          else {
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("ChangeCapacity","vdisk",2,"[IncreaseCapacity] Add %u trailed storages")
              ;
            }
            pppppuVar17 = (undefined8 *****)param_1[0x22a];
            local_23c = local_98;
            if (local_98 == 0) {
              local_23c = *(int *)(param_2 + 0x18);
            }
            lVar13 = param_1[0x226];
            lVar11 = param_1[0x225];
            local_1a0 = &local_1a0;
            local_198 = &local_1a0;
            local_190 = 0;
            ppppppuVar16 = &local_1a0;
            lVar22 = local_190;
            for (lVar2 = *(long *)(param_2 + 0x30); local_1a0 = ppppppuVar16, local_190 = lVar22,
                lVar2 != param_2 + 0x28; lVar2 = *(long *)(lVar2 + 8)) {
              ppppppuVar8 = operator_new(0x38);
              ppppppuVar8[4] = *(undefined8 ******)(lVar2 + 0x20);
              pppppuVar3 = *(undefined8 ******)(lVar2 + 0x10);
              ppppppuVar8[3] = *(undefined8 ******)(lVar2 + 0x18);
              ppppppuVar8[2] = pppppuVar3;
              pppppuVar3 = *(undefined8 ******)(lVar2 + 0x28);
              ppppppuVar8[5] = pppppuVar3;
              if (1 < *(int *)pppppuVar3 + 1U) {
                LOCK();
                *(int *)pppppuVar3 = *(int *)pppppuVar3 + 1;
                UNLOCK();
                local_e1 = *(int *)pppppuVar3 != 0;
                ppppppuVar16 = (undefined8 ******)local_1a0;
                lVar22 = local_190;
              }
              *(undefined1 *)(ppppppuVar8 + 6) = *(undefined1 *)(lVar2 + 0x30);
              ppppppuVar8[1] = &local_1a0;
              *ppppppuVar8 = ppppppuVar16;
              ppppppuVar16[1] = ppppppuVar8;
              local_1a0 = ppppppuVar8;
              local_190 = lVar22 + 1;
              ppppppuVar16 = ppppppuVar8;
              lVar22 = local_190;
            }
            local_1b8 = &local_1b8;
            local_1b0 = local_1b8;
            local_1a8 = 0;
            for (ppppppuVar16 = (undefined8 ******)local_198; ppppppuVar16 != &local_1a0;
                ppppppuVar16 = (undefined8 ******)ppppppuVar16[1]) {
              if (1 < *(int *)(ppppppuVar16 + 2) - 1U) {
                iVar20 = -0x7ffdefef;
                goto LAB_10056f5fd;
              }
              ppppppuVar16[3] = pppppuVar17;
              pppppuVar17 = (undefined8 *****)((long)pppppuVar17 + (long)ppppppuVar16[4]);
            }
            plVar19 = param_1 + 0x225;
            uVar21 = lVar13 - lVar11 >> 3;
            lVar11 = *(long *)(param_2 + 0x38);
            uVar23 = (uVar21 & 0xffffffff) + lVar11;
            local_1c0 = 0;
            lVar13 = param_1[0x226];
            uVar12 = lVar13 - param_1[0x225] >> 3;
            if (uVar23 < uVar12 || uVar23 - uVar12 == 0) {
              if ((uVar23 < uVar12) && (lVar2 = param_1[0x225] + uVar23 * 8, lVar13 != lVar2)) {
                param_1[0x226] = (~((lVar13 + -8) - lVar2) & 0xfffffffffffffff8U) + lVar13;
              }
            }
            else {
              FUN_10057ee00(plVar19,uVar23 - uVar12,&local_1c0);
              lVar11 = *(long *)(param_2 + 0x38);
            }
            param_1[0x22f] = (long)param_3;
            param_1[0x230] = param_4;
            iVar20 = (int)uVar21;
            *(int *)((long)param_1 + 0x118c) = iVar20;
            *(int *)(param_1 + 0x232) = (int)lVar11 + iVar20;
            plVar9 = (long *)0x0;
            if (param_1[1] != 0) {
              plVar9 = *(long **)(param_1[1] + 0x10);
            }
            local_e8 = (**(code **)(*plVar9 + 0x140))
                                 (plVar9,local_a0,local_23c,&local_1a0,&local_1b8);
            ppppppuVar16 = (undefined8 ******)local_1b0;
            if (local_e8 < 0) {
              FUN_1008e3970("ChangeCapacity","vdisk",0,"Create storages failed, err = 0x%X");
              iVar20 = local_e8;
LAB_10056f5fd:
              bVar5 = false;
            }
            else {
              while (ppppppuVar16 != &local_1b8) {
                local_208 = FUN_10056afc0;
                local_1f8 = 0;
                local_1f4 = 0;
                local_1f0 = 0;
                local_1e8 = 0;
                local_200 = param_1;
                local_1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
                if (ppppppuVar16[8] != (undefined8 *****)0x1) {
                  FUN_1008e3970("ChangeCapacity","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                "StorageInfo.m_ImageInfoList.size() == 1","DiskStatesImp.cpp",0xa69,
                                "IncreaseCapacity");
                }
                local_1d8 = local_23c;
                local_1e0 = (long)ppppppuVar16[3] - (long)ppppppuVar16[2];
                local_1d4 = *(undefined4 *)(ppppppuVar16[7] + 2);
                QString::operator=(&local_1d0,(QString *)(ppppppuVar16[7] + 4));
                local_1c8 = param_1[0x22c];
                plVar9 = (long *)FUN_1006848d0(&local_1e0,(int)param_1[0x228],&local_208,&local_e8,0
                                              );
                if (plVar9 == (long *)0x0) {
                  FUN_1008e3970("ChangeCapacity","vdisk",0,"Create image failed, err = 0x%X");
                  for (; ppppppuVar16 != &local_1b8;
                      ppppppuVar16 = (undefined8 ******)ppppppuVar16[1]) {
                    plVar9 = (long *)0x0;
                    if (param_1[1] != 0) {
                      plVar9 = *(long **)(param_1[1] + 0x10);
                    }
                    (**(code **)(*plVar9 + 0x148))(plVar9,ppppppuVar16 + 5);
                  }
                  uVar12 = (ulong)*(uint *)((long)param_1 + 0x118c);
                  lVar13 = param_1[0x225];
                  lVar11 = param_1[0x226];
                  uVar21 = lVar11 - lVar13 >> 3;
                  iVar20 = 0x1e;
                  if (uVar21 < uVar12) {
                    FUN_10057ecb0(plVar19);
                  }
                  else if (uVar12 < uVar21) {
LAB_10056f53f:
                    iVar20 = 0x1e;
                    lVar13 = lVar13 + uVar12 * 8;
                    if (lVar11 != lVar13) {
                      param_1[0x226] = (~((lVar11 + -8) - lVar13) & 0xfffffffffffffff8U) + lVar11;
                    }
                  }
                }
                else {
                  (**(code **)(*plVar9 + 0x28))(plVar9);
                  (**(code **)(*plVar9 + 0x20))(plVar9);
                  cVar6 = FUN_10059c480(&local_1d0);
                  if (cVar6 != '\0') {
                    QFile::setPermissions(&local_1d0,0x6666);
                  }
                  pvVar10 = operator_new(0x580);
                  local_210 = ppppppuVar16[5];
                  if ((undefined8 *****)local_210 != (undefined8 *****)0x0) {
                    LOCK();
                    *(int *)(local_210 + 1) = *(int *)(local_210 + 1) + 1;
                    UNLOCK();
                  }
                  FUN_100584b50(pvVar10,param_1,&local_210);
                  if ((undefined8 *****)local_210 != (undefined8 *****)0x0) {
                    LOCK();
                    pppppuVar17 = (undefined8 *****)(local_210 + 1);
                    iVar20 = *(int *)pppppuVar17;
                    *(int *)pppppuVar17 = *(int *)pppppuVar17 + -1;
                    UNLOCK();
                    if (iVar20 == 1) {
                      (*(code *)(*local_210)[2])();
                    }
                  }
                  FUN_100585020(pvVar10,ppppppuVar16[2],ppppppuVar16[3],local_23c);
                  FUN_100585050(pvVar10,ppppppuVar16 + 6);
                  FUN_1007d6870(local_c0);
                  local_e8 = FUN_1005886b0(pvVar10,local_c0);
                  if (local_e8 < 0) {
                    FUN_1008e3970("ChangeCapacity","vdisk",0,"Storage init failed, err = 0x%X");
                    for (; ppppppuVar16 != &local_1b8;
                        ppppppuVar16 = (undefined8 ******)ppppppuVar16[1]) {
                      plVar9 = (long *)0x0;
                      if (param_1[1] != 0) {
                        plVar9 = *(long **)(param_1[1] + 0x10);
                      }
                      (**(code **)(*plVar9 + 0x148))(plVar9,ppppppuVar16 + 5);
                    }
                    QFile::remove(&local_1d0);
                    uVar12 = (ulong)*(uint *)((long)param_1 + 0x118c);
                    lVar13 = param_1[0x225];
                    lVar11 = param_1[0x226];
                    uVar21 = lVar11 - lVar13 >> 3;
                    iVar20 = 0x1e;
                    if (uVar21 < uVar12) {
                      FUN_10057ecb0(plVar19);
                    }
                    else if (uVar12 < uVar21) goto LAB_10056f53f;
                  }
                  else {
                    *(void **)(param_1[0x225] + (ulong)*(uint *)((long)param_1 + 0x118c) * 8) =
                         pvVar10;
                    param_1[0x22a] = (long)ppppppuVar16[3];
                    iVar20 = 0;
                  }
                }
                if (*(int *)local_1d0.field0_0x0 != -1) {
                  if (*(int *)local_1d0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
                    local_e1 = *(int *)local_1d0.field0_0x0 != 0;
                    UNLOCK();
                    if (local_e1) goto LAB_10056f59d;
                  }
                  QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
                }
LAB_10056f59d:
                if (iVar20 != 0) break;
                ppppppuVar16 = (undefined8 ******)ppppppuVar16[1];
                *(int *)((long)param_1 + 0x118c) = *(int *)((long)param_1 + 0x118c) + 1;
              }
              (**(code **)(*param_1 + 0x408))(param_1);
              iVar20 = -0x7ffdefcb;
              bVar5 = true;
            }
            FUN_10057e490(&local_1b8);
            FUN_100098f20();
            if (bVar5) goto LAB_10056f634;
          }
        }
      }
    }
  }
LAB_10056ec68:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_e1 = *(int *)local_40 != 0;
      UNLOCK();
      if (local_e1) goto LAB_10056ec9e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10056ec9e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_e1 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_e1) goto LAB_10056ecdb;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10056ecdb:
  FUN_100098f20(local_88);
  QMutex::unlock();
  if (((ulong)plVar14 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

