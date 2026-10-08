
int _xmlSaveFlush(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = -1;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    local_14 = -1;
  }
  else {
    local_14 = _xmlOutputBufferFlush(*(xmlOutputBufferPtr *)(param_1 + 0x28));
  }
  return local_14;
}

