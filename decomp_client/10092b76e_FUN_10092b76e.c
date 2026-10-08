
undefined4 * FUN_10092b76e(void)

{
  undefined4 *local_20;
  
  local_20 = (undefined4 *)(*(code *)_xmlMalloc)(0xd8);
  if (local_20 == (undefined4 *)0x0) {
    FUN_10091b97e(0,"allocating schema parser context",0);
    local_20 = (undefined4 *)0x0;
  }
  else {
    _memset(local_20,0,0xd8);
    *local_20 = 1;
  }
  return local_20;
}

