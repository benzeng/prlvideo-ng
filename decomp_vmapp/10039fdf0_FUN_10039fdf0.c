
undefined8 FUN_10039fdf0(long param_1,ulong param_2,uint *param_3,ulong param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = (uint)param_2 & 0xffff;
  uVar7 = 1;
  if (uVar2 < 0x5f) {
    uVar6 = 2;
    switch(uVar2) {
    case 0x14:
    case 0x16:
      uVar7 = 4;
      break;
    case 0x15:
    case 0x17:
      uVar7 = 3;
      break;
    case 0x18:
      goto switchD_10039fe34_caseD_18;
    }
switchD_10039fe34_default:
    puVar4 = param_3;
    uVar6 = uVar7;
    if (uVar2 < 0xfffd) {
      if (uVar2 < 0x60) {
        if ((uVar2 < 0x2e) && ((0x3fc07e000001U >> (param_2 & 0x3f) & 1) != 0)) goto LAB_10039fecb;
        goto switchD_10039fe34_caseD_18;
      }
      bVar8 = uVar2 == 0x60;
    }
    else {
      bVar8 = uVar2 == 0xfffd;
    }
    if (bVar8) goto LAB_10039fecb;
  }
  else {
    if (uVar2 != 0x5f) goto switchD_10039fe34_default;
    *(undefined1 *)(param_1 + 0xfc) = 1;
    uVar6 = 1;
  }
switchD_10039fe34_caseD_18:
  uVar7 = uVar6;
  puVar4 = param_3 + 1;
  uVar2 = 0;
  if (((*param_3 & 0x2000) != 0) && ((*(uint *)(param_1 + 8) & 0xfe00) != 0)) {
    puVar4 = param_3 + 2;
    uVar2 = param_3[1];
  }
  FUN_10039fc90(param_1,*param_3,uVar2);
  param_2 = param_2 & 0xffffffff;
LAB_10039fecb:
  if ((param_2 & 0x10000000) != 0) {
    uVar6 = *puVar4;
    uVar3 = uVar6 >> 8 & 0x18 | uVar6 >> 0x1c & 7;
    uVar2 = (uVar6 & 0x7ff) + 1;
    if ((uVar6 & 0x2000) != 0) {
      *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1 << (sbyte)uVar3;
      if (*(int *)(param_1 + 100) == 0) {
        *(undefined4 *)(param_1 + 100) = 1;
      }
      *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 1;
      if (uVar3 == 6) {
        uVar2 = 0xc;
      }
      else if (uVar3 == 2) {
        uVar2 = 0x100;
      }
      else if (uVar3 == 1) {
        uVar2 = 10;
      }
    }
    uVar5 = (ulong)uVar3;
    if (*(uint *)(param_1 + 0x58 + uVar5 * 4) < uVar2) {
      *(uint *)(param_1 + 0x58 + uVar5 * 4) = uVar2;
    }
    puVar4 = puVar4 + 1;
    puVar1 = (uint *)(param_1 + 0xa8 + uVar5 * 4);
    *puVar1 = *puVar1 | ~-(uint)((uVar6 & 0x2000) == 0) | 1 << ((byte)(uVar6 & 0x7ff) & 0x1f);
  }
  while (puVar4 < param_3 + (param_4 & 0xffffffff)) {
    while( true ) {
      uVar2 = *puVar4;
      uVar6 = 0;
      puVar1 = puVar4 + 1;
      if ((uVar2 & 0x2000) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if ((*(uint *)(param_1 + 8) & 0xfe00) != 0) {
          uVar3 = puVar4[1];
          puVar1 = puVar4 + 2;
        }
      }
      puVar4 = puVar1;
      if (param_3 + (param_4 & 0xffffffff) <= puVar4) break;
      FUN_10039fc90(param_1,uVar2,uVar3);
    }
    do {
      FUN_10039fc90(param_1,uVar2 + uVar6,uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return 0;
}

