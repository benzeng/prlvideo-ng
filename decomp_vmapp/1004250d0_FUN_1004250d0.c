
void FUN_1004250d0(undefined4 *param_1,undefined8 param_2)

{
  long *plVar1;
  void *pvVar2;
  undefined8 uVar3;
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
  void *pvVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  void *pvVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
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
  iVar6 = FUN_100424960(*param_1,param_2,0x20,&local_58);
  if (iVar6 == 0) {
    iVar6 = *(int *)((long)local_58 + 4);
    uVar20 = (ulong)iVar6;
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
    iVar7 = FUN_100424960(*param_1,*(undefined8 *)((long)local_58 + 8),uVar20 * 0x18,&local_78);
    pvVar5 = local_78;
    if (iVar7 == 0) {
      plVar1 = (long *)(param_1 + 2);
      pvVar19 = *(void **)(param_1 + 2);
      if ((ulong)(*(long *)(param_1 + 6) - (long)pvVar19 >> 3) < uVar20) {
        pvVar15 = *(void **)(param_1 + 4);
        pvVar8 = (void *)0x0;
        if (iVar6 != 0) {
          pvVar8 = operator_new(uVar20 * 8);
        }
        pvVar2 = (void *)((long)pvVar8 + ((long)pvVar15 - (long)pvVar19 >> 3) * 8);
        pvVar12 = pvVar2;
        if (pvVar15 != pvVar19) {
          do {
            puVar22 = (undefined8 *)((long)pvVar15 + -8);
            pvVar15 = (void *)((long)pvVar15 + -8);
            *(undefined8 *)((long)pvVar12 + -8) = *puVar22;
            pvVar12 = (void *)((long)pvVar12 + -8);
          } while (pvVar19 != pvVar15);
          pvVar19 = (void *)*plVar1;
        }
        *(void **)(param_1 + 2) = pvVar12;
        *(void **)(param_1 + 4) = pvVar2;
        *(void **)(param_1 + 6) = (void *)((long)pvVar8 + uVar20 * 8);
        if (pvVar19 != (void *)0x0) {
          operator_delete(pvVar19);
        }
      }
      if (0 < iVar6) {
        puVar22 = (undefined8 *)((long)pvVar5 + 0x10);
        lVar16 = 0;
        do {
          local_98 = (void *)0x0;
          pvStack_90 = (void *)0x0;
          local_88 = 0;
          iVar6 = FUN_100424960(*param_1,puVar22[-2],0x20,&local_98);
          if (iVar6 == 0) {
            lVar21 = (ulong)*(uint *)((long)local_98 + 0x14) + 0x20;
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
                  FUN_100425d00(plVar1,&local_f0);
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
          lVar16 = lVar16 + 1;
          puVar22 = puVar22 + 3;
        } while (lVar16 < (long)uVar20);
      }
      plVar23 = (long *)(param_1 + 4);
      FUN_100425e20(*plVar1,*plVar23,local_38);
      plVar10 = (long *)*plVar1;
      plVar13 = (long *)*plVar23;
      plVar17 = plVar10;
      plVar11 = plVar10;
      if (plVar10 != plVar13) {
        do {
          plVar17 = plVar11;
          plVar11 = plVar17 + 1;
          plVar18 = plVar13;
          if (plVar13 == plVar11) goto LAB_1004254da;
        } while (*(long *)(*plVar17 + 0x20) != *(long *)(*plVar11 + 0x20));
      }
      plVar18 = plVar17;
      if (plVar17 != plVar13) {
        plVar10 = plVar17 + 1;
        while (plVar10 = plVar10 + 1, plVar10 != plVar13) {
          if (*(long *)(*plVar17 + 0x20) != *(long *)(*plVar10 + 0x20)) {
            plVar17[1] = *plVar10;
            plVar17 = plVar17 + 1;
          }
        }
        plVar13 = (long *)*plVar23;
        plVar10 = (long *)*plVar1;
        plVar18 = plVar17 + 1;
      }
LAB_1004254da:
      if (plVar18 != plVar13) {
        sVar14 = (long)plVar13 -
                 (long)(plVar10 +
                       ((ulong)((long)plVar13 - (long)plVar18) >> 3) +
                       ((ulong)((long)plVar18 - (long)plVar10) >> 3));
        _memmove(plVar18,plVar10 + ((ulong)((long)plVar13 - (long)plVar18) >> 3) +
                                   ((ulong)((long)plVar18 - (long)plVar10) >> 3),sVar14);
        lVar21 = (sVar14 & 0xfffffffffffffff8) + (long)plVar18;
        lVar16 = *plVar23;
        if (lVar16 != lVar21) {
          *plVar23 = (~((lVar16 + -8) - lVar21) & 0xfffffffffffffff8U) + lVar16;
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

