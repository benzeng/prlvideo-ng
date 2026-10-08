
void FUN_100922679(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_10091ea19(*(undefined8 *)(param_1 + 8));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

