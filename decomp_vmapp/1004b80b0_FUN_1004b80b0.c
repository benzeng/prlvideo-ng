
void FUN_1004b80b0(long param_1,long *param_2,uint param_3,long *param_4,undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = (ulong)param_3;
  FUN_1004b8670(param_1,param_1 + 0x1038,0);
  FUN_1004ba0c0(param_1 + 0x1038,param_5);
  if ((*param_2 != 0) && (lVar3 = *(long *)(*param_2 + 0x10), lVar3 != 0)) {
    if ((*(int *)(uVar6 + 4 + lVar3) != 0) &&
       (uVar19 = *(uint *)(uVar6 + 0x24 + lVar3), uVar19 != 0)) {
      uVar8 = 0;
      do {
        uVar23 = *(uint *)(uVar6 + 0x30 + lVar3 + uVar8 * 4);
        uVar12 = uVar23 >> 0x10 ^ uVar23;
        uVar15 = (ulong)((uVar12 >> 8 ^ uVar12) & 0xff);
        plVar5 = *(long **)(param_1 + 0x18 + uVar15 * 8);
        if (plVar5 != (long *)0x0) {
          plVar20 = (long *)(param_1 + 0x18 + uVar15 * 8);
          do {
            plVar17 = plVar5;
            if (*(uint *)(plVar17 + 7) == uVar23) {
              FUN_1004bd1b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),plVar17);
              _free((void *)plVar17[0xe]);
              plVar17[0xe] = 0;
              *(undefined4 *)(plVar17 + 0xf) = 0;
              *(undefined1 *)((long)plVar17 + 0x7c) = 0;
              _free((void *)plVar17[0xd]);
              plVar17[0xd] = 0;
              *plVar20 = *plVar17;
              _free(plVar17);
              uVar19 = *(uint *)(lVar3 + 0x24 + uVar6);
              break;
            }
            plVar5 = (long *)*plVar17;
            plVar20 = plVar17;
          } while ((long *)*plVar17 != (long *)0x0);
        }
        uVar23 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar23;
      } while (uVar23 < uVar19);
    }
    if (*(int *)(uVar6 + 8 + lVar3) != 0) {
      uVar8 = (ulong)*(uint *)(lVar3 + 4 + uVar6);
      uVar19 = *(uint *)(lVar3 + 0x24 + uVar6 + uVar8);
      if (uVar19 != 0) {
        lVar10 = uVar6 + 0x20 + uVar8;
        lVar11 = lVar10 + 0x10 + lVar3;
        uVar23 = 0;
        do {
          uVar12 = *(uint *)(lVar11 + 0x28);
          uVar2 = *(uint *)(lVar11 + 0x2c);
          uVar14 = *(uint *)(lVar11 + 4);
          uVar21 = *(uint *)(lVar11 + 0x14);
          uVar13 = uVar21 >> 0x10 ^ uVar21;
          uVar8 = (ulong)((uVar13 >> 8 ^ uVar13) & 0xff);
          plVar5 = *(long **)(param_1 + 0x18 + uVar8 * 8);
          if (plVar5 == (long *)0x0) {
            plVar20 = (long *)(param_1 + 0x18 + uVar8 * 8);
          }
          else {
            do {
              plVar20 = plVar5;
              if (*(uint *)(plVar20 + 7) == uVar21) goto LAB_1004b83b0;
              plVar5 = (long *)*plVar20;
            } while ((long *)*plVar20 != (long *)0x0);
          }
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_38 = 0;
          if (*(long *)(*param_4 + 0x10) != 0) {
            uVar19 = *(uint *)(lVar11 + 0x14);
            lVar18 = *(long *)(*param_4 + 0x10);
            lVar16 = 0;
            do {
              while (lVar9 = lVar18, uVar21 = *(uint *)(lVar9 + 0x18), uVar19 <= uVar21) {
                lVar18 = *(long *)(lVar9 + 8);
                lVar16 = lVar9;
                if (*(long *)(lVar9 + 8) == 0) goto LAB_1004b8328;
              }
              lVar18 = *(long *)(lVar9 + 0x10);
            } while (*(long *)(lVar9 + 0x10) != 0);
            if (lVar16 != 0) {
              uVar21 = *(uint *)(lVar16 + 0x18);
LAB_1004b8328:
              if (uVar21 <= uVar19) {
                puVar4 = (undefined8 *)FUN_1004be870(param_4,(uint *)(lVar11 + 0x14));
                local_38 = puVar4[4];
                uStack_40 = puVar4[3];
                local_48 = puVar4[2];
                local_58 = *puVar4;
                uStack_50 = puVar4[1];
              }
            }
          }
          plVar5 = (long *)FUN_1004b87b0();
          if (plVar5 != (long *)0x0) {
            *plVar5 = *plVar20;
            *plVar20 = (long)plVar5;
          }
          uVar19 = *(uint *)(lVar3 + 4 + lVar10);
LAB_1004b83b0:
          lVar11 = lVar11 + 0x44 + (ulong)uVar12 * 0x10 + ((ulong)uVar14 + (ulong)uVar2) * 2;
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar19);
      }
    }
    if (*(int *)(uVar6 + 0xc + lVar3) != 0) {
      uVar8 = (ulong)*(uint *)(lVar3 + 8 + uVar6);
      lVar10 = *(uint *)(lVar3 + 4 + uVar6) + uVar6;
      uVar19 = *(uint *)(lVar3 + 0x24 + lVar10 + uVar8);
      if (uVar19 != 0) {
        lVar10 = uVar8 + 0x20 + lVar10;
        puVar22 = (uint *)(lVar10 + 0x10 + lVar3);
        uVar23 = 0;
LAB_1004b8410:
        uVar12 = *puVar22;
        uVar2 = puVar22[5];
        uVar14 = uVar2 >> 0x10 ^ uVar2;
        uVar8 = (ulong)((uVar14 >> 8 ^ uVar14) & 0xff);
        plVar5 = *(long **)(param_1 + 0x18 + uVar8 * 8);
        if (plVar5 != (long *)0x0) {
          puVar1 = puVar22 + 5;
          plVar20 = (long *)(param_1 + 0x18 + uVar8 * 8);
          do {
            plVar17 = plVar5;
            if (*(uint *)(plVar17 + 7) == uVar2) {
              local_48 = 0;
              uStack_40 = 0;
              local_58 = 0;
              uStack_50 = 0;
              local_38 = 0;
              if (*(long *)(*param_4 + 0x10) == 0) goto LAB_1004b8520;
              lVar11 = *(long *)(*param_4 + 0x10);
              lVar18 = 0;
              goto LAB_1004b84a0;
            }
            plVar5 = (long *)*plVar17;
            plVar20 = plVar17;
          } while ((long *)*plVar17 != (long *)0x0);
        }
        goto LAB_1004b8550;
      }
    }
LAB_1004b8562:
    if (*(int *)(uVar6 + 0x10 + lVar3) != 0) {
      lVar11 = (ulong)*(uint *)(lVar3 + 8 + uVar6) + *(uint *)(lVar3 + 4 + uVar6) + uVar6;
      uVar6 = (ulong)*(uint *)(lVar3 + 0xc + uVar6);
      lVar10 = uVar6 + 0x20 + lVar11;
      uVar19 = *(uint *)(lVar3 + 0x24 + lVar11 + uVar6);
      uVar6 = (ulong)uVar19 * 4 + 0x3ff;
      pvVar7 = *(void **)(param_1 + 0x1020);
      if ((int)(uVar6 >> 10) != (int)((ulong)*(uint *)(param_1 + 0x1028) * 4 + 0x3ff >> 10)) {
        _free(pvVar7);
        uVar19 = (uint)uVar6 & 0xfffffc00;
        pvVar7 = _malloc((ulong)uVar19);
        *(void **)(param_1 + 0x1020) = pvVar7;
        if (pvVar7 == (void *)0x0) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"Failed to allocate memory (%d bytes) for zorder"
                        ,uVar19);
          *(undefined4 *)(param_1 + 0x1028) = 0;
          goto LAB_1004b8645;
        }
        uVar19 = *(uint *)(lVar3 + 4 + lVar10);
      }
      _memcpy(pvVar7,(void *)(lVar3 + 0x10 + lVar10),(ulong)uVar19 << 2);
      *(undefined4 *)(param_1 + 0x1028) = *(undefined4 *)(lVar3 + 4 + lVar10);
    }
  }
LAB_1004b8645:
  FUN_1004b8e30(param_1);
  FUN_1004b8670(param_1,param_4,0);
  return;
  while (lVar11 = *(long *)(lVar16 + 0x10), *(long *)(lVar16 + 0x10) != 0) {
LAB_1004b84a0:
    lVar16 = lVar11;
    uVar19 = *(uint *)(lVar16 + 0x18);
    if (*puVar1 <= uVar19) {
      lVar11 = *(long *)(lVar16 + 8);
      lVar18 = lVar16;
      if (*(long *)(lVar16 + 8) == 0) goto LAB_1004b84c8;
      goto LAB_1004b84a0;
    }
  }
  if (lVar18 != 0) {
    uVar19 = *(uint *)(lVar18 + 0x18);
LAB_1004b84c8:
    if (uVar19 <= *puVar1) {
      puVar4 = (undefined8 *)FUN_1004be870(param_4,puVar1);
      local_38 = puVar4[4];
      uStack_40 = puVar4[3];
      local_48 = puVar4[2];
      local_58 = *puVar4;
      uStack_50 = puVar4[1];
    }
  }
LAB_1004b8520:
  FUN_1004b8a20(param_1,*plVar20,puVar22,puVar1,&local_58,*(undefined4 *)(lVar3 + 0x18 + uVar6));
  uVar19 = *(uint *)(lVar3 + 4 + lVar10);
LAB_1004b8550:
  puVar22 = (uint *)((long)puVar22 + (ulong)uVar12);
  uVar23 = uVar23 + 1;
  if (uVar19 <= uVar23) goto LAB_1004b8562;
  goto LAB_1004b8410;
}

