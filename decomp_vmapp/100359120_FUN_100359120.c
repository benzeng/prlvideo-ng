
ulong FUN_100359120(long param_1,uint param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((param_2 != 0) && (param_3 == '\0')) {
    uVar8 = 0x11b;
    uVar9 = 0;
    do {
      uVar1 = *(uint *)(param_1 + (ulong)(uVar8 - 0x1a) * 4);
      uVar7 = (ulong)uVar1;
      bVar5 = false;
      bVar2 = false;
      if ((int)uVar1 < 2) {
        bVar4 = false;
        bVar3 = false;
        if (uVar1 != 1) {
LAB_1003591b0:
          bVar2 = true;
          bVar3 = false;
          goto LAB_1003591b6;
        }
      }
      else {
        if (uVar1 - 0x19 < 2) {
          bVar3 = true;
          bVar2 = true;
          uVar7 = CONCAT71((uint7)(uint3)(uVar8 - 1 >> 8),1);
          if (*(int *)(param_1 + (ulong)(uVar8 - 1) * 4) == 4) {
            return uVar7;
          }
LAB_1003591b6:
          if (*(int *)(param_1 + (ulong)(uVar8 - 0x19) * 4) == 4) {
            return CONCAT71((int7)(uVar7 >> 8),1);
          }
          bVar4 = true;
          if (!bVar2) {
            bVar5 = false;
            goto LAB_1003591f2;
          }
          bVar4 = true;
        }
        else {
          if (uVar1 == 2) {
            bVar3 = false;
            goto LAB_1003591b6;
          }
          bVar3 = false;
          bVar4 = bVar5;
          if (uVar1 != 3) goto LAB_1003591b0;
        }
        bVar5 = true;
        if (*(int *)(param_1 + (ulong)(uVar8 - 0x18) * 4) == 4) {
          return CONCAT71((uint7)(uint3)(uVar8 - 0x18 >> 8),1);
        }
      }
LAB_1003591f2:
      uVar1 = *(uint *)(param_1 + (ulong)(uVar8 - 0x17) * 4);
      uVar7 = (ulong)uVar1;
      if ((int)uVar1 < 2) {
        bVar2 = bVar4;
        if (uVar1 != 1) {
LAB_100359230:
          bVar2 = true;
LAB_100359232:
          bVar5 = true;
        }
LAB_100359235:
        bVar6 = bVar5;
        if (bVar3) goto LAB_10035923f;
      }
      else {
        bVar2 = true;
        bVar6 = true;
        if (1 < uVar1 - 0x19) {
          bVar2 = bVar4;
          if (uVar1 == 3) goto LAB_100359232;
          if (uVar1 != 2) goto LAB_100359230;
          bVar2 = true;
          goto LAB_100359235;
        }
LAB_10035923f:
        bVar5 = bVar6;
        uVar7 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        if (*(int *)(param_1 + (ulong)uVar8 * 4) == 4) {
          return uVar7;
        }
      }
      if ((bVar2) &&
         (uVar7 = CONCAT71((int7)(uVar7 >> 8),1), *(int *)(param_1 + (ulong)(uVar8 - 0x16) * 4) == 4
         )) {
        return uVar7;
      }
      if ((bVar5) && (*(int *)(param_1 + (ulong)(uVar8 - 0x15) * 4) == 4)) {
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 0x40;
    } while (uVar9 < param_2);
  }
  return 0;
}

