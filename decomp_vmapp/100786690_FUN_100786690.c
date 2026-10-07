
uint FUN_100786690(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char local_61;
  undefined1 local_60 [8];
  int local_58 [2];
  uint local_50 [2];
  code *local_48;
  uint *local_40;
  long local_38;
  
  FUN_100787820(local_58,param_1);
  *(byte *)param_2 = (byte)*param_2 | 0x10;
  FUN_100787f50(local_60,local_58[0],0);
  local_61 = '\0';
  cVar2 = FUN_1007880a0(local_60);
  if (cVar2 != '\0') {
    FUN_100788320(local_60,&cf_Ejectable,&local_61);
    if (local_61 != '\0') {
      uVar8 = *param_2;
      goto LAB_100786702;
    }
  }
  uVar8 = *param_2 | 8;
  *param_2 = uVar8;
LAB_100786702:
  uVar8 = uVar8 >> 4 & 1;
  local_48 = FUN_100786e60;
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  local_50[0] = uVar8;
  local_40 = param_2;
  lVar4 = _DASessionCreate(uVar7);
  uVar9 = 0;
  if (lVar4 != 0) {
    uVar5 = _CFRunLoopGetCurrent();
    uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8;
    _DASessionScheduleWithRunLoop(lVar4,uVar5,uVar1);
    if (local_58[0] != 0) {
      lVar6 = _DADiskCreateFromIOMedia(uVar7,lVar4,local_58[0]);
      if (lVar6 != 0) {
        local_38 = lVar6;
        _DADiskUnmount(lVar6,uVar8,FUN_100786e60,local_50);
        iVar3 = _CFRunLoopRunInMode(DAT_100b4af08,uVar1,0);
        if (iVar3 == 3) {
          FUN_1008e3970("","HostUtils",0,"DiskMount/Unmount operation timed out");
        }
        _CFRelease(lVar6);
      }
    }
    uVar7 = _CFRunLoopGetCurrent();
    _DASessionUnscheduleFromRunLoop(lVar4,uVar7,uVar1);
    _CFRelease(lVar4);
    uVar9 = *local_40 & 1;
  }
  FUN_1007880b0(local_60);
  if (local_58[0] != 0) {
    _IOObjectRelease(local_58[0]);
  }
  return uVar9;
}

