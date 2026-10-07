
bool FUN_1007880e0(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    FUN_1008e3970("","HostUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","isValid()",
                  "MacRegistryHelpers.cpp",0x6f,"contains");
    lVar2 = *param_1;
  }
  cVar1 = _CFDictionaryContainsKey(lVar2,param_2);
  return cVar1 != '\0';
}

