
void FUN_1006c0e00(long param_1,int *param_2,uint param_3)

{
  ushort *puVar1;
  long lVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int **ppiVar6;
  uint uVar7;
  int **ppiVar8;
  short *psVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  ushort local_d4;
  short local_d2;
  ushort local_d0;
  int *local_c0;
  long local_b8;
  short *local_b0;
  undefined1 local_a8;
  int **local_a0;
  int *local_98;
  undefined1 local_90 [2];
  ushort local_8e;
  int *local_88;
  ushort local_7e [39];
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  if ((int)param_3 < 0xe) {
    return;
  }
  local_d8 = 1;
  local_d0 = (ushort)param_3;
  local_b8 = 0;
  local_a0 = &local_98;
  local_a8 = 1;
  local_90[0] = 2;
  local_8e = local_d0;
  local_98 = param_2;
  if ((*param_2 == *(int *)(param_1 + 0x4f)) && ((short)param_2[1] == *(short *)(param_1 + 0x53))) {
    *param_2 = *(int *)(param_1 + 0x49);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x4d);
  }
  local_d4 = 0;
  local_d6 = 0;
  sVar4 = (short)param_2[3];
  uVar12 = 0;
  if (sVar4 == -0x227a) {
    piVar10 = param_2;
    ppiVar6 = local_a0;
    uVar7 = param_3 & 0xffff;
    if ((param_3 & 0xffff) < 0xf) {
      do {
        uVar12 = uVar7;
        if (((ulong)ppiVar6[1] & 2) != 0) {
          return;
        }
        ppiVar8 = ppiVar6 + 2;
        uVar7 = *(ushort *)((long)ppiVar6 + 0x1a) + uVar12;
        ppiVar6 = ppiVar8;
      } while (uVar7 < 0xf);
      piVar10 = *ppiVar8;
    }
    local_b8 = (long)piVar10 + (ulong)(0xe - uVar12);
    if (local_b8 == 0) {
      return;
    }
    local_d4 = 0x36;
    bVar3 = *(byte *)((ulong)(0xe - uVar12) + 6 + (long)piVar10);
    psVar9 = (short *)(ulong)bVar3;
    if (bVar3 < 0x3d) {
      uVar12 = 0x36;
      do {
        if ((0x1008080000000001U >> ((ulong)psVar9 & 0x3f) & 1) == 0) break;
        uVar12 = uVar12 & 0xffff;
        ppiVar6 = local_a0;
        uVar11 = param_3 & 0xffff;
        uVar7 = 0;
        while (uVar5 = uVar11, uVar5 <= uVar12) {
          if (((ulong)ppiVar6[1] & 2) != 0) {
            return;
          }
          puVar1 = (ushort *)((long)ppiVar6 + 0x1a);
          ppiVar6 = ppiVar6 + 2;
          uVar7 = uVar5;
          uVar11 = *puVar1 + uVar5;
        }
        piVar10 = *ppiVar6;
        uVar13 = (ulong)(uVar12 - uVar7);
        if ((long)piVar10 + uVar13 == 0) {
          return;
        }
        uVar12 = ((uint)*(byte *)((long)piVar10 + uVar13 + 1) << ((int)psVar9 != 0x33 | 2U)) + 8 +
                 uVar12;
        local_d4 = (ushort)uVar12;
        psVar9 = (short *)(ulong)*(byte *)((long)piVar10 + uVar13);
      } while (*(byte *)((long)piVar10 + uVar13) < 0x3d);
    }
    local_d6 = SUB81(psVar9,0);
  }
  else {
    if (sVar4 == 0x608) {
      ppiVar6 = local_a0;
      uVar12 = param_3 & 0xffff;
      if (local_d0 < 0xf) {
        do {
          uVar7 = uVar12;
          if (((ulong)ppiVar6[1] & 2) != 0) {
            return;
          }
          ppiVar8 = ppiVar6 + 2;
          uVar12 = *(ushort *)((long)ppiVar6 + 0x1a) + uVar7;
          ppiVar6 = ppiVar8;
        } while (uVar12 < 0xf);
        piVar10 = *ppiVar8;
      }
      else {
        uVar7 = 0;
        piVar10 = param_2;
      }
      local_b8 = (ulong)(0xe - uVar7) + (long)piVar10;
      if (local_b8 == 0) {
        return;
      }
    }
    else if (sVar4 == 8) {
      ppiVar6 = local_a0;
      uVar12 = param_3 & 0xffff;
      if (local_d0 < 0xf) {
        do {
          uVar7 = uVar12;
          if (((ulong)ppiVar6[1] & 2) != 0) {
            return;
          }
          ppiVar8 = ppiVar6 + 2;
          uVar12 = *(ushort *)((long)ppiVar6 + 0x1a) + uVar7;
          ppiVar6 = ppiVar8;
        } while (uVar12 < 0xf);
        piVar10 = *ppiVar8;
      }
      else {
        uVar7 = 0;
        piVar10 = param_2;
      }
      uVar13 = (ulong)(0xe - uVar7);
      local_b8 = (long)piVar10 + uVar13;
      if (local_b8 == 0) {
        return;
      }
      local_d4 = (*(byte *)((long)piVar10 + uVar13) & 0xf) * 4 + 0xe;
      local_d6 = *(undefined1 *)((long)piVar10 + uVar13 + 9);
      psVar9 = (short *)CONCAT71((int7)((ulong)piVar10 >> 8),local_d6);
      goto LAB_1006c10b7;
    }
    psVar9 = (short *)0x0;
  }
LAB_1006c10b7:
  if ((param_3 < 0x2a) || ((short)param_2[3] != 0x608)) {
    if ((short)param_2[3] == 8) {
      if (local_b8 == 0) {
        ppiVar6 = local_a0;
        uVar12 = param_3 & 0xffff;
        if (local_d0 < 0xf) {
          do {
            uVar7 = uVar12;
            if (((ulong)ppiVar6[1] & 2) != 0) {
              return;
            }
            ppiVar8 = ppiVar6 + 2;
            uVar12 = *(ushort *)((long)ppiVar6 + 0x1a) + uVar7;
            ppiVar6 = ppiVar8;
          } while (uVar12 < 0xf);
          piVar10 = *ppiVar8;
        }
        else {
          uVar7 = 0;
          piVar10 = param_2;
        }
        uVar13 = (ulong)(0xe - uVar7);
        local_b8 = (long)piVar10 + uVar13;
        if (local_b8 == 0) {
          return;
        }
        local_d4 = (*(byte *)((long)piVar10 + uVar13) & 0xf) * 4 + 0xe;
        local_d6 = *(undefined1 *)((long)piVar10 + uVar13 + 9);
        psVar9 = (short *)CONCAT71((int7)((ulong)piVar10 >> 8),local_d6);
      }
      local_d7 = 0xe;
      uVar12 = (uint)psVar9 & 0xff;
      if (uVar12 == 0x11) {
        ppiVar6 = local_a0;
        uVar7 = param_3 & 0xffff;
        if (local_d4 < local_d0) {
          uVar11 = 0;
          piVar10 = param_2;
        }
        else {
          do {
            uVar11 = uVar7;
            if (((ulong)ppiVar6[1] & 2) != 0) {
              return;
            }
            puVar1 = (ushort *)((long)ppiVar6 + 0x1a);
            ppiVar6 = ppiVar6 + 2;
            uVar7 = *puVar1 + uVar11;
          } while (uVar7 <= local_d4);
          piVar10 = *ppiVar6;
        }
        psVar9 = (short *)((ulong)(local_d4 - uVar11) + (long)piVar10);
        if (psVar9 == (short *)0x0) {
          return;
        }
        local_d2 = local_d4 + 8;
        local_b0 = psVar9;
      }
      else if (uVar12 == 6) {
        ppiVar6 = local_a0;
        uVar7 = param_3 & 0xffff;
        if (local_d4 < local_d0) {
          uVar11 = 0;
          piVar10 = param_2;
        }
        else {
          do {
            uVar11 = uVar7;
            if (((ulong)ppiVar6[1] & 2) != 0) {
              return;
            }
            puVar1 = (ushort *)((long)ppiVar6 + 0x1a);
            ppiVar6 = ppiVar6 + 2;
            uVar7 = *puVar1 + uVar11;
          } while (uVar7 <= local_d4);
          piVar10 = *ppiVar6;
        }
        uVar13 = (ulong)(local_d4 - uVar11);
        psVar9 = (short *)((long)piVar10 + uVar13);
        if (psVar9 == (short *)0x0) {
          return;
        }
        local_d2 = (*(byte *)(uVar13 + 0xc + (long)piVar10) >> 2 & 0x3c) + local_d4;
        local_b0 = psVar9;
      }
      if ((((uVar12 == 0x11) && (*psVar9 == 0x4300)) && (psVar9[1] == 0x4400)) &&
         (((ulong)local_d4 + 0xf4 <= (ulong)param_3 &&
          ((uint)(ushort)(psVar9[2] << 8 | (ushort)psVar9[2] >> 8) + (uint)local_d4 <= param_3)))) {
        lVar2 = (ulong)local_d4 + 8;
        local_c0 = param_2;
        FUN_1006bead0(param_1,&local_d8,(long)param_2 + lVar2,param_3 - (int)lVar2);
      }
    }
  }
  else if ((*(int *)(local_b8 + 0x12) == *(int *)(param_1 + 0x4f)) &&
          (*(short *)(local_b8 + 0x16) == *(short *)(param_1 + 0x53))) {
    *(undefined4 *)(local_b8 + 0x12) = *(undefined4 *)(param_1 + 0x49);
    *(undefined2 *)(local_b8 + 0x16) = *(undefined2 *)(param_1 + 0x4d);
  }
  return;
}

