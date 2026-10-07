
void * FUN_1001d8a16(undefined8 param_1,undefined4 param_2)

{
  void *local_30;
  
  local_30 = (void *)(*(code *)_xmlMalloc)(0x58);
  if (local_30 == (void *)0x0) {
    FUN_1001d7cf4(param_1,"allocating atom");
    local_30 = (void *)0x0;
  }
  else {
    _memset(local_30,0,0x58);
    *(undefined4 *)((long)local_30 + 4) = param_2;
    *(undefined4 *)((long)local_30 + 8) = 2;
    *(undefined4 *)((long)local_30 + 0xc) = 0;
    *(undefined4 *)((long)local_30 + 0x10) = 0;
  }
  return local_30;
}

