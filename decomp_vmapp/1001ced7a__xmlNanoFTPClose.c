
undefined4 _xmlNanoFTPClose(long param_1)

{
  undefined4 local_24;
  
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    if (-1 < *(int *)(param_1 + 0xb8)) {
      _close(*(int *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    }
    if (-1 < *(int *)(param_1 + 0xb4)) {
      _xmlNanoFTPQuit(param_1);
      _close(*(int *)(param_1 + 0xb4));
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    }
    _xmlNanoFTPFreeCtxt(param_1);
    local_24 = 0;
  }
  return local_24;
}

