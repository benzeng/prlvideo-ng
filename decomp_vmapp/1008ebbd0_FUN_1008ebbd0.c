
void FUN_1008ebbd0(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","prl_time_machine_helper",2,
                  "The Time Machine start up notification was recieved");
  }
  DAT_1011c3528 = 0;
  if (DAT_1011c3548 == 0) {
    uVar2 = (*DAT_1011c3590)();
    uVar2 = (*DAT_1011c3598)(uVar2);
    iVar1 = _notify_register_mach_port(uVar2,&DAT_1011c3548,0,&DAT_1011c354c);
    if (iVar1 != 0) {
      FUN_1008e3970("","prl_time_machine_helper",0,
                    "Cannot register mach port for notification from Time Machine!");
      return;
    }
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_18 = 0;
    DAT_1011c3540 = _CFMachPortCreateWithPort(0,DAT_1011c3548,FUN_1008ebdf0,&local_38,0);
    if (DAT_1011c3540 == 0) {
      pcVar3 = "Cannot create mach port for run loop!";
    }
    else {
      DAT_1011c3538 = _CFMachPortCreateRunLoopSource(0,DAT_1011c3540,0);
      if (DAT_1011c3538 == 0) {
        pcVar3 = "Cannot create run loop source!";
      }
      else {
        DAT_1011c3530 = _CFRunLoopGetCurrent();
        if (DAT_1011c3530 != 0) {
          _CFRunLoopAddSource(DAT_1011c3530,DAT_1011c3538,
                              *(undefined8 *)PTR__kCFRunLoopCommonModes_100ba23e0);
          return;
        }
        pcVar3 = "No current loop to process mach port notifications!";
        DAT_1011c3530 = 0;
      }
    }
    FUN_1008e3970("","prl_time_machine_helper",0,pcVar3);
    FUN_1008eb750();
  }
  return;
}

