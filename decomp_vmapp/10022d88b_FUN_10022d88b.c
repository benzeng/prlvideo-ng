
void FUN_10022d88b(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 8));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _xmlFreeDoc(*(xmlDocPtr *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      _xmlRelaxNGFree(*(xmlRelaxNGPtr *)(param_1 + 0x20));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

