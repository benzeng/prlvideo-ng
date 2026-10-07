
undefined4 * _xmlXPathNewFloat(undefined8 param_1)

{
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_28 == (undefined4 *)0x0) {
    FUN_1001a4e9b(0,"creating float object\n");
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x48);
    *local_28 = 3;
    *(undefined8 *)(local_28 + 6) = param_1;
  }
  return local_28;
}

