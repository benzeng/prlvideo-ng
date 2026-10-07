
undefined4 _xmlTextReaderIsNamespaceDecl(long param_1)

{
  undefined4 local_24;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_24 = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_10 = *(long *)(param_1 + 0x70);
    }
    else {
      local_10 = *(long *)(param_1 + 0x78);
    }
    if (*(int *)(local_10 + 8) == 0x12) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
  }
  return local_24;
}

