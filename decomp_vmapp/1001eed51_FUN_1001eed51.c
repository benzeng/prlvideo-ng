
void FUN_1001eed51(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1001eb0f1(*(undefined8 *)(param_1 + 8));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

