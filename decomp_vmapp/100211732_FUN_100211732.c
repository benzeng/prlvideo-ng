
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void FUN_100211732(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((-1 < *(int *)(param_1 + 0xa4)) &&
     ((*(int *)(param_1 + 0x120) == -1 || (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x120)))))
  {
    if ((*(uint *)(*(long *)(param_1 + 0xb8) + 0x40) >> 5 & 1) != 0) {
      *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
           *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) ^ 0x20;
    }
    iVar1 = FUN_100210f36(param_1,3,param_2,param_3,3,0);
    if (iVar1 == -1) {
      FUN_1001e8d2a(param_1,"xmlSchemaSAXHandleCDataSection","calling xmlSchemaVPushText()");
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      _xmlStopParser(*(xmlParserCtxtPtr *)(param_1 + 0x50));
    }
  }
  return;
}

