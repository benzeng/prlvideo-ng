
void _xmlBufferWriteQuotedString(xmlBufferPtr buf,xmlChar *string)

{
  xmlChar *pxVar1;
  xmlChar *local_18;
  xmlChar *local_10;
  
  if ((buf != (xmlBufferPtr)0x0) && (buf->alloc != XML_BUFFER_ALLOC_IMMUTABLE)) {
    pxVar1 = _xmlStrchr(string,'\"');
    if (pxVar1 == (xmlChar *)0x0) {
      _xmlBufferCCat(buf,"\"");
      _xmlBufferCat(buf,string);
      _xmlBufferCCat(buf,"\"");
    }
    else {
      pxVar1 = _xmlStrchr(string,'\'');
      if (pxVar1 == (xmlChar *)0x0) {
        _xmlBufferCCat(buf,"\'");
        _xmlBufferCat(buf,string);
        _xmlBufferCCat(buf,"\'");
      }
      else {
        _xmlBufferCCat(buf,"\"");
        local_18 = string;
        local_10 = string;
        while (*local_18 != '\0') {
          if (*local_18 == '\"') {
            if (local_10 != local_18) {
              _xmlBufferAdd(buf,local_10,(int)local_18 - (int)local_10);
            }
            _xmlBufferAdd(buf,(xmlChar *)"&quot;",6);
            local_18 = local_18 + 1;
            local_10 = local_18;
          }
          else {
            local_18 = local_18 + 1;
          }
        }
        if (local_10 != local_18) {
          _xmlBufferAdd(buf,local_10,(int)local_18 - (int)local_10);
        }
        _xmlBufferCCat(buf,"\"");
      }
    }
  }
  return;
}

