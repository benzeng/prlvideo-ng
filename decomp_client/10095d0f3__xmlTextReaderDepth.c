
int _xmlTextReaderDepth(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = -1;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_14 = 0;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    local_14 = *(int *)(param_1 + 0x80);
  }
  else if ((*(int *)(*(long *)(param_1 + 0x78) + 8) == 2) ||
          (*(int *)(*(long *)(param_1 + 0x78) + 8) == 0x12)) {
    local_14 = *(int *)(param_1 + 0x80) + 1;
  }
  else {
    local_14 = *(int *)(param_1 + 0x80) + 2;
  }
  return local_14;
}

