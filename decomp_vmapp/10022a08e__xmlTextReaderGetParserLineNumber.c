
undefined4 _xmlTextReaderGetParserLineNumber(long param_1)

{
  undefined4 local_14;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x20) + 0x38) == 0)) {
    local_14 = 0;
  }
  else {
    local_14 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x38) + 0x34);
  }
  return local_14;
}

