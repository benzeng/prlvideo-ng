
undefined1  [16] FUN_100398ed0(int param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  param_1 = param_1 * 0x40;
  uVar3 = *(int *)(param_2 + (ulong)(param_1 + 0x10d) * 4) - 1;
  uVar6 = 7;
  uVar5 = 7;
  if (uVar3 < 5) {
    uVar5 = *(uint *)(&DAT_100b3f2e0 + (long)(int)uVar3 * 4) & 7;
  }
  uVar3 = *(int *)(param_2 + (ulong)(param_1 + 0x10e) * 4) - 1;
  if (uVar3 < 5) {
    uVar6 = *(uint *)(&DAT_100b3f2e0 + (long)(int)uVar3 * 4) & 7;
  }
  uVar3 = *(int *)(param_2 + (ulong)(param_1 + 0x119) * 4) - 1;
  uVar4 = 7;
  if (uVar3 < 5) {
    uVar4 = *(uint *)(&DAT_100b3f2e0 + (long)(int)uVar3 * 4) & 7;
  }
  uVar3 = 0;
  if (*(int *)(param_2 + (ulong)(param_1 + 0x11d) * 4) == 0) goto LAB_100399005;
  uVar3 = 0x40000;
  if ((int)param_3 < 0x66) {
    if (param_3 < 9) {
      uVar1 = 0x10a >> (param_3 & 0x1f);
joined_r0x000100399000:
      if ((uVar1 & 1) != 0) goto LAB_100399005;
    }
  }
  else if (param_3 - 0x66 < 0xd) {
    uVar1 = 0x1015 >> (param_3 - 0x66 & 0x1f);
    goto joined_r0x000100399000;
  }
  uVar3 = 0;
LAB_100399005:
  uVar3 = *(uint *)(param_2 + (ulong)(param_1 + 0x110) * 4) & 7 | (param_4 & 0xff) << 0x13 |
          (*(uint *)(param_2 + (ulong)(param_1 + 0x111) * 4) & 7) << 3 |
          (*(uint *)(param_2 + (ulong)(param_1 + 0x112) * 4) & 7) << 6 | uVar5 << 9 | uVar6 << 0xc |
          uVar4 << 0xf | uVar3;
  if (uVar4 == 4 || (uVar6 == 4 || uVar5 == 4)) {
    cVar2 = FUN_10038e320(param_3);
    if (cVar2 == '\0') {
      cVar2 = FUN_10038e310(param_3);
      if (cVar2 != '\0') {
        uVar3 = uVar3 | 0x200000;
      }
    }
    else {
      uVar3 = uVar3 | 0x100000;
    }
  }
  auVar7._4_4_ = *(undefined4 *)(param_2 + (ulong)(param_1 + 0x113) * 4);
  auVar7._0_4_ = *(int *)(param_2 + (ulong)(param_1 + 0x115) * 4) << 0x16 | uVar3;
  auVar7._8_4_ = *(undefined4 *)(param_2 + (ulong)(param_1 + 0x10f) * 4);
  auVar7._12_4_ = 0;
  return auVar7;
}

