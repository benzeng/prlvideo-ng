
void _xmlXPathRegisterFuncLookup(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = param_2;
    *(undefined8 *)(param_1 + 0xc0) = param_3;
  }
  return;
}

