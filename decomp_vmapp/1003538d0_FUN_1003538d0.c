
undefined8 FUN_1003538d0(long param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar4 = (param_2 & 0xffff) - 0x42;
  if ((uVar4 < 0x1e) && ((0x28030d5fU >> (uVar4 & 0x1f) & 1) != 0)) {
    uVar4 = *(uint *)**(undefined8 **)(param_1 + 0x38);
    puVar5 = param_3;
    if (0xffff01ff < uVar4) {
      puVar5 = param_3 + 1;
      if ((param_2 & 0x10000000) == 0) {
        puVar5 = param_3;
      }
      bVar10 = (*puVar5 & 0x2000) != 0;
      bVar11 = (uVar4 & 0xfe00) != 0;
      uVar9 = (ulong)(bVar10 && bVar11);
      lVar8 = uVar9 + 2;
      puVar7 = puVar5 + 1;
      if (bVar10 && bVar11) {
        puVar7 = puVar5 + 2;
      }
      if (((*puVar7 & 0x2000) != 0) && ((uVar4 & 0xfe00) != 0)) {
        lVar8 = uVar9 + 3;
      }
      puVar5 = puVar5 + lVar8;
    }
    cVar3 = FUN_100399b30(*(undefined8 *)(param_1 + 0x20),*puVar5 & 0x7ff);
    if (cVar3 != '\0') {
      *(undefined8 *)(param_1 + 0x44) = 0;
      FUN_100353b30(param_1,param_2,param_3);
      return 0;
    }
  }
  uVar4 = (param_2 & 0xffff) - 0x47;
  if ((0xf < uVar4) || ((0xa06fU >> (uVar4 & 0x1f) & 1) == 0)) {
    uVar6 = FUN_100353d70(param_1,param_2,param_3,param_4);
    return uVar6;
  }
  uVar1 = *param_3;
  uVar2 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar2 + 1;
  *(uint *)(param_1 + 0x4c + (ulong)uVar2 * 4) = uVar1;
  uVar1 = param_3[1];
  uVar2 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x44) = uVar2 + 1;
  *(uint *)(param_1 + 0x5c + (ulong)uVar2 * 4) = uVar1;
  uVar6 = 3;
  switch(uVar4) {
  case 0:
  case 2:
    return 0;
  case 1:
  case 0xd:
    FUN_100355c80(param_1,param_2);
    break;
  default:
    goto switchD_1003539ec_caseD_4;
  case 5:
    uVar4 = param_3[2];
    *(uint *)(param_1 + 0x44) = uVar2 + 2;
    *(uint *)(param_1 + 0x5c + (ulong)(uVar2 + 1) * 4) = uVar4;
  case 3:
  case 6:
  case 0xf:
    FUN_100355f40(param_1,param_2);
  }
  uVar6 = 0;
switchD_1003539ec_caseD_4:
  *(undefined8 *)(param_1 + 0x44) = 0;
  return uVar6;
}

