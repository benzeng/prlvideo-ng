
undefined4 * _xmlXPtrNewRange(long param_1,int param_2,long param_3,int param_4)

{
  undefined4 *local_40;
  
  if (param_1 == 0) {
    local_40 = (undefined4 *)0x0;
  }
  else if (param_3 == 0) {
    local_40 = (undefined4 *)0x0;
  }
  else if (param_2 < 0) {
    local_40 = (undefined4 *)0x0;
  }
  else if (param_4 < 0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
    if (local_40 == (undefined4 *)0x0) {
      FUN_1008f21a1("allocating range");
      local_40 = (undefined4 *)0x0;
    }
    else {
      _memset(local_40,0,0x48);
      *local_40 = 6;
      *(long *)(local_40 + 10) = param_1;
      local_40[0xc] = param_2;
      *(long *)(local_40 + 0xe) = param_3;
      local_40[0x10] = param_4;
      FUN_1008f272a(local_40);
    }
  }
  return local_40;
}

