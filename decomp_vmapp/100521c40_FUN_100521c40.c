
long * FUN_100521c40(long *param_1,undefined8 param_2,long *param_3,long param_4,byte *param_5)

{
  undefined4 *puVar1;
  long *plVar2;
  string sVar3;
  int iVar4;
  long lVar5;
  string *psVar6;
  string *psVar7;
  int iVar8;
  byte *pbVar9;
  size_t sVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  string *psVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  string *psVar22;
  string *psVar23;
  long *plVar24;
  string *psVar25;
  ulong uVar26;
  long *local_d8;
  long *local_d0;
  string *local_b8;
  string *psStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  int local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  string *local_48;
  string *psStack_40;
  undefined8 local_38;
  
  local_48 = (string *)0x0;
  psStack_40 = (string *)0x0;
  local_38 = 0;
  if ((*param_5 & 1) == 0) {
    pbVar9 = param_5 + 1;
  }
  else {
    pbVar9 = *(byte **)(param_5 + 0x10);
  }
  FUN_1005213d0(&local_48,pbVar9,0);
  local_68 = (undefined4 *)0x0;
  puStack_60 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  uVar20 = param_3[1] - *param_3 >> 3;
  if (uVar20 != 0) {
    uVar16 = 0;
    do {
      local_98 = (long *)0x0;
      FUN_100522ad0(&local_90);
      plVar18 = *(long **)(*param_3 + uVar16 * 8);
      if (plVar18 != (long *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      if (local_98 != (long *)0x0) {
        LOCK();
        plVar24 = local_98 + 1;
        lVar12 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          lVar12 = *local_98;
          local_98 = plVar18;
          (**(code **)(lVar12 + 0x10))();
          plVar18 = local_98;
        }
      }
      local_98 = plVar18;
      plVar18 = (long *)0x0;
      if (local_98 != (long *)0x0) {
        plVar18 = (long *)local_98[2];
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,&local_90,param_2);
      if (local_80 == *(int *)(param_4 + 0x10)) {
        local_b8 = (string *)0x0;
        psStack_b0 = (string *)0x0;
        local_a8 = 0;
        plVar18 = (long *)0x0;
        if (local_98 != (long *)0x0) {
          plVar18 = (long *)local_98[2];
        }
        pbVar9 = (byte *)(**(code **)(*plVar18 + 0x10))();
        if ((*pbVar9 & 1) == 0) {
          pbVar9 = pbVar9 + 1;
        }
        else {
          pbVar9 = *(byte **)(pbVar9 + 0x10);
        }
        FUN_1005213d0(&local_b8,pbVar9,0);
        psVar7 = local_48;
        psVar6 = local_b8;
        local_70 = 0;
        iVar4 = 0;
        lVar12 = (long)psStack_40 - (long)local_48;
        if (lVar12 != 0) {
          iVar4 = 0;
          uVar21 = 0;
          psVar22 = psStack_b0;
          do {
            psVar23 = psVar6;
            if (psVar6 != psVar22) {
              sVar3 = psVar7[uVar21 * 0x18];
              bVar11 = (byte)sVar3 & 1;
              uVar26 = (ulong)((byte)sVar3 >> 1);
              if (bVar11 != 0) {
                uVar26 = *(size_t *)(psVar7 + uVar21 * 0x18 + 8);
              }
              psVar25 = psVar6;
              psVar15 = psVar7 + uVar21 * 0x18 + 1;
              if (bVar11 != 0) {
                psVar15 = *(string **)(psVar7 + uVar21 * 0x18 + 0x10);
              }
              do {
                bVar11 = (byte)*psVar25 & 1;
                if (bVar11 == 0) {
                  uVar13 = (ulong)((byte)*psVar25 >> 1);
                }
                else {
                  uVar13 = *(ulong *)(psVar25 + 8);
                }
                psVar23 = psVar22;
                if (uVar13 == uVar26) {
                  if (bVar11 == 0) {
                    sVar10 = 0;
                    if (uVar26 == 0) {
LAB_100521f00:
                      if (psVar25 != psVar22) {
                        local_70 = iVar4 + 1;
                        iVar4 = local_70;
                      }
                      break;
                    }
                    while (psVar25[sVar10 + 1] == psVar15[sVar10]) {
                      sVar10 = sVar10 + 1;
                      if (uVar26 == sVar10) goto LAB_100521f00;
                    }
                  }
                  else if ((uVar26 == 0) ||
                          (iVar8 = _memcmp(*(void **)(psVar25 + 0x10),psVar15,uVar26), iVar8 == 0))
                  goto LAB_100521f00;
                }
                psVar25 = psVar25 + 0x18;
              } while (psVar25 != psVar22);
            }
            uVar21 = uVar21 + 1;
            psVar22 = psVar23;
          } while (uVar21 < (ulong)((lVar12 >> 3) * -0x5555555555555555));
        }
        puVar14 = local_68;
        if (local_68 == puStack_60) {
LAB_100521fe0:
          if (puVar14 == local_58) {
            FUN_100522890(&local_68,local_a0);
          }
          else {
            *puVar14 = local_a0[0];
            *(long **)(puVar14 + 2) = local_98;
            if (local_98 != (long *)0x0) {
              LOCK();
              *(int *)(local_98 + 1) = (int)local_98[1] + 1;
              UNLOCK();
            }
            *puVar14 = local_a0[0];
            *(undefined8 *)(puVar14 + 4) = local_90;
            *(undefined8 *)(puVar14 + 6) = local_88;
            *(undefined1 *)(puVar14 + 10) = local_78;
            *(ulong *)(puVar14 + 8) = CONCAT44(uStack_7c,local_80);
            puVar14[0xc] = local_70;
            puStack_60 = puStack_60 + 0xe;
          }
        }
        else {
          if ((int)local_68[0xc] < iVar4) {
            do {
              puVar1 = puStack_60 + -0xe;
              plVar18 = *(long **)(puStack_60 + -0xc);
              puStack_60 = puVar1;
              if (plVar18 != (long *)0x0) {
                LOCK();
                plVar24 = plVar18 + 1;
                lVar12 = *plVar24;
                *(int *)plVar24 = (int)*plVar24 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)(*plVar18 + 0x10))();
                }
              }
            } while (puStack_60 != puVar14);
            goto LAB_100521fe0;
          }
          puVar14 = puStack_60;
          if ((int)local_68[0xc] <= iVar4) goto LAB_100521fe0;
        }
        psVar6 = local_b8;
        if (local_b8 != (string *)0x0) {
          while (psStack_b0 != psVar6) {
            psStack_b0 = psStack_b0 + -0x18;
            std::string::~string(psStack_b0);
          }
          operator_delete(local_b8);
        }
      }
      if (local_98 != (long *)0x0) {
        LOCK();
        plVar18 = local_98 + 1;
        lVar12 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar20);
  }
  iVar4 = 0;
  lVar12 = (long)puStack_60 - (long)local_68;
  *param_1 = 0;
  local_d0 = (long *)0x0;
  local_d8 = (long *)0x0;
  if (lVar12 != 0) {
    lVar17 = 0x10;
    local_d0 = (long *)0x0;
    local_d8 = (long *)0x0;
    uVar20 = 0;
    plVar18 = (long *)0x0;
    do {
      puVar14 = local_68;
      iVar8 = FUN_100522b50((long)local_68 + lVar17,param_4);
      *(int *)((long)puVar14 + lVar17 + -0x10) = iVar8;
      plVar24 = plVar18;
      if (iVar4 < iVar8) {
        plVar24 = *(long **)((long)puVar14 + lVar17 + -8);
        if (plVar24 != (long *)0x0) {
          LOCK();
          *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
          UNLOCK();
        }
        *param_1 = (long)plVar24;
        if (plVar18 != (long *)0x0) {
          LOCK();
          plVar2 = plVar18 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*plVar18 + 0x10))();
          }
        }
        iVar4 = *(int *)((long)puVar14 + lVar17 + -0x10);
        local_d8 = plVar24;
        local_d0 = plVar24;
      }
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + 0x38;
      plVar18 = plVar24;
    } while (uVar20 < (ulong)((lVar12 >> 3) * 0x6db6db6db6db6db7));
  }
  if (1 < DAT_1011b55f8) {
    if ((*param_5 & 1) == 0) {
      param_5 = param_5 + 1;
    }
    else {
      param_5 = *(byte **)(param_5 + 0x10);
    }
    pcVar19 = "<none>";
    if ((local_d8 != (long *)0x0) && (local_d8[2] != 0)) {
      plVar18 = (long *)0x0;
      if (local_d0 != (long *)0x0) {
        plVar18 = (long *)local_d0[2];
      }
      pbVar9 = (byte *)(**(code **)(*plVar18 + 0x10))();
      if ((*pbVar9 & 1) == 0) {
        pcVar19 = (char *)(pbVar9 + 1);
      }
      else {
        pcVar19 = *(char **)(pbVar9 + 0x10);
      }
    }
    FUN_1008e3970("[TIMESYNC-COMMON]","TimeSyncCommon",2,"Selected best fit for \'%s\' is \'%s\'",
                  param_5,pcVar19);
  }
  puVar1 = local_68;
  puVar14 = puStack_60;
  if (local_68 != (undefined4 *)0x0) {
    while (puVar14 != puVar1) {
      puStack_60 = puVar14 + -0xe;
      plVar18 = *(long **)(puVar14 + -0xc);
      puVar14 = puStack_60;
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar24 = plVar18 + 1;
        lVar12 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)(*plVar18 + 0x10))();
          puVar14 = puStack_60;
        }
      }
    }
    puStack_60 = puVar14;
    operator_delete(local_68);
  }
  psVar6 = local_48;
  if (local_48 != (string *)0x0) {
    while (psStack_40 != psVar6) {
      psStack_40 = psStack_40 + -0x18;
      std::string::~string(psStack_40);
    }
    operator_delete(local_48);
  }
  return param_1;
}

