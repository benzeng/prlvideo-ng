
void FUN_1002f5240(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long local_848 [258];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] completion thread start %p",*(long *)(param_1 + 0x10) + 0x838,
                  param_1);
  }
  FUN_100257700(param_1,6);
  uVar2 = _CFRunLoopGetCurrent();
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  plVar5 = local_848;
  ___bzero(plVar5,0x808);
  plVar3 = (long *)FUN_1002d7160(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)PTR__kCFRunLoopCommonModes_100ba23e0;
  uVar7 = 0;
  iVar9 = -1;
  do {
    iVar8 = iVar9;
    iVar9 = iVar8 + 1;
    plVar4 = (long *)FUN_1002d7140(*(undefined8 *)(param_1 + 0x10),iVar9);
    if (plVar4 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar5);
      if (iVar1 != 0) goto LAB_1002f538e;
      iVar1 = 0;
      if (*plVar5 == 0) goto LAB_1002f538e;
      _CFRunLoopAddSource(*(undefined8 *)(param_1 + 0x18),*plVar5,uVar2);
    }
    uVar7 = uVar7 + 1;
    plVar5 = plVar5 + 1;
  } while (uVar7 < 0x100);
  if ((plVar3 != (long *)0x0) && ((int)uVar7 == 0x100)) {
    iVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,local_848 + 0x100);
    if ((iVar1 != 0) || (local_848[0x100] == 0)) {
LAB_1002f538e:
      FUN_1002d46c0(*(undefined8 *)(param_1 + 0x10),iVar1);
      *(undefined1 *)(param_1 + 0x20) = 1;
      goto LAB_1002f539e;
    }
    _CFRunLoopAddSource(*(undefined8 *)(param_1 + 0x18),local_848[0x100],uVar2);
    uVar7 = (ulong)(iVar8 + 3);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  if ((int)uVar7 == 0x101) {
    _CFRunLoopRun();
  }
LAB_1002f539e:
  lVar6 = 0;
  do {
    if (local_848[lVar6] != 0) {
      _CFRunLoopRemoveSource(*(undefined8 *)(param_1 + 0x18),local_848[lVar6],uVar2);
      _CFRelease(local_848[lVar6]);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x101);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] completion thread stop %p",*(long *)(param_1 + 0x10) + 0x838,
                  param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

