
bool FUN_1002f5c90(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_2 + 0x46c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x468) = 0;
    return true;
  }
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ProcessError pkt %p, err %08X",*(long *)(param_1 + 0x10) + 0xcf,
                  param_2,iVar1);
    iVar1 = *(int *)(param_2 + 0x46c);
  }
  *(undefined4 *)(param_2 + 0x454) = 0;
  *(undefined4 *)(param_2 + 0x468) = 4;
  if (iVar1 < -0x1fffbfaf) {
    if (iVar1 == -0x1ffffd18) {
      uVar3 = 8;
    }
    else {
      uVar3 = 7;
      if (iVar1 != -0x1fffbfb1) {
LAB_1002f5d52:
        uVar3 = 0xc;
      }
    }
LAB_1002f5d57:
    *(undefined4 *)(param_2 + 0x468) = uVar3;
  }
  else {
    if (iVar1 == -0x1fffbfaf) {
      uVar3 = 9;
      goto LAB_1002f5d57;
    }
    if (iVar1 != 0) goto LAB_1002f5d52;
  }
  iVar2 = 0;
  if ((*(char *)(*(long *)(param_1 + 0x10) + 0xca) == '\0') ||
     (plVar4 = *(long **)(param_1 + 0x20), plVar4 == (long *)0x0)) goto LAB_1002f5e4b;
  if (iVar1 < -0x1fffbffd) {
    if (iVar1 < -0x1ffffd18) {
      if ((iVar1 == -0x1ffffd40) || (iVar1 == -0x1ffffd33)) goto LAB_1002f5e4b;
    }
    else {
      if (iVar1 == -0x1ffffd18) goto LAB_1002f5e4b;
      if (iVar1 == -0x1ffffd15) {
        *(undefined4 *)(param_2 + 0x450) = 0xff;
        goto LAB_1002f5e4b;
      }
    }
LAB_1002f5e17:
    iVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4,*(undefined1 *)(param_1 + 0x18));
    if ((iVar2 != -0x1fffbfb1) && (iVar2 != 0)) goto LAB_1002f5e4b;
    plVar4 = *(long **)(param_1 + 0x20);
  }
  else if (iVar1 < -0x1fffbfaf) {
    if (iVar1 != -0x1fffbffd) {
      if (iVar1 == -0x1fffbfb1) {
        if (0 < DAT_1011c568c) {
          iVar2 = 0;
          FUN_1008e3970("","USB",0,"[%s] ---- PIPE STALLED ----",*(long *)(param_1 + 0x10) + 0xcf);
        }
        goto LAB_1002f5e4b;
      }
      goto LAB_1002f5e17;
    }
  }
  else if (iVar1 != -0x1fffbfaf) {
    if (iVar1 == 0) goto LAB_1002f5e4b;
    goto LAB_1002f5e17;
  }
  iVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4,*(undefined1 *)(param_1 + 0x18));
LAB_1002f5e4b:
  return iVar2 == 0;
}

