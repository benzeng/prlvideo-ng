
void _xmlSchemaFreeType(int *param_1)

{
  long lVar1;
  long *plVar2;
  long local_28;
  long *local_10;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 0xc) != 0) {
      FUN_10091ef26(*(undefined8 *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 0x1e) != 0) {
      local_28 = *(long *)(param_1 + 0x1e);
      while (local_28 != 0) {
        lVar1 = *(long *)(local_28 + 8);
        _xmlSchemaFreeFacet(local_28);
        local_28 = lVar1;
      }
    }
    if ((*param_1 != 1) && (*(long *)(param_1 + 0x24) != 0)) {
      FUN_10091f0fa(*(undefined8 *)(param_1 + 0x24));
    }
    if (*(long *)(param_1 + 0x2a) != 0) {
      FUN_10091f152(*(undefined8 *)(param_1 + 0x2a));
    }
    if (*(long *)(param_1 + 0x2c) != 0) {
      local_10 = *(long **)(param_1 + 0x2c);
      do {
        plVar2 = (long *)*local_10;
        (*(code *)_xmlFree)(local_10);
        local_10 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
    if (*(long *)(param_1 + 0x32) != 0) {
      _xmlRegFreeRegexp(*(xmlRegexpPtr *)(param_1 + 0x32));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

