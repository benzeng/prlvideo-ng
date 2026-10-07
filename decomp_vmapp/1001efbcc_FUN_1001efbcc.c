
int FUN_1001efbcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,int *param_6)

{
  int local_50;
  int local_c;
  
  if (((param_1 == 0) || (param_6 == (int *)0x0)) || (param_4 == 0)) {
    local_50 = -1;
  }
  else if (*param_6 == 1) {
    if (((uint)param_6[0x28] < 0x1e) && ((1L << ((byte)param_6[0x28] & 0x3f) & 0x20630000U) != 0)) {
      local_c = _xmlSchemaValPredefTypeNode(param_6,param_5,0,param_4);
      if (local_c < 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaPValAttrNodeValue",
                      "failed to validate a schema attribute value");
        local_50 = -1;
      }
      else {
        if (0 < local_c) {
          if (((uint)param_6[0x16] >> 6 & 1) == 0) {
            local_c = 0x720;
          }
          else {
            local_c = 0x721;
          }
          FUN_1001ea8df(param_1,local_c,param_3,param_4,param_6,0,param_5,0,0,0);
        }
        local_50 = local_c;
      }
    }
    else {
      FUN_1001e8d2a(param_1,"xmlSchemaPValAttrNodeValue",
                    "validation using the given type is not supported");
      local_50 = -1;
    }
  }
  else {
    FUN_1001e8d2a(param_1,"xmlSchemaPValAttrNodeValue","the given type is not a built-in type");
    local_50 = -1;
  }
  return local_50;
}

