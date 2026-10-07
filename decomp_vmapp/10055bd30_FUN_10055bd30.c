
undefined1 FUN_10055bd30(long param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  
  lVar11 = param_1 + 0x30;
  QMutex::lock();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar6 = 0;
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::discard_main() stopped");
  }
  else {
    iVar9 = 0;
    if (*(int *)(lVar4 + 8) != 0) {
      uVar10 = 0;
      iVar9 = 0;
      do {
        uVar8 = (ulong)(uVar10 >> 5);
        if ((*(uint *)(*(long *)(param_1 + 0x38) + uVar8 * 4) >> ((byte)uVar10 & 0x1f) & 1) == 0) {
          uVar5 = *(uint *)(lVar4 + 0x24);
          if (7 < uVar5) {
            lVar3 = *(long *)(lVar4 + 0x48);
            uVar7 = 0;
            do {
              pbVar1 = (byte *)((ulong)((uVar5 >> 3) * uVar10) + lVar3 + uVar7);
              *pbVar1 = *pbVar1 & ~*(byte *)(param_2 + uVar7);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(lVar4 + 0x24) >> 3);
            lVar4 = *(long *)(param_1 + 0x10);
            if (7 < *(uint *)(lVar4 + 0x24)) {
              uVar5 = *(uint *)(lVar4 + 0x24) >> 3;
              uVar7 = 0;
              do {
                if (*(char *)((ulong)(uVar5 * uVar10) + *(long *)(lVar4 + 0x48) + uVar7) != '\0')
                goto LAB_10055be5f;
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar5);
            }
          }
          puVar2 = (uint *)(*(long *)(param_1 + 0x38) + uVar8 * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          iVar9 = iVar9 + 1;
        }
        else if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","TransMem",3,
                        "CSnapshotEngineSparse::discard_main() block %u is already processed",uVar10
                        ,uVar8,lVar11);
          lVar4 = *(long *)(param_1 + 0x10);
        }
LAB_10055be5f:
        uVar10 = uVar10 + 1;
        param_2 = param_2 + (ulong)(*(uint *)(lVar4 + 0x24) >> 3);
      } while (uVar10 < *(uint *)(lVar4 + 8));
    }
    uVar6 = 1;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","TransMem",3,"CSnapshotEngineSparse::discard_main() %u blocks discarded",
                    iVar9);
    }
  }
  QMutex::unlock();
  return uVar6;
}

