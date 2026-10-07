
undefined8
FUN_100302370(long param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (param_2 == 0x8ca8) {
    piVar3 = (int *)(param_1 + 0x15a0);
  }
  else {
    if ((param_2 != 0x8ca9) && (param_2 != 0x8d40)) {
      return 0;
    }
    piVar3 = (int *)(param_1 + 0x15a4);
  }
  uVar9 = 0;
  uVar4 = 0;
  if (*piVar3 != 0) {
    if (param_2 == 0x8ca8) {
      uVar9 = *(uint *)(param_1 + 0x15a8);
    }
    else if ((param_2 == 0x8ca9) || (param_2 == 0x8d40)) {
      uVar9 = *(uint *)(param_1 + 0x15ac);
    }
    lVar1 = *(long *)(param_1 + 0x30);
    uVar7 = (ulong)uVar9;
    if (*(uint *)(lVar1 + 0x2058) < 0x20) {
      uVar5 = 0x20;
      uVar7 = (ulong)uVar9;
      do {
        uVar5 = uVar5 >> 1;
        uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar5);
      } while (*(uint *)(lVar1 + 0x2058) < uVar5);
    }
    uVar4 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
    for (puVar2 = *(uint **)(lVar1 + 0x1858 + (uVar7 & 0xff) * 8); puVar2 != (uint *)0x0;
        puVar2 = *(uint **)(puVar2 + 4)) {
      if (*puVar2 == uVar9) {
        lVar1 = *(long *)(puVar2 + 2);
        if (lVar1 == 0) {
          return uVar4;
        }
        if ((param_3 & 0xfffffff0) == 0x8ce0) {
          puVar6 = (undefined4 *)0x0;
          puVar8 = (undefined4 *)(lVar1 + (ulong)(param_3 - 0x8ce0) * 0x14);
          if (puVar8 == (undefined4 *)0x0) {
            return uVar4;
          }
        }
        else {
          if (param_3 == 0x8d20) {
            puVar8 = (undefined4 *)(lVar1 + 0x154);
          }
          else {
            if (param_3 != 0x8d00) {
              if (param_3 != 0x821a) {
                return uVar4;
              }
              puVar8 = (undefined4 *)(lVar1 + 0x140);
              puVar6 = (undefined4 *)(lVar1 + 0x154);
              goto LAB_1003024b8;
            }
            puVar8 = (undefined4 *)(lVar1 + 0x140);
          }
          puVar6 = (undefined4 *)0x0;
        }
LAB_1003024b8:
        *puVar8 = param_4;
        puVar8[1] = param_5;
        puVar8[2] = param_6;
        puVar8[3] = param_7;
        puVar8[4] = param_8;
        if (puVar6 == (undefined4 *)0x0) {
          return uVar4;
        }
        *puVar6 = param_4;
        puVar6[1] = param_5;
        puVar6[2] = param_6;
        puVar6[3] = param_7;
        puVar6[4] = param_8;
        return uVar4;
      }
    }
  }
  return uVar4;
}

