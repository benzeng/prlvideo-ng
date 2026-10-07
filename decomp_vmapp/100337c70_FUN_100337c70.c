
uint * FUN_100337c70(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 local_68 [8];
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  uint local_38;
  uint local_34;
  
  puVar15 = (uint *)(param_2 + 4);
  if (*(short *)(param_2 + 2) != 0) {
    plVar1 = (long *)(param_1 + 0xbb40);
    puVar9 = (undefined8 *)(param_1 + 0xbb38);
    iVar14 = 0;
    do {
      if ((puVar15 < *(uint **)(param_1 + 0xbbf8)) || (*(uint **)(param_1 + 0xbc00) < puVar15 + 2))
      {
        puVar9 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar9 = puVar15;
        *(undefined4 *)(puVar9 + 1) = 8;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar9,&PTR_vtable_101117a68,0);
      }
      local_58 = (undefined8 *)0x0;
      puStack_50 = (undefined8 *)0x0;
      local_48 = (undefined8 *)0x0;
      uVar2 = puVar15[1];
      iVar5 = uVar2 * 8 + 8;
      if (*(uint **)(param_1 + 0xbc00) < (uint *)((long)iVar5 + (long)puVar15)) {
        puVar9 = (undefined8 *)___cxa_allocate_exception(0x10);
        *puVar9 = puVar15;
        *(int *)(puVar9 + 1) = iVar5;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar9,&PTR_vtable_101117a68,0);
      }
      uVar3 = *puVar15;
      if ((uVar3 & 1) == 0) {
        plVar12 = (long *)*plVar1;
        plVar10 = plVar1;
        if ((long *)*plVar1 != (long *)0x0) {
          do {
            while (plVar11 = plVar12, uVar3 <= *(uint *)(plVar11 + 4)) {
              plVar12 = (long *)*plVar11;
              plVar10 = plVar11;
              if ((long *)*plVar11 == (long *)0x0) goto LAB_100337e33;
            }
            plVar8 = plVar11 + 1;
            plVar12 = (long *)*plVar8;
            plVar11 = plVar10;
          } while ((long *)*plVar8 != (long *)0x0);
LAB_100337e33:
          if (((plVar11 != plVar1) && (*(uint *)(plVar11 + 4) <= uVar3)) && (plVar11[5] != 0))
          goto LAB_100338024;
        }
        FUN_100390a30(local_68);
        iVar5 = FUN_100390a60(local_68,uVar3,&local_58);
        if (iVar5 == 0) {
          local_34 = uVar3;
          pvVar6 = operator_new(0x18);
          FUN_10033fbb0(pvVar6,&local_58);
          puVar7 = (undefined8 *)FUN_10033fab0(puVar9);
          *puVar7 = pvVar6;
        }
        FUN_100390a50(local_68);
      }
      else {
        if (uVar2 != 0) {
          lVar13 = 0;
          do {
            local_60 = (undefined2)puVar15[lVar13 * 2 + 2];
            uStack_5e = *(undefined2 *)((long)puVar15 + lVar13 * 8 + 10);
            uStack_5c = (undefined1)puVar15[lVar13 * 2 + 3];
            uStack_5b = *(undefined1 *)((long)puVar15 + lVar13 * 8 + 0xd);
            uStack_5a = *(undefined1 *)((long)puVar15 + lVar13 * 8 + 0xe);
            uStack_59 = *(undefined1 *)((long)puVar15 + lVar13 * 8 + 0xf);
            if (puStack_50 == local_48) {
              FUN_100340410(&local_58,&local_60);
            }
            else {
              *puStack_50 = CONCAT17(uStack_59,
                                     CONCAT16(uStack_5a,
                                              CONCAT15(uStack_5b,
                                                       CONCAT14(uStack_5c,
                                                                CONCAT22(uStack_5e,local_60)))));
              puStack_50 = puStack_50 + 1;
            }
            lVar13 = lVar13 + 1;
          } while ((uint)lVar13 < puVar15[1]);
        }
        plVar12 = (long *)*plVar1;
        plVar10 = plVar1;
        if ((long *)*plVar1 != (long *)0x0) {
          do {
            while (plVar11 = plVar12, uVar3 <= *(uint *)(plVar11 + 4)) {
              plVar12 = (long *)*plVar11;
              plVar10 = plVar11;
              if ((long *)*plVar11 == (long *)0x0) goto LAB_100337eb3;
            }
            plVar8 = plVar11 + 1;
            plVar12 = (long *)*plVar8;
            plVar11 = plVar10;
          } while ((long *)*plVar8 != (long *)0x0);
LAB_100337eb3:
          if (((plVar11 != plVar1) && (*(uint *)(plVar11 + 4) <= uVar3)) && (plVar11[5] != 0)) {
            FUN_100362670(*(undefined8 *)(param_1 + 48000),uVar3);
            plVar12 = (long *)*plVar1;
            plVar10 = plVar1;
            if ((long *)*plVar1 != (long *)0x0) {
              do {
                while (plVar11 = plVar12, uVar3 <= *(uint *)(plVar11 + 4)) {
                  plVar12 = (long *)*plVar11;
                  plVar10 = plVar11;
                  if ((long *)*plVar11 == (long *)0x0) goto LAB_100337f31;
                }
                plVar8 = plVar11 + 1;
                plVar11 = plVar10;
                plVar12 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
LAB_100337f31:
              if ((plVar11 != plVar1) && (*(uint *)(plVar11 + 4) <= uVar3)) {
                puVar7 = (undefined8 *)plVar11[5];
                if (puVar7 != (undefined8 *)0x0) {
                  pvVar6 = (void *)*puVar7;
                  if (pvVar6 != (void *)0x0) {
                    pvVar4 = (void *)puVar7[1];
                    if (pvVar4 != pvVar6) {
                      puVar7[1] = (~((long)pvVar4 + (-8 - (long)pvVar6)) & 0xfffffffffffffff8U) +
                                  (long)pvVar4;
                    }
                    operator_delete(pvVar6);
                  }
                  operator_delete(puVar7);
                }
                plVar12 = plVar11;
                plVar10 = (long *)plVar11[1];
                if ((long *)plVar11[1] == (long *)0x0) {
                  do {
                    plVar8 = (long *)plVar12[2];
                    bVar16 = (long *)*plVar8 != plVar12;
                    plVar12 = plVar8;
                  } while (bVar16);
                }
                else {
                  do {
                    plVar8 = plVar10;
                    plVar10 = (long *)*plVar8;
                  } while ((long *)*plVar8 != (long *)0x0);
                }
                if ((long *)*puVar9 == plVar11) {
                  *puVar9 = plVar8;
                }
                *(long *)(param_1 + 0xbb48) = *(long *)(param_1 + 0xbb48) + -1;
                FUN_1000e86c0(*(undefined8 *)(param_1 + 0xbb40),plVar11);
                operator_delete(plVar11);
              }
            }
          }
        }
        local_38 = uVar3;
        pvVar6 = operator_new(0x18);
        FUN_10033fbb0(pvVar6,&local_58);
        puVar7 = (undefined8 *)FUN_10033fab0(puVar9);
        *puVar7 = pvVar6;
      }
LAB_100338024:
      if (local_58 != (undefined8 *)0x0) {
        if (puStack_50 != local_58) {
          puStack_50 = (undefined8 *)
                       ((~((long)puStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                       (long)puStack_50);
        }
        operator_delete(local_58);
      }
      puVar15 = (uint *)((long)(int)(uVar2 << 3) + 8 + (long)puVar15);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return puVar15;
}

