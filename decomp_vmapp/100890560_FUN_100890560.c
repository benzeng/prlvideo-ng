
ulong FUN_100890560(long param_1,void *param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_1 + 0x78);
  local_38 = lVar5;
  if (((*(int *)(lVar2 + 0xf8) == 0) && (uVar4 = 0xffffffff, *(int *)(lVar2 + 0xf4) == 0)) ||
     ((iVar3 = *(int *)(param_1 + 0x10), iVar3 == 0 &&
      (uVar4 = 0xffffffff, *(int *)(lVar2 + 0xfc) == 0)))) goto LAB_1008907b5;
  lVar1 = lVar2 + 0x110;
  if (param_2 == (void *)0x0) {
    if (param_3 == 0) {
      iVar3 = FUN_100845910(lVar1,param_1 + 0x28,0xf - (long)*(int *)(lVar2 + 0x104));
      uVar4 = 0xffffffff;
      if (iVar3 == 0) {
        *(undefined4 *)(lVar2 + 0x100) = 1;
        uVar4 = param_4 & 0xffffffff;
      }
    }
    else if ((param_4 == 0) || (uVar4 = 0xffffffff, *(int *)(lVar2 + 0x100) != 0)) {
      FUN_1008459a0(lVar1,param_3,param_4);
      uVar4 = param_4 & 0xffffffff;
    }
    goto LAB_1008907b5;
  }
  uVar4 = 0;
  if (param_3 == 0) goto LAB_1008907b5;
  if (*(int *)(lVar2 + 0x100) == 0) {
    iVar3 = FUN_100845910(lVar1,param_1 + 0x28,0xf - (long)*(int *)(lVar2 + 0x104));
    uVar4 = 0xffffffff;
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar3 != 0) goto LAB_1008907b5;
    *(undefined4 *)(lVar2 + 0x100) = 1;
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 != 0) {
    if (*(long *)(lVar2 + 0x148) == 0) {
      iVar3 = FUN_100845b00(lVar1,param_3,param_2);
    }
    else {
      iVar3 = FUN_1008460a0();
    }
    uVar4 = 0xffffffff;
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar3 == 0) {
      *(undefined4 *)(lVar2 + 0xfc) = 1;
      uVar4 = param_4 & 0xffffffff;
    }
    goto LAB_1008907b5;
  }
  if (*(long *)(lVar2 + 0x148) == 0) {
    iVar3 = FUN_100845df0(lVar1,param_3,param_2);
  }
  else {
    iVar3 = FUN_100846350();
  }
  if (iVar3 == 0) {
    lVar5 = FUN_100846570(lVar1,local_48,(long)*(int *)(lVar2 + 0x108));
    if (lVar5 == 0) goto LAB_100890783;
    iVar3 = FUN_10081d820(local_48,param_1 + 0x38,(long)*(int *)(lVar2 + 0x108));
    if (((int)param_4 == -1) || (iVar3 != 0)) goto LAB_100890783;
  }
  else {
LAB_100890783:
    _OPENSSL_cleanse(param_2,param_4);
    param_4 = 0xffffffff;
  }
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(undefined4 *)(lVar2 + 0x100) = 0;
  uVar4 = param_4 & 0xffffffff;
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1008907b5:
  if (lVar5 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

