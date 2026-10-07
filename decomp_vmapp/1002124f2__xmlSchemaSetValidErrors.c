
void _xmlSchemaSetValidErrors(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(undefined8 *)(param_1 + 8) = param_4;
    if (*(long *)(param_1 + 0x98) != 0) {
      _xmlSchemaSetParserErrors(*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4);
    }
  }
  return;
}

