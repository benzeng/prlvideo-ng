
long * _xmlXIncludeNewContext(long param_1)

{
  long *local_28;
  
  if (param_1 == 0) {
    local_28 = (long *)0x0;
  }
  else {
    local_28 = (long *)(*(code *)_xmlMalloc)(0x68);
    if (local_28 == (long *)0x0) {
      FUN_1001c3600(0,param_1,"creating XInclude context");
      local_28 = (long *)0x0;
    }
    else {
      _memset(local_28,0,0x68);
      *local_28 = param_1;
      *(undefined4 *)((long)local_28 + 0xc) = 0;
      *(undefined4 *)(local_28 + 1) = 0;
      *(undefined4 *)(local_28 + 2) = 0;
      local_28[3] = 0;
      *(undefined4 *)(local_28 + 10) = 0;
    }
  }
  return local_28;
}

