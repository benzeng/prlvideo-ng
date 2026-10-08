
undefined8 _xmlTextReaderCurrentDoc(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    if (((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
       (*(long *)(*(long *)(param_1 + 0x20) + 0x10) == 0)) {
      local_18 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 1;
      local_18 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 8);
  }
  return local_18;
}

