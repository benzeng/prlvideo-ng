
int _xmlRegexpIsDeterminist(xmlRegexpPtr comp)

{
  xmlAutomataPtr am;
  int local_24;
  int local_c;
  
  if (comp == (xmlRegexpPtr)0x0) {
    local_24 = -1;
  }
  else if (*(int *)(comp + 0x38) == -1) {
    am = _xmlNewAutomata();
    if (*(long *)(am + 0x50) != 0) {
      for (local_c = 0; local_c < *(int *)(am + 0x4c); local_c = local_c + 1) {
        FUN_1001d8c32(*(undefined8 *)(*(long *)(am + 0x50) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(am + 0x50));
    }
    *(undefined4 *)(am + 0x3c) = *(undefined4 *)(comp + 0x18);
    *(undefined8 *)(am + 0x40) = *(undefined8 *)(comp + 0x20);
    *(undefined4 *)(am + 0x4c) = *(undefined4 *)(comp + 8);
    *(undefined8 *)(am + 0x50) = *(undefined8 *)(comp + 0x10);
    *(undefined4 *)(am + 0x68) = 0xffffffff;
    local_24 = FUN_1001db940(am);
    *(undefined8 *)(am + 0x40) = 0;
    *(undefined8 *)(am + 0x50) = 0;
    _xmlFreeAutomata(am);
  }
  else {
    local_24 = *(int *)(comp + 0x38);
  }
  return local_24;
}

