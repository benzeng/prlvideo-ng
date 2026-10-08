
void FUN_10086b83d(xmlBufferPtr param_1,xmlChar *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  int iVar3;
  xmlChar *local_18;
  xmlChar *local_10;
  
  if (param_1->alloc != XML_BUFFER_ALLOC_IMMUTABLE) {
    pxVar2 = _xmlStrchr(param_2,'%');
    if (pxVar2 == (xmlChar *)0x0) {
      _xmlBufferWriteQuotedString(param_1,param_2);
    }
    else {
      _xmlBufferCCat(param_1,"\"");
      local_18 = param_2;
      local_10 = param_2;
      while (iVar1 = (int)local_18, iVar3 = (int)local_10, *local_10 != '\0') {
        if (*local_10 == '\"') {
          if (local_18 != local_10) {
            _xmlBufferAdd(param_1,local_18,iVar3 - iVar1);
          }
          _xmlBufferAdd(param_1,(xmlChar *)"&quot;",6);
          local_18 = local_10 + 1;
          local_10 = local_18;
        }
        else if (*local_10 == '%') {
          if (local_18 != local_10) {
            _xmlBufferAdd(param_1,local_18,iVar3 - iVar1);
          }
          _xmlBufferAdd(param_1,(xmlChar *)"&#x25;",6);
          local_18 = local_10 + 1;
          local_10 = local_18;
        }
        else {
          local_10 = local_10 + 1;
        }
      }
      if (local_18 != local_10) {
        _xmlBufferAdd(param_1,local_18,iVar3 - iVar1);
      }
      _xmlBufferCCat(param_1,"\"");
    }
  }
  return;
}

