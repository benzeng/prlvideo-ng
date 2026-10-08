
void FUN_10098272a(xmlOutputBufferPtr param_1,long param_2)

{
  int iVar1;
  
  if ((((param_2 != 0) && (param_1 != (xmlOutputBufferPtr)0x0)) && (*(int *)(param_2 + 8) == 0x12))
     && (*(long *)(param_2 + 0x10) != 0)) {
    iVar1 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x18),(xmlChar *)"xml");
    if (iVar1 == 0) {
      if (*(long *)(param_2 + 0x18) == 0) {
        _xmlOutputBufferWrite(param_1,6," xmlns");
      }
      else {
        _xmlOutputBufferWrite(param_1,7," xmlns:");
        _xmlOutputBufferWriteString(param_1,*(char **)(param_2 + 0x18));
      }
      _xmlOutputBufferWrite(param_1,1,"=");
      _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,*(xmlChar **)(param_2 + 0x10));
    }
  }
  return;
}

