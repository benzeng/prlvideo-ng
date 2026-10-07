
undefined8 FUN_1006774d0(long param_1,int param_2,int param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  short sVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  ushort uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar12 = (uint *)*puVar4;
      if ((1 < *puVar12) || (*(long *)(puVar12 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar12[1] + 1,puVar12[2] >> 0x1f);
        puVar12 = (uint *)*puVar4;
      }
      lVar5 = *(long *)(puVar12 + 4);
      if ((long)puVar12 + lVar5 != 0) {
        uVar10 = (ulong)(param_2 + 0x1004);
        lVar9 = lVar5 + uVar10;
        if (*(short *)((long)puVar12 + lVar9) == 0x6972) {
          sVar3 = *(short *)((long)puVar12 + (ulong)(param_3 + 4) + lVar5);
          if ((sVar3 == 0x666c) || (sVar3 == 0x686c)) {
            uVar6 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),
                                  (uint)*(ushort *)((long)puVar12 + lVar9 + 2) * 4 + 8,param_4);
            if ((int)uVar6 != 0x8000000) {
              return uVar6;
            }
            lVar2 = uVar10 + 2 + lVar5;
            uVar11 = (ulong)(*param_4 + 4);
            lVar1 = uVar11 + lVar5;
            *(undefined2 *)((long)puVar12 + lVar1) = *(undefined2 *)((long)puVar12 + lVar9);
            uVar8 = *(short *)((long)puVar12 + lVar2) + 1;
            *(ushort *)((long)puVar12 + lVar1 + 2) = uVar8;
            if (*(short *)((long)puVar12 + lVar2) != 0) {
              lVar9 = 0;
              do {
                *(undefined4 *)((long)puVar12 + lVar9 * 4 + uVar11 + lVar5 + 4) =
                     *(undefined4 *)((long)puVar12 + lVar9 * 4 + uVar10 + lVar5 + 4);
                lVar9 = lVar9 + 1;
              } while ((uint)lVar9 < (uint)*(ushort *)((long)puVar12 + lVar2));
              uVar8 = *(ushort *)((long)puVar12 + uVar11 + 2 + lVar5);
            }
            *(int *)((long)puVar12 + (ulong)uVar8 * 4 + lVar1) = param_3 + -0x1000;
            uVar6 = FUN_10067ce20(*(undefined8 *)(param_1 + 8),param_2 + 0x1000);
            return uVar6;
          }
          pcVar7 = "OA00002.75:";
        }
        else {
          pcVar7 = "OA00002.74:";
        }
        FUN_1008e3970("","WinRegistry",0,pcVar7);
        return 0x815800a;
      }
    }
  }
  FUN_1008e3970("","WinRegistry",0,"OA00002.73:");
  return 0x8158002;
}

