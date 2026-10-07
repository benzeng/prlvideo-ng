
long FUN_1001788b7(undefined8 param_1)

{
  long lVar1;
  undefined8 local_10;
  
  local_10 = FUN_1001787c6(param_1);
  if (local_10 == 0) {
    lVar1 = _xmlURIUnescapeString(param_1,0,0);
    if (lVar1 != 0) {
      local_10 = FUN_1001787c6(lVar1);
    }
    (*(code *)_xmlFree)(lVar1);
  }
  return local_10;
}

