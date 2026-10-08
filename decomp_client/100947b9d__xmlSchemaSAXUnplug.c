
undefined4 _xmlSchemaSAXUnplug(int *param_1)

{
  undefined4 local_24;
  
  if ((param_1 == (int *)0x0) || (*param_1 != -0x23bc45df)) {
    local_24 = 0xffffffff;
  }
  else {
    *param_1 = 0;
    FUN_1009465b3(*(undefined8 *)(param_1 + 0x4a));
    **(undefined8 **)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
    if (*(long *)(param_1 + 4) != 0) {
      **(undefined8 **)(param_1 + 6) = *(undefined8 *)(param_1 + 8);
    }
    (*(code *)_xmlFree)(param_1);
    local_24 = 0;
  }
  return local_24;
}

