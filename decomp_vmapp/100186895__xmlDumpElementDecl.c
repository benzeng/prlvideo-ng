
void _xmlDumpElementDecl(xmlBufferPtr buf,xmlElementPtr elem)

{
  xmlElementTypeVal xVar1;
  
  if ((buf != (xmlBufferPtr)0x0) && (elem != (xmlElementPtr)0x0)) {
    xVar1 = elem->etype;
    if (xVar1 == XML_ELEMENT_TYPE_ANY) {
      _xmlBufferWriteChar(buf,"<!ELEMENT ");
      if (elem->prefix != (xmlChar *)0x0) {
        _xmlBufferWriteCHAR(buf,elem->prefix);
        _xmlBufferWriteChar(buf,":");
      }
      _xmlBufferWriteCHAR(buf,elem->name);
      _xmlBufferWriteChar(buf," ANY>\n");
    }
    else {
      if (xVar1 < XML_ELEMENT_TYPE_MIXED) {
        if (xVar1 == XML_ELEMENT_TYPE_EMPTY) {
          _xmlBufferWriteChar(buf,"<!ELEMENT ");
          if (elem->prefix != (xmlChar *)0x0) {
            _xmlBufferWriteCHAR(buf,elem->prefix);
            _xmlBufferWriteChar(buf,":");
          }
          _xmlBufferWriteCHAR(buf,elem->name);
          _xmlBufferWriteChar(buf," EMPTY>\n");
          return;
        }
      }
      else {
        if (xVar1 == XML_ELEMENT_TYPE_MIXED) {
          _xmlBufferWriteChar(buf,"<!ELEMENT ");
          if (elem->prefix != (xmlChar *)0x0) {
            _xmlBufferWriteCHAR(buf,elem->prefix);
            _xmlBufferWriteChar(buf,":");
          }
          _xmlBufferWriteCHAR(buf,elem->name);
          _xmlBufferWriteChar(buf," ");
          FUN_10018587e(buf,elem->content,1);
          _xmlBufferWriteChar(buf,">\n");
          return;
        }
        if (xVar1 == XML_ELEMENT_TYPE_ELEMENT) {
          _xmlBufferWriteChar(buf,"<!ELEMENT ");
          if (elem->prefix != (xmlChar *)0x0) {
            _xmlBufferWriteCHAR(buf,elem->prefix);
            _xmlBufferWriteChar(buf,":");
          }
          _xmlBufferWriteCHAR(buf,elem->name);
          _xmlBufferWriteChar(buf," ");
          FUN_10018587e(buf,elem->content,1);
          _xmlBufferWriteChar(buf,">\n");
          return;
        }
      }
      FUN_100183b80(0,1,"Internal: ELEMENT struct corrupted invalid type\n",0);
    }
  }
  return;
}

