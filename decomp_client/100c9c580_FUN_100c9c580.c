
undefined8 FUN_100c9c580(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar3 = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  if ((uVar3 & 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((uVar3 & 8) != 0) {
    return 1;
  }
  uVar4 = uVar3 & 1;
  uVar5 = uVar3 & 2;
  if (uVar5 == 0) {
    if (*(int *)(param_2 + 0x20) != 0) {
      if ((uVar4 != 0) || (*(int *)(param_1 + 0x20) == 0)) goto LAB_100c9c5d2;
      goto LAB_100c9c5d5;
    }
LAB_100c9c5df:
    iVar1 = *(int *)(param_2 + 0x24);
    if (iVar1 != 0) {
      if ((uVar4 != 0) || (*(int *)(param_1 + 0x24) == 0)) goto LAB_100c9c5f1;
      goto LAB_100c9c5f4;
    }
LAB_100c9c5fe:
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 != -1) {
      if ((uVar4 != 0) || (*(int *)(param_1 + 0x28) == -1)) goto LAB_100c9c611;
      goto LAB_100c9c614;
    }
LAB_100c9c61f:
    uVar2 = *(ulong *)(param_1 + 0x18);
    if ((uVar2 & 2) != 0) goto LAB_100c9c637;
  }
  else {
LAB_100c9c5d2:
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
LAB_100c9c5d5:
    if (uVar5 == 0) goto LAB_100c9c5df;
    iVar1 = *(int *)(param_2 + 0x24);
LAB_100c9c5f1:
    *(int *)(param_1 + 0x24) = iVar1;
LAB_100c9c5f4:
    if (uVar5 == 0) goto LAB_100c9c5fe;
    iVar1 = *(int *)(param_2 + 0x28);
LAB_100c9c611:
    *(int *)(param_1 + 0x28) = iVar1;
LAB_100c9c614:
    if (uVar5 == 0) goto LAB_100c9c61f;
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = uVar2 & 0xfffffffffffffffd;
  *(ulong *)(param_1 + 0x18) = uVar2;
LAB_100c9c637:
  if ((uVar3 & 4) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = 0;
  }
  *(ulong *)(param_1 + 0x18) = uVar2 | *(ulong *)(param_2 + 0x18);
  if (((uVar5 != 0) ||
      ((*(long *)(param_2 + 0x30) != 0 && ((uVar4 != 0 || (*(long *)(param_1 + 0x30) == 0)))))) &&
     (iVar1 = FUN_100c9c680(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

