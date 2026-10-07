
void FUN_100297c30(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  bool bVar16;
  
  uVar3 = (uint)param_2[1];
  uVar5 = *param_2;
  plVar14 = (long *)(param_1 + 0x13780 + (ulong)uVar3 * 0x10);
  if ((ulong)uVar3 == 0) {
    plVar12 = (long *)(*(long *)(param_1 + 0xfa8) + 0xf0);
    *plVar12 = *plVar12 + 1;
    bVar16 = (*(uint *)(param_1 + 0x1014) & *(uint *)(param_1 + 0x1014) - 1) == 0;
  }
  else {
    plVar12 = (long *)(*(long *)(param_1 + 0xfb0) + 0xf0);
    *plVar12 = *plVar12 + 1;
    bVar16 = false;
  }
  for (plVar12 = (long *)*plVar14; plVar13 = plVar14, plVar12 != plVar14; plVar12 = (long *)*plVar12
      ) {
    uVar6 = plVar12[-3];
    iVar15 = *(int *)((long)plVar12 + -0xc);
    if (uVar5 == (long)iVar15 + uVar6) {
      if ((int)plVar12[-1] == 0 && !bVar16) {
        iVar15 = (int)param_2[2] + iVar15;
        *(int *)((long)plVar12 + -0xc) = iVar15;
        plVar13 = (long *)plVar12[3];
        plVar12[3] = (long)(param_2 + 3);
        param_2[3] = (ulong)(plVar12 + 2);
        param_2[4] = (ulong)plVar13;
        *plVar13 = (long)(param_2 + 3);
        plVar13 = (long *)*plVar12;
        if (plVar13 == plVar14) {
          return;
        }
        if ((int)plVar13[-1] != 0) {
          return;
        }
        if ((long)iVar15 + uVar6 != plVar13[-3]) {
          return;
        }
        plVar14 = plVar13 + 2;
        plVar8 = (long *)plVar13[2];
        if (plVar8 != plVar14) {
          plVar9 = (long *)plVar12[3];
          plVar10 = (long *)plVar13[3];
          lVar11 = *plVar9;
          plVar8[1] = (long)plVar9;
          *plVar9 = (long)plVar8;
          *plVar10 = lVar11;
          *(long **)(lVar11 + 8) = plVar10;
        }
        plVar13[2] = (long)plVar14;
        plVar13[3] = (long)plVar14;
        *(int *)((long)plVar12 + -0xc) = iVar15 + *(int *)((long)plVar13 + -0xc);
        lVar11 = *plVar13;
        plVar14 = (long *)plVar13[1];
        *(long **)(lVar11 + 8) = plVar14;
        *plVar14 = lVar11;
        lVar11 = *(long *)(param_1 + 0x13770);
        *(long **)(lVar11 + 8) = plVar13;
        *plVar13 = lVar11;
        plVar13[1] = param_1 + 0x13770;
        *(long **)(param_1 + 0x13770) = plVar13;
        return;
      }
    }
    else if (((uint)param_2[2] + uVar5 == uVar6) && ((int)plVar12[-1] == 0 && !bVar16)) {
      iVar15 = (uint)param_2[2] + iVar15;
      *(int *)((long)plVar12 + -0xc) = iVar15;
      plVar12[-3] = uVar5;
      puVar1 = param_2 + 3;
      puVar2 = (ulong *)(plVar12 + 2);
      uVar6 = plVar12[2];
      *(ulong **)(uVar6 + 8) = puVar1;
      param_2[3] = uVar6;
      param_2[4] = (ulong)puVar2;
      plVar12[2] = (long)puVar1;
      plVar13 = (long *)plVar12[1];
      if (plVar13 == plVar14) {
        return;
      }
      if ((int)plVar13[-1] != 0) {
        return;
      }
      iVar4 = *(int *)((long)plVar13 + -0xc);
      if (plVar13[-3] + (long)iVar4 != uVar5) {
        return;
      }
      plVar14 = plVar13;
      if (puVar1 != puVar2) {
        plVar14 = (long *)plVar13[3];
        plVar8 = (long *)plVar12[3];
        lVar11 = *plVar14;
        param_2[4] = (ulong)plVar14;
        *plVar14 = (long)puVar1;
        *plVar8 = lVar11;
        *(long **)(lVar11 + 8) = plVar8;
        plVar14 = (long *)plVar12[1];
      }
      plVar12[2] = (long)puVar2;
      plVar12[3] = (long)puVar2;
      *(int *)((long)plVar13 + -0xc) = iVar4 + iVar15;
      lVar11 = *plVar12;
      *(long **)(lVar11 + 8) = plVar14;
      *plVar14 = lVar11;
      lVar11 = *(long *)(param_1 + 0x13770);
      *(long **)(lVar11 + 8) = plVar12;
      *plVar12 = lVar11;
      plVar12[1] = param_1 + 0x13770;
      *(long **)(param_1 + 0x13770) = plVar12;
      return;
    }
    plVar13 = plVar12;
    if (uVar5 < uVar6) break;
  }
  plVar14 = *(long **)(param_1 + 0x13770);
  plVar14[-3] = uVar5;
  *(uint *)(plVar14 + -2) = (uint)(uVar3 != 0);
  *(int *)((long)plVar14 + -0xc) = (int)param_2[2];
  *(undefined4 *)(plVar14 + -1) = 0;
  lVar11 = *plVar14;
  plVar12 = (long *)plVar14[1];
  *(long **)(lVar11 + 8) = plVar12;
  *plVar12 = lVar11;
  puVar7 = (undefined8 *)plVar13[1];
  plVar13[1] = (long)plVar14;
  *plVar14 = (long)plVar13;
  plVar14[1] = (long)puVar7;
  *puVar7 = plVar14;
  puVar1 = param_2 + 3;
  if ((ulong *)param_2[3] != puVar1) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "cd_list_empty(&cmd->list)","../Ahci/sata_hdd.cpp",0x52a,"prepare_cmd_list");
  }
  plVar12 = (long *)plVar14[3];
  plVar14[3] = (long)puVar1;
  param_2[3] = (ulong)(plVar14 + 2);
  param_2[4] = (ulong)plVar12;
  *plVar12 = (long)puVar1;
  return;
}

