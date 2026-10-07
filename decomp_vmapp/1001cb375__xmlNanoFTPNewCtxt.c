
void * _xmlNanoFTPNewCtxt(long param_1)

{
  long lVar1;
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x4d8);
  if (local_28 == (void *)0x0) {
    FUN_1001cabbe("allocating FTP context");
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x4d8);
    *(undefined4 *)((long)local_28 + 0x10) = 0x15;
    *(undefined4 *)((long)local_28 + 0xb0) = 1;
    *(undefined4 *)((long)local_28 + 0xc0) = 0;
    *(undefined4 *)((long)local_28 + 0x4c8) = 0;
    *(undefined4 *)((long)local_28 + 0x4cc) = 0;
    *(undefined4 *)((long)local_28 + 0xb4) = 0xffffffff;
    lVar1 = _xmlURIUnescapeString(param_1,0,0);
    if (lVar1 == 0) {
      if (param_1 != 0) {
        FUN_1001cae7f(local_28,param_1);
      }
    }
    else {
      FUN_1001cae7f(local_28,lVar1);
      (*(code *)_xmlFree)(lVar1);
    }
  }
  return local_28;
}

