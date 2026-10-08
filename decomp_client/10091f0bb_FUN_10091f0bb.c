
void FUN_10091f0bb(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10091ef26(*(undefined8 *)(param_1 + 0x30));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

