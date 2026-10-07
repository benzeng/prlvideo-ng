
undefined8 FUN_1000c0bd0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char local_68 [64];
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar2;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x108) + 0xb0))
                    (*(long **)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  if (iVar3 < 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,iVar3,&local_88);
    FUN_10002d9d0(&local_88);
    FUN_1000a7d10(DAT_1011c3698,3);
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_1007da300("vm.vcpubindall",0);
    if (iVar3 == 0) {
      _snprintf(local_68,0x40,"vm.vcpu%ubind",(ulong)*(uint *)(param_1 + 0x110));
      iVar3 = FUN_1007da300(local_68,0xffffffff);
      if (iVar3 != -1) {
        (**(code **)(**(long **)(param_1 + 0x108) + 0xf8))(*(long **)(param_1 + 0x108),iVar3);
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x108) + 0xf8))
                (*(long **)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
    }
    iVar3 = 3;
    if (-1 < *(int *)(param_1 + 0xf4)) {
      iVar3 = *(int *)(param_1 + 0xf4);
    }
    FUN_100257850(iVar3);
    **(undefined4 **)(param_1 + 0xf8) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0xf8) + 4) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x110);
    uVar4 = QThread::currentThreadId();
    FUN_1008e3970("","vm",0,"VCPU #%u initialized (thread 0x%.8llX)",uVar1,uVar4);
    uVar4 = 1;
  }
  if (lVar2 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

