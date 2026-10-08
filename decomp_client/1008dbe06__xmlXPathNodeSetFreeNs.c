
void _xmlXPathNodeSetFreeNs(long *param_1)

{
  if ((((param_1 != (long *)0x0) && ((int)param_1[1] == 0x12)) && (*param_1 != 0)) &&
     (*(int *)(*param_1 + 8) != 0x12)) {
    if (param_1[2] != 0) {
      (*(code *)_xmlFree)(param_1[2]);
    }
    if (param_1[3] != 0) {
      (*(code *)_xmlFree)(param_1[3]);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

