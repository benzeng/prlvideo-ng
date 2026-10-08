
ulong FUN_100b96540(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long local_38;
  
  local_38 = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
  if (*(long *)(*(long *)(param_1 + 0x48) + 0x28) == 0) {
    lVar4 = FUN_100ba3c70();
    if (lVar4 != 0) {
      lVar5 = FUN_100ba3c20();
      if (lVar5 != 0) {
        FUN_100ba3d20(lVar4,lVar5);
        FUN_100ba2de0(uVar1,lVar4);
        return 0;
      }
      FUN_100ba3a50(lVar4);
    }
    uVar7 = FUN_100b9d470(0xfffffffe,0);
    return uVar7;
  }
  uVar2 = FUN_100b92df0(&local_38,0);
  if (uVar2 != 0) {
    if (uVar2 != 0xfffffff4) {
      return (ulong)uVar2;
    }
    uVar2 = FUN_100b92df0(&local_38,1);
    if (uVar2 != 0) {
      return (ulong)uVar2;
    }
  }
  lVar4 = local_38;
  if (*(long *)(local_38 + 8) == local_38 + 8) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x18);
LAB_100b96646:
    uVar2 = FUN_100b93490(local_38,uVar9,uVar8);
    lVar4 = local_38;
    if (uVar2 != 0) goto LAB_100b966f5;
  }
  else {
    iVar3 = _memcmp(*(void **)(*(long *)(local_38 + 0x18) + 0x10),
                    *(void **)(*(long *)(*(long *)(param_1 + 0x48) + 0x28) + 0x10),0x10);
    if (iVar3 != 0) {
      FUN_100b933e0(lVar4);
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x28);
      uVar9 = *(undefined8 *)(lVar4 + 0x10);
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      goto LAB_100b96646;
    }
  }
  lVar5 = FUN_100ba3c70();
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar4 + 8);
    do {
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)(lVar4 + 8)) {
        FUN_100ba2de0(uVar1,lVar5);
        goto LAB_100b96737;
      }
      lVar6 = FUN_100ba4bc0("ss","keyNumber",plVar10[2],"updatePassword",plVar10[3]);
      if (lVar6 == 0) goto LAB_100b966cc;
      iVar3 = FUN_100ba3d20(lVar5,lVar6);
    } while (iVar3 == 0);
    FUN_100ba3950(lVar6);
LAB_100b966cc:
    FUN_100b9d470(0xfffffffe,0);
    FUN_100ba3950(lVar5);
  }
  uVar2 = FUN_100b9d560();
  if (uVar2 == 0) {
LAB_100b96737:
    *(long *)(*(long *)(param_1 + 0x48) + 0x30) = local_38;
    return 0;
  }
LAB_100b966f5:
  FUN_100b93380(local_38);
  return (ulong)uVar2;
}

