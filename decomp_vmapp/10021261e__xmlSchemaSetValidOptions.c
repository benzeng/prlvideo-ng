
undefined4 _xmlSchemaSetValidOptions(long param_1,int param_2)

{
  undefined4 local_28;
  int local_c;
  
  if (param_1 == 0) {
    local_28 = 0xffffffff;
  }
  else {
    for (local_c = 1; local_c < 0x20; local_c = local_c + 1) {
      if ((param_2 >> ((byte)local_c & 0x1f) & 1U) != 0) {
        return 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = param_2;
    local_28 = 0;
  }
  return local_28;
}

