
void FUN_1003f4e70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  lVar1 = _CFRunLoopSourceCreate(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0,&local_68);
  if (lVar1 == 0) {
    FUN_1008e3970("","DVDImage",0,"[%s] CFRunLoopSourceCreate failed","run");
  }
  else {
    uVar2 = _CFRunLoopGetCurrent();
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _CFRunLoopAddSource(uVar2,lVar1,*(undefined8 *)PTR__kCFRunLoopCommonModes_100ba23e0);
    _CFRunLoopRun();
    _CFRunLoopSourceInvalidate(lVar1);
    _CFRelease(lVar1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

