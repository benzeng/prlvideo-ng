
void FUN_100404cb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar5 = param_1[7];
  if ((lVar5 != 0) && (*(int *)(param_1 + 9) != 0)) {
    param_1[7] = 0;
    uVar3 = *(ulong *)(lVar5 + 0x20);
    lVar1 = FUN_1007d9a60();
    uVar7 = 0;
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + -0x30;
      uVar7 = 0;
    }
    do {
      uVar6 = uVar7;
      if (lVar1 == 0) break;
      uVar8 = *(ulong *)(lVar1 + 0x20);
      if (uVar8 + 0x1000 + (ulong)*(uint *)(lVar1 + 0x1c) < uVar3) break;
      uVar7 = uVar7 + *(uint *)(lVar1 + 0x1c);
      lVar2 = FUN_1007d9a60();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -0x30;
      }
      uVar6 = *(uint *)(param_1 + 9);
      uVar3 = uVar8;
    } while (uVar7 <= uVar6);
    if (uVar6 != 0) {
      lVar1 = FUN_1007d9a20(lVar5 + 0x30);
      uVar7 = uVar6;
      if (lVar1 != 0) {
        uVar3 = (*(long *)(lVar1 + -0x10) - *(long *)(lVar5 + 0x20)) -
                (ulong)*(uint *)(lVar5 + 0x1c);
        if (uVar3 < 0x1000) {
          return;
        }
        uVar7 = (uint)uVar3;
        if (uVar6 <= uVar3) {
          uVar7 = uVar6;
        }
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x1c) + *(long *)(lVar5 + 0x20);
      uVar8 = param_1[0xf] - uVar3;
      if (uVar3 <= (ulong)param_1[0xf] && uVar8 != 0) {
        uVar9 = uVar8 & 0xffffffff;
        if (uVar7 < uVar8) {
          uVar9 = (ulong)uVar7;
        }
        uVar4 = (**(code **)(*(long *)*param_1 + 0x2e0))();
        lVar5 = FUN_100404900(param_1,uVar3,uVar4,uVar9);
        if (lVar5 != 0) {
          FUN_100404e20(param_1,lVar5,0);
          param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x000100404dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)*param_1 + 0x108))();
          return;
        }
      }
    }
  }
  return;
}

