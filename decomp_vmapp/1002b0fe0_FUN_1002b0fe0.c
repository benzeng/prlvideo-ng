
void FUN_1002b0fe0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_b8 [34];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  uVar2 = FUN_1002ad820();
  _CGLSetVirtualScreen(*(undefined8 *)(param_1 + 0x868),uVar2);
  lVar4 = 0x9b8;
  do {
    if (*(long *)(param_1 + lVar4) != 0) {
      _CGLSetVirtualScreen(*(long *)(param_1 + lVar4),uVar2);
    }
    if (*(int *)(param_1 + -0x68 + lVar4) != 0) {
      *(undefined4 *)(param_1 + -0x68 + lVar4) = 0;
    }
    if (*(int *)(param_1 + -100 + lVar4) != 0) {
      *(undefined4 *)(param_1 + -100 + lVar4) = 0;
    }
    if (*(uint *)(param_1 + -0x60 + lVar4) < 0x3fff) {
      *(undefined4 *)(param_1 + -0x60 + lVar4) = 0x3fff;
    }
    if (*(uint *)(param_1 + -0x5c + lVar4) < 0x3fff) {
      *(undefined4 *)(param_1 + -0x5c + lVar4) = 0x3fff;
    }
    lVar4 = lVar4 + 0x8f0;
  } while (lVar4 != 0x98b8);
  *(undefined4 *)(param_1 + 0x860) = 0xffffffff;
  iVar3 = FUN_1002afda0(param_1,local_b8,0x20);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = local_b8[0];
  }
  *(undefined4 *)(param_1 + 0x860) = uVar2;
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

