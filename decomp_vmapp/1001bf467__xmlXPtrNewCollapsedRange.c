
undefined4 * _xmlXPtrNewCollapsedRange(long param_1)

{
  undefined4 *local_28;
  
  if (param_1 == 0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
    if (local_28 == (undefined4 *)0x0) {
      FUN_1001be879("allocating range");
      local_28 = (undefined4 *)0x0;
    }
    else {
      _memset(local_28,0,0x48);
      *local_28 = 6;
      *(long *)(local_28 + 10) = param_1;
      local_28[0xc] = 0xffffffff;
      *(undefined8 *)(local_28 + 0xe) = 0;
      local_28[0x10] = 0xffffffff;
    }
  }
  return local_28;
}

