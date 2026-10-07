
void FUN_1001f7c9e(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1001eb0f1(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1001eb0f1(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x28),FUN_1001eed51);
  }
  if (*(long *)(param_1 + 8) != 0) {
    _xmlDictFree(*(xmlDictPtr *)(param_1 + 8));
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

