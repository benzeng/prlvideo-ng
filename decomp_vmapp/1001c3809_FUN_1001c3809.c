
void FUN_1001c3809(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[2] != 0) {
      _xmlFreeDoc((xmlDocPtr)param_1[2]);
    }
    if (*param_1 != 0) {
      (*(code *)_xmlFree)(*param_1);
    }
    if (param_1[1] != 0) {
      (*(code *)_xmlFree)(param_1[1]);
    }
    if (param_1[6] != 0) {
      _xmlXPathFreeObject((xmlXPathObjectPtr)param_1[6]);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

