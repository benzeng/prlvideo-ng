
void FUN_1001eb135(int *param_1)

{
  long *plVar1;
  long *local_10;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1001ebc95(*(undefined8 *)(param_1 + 0x10));
      FUN_1001eb0f1(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x12) != 0) {
      FUN_1001ebc95(*(undefined8 *)(param_1 + 0x12));
      FUN_1001eb0f1(*(undefined8 *)(param_1 + 0x12));
    }
    if (*(long *)(param_1 + 10) != 0) {
      local_10 = *(long **)(param_1 + 10);
      do {
        plVar1 = (long *)*local_10;
        (*(code *)_xmlFree)(local_10);
        local_10 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
    if ((param_1[0xf] == 0) && (*(long *)(param_1 + 8) != 0)) {
      _xmlFreeDoc(*(xmlDocPtr *)(param_1 + 8));
    }
    if ((*param_1 == 1) && (*(long *)(param_1 + 0x14) != 0)) {
      _xmlSchemaFree(*(undefined8 *)(param_1 + 0x14));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

