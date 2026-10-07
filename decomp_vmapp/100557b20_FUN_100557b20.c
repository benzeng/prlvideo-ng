
bool FUN_100557b20(undefined8 param_1,undefined8 param_2,ushort *param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  bool bVar15;
  
  cVar1 = FUN_1005563c0();
  if (cVar1 == '\0') {
    bVar15 = false;
  }
  else {
    bVar8 = 1;
    if (*(char *)((long)param_3 + 3) != '\x02') {
      bVar8 = *(char *)((long)param_3 + 3) == '\x04' | 4;
    }
    uVar2 = FUN_100752170(bVar8,*(undefined4 *)(param_3 + 2));
    pvVar4 = _valloc((ulong)uVar2);
    if (pvVar4 == (void *)0x0) {
      bVar15 = false;
      FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::clone() failed to allocate buffer");
    }
    else {
      uVar3 = *(uint *)(param_3 + 4);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = 0;
        lVar10 = 0;
        do {
          uVar14 = *(uint *)(param_3 + 0x12);
          if (7 < uVar14) {
            uVar9 = 0;
            do {
              if (*(char *)((ulong)((uVar14 >> 3) * uVar7) + *(long *)(param_3 + 0x24) + uVar9) !=
                  '\0') {
                if (uVar7 < uVar3) {
                  uVar3 = *(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar7 * 4);
                  if (*(uint *)(param_3 + 6) <= uVar3) goto LAB_100557d33;
                  uVar11 = 1;
                  if (*param_3 < 0x201) {
                    uVar11 = uVar14;
                  }
                  uVar14 = *(int *)(*(long *)(param_3 + 0x28) + (ulong)uVar7 * 4) + 0xfffU &
                           0xfffff000;
                  if (uVar2 <= uVar14 - 1) {
                    FUN_1008e3970("","TransMem",0,
                                  "CSnapshotEngineCompressed::clone() block %u has invalid size %u",
                                  uVar7);
                    goto LAB_100557e12;
                  }
                  lVar12 = (ulong)(uVar11 * uVar3 + *(int *)(param_3 + 10)) << 0xc;
                  lVar5 = FUN_1007616e0(param_1,lVar12,0);
                  if ((lVar5 != lVar12) ||
                     (lVar5 = FUN_1007616e0(param_2,lVar12,0), lVar5 != lVar12)) {
                    FUN_1008e3970("","TransMem",0,
                                  "CSnapshotEngineCompressed::clone() block %u failed to seek at %llu"
                                  ,uVar7,lVar12);
                    goto LAB_100557e12;
                  }
                  uVar13 = (ulong)uVar14;
                  uVar9 = FUN_100761880(param_1,FUN_1007617a0,0,pvVar4,uVar13);
                  if (uVar13 != uVar9) {
                    FUN_1008e3970("","TransMem",0,
                                  "CSnapshotEngineCompressed::clone() failed to read block %u",uVar7
                                 );
                    goto LAB_100557e12;
                  }
                  if ((param_4 != (code *)0x0) &&
                     (cVar1 = (*param_4)(param_6,pvVar4,uVar14,lVar10), cVar1 == '\0')) {
                    FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::clone() cancelled");
                    goto LAB_100557e12;
                  }
                  uVar9 = FUN_100761880(param_2,FUN_100761810,0,pvVar4,uVar13);
                  if (uVar13 == uVar9) {
                    uVar3 = *(uint *)(param_3 + 4);
                    break;
                  }
                  pcVar6 = "CSnapshotEngineCompressed::clone() failed to write block %u";
                }
                else {
LAB_100557d33:
                  pcVar6 = "CSnapshotEngineCompressed::clone() block %u has invalid offset";
                }
                FUN_1008e3970("","TransMem",0,pcVar6,uVar7);
                goto LAB_100557e12;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar14 >> 3);
          }
          lVar10 = lVar10 + (ulong)*(uint *)(param_3 + 2);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
LAB_100557e12:
      _free(pvVar4);
      bVar15 = uVar7 == *(uint *)(param_3 + 4);
    }
  }
  return bVar15;
}

