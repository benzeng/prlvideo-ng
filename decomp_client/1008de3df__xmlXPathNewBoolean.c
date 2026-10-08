
undefined4 * _xmlXPathNewBoolean(int param_1)

{
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_28 == (undefined4 *)0x0) {
    FUN_1008d87c3(0,"creating boolean object\n");
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x48);
    *local_28 = 2;
    local_28[4] = (uint)(param_1 != 0);
  }
  return local_28;
}

