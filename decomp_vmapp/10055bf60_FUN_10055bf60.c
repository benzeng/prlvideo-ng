
bool FUN_10055bf60(undefined8 param_1,undefined8 param_2,ushort *param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  bool bVar17;
  long local_48;
  
  cVar1 = FUN_1005563c0();
  if (cVar1 == '\0') {
    bVar17 = false;
  }
  else {
    pvVar3 = _valloc((ulong)*(uint *)(param_3 + 2));
    if (pvVar3 == (void *)0x0) {
      bVar17 = false;
      FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::clone() failed to allocate buffer");
    }
    else {
      uVar5 = *(uint *)(param_3 + 4);
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar9 = 0;
        local_48 = 0;
LAB_10055bfe0:
        uVar2 = *(uint *)(param_3 + 0x12);
        uVar8 = (uint)uVar9;
        if (7 < uVar2) {
          lVar4 = *(long *)(param_3 + 0x24);
          uVar10 = 0;
          do {
            if (*(char *)((ulong)((uVar2 >> 3) * uVar8) + lVar4 + uVar10) != '\0') {
              if ((uVar8 < uVar5) &&
                 (uVar5 = *(uint *)(*(long *)(param_3 + 0x20) + uVar9 * 4),
                 uVar5 < *(uint *)(param_3 + 6))) {
                uVar13 = 1;
                if (*param_3 < 0x201) {
                  uVar13 = uVar2;
                }
                lVar14 = (ulong)(uVar13 * uVar5 + *(int *)(param_3 + 10)) << 0xc;
                lVar4 = FUN_1007616e0(param_1,lVar14,0);
                if ((lVar4 != lVar14) || (lVar4 = FUN_1007616e0(param_2,lVar14,0), lVar4 != lVar14))
                {
                  FUN_1008e3970("","TransMem",0,
                                "CSnapshotEngineSparse::clone() block %u failed to seek at %llu",
                                uVar9,lVar14);
                  goto LAB_10055c27c;
                }
                lVar4 = *(long *)(param_3 + 0x24);
                uVar2 = *(uint *)(param_3 + 0x12);
              }
              uVar5 = uVar2 >> 3;
              uVar13 = 0xffffffff;
              iVar11 = 0;
              uVar10 = 0;
              goto LAB_10055c0c0;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar2 >> 3);
        }
        goto LAB_10055c210;
      }
LAB_10055c27c:
      _free(pvVar3);
      bVar17 = uVar8 == *(uint *)(param_3 + 4);
    }
  }
  return bVar17;
LAB_10055c0c0:
  do {
    uVar16 = (uint)uVar10;
    bVar17 = false;
    if ((int)uVar16 < (int)uVar2) {
      bVar17 = (*(uint *)((ulong)(uVar5 * uVar8) + lVar4 + (uVar10 >> 5) * 4) >> (uVar16 & 0x1f) & 1
               ) != 0;
    }
    uVar12 = uVar13;
    if (bVar17) {
      uVar12 = uVar16;
    }
    if (-1 < (int)uVar13) {
      uVar12 = uVar13;
    }
    uVar13 = uVar12;
    if ((-1 < (int)uVar13) && (!bVar17)) {
      iVar7 = iVar11 + uVar13 * -0x1000;
      lVar15 = (long)iVar7;
      lVar14 = FUN_100761880(param_1,FUN_1007617a0,0,pvVar3,lVar15);
      if (lVar15 == lVar14) {
        if ((param_4 != (code *)0x0) &&
           (cVar1 = (*param_4)(param_6,pvVar3,iVar7,(int)(uVar13 * 0x1000) + local_48),
           cVar1 == '\0')) {
          FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::clone() cancelled");
          break;
        }
        lVar14 = FUN_100761880(param_2,FUN_100761810,0,pvVar3,lVar15);
        if (lVar15 == lVar14) {
          uVar2 = *(uint *)(param_3 + 0x12);
          uVar13 = 0xffffffff;
          goto LAB_10055c186;
        }
        pcVar6 = "CSnapshotEngineSparse::clone() failed to write block %u";
      }
      else {
        pcVar6 = "CSnapshotEngineSparse::clone() failed to read block %u";
      }
      FUN_1008e3970("","TransMem",0,pcVar6,uVar9);
      break;
    }
LAB_10055c186:
    iVar11 = iVar11 + 0x1000;
    uVar10 = (ulong)(uVar16 + 1);
  } while ((int)uVar16 < (int)uVar2);
LAB_10055c210:
  uVar5 = *(uint *)(param_3 + 4);
  local_48 = local_48 + (ulong)*(uint *)(param_3 + 2);
  uVar8 = uVar8 + 1;
  uVar9 = (ulong)uVar8;
  if (uVar5 <= uVar8) goto LAB_10055c27c;
  goto LAB_10055bfe0;
}

