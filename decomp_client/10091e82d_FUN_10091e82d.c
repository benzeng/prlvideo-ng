
undefined8 * FUN_10091e82d(void)

{
  undefined8 *local_20;
  
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
  if (local_20 == (undefined8 *)0x0) {
    FUN_10091b97e(0,"allocating an item list structure",0);
    local_20 = (undefined8 *)0x0;
  }
  else {
    *local_20 = 0;
    local_20[1] = 0;
  }
  return local_20;
}

