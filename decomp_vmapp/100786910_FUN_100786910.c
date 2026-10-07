
uint FUN_100786910(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint local_50 [2];
  code *local_48;
  uint *local_40;
  long local_38;
  
  uVar8 = *param_3 >> 4 & 1;
  local_48 = FUN_100786e60;
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  local_50[0] = uVar8;
  local_40 = param_3;
  lVar4 = _DASessionCreate(uVar7);
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar5 = _CFRunLoopGetCurrent();
    uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8;
    _DASessionScheduleWithRunLoop(lVar4,uVar5,uVar1);
    lVar6 = FUN_100787980(param_2,uVar7,lVar4);
    if (lVar6 != 0) {
      local_38 = lVar6;
      _DADiskUnmount(lVar6,uVar8,FUN_100786e60,local_50);
      iVar2 = _CFRunLoopRunInMode(param_1,uVar1,0);
      if (iVar2 == 3) {
        FUN_1008e3970("","HostUtils",0,"DiskMount/Unmount operation timed out");
      }
      _CFRelease(lVar6);
    }
    uVar7 = _CFRunLoopGetCurrent();
    _DASessionUnscheduleFromRunLoop(lVar4,uVar7,uVar1);
    _CFRelease(lVar4);
    uVar3 = *local_40 & 1;
  }
  return uVar3;
}

