
void FUN_1009824d3(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      _xmlOutputBufferClose(*(xmlOutputBufferPtr *)(param_1 + 0x28));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

