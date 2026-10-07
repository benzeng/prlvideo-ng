
undefined8 FUN_100405610(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar10;
  
  uVar12 = 0;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    uVar10 = *(ulong *)(param_2 + 0x88);
    uVar11 = *(ulong *)(param_2 + 0x90);
    lVar4 = FUN_100404650(param_1,uVar11,uVar10 & 0xffffffff);
    if (lVar4 == 0) {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x2e0))();
      lVar4 = FUN_100404900(param_1,uVar11,uVar6,uVar10 & 0xffffffff);
      if (lVar4 != 0) {
        uVar12 = 0;
        FUN_100404e20(param_1,lVar4,0);
      }
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x48);
      plVar1 = *(long **)(lVar4 + 0x50);
      *(long **)(lVar7 + 8) = plVar1;
      *plVar1 = lVar7;
      lVar7 = param_1[2];
      *(long *)(lVar7 + 8) = lVar4 + 0x48;
      *(long *)(lVar4 + 0x48) = lVar7;
      *(undefined8 **)(lVar4 + 0x50) = param_1 + 2;
      param_1[2] = lVar4 + 0x48;
      if ((uVar11 < *(ulong *)(lVar4 + 0x20)) ||
         ((ulong)*(uint *)(lVar4 + 0x1c) + *(ulong *)(lVar4 + 0x20) < (uVar10 & 0xffffffff) + uVar11
         )) {
        uVar12 = 1;
        if ((int)uVar10 != 0) {
          do {
            uVar8 = uVar10 & 0xffffffff;
            if (lVar4 == 0) {
LAB_1004056d1:
              uVar12 = (**(code **)(*(long *)*param_1 + 0x2e0))();
              uVar9 = (uint)uVar8;
              lVar4 = FUN_100404900(param_1,uVar11,uVar12,uVar8);
              if (lVar4 == 0) break;
            }
            else {
              uVar8 = *(ulong *)(lVar4 + 0x20);
              uVar5 = (uVar10 & 0xffffffff) + uVar11;
              iVar2 = (int)uVar5;
              if (uVar11 < uVar8) {
                iVar3 = (int)uVar8;
                if (uVar5 < uVar8) {
                  iVar3 = iVar2;
                }
                uVar8 = (ulong)(uint)(iVar3 - (int)uVar11);
                goto LAB_1004056d1;
              }
              uVar8 = *(uint *)(lVar4 + 0x1c) + uVar8;
              if (uVar8 <= uVar5) {
                iVar2 = (int)uVar8;
              }
              uVar9 = iVar2 - (int)uVar11;
            }
            FUN_100404e20(param_1,lVar4,0);
            uVar11 = uVar11 + uVar9;
            lVar4 = FUN_100404650(param_1,uVar11,(int)uVar10 - uVar9);
            uVar9 = (int)uVar10 - uVar9;
            uVar10 = (ulong)uVar9;
          } while (uVar9 != 0);
          uVar12 = 1;
        }
      }
      else {
        lVar7 = FUN_1007d9a20(lVar4 + 0x30);
        if ((lVar7 == 0) ||
           (*(long *)(lVar7 + -0x10) != (ulong)*(uint *)(lVar4 + 0x1c) + *(long *)(lVar4 + 0x20))) {
          param_1[7] = lVar4;
        }
        uVar12 = 1;
        if (*(int *)(lVar4 + 0x14) == 2) {
          FUN_100404cb0(param_1);
        }
      }
    }
  }
  return uVar12;
}

