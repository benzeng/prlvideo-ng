
uint _xmlTextReaderIsValid(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x10) == 2) {
    local_14 = (uint)(*(int *)(param_1 + 0xe0) == 0);
  }
  else if (*(int *)(param_1 + 0x10) == 4) {
    local_14 = (uint)(*(int *)(param_1 + 0x100) == 0);
  }
  else if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 0x9c) != 1)) {
    local_14 = 0;
  }
  else {
    local_14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x98);
  }
  return local_14;
}

