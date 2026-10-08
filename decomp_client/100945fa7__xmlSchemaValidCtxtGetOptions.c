
undefined4 _xmlSchemaValidCtxtGetOptions(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = *(undefined4 *)(param_1 + 0x8c);
  }
  return local_14;
}

