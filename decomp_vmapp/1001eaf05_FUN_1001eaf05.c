
undefined8 * FUN_1001eaf05(void)

{
  undefined8 *local_20;
  
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
  if (local_20 == (undefined8 *)0x0) {
    FUN_1001e8056(0,"allocating an item list structure",0);
    local_20 = (undefined8 *)0x0;
  }
  else {
    *local_20 = 0;
    local_20[1] = 0;
  }
  return local_20;
}

