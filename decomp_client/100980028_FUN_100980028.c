
void FUN_100980028(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[2] != 0) {
      (*(code *)_xmlFree)(param_1[2]);
    }
    if (*param_1 != 0) {
      _xmlDictFree((xmlDictPtr)*param_1);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

