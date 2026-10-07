
int FUN_1005b37b0(byte param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint local_2324;
  undefined8 *local_2318;
  undefined8 uStack_2310;
  undefined8 local_22f8;
  undefined8 ***local_22f0;
  undefined8 ***local_22e8;
  uint local_22e0;
  undefined8 *local_22d8;
  undefined8 uStack_22d0;
  undefined8 local_22b8;
  undefined8 ***local_22b0;
  undefined8 ***local_22a8;
  uint local_22a0;
  uint local_2290;
  uint local_228c;
  undefined1 local_2288 [16];
  undefined1 local_2278 [16];
  long *local_2268;
  QMutex local_2260;
  void *local_2258;
  undefined8 local_2250;
  undefined8 ***local_2248;
  undefined8 ***local_2240;
  undefined4 local_2238;
  undefined4 local_2234;
  undefined4 local_2230;
  void *local_2228;
  undefined1 local_2220 [24];
  undefined8 local_2208;
  undefined8 local_2200;
  undefined1 local_21f8 [8];
  int local_21f0;
  undefined4 local_21e4;
  uint local_215c;
  uint local_2158;
  uint local_2154;
  int local_2150;
  uint local_214c;
  uint local_1170;
  long local_1168;
  long local_1160;
  long *local_1158;
  QMutex local_1150;
  void *local_1148;
  undefined8 local_1140;
  undefined8 ***local_1138;
  undefined8 ***local_1130;
  undefined4 local_1128;
  undefined4 local_1124;
  undefined4 local_1120;
  void *local_1118;
  undefined1 local_1110 [40];
  undefined1 local_10e8 [8];
  int local_10e0;
  undefined4 local_10d4;
  uint local_104c;
  uint local_1048;
  uint local_1044;
  int local_1040;
  uint local_103c;
  uint local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_1158 = param_2;
  QMutex::QMutex(&local_1150,0);
  local_1128 = 0;
  local_1140 = 0;
  local_1148 = (void *)0x0;
  local_1124 = 0xffffffff;
  local_1120 = 0;
  local_1118 = (void *)0x0;
  FUN_1005adfb0(local_1110,&local_1158);
  local_1138 = &local_1138;
  local_2268 = param_2;
  local_1130 = local_1138;
  QMutex::QMutex(&local_2260,0);
  local_2238 = 0;
  local_2250 = 0;
  local_2258 = (void *)0x0;
  local_2234 = 0xffffffff;
  local_2230 = 0;
  local_2228 = (void *)0x0;
  FUN_1005adfb0(local_2220,&local_2268);
  local_2248 = &local_2248;
  local_22b8 = 0;
  local_22d8 = (undefined8 *)0x0;
  uStack_22d0 = 0;
  local_22a0 = 0xffffffff;
  local_22b0 = &local_22b0;
  local_22f8 = 0;
  local_2318 = (undefined8 *)0x0;
  uStack_2310 = 0;
  local_22e0 = 0xffffffff;
  local_22f0 = &local_22f0;
  local_22e8 = local_22f0;
  local_22a8 = local_22b0;
  local_2240 = local_2248;
  (**(code **)(*param_2 + 0x2b0))(local_2278,param_2);
  (**(code **)(*param_2 + 0x130))(local_2288,param_2);
  if (local_10e0 != -1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","!fileCurrent.isOpen()",
                  "BlockGroup.cpp",0x852,"CommitBackup");
  }
  if (local_21f0 != -1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","!fileBackup.isOpen()",
                  "BlockGroup.cpp",0x853,"CommitBackup");
  }
  iVar6 = FUN_1005aad70(&local_1158);
  if (iVar6 < 0) {
    FUN_1008e3970("","vdisk",0,"Init of current cache failed, err = 0x%X",iVar6);
  }
  else {
    cVar4 = FUN_1005b15b0(&local_1158,local_2278,1);
    if (cVar4 == '\0') {
      FUN_1008e3970("","vdisk",0,"Open of current cache failed, err = 0x%X",iVar6);
    }
    else {
      iVar6 = FUN_1005aad70(&local_2268);
      if (iVar6 < 0) {
        FUN_1008e3970("","vdisk",0,"Init of backup cache failed, err = 0x%X",iVar6);
      }
      else {
        cVar4 = FUN_1005b15b0(&local_2268,local_2288,3);
        if (cVar4 == '\0') {
          FUN_1008e3970("","vdisk",0,"Open of backup cache failed, err = 0x%X",iVar6);
        }
        else {
          if (local_1048 / local_104c != local_2158 / local_215c) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "fileCurrent.GetGroupEntryCount() == fileBackup.GetGroupEntryCount()",
                          "BlockGroup.cpp",0x86d,"CommitBackup");
          }
          local_2324 = local_103c;
          if (local_103c != local_214c) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "fileCurrent.GetGroupCount() == fileBackup.GetGroupCount()",
                          "BlockGroup.cpp",0x86f,"CommitBackup");
            local_2324 = local_103c;
          }
          uVar2 = (ulong)local_1048 / (ulong)local_104c;
          local_22d8 = operator_new__(uVar2 * 0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
          if (local_22d8 == (undefined8 *)0x0) {
            local_22d8 = (undefined8 *)0x0;
            FUN_1008e3970("","vdisk",0,"No memory for current group.");
          }
          else {
            iVar12 = (int)uVar2;
            if (iVar12 != 0) {
              puVar9 = local_22d8;
              do {
                puVar9[1] = 0xffffffffffffffff;
                *puVar9 = 0xffffffffffffffff;
                puVar9[3] = 0;
                puVar9[2] = 0;
                puVar9 = puVar9 + 4;
              } while (puVar9 != local_22d8 + uVar2 * 4);
            }
            local_2318 = operator_new__(uVar2 * 0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
            if (local_2318 == (undefined8 *)0x0) {
              local_2318 = (undefined8 *)0x0;
              FUN_1008e3970("","vdisk",0,"No memory for backup group.");
            }
            else {
              if (iVar12 != 0) {
                puVar9 = local_2318;
                do {
                  puVar9[1] = 0xffffffffffffffff;
                  *puVar9 = 0xffffffffffffffff;
                  puVar9[3] = 0;
                  puVar9[2] = 0;
                  puVar9 = puVar9 + 4;
                } while (puVar9 != local_2318 + uVar2 * 4);
              }
              iVar6 = 0;
              if (local_2324 != 0) {
                uVar13 = 0;
                iVar6 = 0;
                do {
                  if (local_10e0 == -1) {
                    bVar14 = false;
                  }
                  else if (local_58 == 0) {
                    bVar14 = false;
                  }
                  else {
                    if (local_60 <= uVar13) {
                      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                    "num < m_BitSize","BlockGroup.cpp",0x3f6,"isSet");
                    }
                    bVar14 = (*(uint *)(local_58 + (ulong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1)
                             != 0;
                  }
                  if (local_21f0 == -1) {
                    bVar15 = false;
                  }
                  else if (local_1168 == 0) {
                    bVar15 = false;
                  }
                  else {
                    if (local_1170 <= uVar13) {
                      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                    "num < m_BitSize","BlockGroup.cpp",0x3f6,"isSet");
                    }
                    bVar15 = (*(uint *)(local_1168 + (ulong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) &
                             1) != 0;
                  }
                  bVar11 = bVar15 * '\x02' | bVar14;
                  if (bVar11 != 0) {
                    if (bVar11 == 1) {
                      FUN_1008e3970("","vdisk",0,"Unable to merge: group %u is absent in backup",
                                    uVar13);
                      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                                    "BlockGroup.cpp",0x89e,"CommitBackup");
                    }
                    else {
                      local_2290 = 0;
                      uVar10 = ((ulong)local_2154 - 1) + (ulong)(uVar13 * local_2158) + local_1160;
                      local_22e0 = uVar13;
                      local_22a0 = uVar13;
                      bVar5 = FUN_100707fb0(local_21f8,local_2318,local_2158,&local_2290,
                                            uVar10 - uVar10 % (ulong)local_2154);
                      if ((local_2290 == local_2158 & bVar5) == 0) {
                        FUN_1008e3970("","vdisk",0,
                                      "Unable to read group[%u] (read %u, expected %u), err = %u",
                                      local_22e0,local_2290,local_2158,local_21e4);
                        iVar6 = -0x7ffdf000;
                        FUN_1008e3970("","vdisk",0,"Unable to read group %u from backup",uVar13);
                        break;
                      }
                      if (bVar11 == 3) {
                        local_228c = 0;
                        uVar10 = ((ulong)local_1044 - 1) +
                                 (ulong)(local_22a0 * local_1048) + local_50;
                        bVar5 = FUN_100707fb0(local_10e8,local_22d8,local_1048,&local_228c,
                                              uVar10 - uVar10 % (ulong)local_1044);
                        if ((bVar5 & local_228c == local_1048) != 1) {
                          FUN_1008e3970("","vdisk",0,
                                        "Unable to read group[%u] (read %u, expected %u), err = %u",
                                        local_22a0,local_228c,local_1048,local_10d4);
                          iVar6 = -0x7ffdf000;
                          FUN_1008e3970("","vdisk",0,"Unable to read group %u from current",uVar13);
                          break;
                        }
                      }
                      if (iVar12 != 0) {
                        pbVar7 = (byte *)(local_2318 + 2);
                        piVar8 = (int *)(local_22d8 + 1);
                        uVar10 = 0;
                        bVar14 = false;
                        do {
                          if (*(int *)(pbVar7 + -8) == local_2150) {
                            if (bVar11 == 2) {
                              if ((param_1 & *pbVar7) == 0) goto LAB_1005b3f40;
                              *pbVar7 = *pbVar7 & (param_1 ^ 0xff);
                              bVar14 = true;
                            }
                            if ((bVar11 == 3) && (*piVar8 == local_1040)) {
                              *pbVar7 = param_1 | *pbVar7;
                              bVar14 = true;
                            }
                          }
LAB_1005b3f40:
                          uVar10 = uVar10 + 1;
                          pbVar7 = pbVar7 + 0x20;
                          piVar8 = piVar8 + 8;
                        } while (uVar10 < uVar2);
                        if ((bVar14) &&
                           (cVar4 = FUN_1005ab890(local_2220,&local_2318), cVar4 == '\0')) {
                          iVar6 = -0x7ffdf000;
                          FUN_1008e3970("","vdisk",0,"Unable to write group %u to backup",uVar13);
                          break;
                        }
                      }
                    }
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < local_2324);
              }
            }
          }
        }
      }
    }
  }
  if (local_2318 != (undefined8 *)0x0) {
    operator_delete__(local_2318);
  }
  if (local_22d8 != (undefined8 *)0x0) {
    operator_delete__(local_22d8);
  }
  FUN_1005afd10(local_2220);
  FUN_1005afd10(local_1110);
  if (local_2258 != (void *)0x0) {
    FUN_1005ab5b0(&local_2268);
    if (local_2258 != (void *)0x0) {
      operator_delete__(local_2258);
    }
    pvVar3 = local_2228;
    local_2258 = (void *)0x0;
    if (local_2228 != (void *)0x0) {
      FUN_1005b51c0(local_2228,*(undefined8 *)((long)local_2228 + 8));
      operator_delete(pvVar3);
    }
    local_2228 = (void *)0x0;
  }
  if (local_1148 != (void *)0x0) {
    FUN_1005ab5b0(&local_1158);
    if (local_1148 != (void *)0x0) {
      operator_delete__(local_1148);
    }
    pvVar3 = local_1118;
    local_1148 = (void *)0x0;
    if (local_1118 != (void *)0x0) {
      FUN_1005b51c0(local_1118,*(undefined8 *)((long)local_1118 + 8));
      operator_delete(pvVar3);
    }
    local_1118 = (void *)0x0;
  }
  if (-1 < iVar6) {
    FUN_1005b1b60(param_2,local_2278);
    local_40 = local_2200;
    local_48 = local_2208;
    FUN_1005b21b0(local_2268,&local_48,local_2278);
  }
  FUN_1005aac60(&local_2268);
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1005aac60(&local_1158);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

