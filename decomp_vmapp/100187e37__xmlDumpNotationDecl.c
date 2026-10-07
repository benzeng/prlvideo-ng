
void _xmlDumpNotationDecl(xmlBufferPtr buf,xmlNotationPtr nota)

{
  if ((buf != (xmlBufferPtr)0x0) && (nota != (xmlNotationPtr)0x0)) {
    _xmlBufferWriteChar(buf,"<!NOTATION ");
    _xmlBufferWriteCHAR(buf,nota->name);
    if (nota->PublicID == (xmlChar *)0x0) {
      _xmlBufferWriteChar(buf," SYSTEM ");
      _xmlBufferWriteQuotedString(buf,nota->SystemID);
    }
    else {
      _xmlBufferWriteChar(buf," PUBLIC ");
      _xmlBufferWriteQuotedString(buf,nota->PublicID);
      if (nota->SystemID != (xmlChar *)0x0) {
        _xmlBufferWriteChar(buf," ");
        _xmlBufferWriteQuotedString(buf,nota->SystemID);
      }
    }
    _xmlBufferWriteChar(buf," >\n");
  }
  return;
}

