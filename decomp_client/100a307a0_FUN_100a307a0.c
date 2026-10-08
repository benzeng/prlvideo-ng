
bool FUN_100a307a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  code *local_20;
  
  param_1[2] = param_2;
  uVar1 = _CFRunLoopGetCurrent();
  *param_1 = uVar1;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_28 = 0;
  local_20 = FUN_100a327b0;
  puStack_60 = param_1;
  lVar2 = _CFRunLoopSourceCreate(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0,&local_68);
  param_1[1] = lVar2;
  if (lVar2 == 0) {
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"Can\'t create run loop source");
  }
  else {
    _CFRunLoopAddSource(*param_1,lVar2,*(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948);
  }
  return lVar2 != 0;
}

