
void FUN_10022def2(int *param_1)

{
  long lVar1;
  
  if (param_1 != (int *)0x0) {
    if ((((*param_1 == 7) && (*(long *)(param_1 + 0x12) != 0)) &&
        (lVar1 = *(long *)(param_1 + 10), lVar1 != 0)) && (*(long *)(lVar1 + 0x30) != 0)) {
      (**(code **)(lVar1 + 0x30))(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x12));
    }
    if ((*(long *)(param_1 + 10) != 0) && (*param_1 == 0x13)) {
      FUN_10022ddf2(*(undefined8 *)(param_1 + 10));
    }
    if ((*(long *)(param_1 + 10) != 0) && (*param_1 == 0x11)) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 10),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 4) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 6) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 6));
    }
    if (*(long *)(param_1 + 8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 8));
    }
    if (*(long *)(param_1 + 0x1a) != 0) {
      _xmlRegFreeRegexp(*(xmlRegexpPtr *)(param_1 + 0x1a));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

