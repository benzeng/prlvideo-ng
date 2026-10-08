
undefined4 _xmlTextReaderNextSibling(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    local_14 = 0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_14 = FUN_10095a172(param_1);
  }
  else if (*(long *)(*(long *)(param_1 + 0x70) + 0x30) == 0) {
    local_14 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x30);
    *(undefined4 *)(param_1 + 0x18) = 0;
    local_14 = 1;
  }
  return local_14;
}

