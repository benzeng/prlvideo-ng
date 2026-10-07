
void * _xmlNewInputStream(undefined8 param_1)

{
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x68);
  if (local_28 == (void *)0x0) {
    _xmlErrMemory(param_1,"couldn\'t allocate a new input stream\n");
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x68);
    *(undefined4 *)((long)local_28 + 0x34) = 1;
    *(undefined4 *)((long)local_28 + 0x38) = 1;
    *(undefined4 *)((long)local_28 + 0x60) = 0xffffffff;
    *(int *)((long)local_28 + 100) = DAT_1011b76fc;
    DAT_1011b76fc = DAT_1011b76fc + 1;
  }
  return local_28;
}

