
long _xmlParseURIRaw(long param_1,int param_2)

{
  int iVar1;
  undefined8 local_30;
  
  if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = _xmlCreateURI();
    if (local_30 != 0) {
      if (param_2 != 0) {
        *(uint *)(local_30 + 0x48) = *(uint *)(local_30 + 0x48) | 2;
      }
      iVar1 = _xmlParseURIReference(local_30,param_1);
      if (iVar1 != 0) {
        _xmlFreeURI(local_30);
        local_30 = 0;
      }
    }
  }
  return local_30;
}

