
void FUN_1001ebc5e(long param_1)

{
  long lVar1;
  undefined8 local_20;
  
  local_20 = param_1;
  while (local_20 != 0) {
    lVar1 = *(long *)(local_20 + 0x80);
    _xmlSchemaFreeType(local_20);
    local_20 = lVar1;
  }
  return;
}

