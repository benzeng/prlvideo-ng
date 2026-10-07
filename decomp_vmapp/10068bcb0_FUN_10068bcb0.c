
void FUN_10068bcb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = *(ulong *)(param_1[4] + 0x20);
  uVar4 = *(ulong *)(param_1[4] + 0x40);
  uVar6 = uVar5 & 0xffffffff;
  local_38 = lVar2;
  if (uVar4 < uVar6) {
    ___bzero(local_1038,0x1000);
    uVar5 = (uVar5 & 0xffffffff) - uVar4;
    do {
      plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
      uVar3 = uVar5 & 0xffffffff;
      if (0x1000 < uVar5) {
        uVar3 = 0x1000;
      }
      (**(code **)(*plVar1 + 0x48))(plVar1,local_1038,uVar3,0,uVar4);
      uVar4 = uVar4 + 0x1000;
      uVar5 = uVar5 - 0x1000;
    } while (uVar4 < uVar6);
    lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

