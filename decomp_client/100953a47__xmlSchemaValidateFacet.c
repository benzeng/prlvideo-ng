
undefined4
_xmlSchemaValidateFacet(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 local_2c;
  
  if (param_4 == (undefined4 *)0x0) {
    if (param_1 == 0) {
      local_2c = 0xffffffff;
    }
    else {
      local_2c = FUN_10095339d(param_2,0,*(undefined4 *)(param_1 + 0xa0),param_3,0,0);
    }
  }
  else {
    local_2c = FUN_10095339d(param_2,0,*param_4,param_3,param_4,0);
  }
  return local_2c;
}

