
undefined8 FUN_100bdff30(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0x88) + 0x284);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(*(long *)(param_1 + 0x88) + 0x288);
  }
  else {
    uVar4 = FUN_100be3a00(param_1);
    iVar2 = FUN_100c58d60(uVar4,0x31,0,0);
    uVar6 = iVar3 - iVar2;
    lVar1 = *(long *)(param_1 + 0x88);
    *(uint *)(lVar1 + 0x288) = uVar6;
    *(undefined4 *)(lVar1 + 0x284) = 0;
  }
  uVar4 = FUN_100be3a00(param_1);
  iVar3 = FUN_100c58d60(uVar4,0x31,0,0);
  if (uVar6 < 0x100U - iVar3) {
    uVar5 = FUN_100be4680(param_1,0x20,0,0);
    if ((uVar5 & 0x1000) != 0) {
      return 0;
    }
    uVar4 = FUN_100be3a00(param_1);
    uVar6 = FUN_100c58d60(uVar4,0x28,0,0);
    *(uint *)(*(long *)(param_1 + 0x88) + 0x288) = uVar6;
    uVar4 = FUN_100be3a00(param_1);
    iVar3 = FUN_100c58d60(uVar4,0x31,0,0);
    if (uVar6 < 0x100U - iVar3) {
      uVar4 = FUN_100be3a00(param_1);
      iVar3 = FUN_100c58d60(uVar4,0x31,0,0);
      *(int *)(*(long *)(param_1 + 0x88) + 0x288) = 0x100 - iVar3;
      uVar4 = FUN_100be3a00(param_1);
      FUN_100c58d60(uVar4,0x2a,*(undefined4 *)(*(long *)(param_1 + 0x88) + 0x288),0);
    }
  }
  return 1;
}

