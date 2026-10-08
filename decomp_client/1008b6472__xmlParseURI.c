
long _xmlParseURI(long param_1)

{
  int iVar1;
  long local_28;
  
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = _xmlCreateURI();
    if ((local_28 != 0) && (iVar1 = _xmlParseURIReference(local_28,param_1), iVar1 != 0)) {
      _xmlFreeURI(local_28);
      local_28 = 0;
    }
  }
  return local_28;
}

