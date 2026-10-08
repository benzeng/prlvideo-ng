
undefined4
_xmlSchemaGetParserErrors(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 local_2c;
  
  if (param_1 == 0) {
    local_2c = 0xffffffff;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x10);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x18);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(param_1 + 8);
    }
    local_2c = 0;
  }
  return local_2c;
}

