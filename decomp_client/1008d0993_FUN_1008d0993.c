
void FUN_1008d0993(xmlOutputBufferPtr param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x50);
  if (lVar1 == 0) {
    FUN_1008d04a0(0x57a,param_2,0);
  }
  else {
    _xmlOutputBufferWriteString(param_1,"<!DOCTYPE ");
    _xmlOutputBufferWriteString(param_1,*(char **)(lVar1 + 0x10));
    if (*(long *)(lVar1 + 0x68) == 0) {
      if (*(long *)(lVar1 + 0x70) != 0) {
        _xmlOutputBufferWriteString(param_1," SYSTEM ");
        _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,*(xmlChar **)(lVar1 + 0x70));
      }
    }
    else {
      _xmlOutputBufferWriteString(param_1," PUBLIC ");
      _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,*(xmlChar **)(lVar1 + 0x68));
      if (*(long *)(lVar1 + 0x70) != 0) {
        _xmlOutputBufferWriteString(param_1," ");
        _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,*(xmlChar **)(lVar1 + 0x70));
      }
    }
    _xmlOutputBufferWriteString(param_1,">\n");
  }
  return;
}

