
undefined8 FUN_10010e660(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  
  uVar2 = _IOServiceMatching("AppleSMC");
  _IOServiceGetMatchingServices(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,uVar2,&local_1c);
  uVar1 = _IOIteratorNext(local_1c);
  _IOObjectRelease(local_1c);
  _IOServiceOpen(uVar1,*(undefined4 *)PTR__mach_task_self__100ba25d0,0,param_1);
  _IOObjectRelease(uVar1);
  return 0;
}

