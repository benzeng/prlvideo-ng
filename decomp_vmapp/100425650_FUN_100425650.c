
void FUN_100425650(undefined4 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  size_t sVar14;
  ulong uVar15;
  void *pvVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined4 *puVar22;
  void *pvVar23;
  undefined8 *local_f0;
  string local_e8 [24];
  string local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_38 [8];
  
  local_58 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  iVar6 = FUN_100424960(*param_1,param_2,0x14,&local_58);
  if (iVar6 == 0) {
    iVar6 = *(int *)((long)local_58 + 4);
    uVar15 = (ulong)iVar6;
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
    iVar7 = FUN_100424960(*param_1,*(undefined4 *)((long)local_58 + 8),uVar15 * 0xc,&local_78);
    pvVar5 = local_78;
    if (iVar7 == 0) {
      plVar2 = (long *)(param_1 + 2);
      pvVar23 = *(void **)(param_1 + 2);
      if ((ulong)(*(long *)(param_1 + 6) - (long)pvVar23 >> 3) < uVar15) {
        pvVar16 = *(void **)(param_1 + 4);
        pvVar8 = (void *)0x0;
        if (iVar6 != 0) {
          pvVar8 = operator_new(uVar15 * 8);
        }
        pvVar1 = (void *)((long)pvVar8 + ((long)pvVar16 - (long)pvVar23 >> 3) * 8);
        pvVar12 = pvVar1;
        if (pvVar16 != pvVar23) {
          do {
            puVar9 = (undefined8 *)((long)pvVar16 + -8);
            pvVar16 = (void *)((long)pvVar16 + -8);
            *(undefined8 *)((long)pvVar12 + -8) = *puVar9;
            pvVar12 = (void *)((long)pvVar12 + -8);
          } while (pvVar23 != pvVar16);
          pvVar23 = (void *)*plVar2;
        }
        *(void **)(param_1 + 2) = pvVar12;
        *(void **)(param_1 + 4) = pvVar1;
        *(void **)(param_1 + 6) = (void *)((long)pvVar8 + uVar15 * 8);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
      }
      if (0 < iVar6) {
        puVar22 = (undefined4 *)((long)pvVar5 + 8);
        lVar17 = 0;
        do {
          local_98 = (void *)0x0;
          pvStack_90 = (void *)0x0;
          local_88 = 0;
          iVar6 = FUN_100424960(*param_1,puVar22[-2],0x1c,&local_98);
          if (iVar6 == 0) {
            lVar21 = (ulong)*(uint *)((long)local_98 + 0x14) + 0x1c;
            iVar6 = FUN_100424960(*param_1,puVar22[-2],lVar21,&local_98);
            if (iVar6 == 0) {
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              if (puVar22[-1] != 0) {
                FUN_100424d50(local_d0,*param_1);
                std::string::operator=((string *)&local_b8,local_d0);
                std::string::~string(local_d0);
              }
              puVar9 = operator_new(0x70);
              pvVar5 = local_98;
              uVar3 = puVar22[-2];
              std::string::string(local_e8,(string *)&local_b8);
              FUN_100425bb0(puVar9,pvVar5,lVar21,uVar3,local_e8,*puVar22,*param_1,param_1[1]);
              std::string::~string(local_e8);
              if (puVar9[6] == 0) {
                std::string::~string((string *)(puVar9 + 9));
                pvVar5 = (void *)*puVar9;
                if (pvVar5 != (void *)0x0) {
                  if ((void *)puVar9[1] != pvVar5) {
                    puVar9[1] = pvVar5;
                  }
                  operator_delete(pvVar5);
                }
                operator_delete(puVar9);
              }
              else {
                puVar4 = *(undefined8 **)(param_1 + 4);
                local_f0 = puVar9;
                if (puVar4 == *(undefined8 **)(param_1 + 6)) {
                  FUN_100425d00(plVar2,&local_f0);
                }
                else {
                  *puVar4 = puVar9;
                  *(undefined8 **)(param_1 + 4) = puVar4 + 1;
                }
              }
              std::string::~string((string *)&local_b8);
            }
          }
          if (local_98 != (void *)0x0) {
            if (pvStack_90 != local_98) {
              pvStack_90 = local_98;
            }
            operator_delete(local_98);
          }
          lVar17 = lVar17 + 1;
          puVar22 = puVar22 + 3;
        } while (lVar17 < (long)uVar15);
      }
      plVar20 = (long *)(param_1 + 4);
      FUN_100425e20(*plVar2,*plVar20,local_38);
      plVar10 = (long *)*plVar2;
      plVar13 = (long *)*plVar20;
      plVar18 = plVar10;
      plVar11 = plVar10;
      if (plVar10 != plVar13) {
        do {
          plVar18 = plVar11;
          plVar11 = plVar18 + 1;
          plVar19 = plVar13;
          if (plVar13 == plVar11) goto LAB_100425a3b;
        } while (*(long *)(*plVar18 + 0x20) != *(long *)(*plVar11 + 0x20));
      }
      plVar19 = plVar18;
      if (plVar18 != plVar13) {
        plVar10 = plVar18 + 1;
        while (plVar10 = plVar10 + 1, plVar10 != plVar13) {
          if (*(long *)(*plVar18 + 0x20) != *(long *)(*plVar10 + 0x20)) {
            plVar18[1] = *plVar10;
            plVar18 = plVar18 + 1;
          }
        }
        plVar13 = (long *)*plVar20;
        plVar10 = (long *)*plVar2;
        plVar19 = plVar18 + 1;
      }
LAB_100425a3b:
      if (plVar19 != plVar13) {
        sVar14 = (long)plVar13 -
                 (long)(plVar10 +
                       ((ulong)((long)plVar13 - (long)plVar19) >> 3) +
                       ((ulong)((long)plVar19 - (long)plVar10) >> 3));
        _memmove(plVar19,plVar10 + ((ulong)((long)plVar13 - (long)plVar19) >> 3) +
                                   ((ulong)((long)plVar19 - (long)plVar10) >> 3),sVar14);
        lVar21 = (sVar14 & 0xfffffffffffffff8) + (long)plVar19;
        lVar17 = *plVar20;
        if (lVar17 != lVar21) {
          *plVar20 = (~((lVar17 + -8) - lVar21) & 0xfffffffffffffff8U) + lVar17;
        }
      }
    }
    if (local_78 != (void *)0x0) {
      if (pvStack_70 != local_78) {
        pvStack_70 = local_78;
      }
      operator_delete(local_78);
    }
  }
  if (local_58 != (void *)0x0) {
    if (pvStack_50 != local_58) {
      pvStack_50 = local_58;
    }
    operator_delete(local_58);
  }
  return;
}

