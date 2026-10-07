
undefined8 _xmlTextReaderCurrentNode(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    local_18 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x78);
  }
  return local_18;
}

