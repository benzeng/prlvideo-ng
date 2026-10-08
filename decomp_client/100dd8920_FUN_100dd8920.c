
undefined8 FUN_100dd8920(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  if (*param_1 == 0) {
    uVar5 = 0;
  }
  else {
    local_28 = 0;
    cVar2 = _CFDictionaryGetValueIfPresent(*param_1,param_2,&local_28);
    lVar1 = local_28;
    if ((cVar2 == '\0') || (local_28 == 0)) {
      uVar5 = 0;
    }
    else {
      lVar3 = _CFGetTypeID(local_28);
      lVar4 = _CFBooleanGetTypeID();
      if (lVar3 != lVar4) {
        FUN_100df99c0("","HostUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "CFGetTypeID(property) == CFBooleanGetTypeID()","MacRegistryHelpers.cpp",0xc1,
                      "getBoolean");
      }
      cVar2 = _CFBooleanGetValue(lVar1);
      *(bool *)param_3 = cVar2 != '\0';
      uVar5 = 1;
    }
  }
  return uVar5;
}

