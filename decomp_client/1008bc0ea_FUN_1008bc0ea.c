
void FUN_1008bc0ea(xmlLinkPtr param_1)

{
  void *pvVar1;
  
  pvVar1 = _xmlLinkGetData(param_1);
  if (pvVar1 != (void *)0x0) {
    if (*(long *)((long)pvVar1 + 8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)((long)pvVar1 + 8));
    }
    if (*(long *)((long)pvVar1 + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)((long)pvVar1 + 0x18));
    }
    (*(code *)_xmlFree)(pvVar1);
  }
  return;
}

