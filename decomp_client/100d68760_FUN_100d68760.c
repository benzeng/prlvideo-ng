
int FUN_100d68760(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  int local_34;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar15 = (uint *)*puVar3;
      if ((1 < *puVar15) || (*(long *)(puVar15 + 4) != 0x18)) {
        QByteArray::reallocData(puVar3,puVar15[1] + 1,puVar15[2] >> 0x1f);
        puVar15 = (uint *)*puVar3;
      }
      lVar4 = *(long *)(puVar15 + 4);
      if ((long)puVar15 + lVar4 != 0) {
        uVar14 = (ulong)param_2;
        lVar11 = lVar4 + uVar14;
        if (*(short *)((long)puVar15 + lVar11) != 0x6b6e) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.48:");
          return 0x8158009;
        }
        if (*(int *)((long)puVar15 + lVar11 + 0x24) == 0) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.49:");
          return 0x8158012;
        }
        uVar5 = FUN_100d680b0(param_1,(long)puVar15 + lVar11,param_3);
        if (uVar5 == 0xffffffff) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.50:");
          return 0x8158014;
        }
        uVar10 = (ulong)(*(int *)((long)puVar15 + lVar11 + 0x28) + 0x1004);
        lVar11 = uVar10 + lVar4;
        iVar7 = *(int *)((long)puVar15 + (ulong)uVar5 * 4 + lVar11);
        lVar8 = (ulong)(iVar7 + 0x1004) + lVar4;
        if (*(short *)((long)puVar15 + lVar8) == 0x6b76) {
          lVar1 = uVar14 + 0x24 + lVar4;
          lVar2 = uVar14 + 0x28 + lVar4;
          if ((-1 < *(int *)((long)puVar15 + lVar8 + 4)) &&
             (iVar6 = *(int *)((long)puVar15 + lVar8 + 8), iVar6 != 0)) {
            FUN_100d6a060(*(undefined8 *)(param_1 + 8),iVar6 + 0x1000);
            iVar7 = *(int *)((long)puVar15 + (ulong)uVar5 * 4 + lVar11);
          }
          FUN_100d6a060(*(undefined8 *)(param_1 + 8),iVar7 + 0x1000);
          iVar7 = *(int *)((long)puVar15 + lVar2);
          iVar12 = *(int *)((long)puVar15 + lVar1) + -1;
          iVar6 = -1;
          if (iVar12 != 0) {
            iVar6 = FUN_100d69e90(*(undefined8 *)(param_1 + 8),iVar12 * 4,&local_34);
            if (iVar6 != 0x8000000) {
              FUN_100df99c0("","WinRegistry",0,"OA00002.52:\t%zx;\t%d",
                            (ulong)(*(int *)((long)puVar15 + lVar1) - 1) << 2,iVar6);
              return iVar6;
            }
            uVar9 = *(uint *)((long)puVar15 + lVar1);
            if (uVar9 != 0) {
              lVar11 = 0;
              uVar13 = 0;
              do {
                if (uVar5 != (uint)lVar11) {
                  *(undefined4 *)((long)puVar15 + (ulong)uVar13 * 4 + (ulong)(local_34 + 4) + lVar4)
                       = *(undefined4 *)((long)puVar15 + lVar11 * 4 + uVar10 + lVar4);
                  uVar13 = uVar13 + 1;
                  uVar9 = *(uint *)((long)puVar15 + lVar1);
                }
                lVar11 = lVar11 + 1;
              } while ((uint)lVar11 < uVar9);
            }
            iVar6 = local_34 + -0x1000;
          }
          *(int *)((long)puVar15 + lVar2) = iVar6;
          *(int *)((long)puVar15 + lVar1) = *(int *)((long)puVar15 + lVar1) + -1;
          iVar7 = FUN_100d6a060(*(undefined8 *)(param_1 + 8),iVar7 + 0x1000);
          return iVar7;
        }
        FUN_100df99c0("","WinRegistry",0,"OA00002.51:");
        return 0x815800b;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.47:");
  return 0x8158002;
}

