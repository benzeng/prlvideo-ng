
undefined8 FUN_100cdc360(long *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  sbyte sVar13;
  bool bVar14;
  int local_34;
  
  cVar2 = (**(code **)(*param_1 + 0x80))();
  if (cVar2 == '\0') {
    return 0;
  }
  local_34 = 0;
  uVar3 = _CGEventGetIntegerValueField(param_3,9);
  uVar5 = _CGEventGetFlags(param_3);
  iVar6 = _CGEventGetIntegerValueField(param_3,8);
  sVar4 = _CGEventGetIntegerValueField(param_3,10);
  iVar7 = _KBGetLayoutType((int)sVar4);
  sVar13 = 2;
  if (iVar7 != 0x4a495320) {
    sVar13 = iVar7 == 0x49534f20;
  }
  iVar7 = FUN_100cdf770(uVar3,sVar13);
  iVar8 = _CGEventGetIntegerValueField(param_3,0x29);
  if (param_2 == 10) {
    local_34 = 2 - (uint)(iVar6 == 0);
  }
  *(uint *)(param_1 + 0x89) = *(uint *)(param_1 + 0x89) | 1 << sVar13;
  sVar4 = _CGEventGetIntegerValueField(param_3,10);
  iVar9 = _KBGetLayoutType((int)sVar4);
  uVar11 = _CGEventGetFlags(param_3);
  iVar6 = iVar7;
  if (((((*(uint *)(param_1 + 0x76) & 0xffffff00) == 0x700) && (iVar9 != 0x49534f20)) &&
      (iVar9 != 0x4a495320)) && ((iVar6 = 0x5e, iVar7 != 0x31 && (iVar6 = 0x31, iVar7 != 0x5e)))) {
    iVar6 = iVar7;
  }
  iVar7 = 0x6a;
  if (iVar6 != 0x6c) {
    iVar7 = iVar6;
  }
  if ((uVar11 & 0x800000) == 0) {
    iVar7 = iVar6;
  }
  uVar10 = 0;
  if (((char)param_1[6] == '\0') && (uVar10 = 0x1e207f, iVar8 != 0)) {
    uVar10 = 0;
  }
  if ((char)param_1[0x90] == '\0') {
    bVar14 = false;
  }
  else {
    bVar14 = (*(byte *)(param_1 + 0x89) & 4) == 0;
  }
  uVar1 = uVar10 | 0x10000;
  if (!bVar14) {
    uVar1 = uVar10;
  }
  if ((((int)param_1[0xa1] == 0) || (0xc < iVar7 - 0x4fU)) ||
     ((0x1f77U >> (iVar7 - 0x4fU & 0x1f) & 1) == 0)) {
    FUN_100cdc0a0(param_1,uVar5,uVar1);
    uVar12 = 1;
    if (iVar7 == 0) goto LAB_100cdc58b;
    if ((local_34 == 0) && (iVar7 == 0x4d)) {
      *(int *)(param_1 + 0xa1) = -(int)param_1[0xa1];
    }
  }
  else {
    uVar10 = uVar5 & 0xffdfffff;
    if (0 < (int)param_1[0xa1]) {
      uVar10 = uVar5 | 0x200000;
    }
    uVar5 = (**(code **)(*param_1 + 0xe8))(param_1);
    FUN_100cdc0a0(param_1,uVar10,uVar1 | (uVar5 & 2) << 0x14);
  }
  cVar2 = FUN_100cd3900(param_1,iVar7,local_34);
  if (cVar2 == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(*param_1 + 0xc0))(param_1,iVar7,local_34 != 0);
  }
LAB_100cdc58b:
  if (param_2 == 10) {
    param_1[0x8e] = param_1[0x8e] + 1;
  }
  else {
    param_1[0x8f] = param_1[0x8f] + 1;
  }
  return uVar12;
}

