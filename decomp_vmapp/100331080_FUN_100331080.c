
undefined8 FUN_100331080(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  uint local_38;
  uint local_34;
  
  iVar5 = param_2[0xe];
  iVar2 = iVar5;
  if (iVar5 == 0) {
    iVar2 = param_2[0xd];
  }
  piVar4 = &DAT_100b3ab94;
  uVar3 = 0;
  do {
    if (*piVar4 == iVar2) {
      iVar2 = *(int *)(&DAT_100b3ab90 + uVar3 * 0x24);
      local_34 = param_2[0xf];
      uVar3 = (ulong)local_34;
      local_38 = param_2[0x10];
      if ((iVar2 == 0) || (iVar2 == 7)) goto LAB_100331145;
      if (iVar2 != 0x1b) goto LAB_1003310d5;
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x948);
      local_34 = *(uint *)(lVar1 + uVar3 * 4);
      uVar3 = (ulong)local_34;
      local_38 = *(uint *)(lVar1 + (ulong)local_38 * 4);
      goto LAB_100331145;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 9;
  } while (uVar3 < 0x3d);
  local_34 = param_2[0xf];
  local_38 = param_2[0x10];
  iVar2 = 0x8e;
LAB_1003310d5:
  local_34 = FUN_10038e740(iVar2,&local_34);
  local_38 = FUN_10038e740(iVar2,&local_38);
  uVar3 = (ulong)local_34;
  iVar5 = param_2[0xe];
LAB_100331145:
  FUN_1002fc380(*(undefined8 *)(param_1 + 0x10),param_2 + 1,param_2 + 5,param_2[10],param_2[0xb],
                uVar3,local_38,param_2[0xd],*param_2,param_2[0x11],iVar5 == 0);
  FUN_100330df0(param_1,param_2);
  return 1;
}

