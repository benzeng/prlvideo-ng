
int FUN_100203259(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int local_44;
  int local_c;
  
  if (((((*param_3 == 5) || (param_3[0x28] == 0x2d)) && (param_3[0x17] != 4)) &&
      (param_3[0x17] != 6)) &&
     ((param_3[0x17] != 3 || (iVar1 = FUN_100201987(*(undefined8 *)(param_3 + 0xe)), iVar1 == 0))))
  {
    FUN_1001ea46a(param_1,0xbf3,0,param_3,*(undefined8 *)(param_3 + 0x12),
                  "For a string to be a valid default, the type definition must be a simple type or a complex type with mixed content and a particle emptiable"
                  ,0);
    local_44 = 0xbf3;
  }
  else {
    if ((*param_3 == 4) || ((*param_3 == 1 && (param_3[0x28] != 0x2d)))) {
      local_c = FUN_10020d3ad(param_1,param_2,param_3,param_4,param_5,1,1,0);
    }
    else {
      if ((param_3[0x17] != 4) && (param_3[0x17] != 6)) {
        return 0;
      }
      local_c = FUN_10020d3ad(param_1,param_2,*(undefined8 *)(param_3 + 0x30),param_4,param_5,1,1,0)
      ;
    }
    if (local_c < 0) {
      FUN_1001e8d2a(param_1,"xmlSchemaParseCheckCOSValidDefault",
                    "calling xmlSchemaVCheckCVCSimpleType()");
    }
    local_44 = local_c;
  }
  return local_44;
}

