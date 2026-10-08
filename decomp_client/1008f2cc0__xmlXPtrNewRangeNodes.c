
undefined4 * _xmlXPtrNewRangeNodes(long param_1,long param_2)

{
  undefined4 *local_30;
  
  if (param_1 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else if (param_2 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
    if (local_30 == (undefined4 *)0x0) {
      FUN_1008f21a1("allocating range");
      local_30 = (undefined4 *)0x0;
    }
    else {
      _memset(local_30,0,0x48);
      *local_30 = 6;
      *(long *)(local_30 + 10) = param_1;
      local_30[0xc] = 0xffffffff;
      *(long *)(local_30 + 0xe) = param_2;
      local_30[0x10] = 0xffffffff;
      FUN_1008f272a(local_30);
    }
  }
  return local_30;
}

