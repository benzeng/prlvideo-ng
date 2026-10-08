
undefined8 * FUN_10092b551(void)

{
  undefined8 *local_20;
  
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)(0x20);
  if (local_20 == (undefined8 *)0x0) {
    FUN_10091b97e(0,"allocating schema relation",0);
    local_20 = (undefined8 *)0x0;
  }
  else {
    *local_20 = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
  }
  return local_20;
}

