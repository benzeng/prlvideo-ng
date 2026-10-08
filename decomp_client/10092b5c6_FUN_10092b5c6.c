
void FUN_10092b5c6(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10091ea19(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10091ea19(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x28),FUN_100922679);
  }
  if (*(long *)(param_1 + 8) != 0) {
    _xmlDictFree(*(xmlDictPtr *)(param_1 + 8));
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

