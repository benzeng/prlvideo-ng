
void _xmlFreeInputStream(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)_xmlFree)(param_1[1]);
    }
    if (param_1[2] != 0) {
      (*(code *)_xmlFree)(param_1[2]);
    }
    if (param_1[10] != 0) {
      (*(code *)_xmlFree)(param_1[10]);
    }
    if (param_1[0xb] != 0) {
      (*(code *)_xmlFree)(param_1[0xb]);
    }
    if ((param_1[9] != 0) && (param_1[3] != 0)) {
      (*(code *)param_1[9])(param_1[3]);
    }
    if (*param_1 != 0) {
      _xmlFreeParserInputBuffer((xmlParserInputBufferPtr)*param_1);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

