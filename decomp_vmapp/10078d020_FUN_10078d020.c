
undefined8 FUN_10078d020(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = *(long *)(param_1 + 4);
  uVar7 = param_1[2];
  iVar1 = *(int *)(lVar4 + (ulong)uVar7);
  uVar8 = uVar7 + 0xc + iVar1;
  param_1[2] = uVar8;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  uVar3 = param_1[1];
  uVar5 = 0xfffffff9;
  if (uVar7 + iVar1 != uVar3 + *(int *)(lVar4 + (ulong)uVar3)) {
    uVar7 = uVar3 + 0xc + *(int *)(lVar4 + (ulong)uVar3);
    uVar5 = 0xfffffff8;
    if (uVar8 <= uVar7) {
      uVar6 = (ulong)uVar8;
      uVar5 = 0xfffffffb;
      if ((iVar2 + 1 == *(int *)(uVar6 + 8 + lVar4)) &&
         (uVar5 = 0xfffffffc, uVar6 + 0xc + (ulong)*(uint *)(lVar4 + uVar6) <= (ulong)uVar7)) {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

