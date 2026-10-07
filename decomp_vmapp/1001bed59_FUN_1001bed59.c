
undefined4 * FUN_1001bed59(long param_1,int param_2)

{
  undefined4 *local_30;
  
  if (param_1 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else if (param_2 < 0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
    if (local_30 == (undefined4 *)0x0) {
      FUN_1001be879("allocating point");
      local_30 = (undefined4 *)0x0;
    }
    else {
      _memset(local_30,0,0x48);
      *local_30 = 5;
      *(long *)(local_30 + 10) = param_1;
      local_30[0xc] = param_2;
    }
  }
  return local_30;
}

