
undefined8 FUN_100dd6360(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0xffffffffffffffff;
  uVar3 = 0xffffffffffffffff;
  if ((int)param_1 != 0) {
    lVar2 = _IORegistryEntryCreateCFProperty
                      (param_1,&cf_PartitionID,*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0);
    if (lVar2 == 0) {
      FUN_100df99c0("","HostUtils",0,"GetPartitionID: CreateCFProperty cant get MediaSizeKey");
    }
    else {
      cVar1 = _CFNumberGetValue(lVar2,0xb,&local_20);
      if (cVar1 == '\0') {
        local_20 = 0xffffffffffffffff;
        FUN_100df99c0("","HostUtils",0,"GetPartitionID: Can\'t get value from CFNumberRef");
      }
      _CFRelease(lVar2);
      uVar3 = local_20;
    }
  }
  return uVar3;
}

