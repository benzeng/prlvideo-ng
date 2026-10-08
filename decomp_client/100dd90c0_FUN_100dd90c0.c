
bool FUN_100dd90c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long local_20;
  
  if (*param_1 == 0) {
    bVar4 = false;
  }
  else {
    local_20 = 0;
    cVar2 = _CFDictionaryGetValueIfPresent(*param_1,param_2,&local_20);
    lVar1 = local_20;
    if ((cVar2 == '\0') || (local_20 == 0)) {
      bVar4 = false;
    }
    else {
      lVar3 = _CFNumberGetByteSize(local_20);
      if (lVar3 != 4) {
        FUN_100df99c0("","HostUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "CFNumberGetByteSize((CFNumberRef)property) == sizeof(value)",
                      "MacRegistryHelpers.cpp",0x9d,"readInteger");
      }
      cVar2 = _CFNumberGetValue(lVar1,3,param_3);
      bVar4 = cVar2 != '\0';
    }
  }
  return bVar4;
}

