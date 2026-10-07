
void FUN_1001eb793(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 0x30));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

