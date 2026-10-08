
void FUN_10094007f(long param_1)

{
  if ((*(uint *)(param_1 + 0x40) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x40) >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10093dade(*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10093daab(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    _xmlRegFreeExecCtxt(*(xmlRegExecCtxtPtr *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}

