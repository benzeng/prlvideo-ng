
void * FUN_1001c81d9(undefined8 param_1)

{
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x98);
  if (local_28 == (void *)0x0) {
    FUN_1001c7d96("allocating context");
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x98);
    *(undefined4 *)((long)local_28 + 0x10) = 0x50;
    *(undefined4 *)((long)local_28 + 0x68) = 0;
    *(undefined4 *)((long)local_28 + 0x28) = 0xffffffff;
    *(undefined4 *)((long)local_28 + 0x6c) = 0xffffffff;
    FUN_1001c7ef7(local_28,param_1);
  }
  return local_28;
}

