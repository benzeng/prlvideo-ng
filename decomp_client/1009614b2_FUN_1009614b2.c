
void FUN_1009614b2(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1009614b2(*(undefined8 *)(param_1 + 8));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1009614b2(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x38),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x30),(xmlHashDeallocator)0x0);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

