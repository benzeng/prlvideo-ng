
undefined8 FUN_100a30cd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  code *local_30;
  
  FUN_100a2fd80(param_1 + 0x20,param_1 + 8,1);
  *(long *)(param_1 + 0x40) = param_1 + 0x10;
  uVar1 = _CFRunLoopGetCurrent();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_38 = 0;
  local_30 = FUN_100a327b0;
  lStack_70 = param_1 + 0x30;
  lVar2 = _CFRunLoopSourceCreate(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0,&local_78);
  *(long *)(param_1 + 0x38) = lVar2;
  if (lVar2 == 0) {
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"Can\'t create run loop source");
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948;
    _CFRunLoopAddSource(*(undefined8 *)(param_1 + 0x30),lVar2,uVar1);
    *(undefined8 *)(param_1 + 0x198) = 0;
    local_a0 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = param_1;
    uVar3 = _CFAbsoluteTimeGetCurrent();
    lVar2 = _CFRunLoopTimerCreate(uVar3,DAT_100e150e8,0,0,0,FUN_100a328c0,&local_a0);
    *(long *)(param_1 + 0x198) = lVar2;
    if (lVar2 != 0) {
      uVar1 = _CFRunLoopGetCurrent();
      _CFRunLoopAddTimer(uVar1,*(undefined8 *)(param_1 + 0x198),
                         *(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950);
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
    _CFRunLoopRemoveSource(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar1);
    _CFRunLoopSourceInvalidate(*(undefined8 *)(param_1 + 0x38));
    _CFRelease(*(undefined8 *)(param_1 + 0x38));
  }
  FUN_100a2ff20(param_1 + 0x20);
  return 0;
}

