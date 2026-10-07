
int FUN_1000be190(long param_1,undefined1 param_2,char param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  QArrayData *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                  "VirtualPCStates.cpp",0x475,"stateVmInitHlp1");
  }
  FUN_100060cd0(DAT_1011c3650);
  uVar5 = DAT_1011c3650;
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_50 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_50 = plVar4;
  }
  FUN_100063770(uVar5,0x186c8,0,&local_48,0xbbb,&local_50);
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (local_48 != (void *)0x0) {
    if (pvStack_40 != local_48) {
      pvStack_40 = (void *)((~((long)pvStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                           (long)pvStack_40);
    }
    operator_delete(local_48);
  }
  if ((param_3 == '\0') && (iVar3 = FUN_1000a9950(param_1,0), iVar3 != 0)) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_100408ff0(param_1 + 0x10b0,0x80000552,&local_68);
    FUN_10002d9d0(&local_68);
    return -0x7ffffaae;
  }
  iVar3 = FUN_1007da300("vm.no_change_name",0);
  if (iVar3 == 0) {
    FUN_1000a4ca0(&local_70,param_1);
    if ((DAT_1011b6920 == '\0') && (DAT_1011b6928 = FUN_100788e00(&local_70), DAT_1011b6928 != 0)) {
      uVar5 = _CFRunLoopGetMain();
      _CFRunLoopPerformBlock
                (uVar5,*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8,
                 &PTR___NSConcreteGlobalBlock_100ba89e0);
      uVar5 = _CFRunLoopGetMain();
      _CFRunLoopWakeUp(uVar5);
      DAT_1011b6920 = '\x01';
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000be3a5;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1000be3a5:
  FUN_100470f90(param_1 + 0x10840);
  cVar2 = FUN_1000a83d0(param_1,param_2);
  if (cVar2 == '\0') {
    iVar3 = FUN_100409090(param_1 + 0x10b0);
    if (iVar3 < 0) {
      return iVar3;
    }
    if (iVar3 != 0) {
      return -0x7fffffbc;
    }
  }
  return 0;
}

