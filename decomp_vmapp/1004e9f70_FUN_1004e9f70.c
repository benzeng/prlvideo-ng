
long * FUN_1004e9f70(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *local_88;
  undefined8 local_80;
  undefined1 local_78 [88];
  
  plVar5 = operator_new(0x40);
  FUN_1004d9f10(plVar5,param_3,param_2);
  iVar4 = (**(code **)(*plVar5 + 0x48))
                    (plVar5,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),
                     *(undefined4 *)(param_3 + 0x14),local_78);
  if (iVar4 == 0) {
    *(undefined1 *)((long)plVar5 + 0x29) = *(undefined1 *)(param_3 + 9);
    *(undefined1 *)(plVar5 + 5) = *(undefined1 *)(param_3 + 8);
    lVar3 = *(long *)(param_2 + 0x50);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_88 = plVar5;
    FUN_1004d29c0(lVar3 + 0x48,uVar2,&local_88);
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    return plVar5;
  }
  uVar6 = ___cxa_allocate_exception(0x10);
  local_80 = QString::fromAscii_helper("CFSInode::open() failed",0x17);
  FUN_1004eb830(uVar6,&local_80);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar6,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

