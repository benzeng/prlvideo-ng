
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void FUN_100983424(long param_1,xmlDocPtr param_2)

{
  xmlChar *pxVar1;
  xmlOutputBufferPtr out;
  xmlDtdPtr pxVar2;
  int local_2c;
  xmlChar *local_20;
  _xmlNode *local_10;
  
  local_2c = 0;
  pxVar1 = param_2->encoding;
  local_20 = *(xmlChar **)(param_1 + 0x18);
  _xmlInitParser();
  if (*(long *)(param_1 + 0x18) != 0) {
    param_2->encoding = *(xmlChar **)(param_1 + 0x18);
  }
  out = *(xmlOutputBufferPtr *)(param_1 + 0x28);
  if (((*(uint *)(param_1 + 0x38) >> 1 ^ 1) & 1) != 0) {
    _xmlOutputBufferWrite(out,0xe,"<?xml version=");
    if (param_2->version == (xmlChar *)0x0) {
      _xmlOutputBufferWrite(out,5,"\"1.0\"");
    }
    else {
      _xmlBufferWriteQuotedString((xmlBufferPtr)out->buffer,param_2->version);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      if (param_2->encoding == (xmlChar *)0x0) {
        if (param_2->charset != 1) {
          local_20 = (xmlChar *)_xmlGetCharEncodingName(param_2->charset);
        }
      }
      else {
        local_20 = param_2->encoding;
      }
    }
    if (local_20 != (xmlChar *)0x0) {
      _xmlOutputBufferWrite(out,10," encoding=");
      _xmlBufferWriteQuotedString((xmlBufferPtr)out->buffer,local_20);
    }
    if (param_2->standalone == 0) {
      _xmlOutputBufferWrite(out,0x10," standalone=\"no\"");
    }
    else if (param_2->standalone == 1) {
      _xmlOutputBufferWrite(out,0x11," standalone=\"yes\"");
    }
    _xmlOutputBufferWrite(out,3,"?>\n");
  }
  if (((((*(uint *)(param_1 + 0x38) >> 3 ^ 1) & 1) != 0) &&
      (pxVar2 = _xmlGetIntSubset(param_2), pxVar2 != (xmlDtdPtr)0x0)) &&
     (local_2c = _xmlIsXHTML(pxVar2->SystemID,pxVar2->ExternalID), local_2c < 0)) {
    local_2c = 0;
  }
  if (param_2->children != (_xmlNode *)0x0) {
    for (local_10 = param_2->children; local_10 != (_xmlNode *)0x0; local_10 = local_10->next) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (local_2c == 0) {
        FUN_100982c7d(param_1,local_10);
      }
      else {
        FUN_100983e95(param_1,local_10);
      }
      _xmlOutputBufferWrite(out,1,"\n");
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    param_2->encoding = pxVar1;
  }
  return;
}

