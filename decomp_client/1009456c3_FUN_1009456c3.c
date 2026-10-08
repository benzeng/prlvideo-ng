
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void FUN_1009456c3(long param_1,xmlChar *param_2,undefined8 param_3,xmlChar *param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x120) != -1) {
    if (*(int *)(param_1 + 0x120) < *(int *)(param_1 + 0xa4)) {
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + -1;
      return;
    }
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0xb8) + 0x18),param_2);
  if ((iVar1 == 0) ||
     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0xb8) + 0x20),param_4), iVar1 == 0)) {
    FUN_10091c652(param_1,"xmlSchemaSAXHandleEndElementNs","elem pop mismatch");
  }
  iVar1 = FUN_100943796(param_1);
  if ((iVar1 != 0) && (iVar1 < 0)) {
    FUN_10091c652(param_1,"xmlSchemaSAXHandleEndElementNs","calling xmlSchemaValidatorPopElem()");
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    _xmlStopParser(*(xmlParserCtxtPtr *)(param_1 + 0x50));
  }
  return;
}

