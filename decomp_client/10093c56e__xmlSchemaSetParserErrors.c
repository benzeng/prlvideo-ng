
void _xmlSchemaSetParserErrors
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(undefined8 *)(param_1 + 8) = param_4;
  }
  return;
}

