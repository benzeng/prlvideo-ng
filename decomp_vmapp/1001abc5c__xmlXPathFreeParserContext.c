
void _xmlXPathFreeParserContext(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x28) != 0) {
      _xmlFreePatternList(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28));
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28) = 0;
    }
    _xmlXPathFreeCompExpr(*(xmlXPathCompExprPtr *)(param_1 + 0x38));
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

