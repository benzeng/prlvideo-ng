
undefined8 FUN_1002bfd50(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 local_50 [24];
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar3 = QThread::currentThreadId();
  if (lVar4 != lVar3) {
    ppuVar6 = &PTR_FUN_100bb33a0;
    local_28 = 0;
    local_38 = param_1;
    local_30 = param_2;
    cVar2 = FUN_100258250(param_1,local_50);
    if (cVar2 != '\0') {
      return local_28;
    }
    FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","rc","../Usb/AppUsb.cpp",0x638,
                  "GetHIDDevice",ppuVar6);
    return local_28;
  }
  plVar1 = *(long **)(param_1 + 0x2e8);
  if (((plVar1 == (long *)0x0) ||
      (lVar4 = (**(code **)(*plVar1 + 0x90))(plVar1,param_2), lVar4 == 0)) &&
     ((plVar1 = *(long **)(param_1 + 0x2f0), plVar1 == (long *)0x0 ||
      (lVar4 = (**(code **)(*plVar1 + 0x90))(plVar1,param_2), lVar4 == 0)))) {
    plVar1 = *(long **)(param_1 + 0x2f8);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = ___dynamic_cast(lVar4,&PTR_vtable_101116b70,&PTR_vtable_100bb4580,0);
  }
  return uVar5;
}

