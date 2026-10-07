
undefined4 FUN_1006823b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","ioctl",3,"VmDrv::vm_drv_open(\"%s\")",param_2);
  }
  lVar3 = _IOServiceMatching(param_2);
  if (lVar3 == 0) {
    FUN_1008e3970("","ioctl",0,"Failure: IOServiceMatching(\"%s\")",param_2);
    return 0xffffffff;
  }
  iVar1 = _IOServiceGetMatchingServices
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar3,&local_1c);
  if (iVar1 == 0) {
    iVar2 = _IOIteratorNext(local_1c);
    _IOObjectRelease(local_1c);
    if (iVar2 == 0) {
      FUN_1008e3970("","ioctl",0,"Failure: Couldn\'t find any matches.");
      return 0xffffffff;
    }
    iVar1 = _IOServiceOpen(iVar2,*(undefined4 *)PTR__mach_task_self__100ba25d0,0,&local_20);
    _IOObjectRelease(iVar2);
    if (iVar1 == 0) {
      return local_20;
    }
    pcVar4 = "Failure: IOServiceOpen returned %d";
  }
  else {
    pcVar4 = "Failure: IOServiceGetMatchingServices %d";
  }
  FUN_1008e3970("","ioctl",0,pcVar4,iVar1);
  return 0xffffffff;
}

