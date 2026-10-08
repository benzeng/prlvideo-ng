
void FUN_100d72c60(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_time_machine_helper",2,
                  "The Time Machine start up notification was recieved");
  }
  DAT_1023188c0 = 0;
  if (DAT_1023188e0 == 0) {
    uVar2 = (*DAT_102318928)();
    uVar2 = (*DAT_102318930)(uVar2);
    iVar1 = _notify_register_mach_port(uVar2,&DAT_1023188e0,0,&DAT_1023188e4);
    if (iVar1 != 0) {
      FUN_100df99c0("","prl_time_machine_helper",0,
                    "Cannot register mach port for notification from Time Machine!");
      return;
    }
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_18 = 0;
    DAT_1023188d8 = _CFMachPortCreateWithPort(0,DAT_1023188e0,FUN_100d72e80,&local_38,0);
    if (DAT_1023188d8 == 0) {
      pcVar3 = "Cannot create mach port for run loop!";
    }
    else {
      DAT_1023188d0 = _CFMachPortCreateRunLoopSource(0,DAT_1023188d8,0);
      if (DAT_1023188d0 == 0) {
        pcVar3 = "Cannot create run loop source!";
      }
      else {
        DAT_1023188c8 = _CFRunLoopGetCurrent();
        if (DAT_1023188c8 != 0) {
          _CFRunLoopAddSource(DAT_1023188c8,DAT_1023188d0,
                              *(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948);
          return;
        }
        pcVar3 = "No current loop to process mach port notifications!";
        DAT_1023188c8 = 0;
      }
    }
    FUN_100df99c0("","prl_time_machine_helper",0,pcVar3);
    FUN_100d727e0();
  }
  return;
}

