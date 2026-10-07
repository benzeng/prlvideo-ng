
void _xmlRegFreeRegexp(xmlRegexpPtr regexp)

{
  int local_c;
  
  if (regexp != (xmlRegexpPtr)0x0) {
    if (*(long *)regexp != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)regexp);
    }
    if (*(long *)(regexp + 0x10) != 0) {
      for (local_c = 0; local_c < *(int *)(regexp + 8); local_c = local_c + 1) {
        FUN_1001d8c32(*(undefined8 *)(*(long *)(regexp + 0x10) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(regexp + 0x10));
    }
    if (*(long *)(regexp + 0x20) != 0) {
      for (local_c = 0; local_c < *(int *)(regexp + 0x18); local_c = local_c + 1) {
        FUN_1001d8aaa(*(undefined8 *)(*(long *)(regexp + 0x20) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(regexp + 0x20));
    }
    if (*(long *)(regexp + 0x30) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(regexp + 0x30));
    }
    if (*(long *)(regexp + 0x40) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(regexp + 0x40));
    }
    if (*(long *)(regexp + 0x48) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(regexp + 0x48));
    }
    if (*(long *)(regexp + 0x58) != 0) {
      for (local_c = 0; local_c < *(int *)(regexp + 0x50); local_c = local_c + 1) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(regexp + 0x58) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(regexp + 0x58));
    }
    (*(code *)_xmlFree)(regexp);
  }
  return;
}

