
undefined4 * _xmlXPtrWrapLocationSet(undefined8 param_1)

{
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_28 == (undefined4 *)0x0) {
    FUN_1008f21a1("allocating locationset");
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x48);
    *local_28 = 7;
    *(undefined8 *)(local_28 + 10) = param_1;
  }
  return local_28;
}

