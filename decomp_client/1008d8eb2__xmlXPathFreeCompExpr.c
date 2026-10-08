
void _xmlXPathFreeCompExpr(xmlXPathCompExprPtr comp)

{
  int *piVar1;
  int local_c;
  
  if (comp != (xmlXPathCompExprPtr)0x0) {
    if (*(long *)(comp + 0x20) == 0) {
      for (local_c = 0; local_c < *(int *)comp; local_c = local_c + 1) {
        piVar1 = (int *)(*(long *)(comp + 8) + (long)local_c * 0x38);
        if (*(long *)(piVar1 + 6) != 0) {
          if (*piVar1 == 0xc) {
            _xmlXPathFreeObject(*(xmlXPathObjectPtr *)(piVar1 + 6));
          }
          else {
            (*(code *)_xmlFree)(*(undefined8 *)(piVar1 + 6));
          }
        }
        if (*(long *)(piVar1 + 8) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(piVar1 + 8));
        }
      }
    }
    else {
      for (local_c = 0; local_c < *(int *)comp; local_c = local_c + 1) {
        piVar1 = (int *)(*(long *)(comp + 8) + (long)local_c * 0x38);
        if ((*(long *)(piVar1 + 6) != 0) && (*piVar1 == 0xc)) {
          _xmlXPathFreeObject(*(xmlXPathObjectPtr *)(piVar1 + 6));
        }
      }
      _xmlDictFree(*(xmlDictPtr *)(comp + 0x20));
    }
    if (*(long *)(comp + 8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(comp + 8));
    }
    if (*(long *)(comp + 0x28) != 0) {
      _xmlFreePatternList(*(undefined8 *)(comp + 0x28));
    }
    if (*(long *)(comp + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(comp + 0x18));
    }
    (*(code *)_xmlFree)(comp);
  }
  return;
}

