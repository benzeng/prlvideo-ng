
void _xmlRelaxNGFree(xmlRelaxNGPtr schema)

{
  int local_c;
  
  if (schema != (xmlRelaxNGPtr)0x0) {
    if (*(long *)(schema + 8) != 0) {
      FUN_10022db8a(*(undefined8 *)(schema + 8));
    }
    if (*(long *)(schema + 0x10) != 0) {
      _xmlFreeDoc(*(xmlDocPtr *)(schema + 0x10));
    }
    if (*(long *)(schema + 0x30) != 0) {
      FUN_10022d858(*(undefined8 *)(schema + 0x30));
    }
    if (*(long *)(schema + 0x38) != 0) {
      FUN_10022d905(*(undefined8 *)(schema + 0x38));
    }
    if (*(long *)(schema + 0x48) != 0) {
      for (local_c = 0; local_c < *(int *)(schema + 0x40); local_c = local_c + 1) {
        FUN_10022def2(*(undefined8 *)(*(long *)(schema + 0x48) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(schema + 0x48));
    }
    (*(code *)_xmlFree)(schema);
  }
  return;
}

