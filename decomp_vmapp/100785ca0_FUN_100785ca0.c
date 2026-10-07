
undefined8 FUN_100785ca0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0xffffffffffffffff;
  uVar3 = 0xffffffffffffffff;
  if ((int)param_1 != 0) {
    lVar2 = _IORegistryEntryCreateCFProperty
                      (param_1,&cf_Size,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
    if (lVar2 == 0) {
      FUN_1008e3970("","HostUtils",0,"CreateCFProperty cant get MediaSizeKey");
    }
    else {
      cVar1 = _CFNumberGetValue(lVar2,0xb,&local_20);
      if (cVar1 == '\0') {
        local_20 = 0xffffffffffffffff;
        FUN_1008e3970("","HostUtils",0,"Can\'t get value from CFNumberRef");
      }
      _CFRelease(lVar2);
      uVar3 = local_20;
    }
  }
  return uVar3;
}

