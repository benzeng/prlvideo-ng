
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlSetupParserForBuffer(xmlParserCtxtPtr ctxt,xmlChar *buffer,char *filename)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((ctxt != (xmlParserCtxtPtr)0x0) && (buffer != (xmlChar *)0x0)) {
    lVar2 = _xmlNewInputStream(ctxt);
    if (lVar2 == 0) {
      _xmlErrMemory(0,"parsing new buffer: out of memory\n");
      _xmlClearParserCtxt(ctxt);
    }
    else {
      _xmlClearParserCtxt(ctxt);
      if (filename != (char *)0x0) {
        uVar3 = _xmlCanonicPath(filename);
        *(undefined8 *)(lVar2 + 8) = uVar3;
      }
      *(xmlChar **)(lVar2 + 0x18) = buffer;
      *(xmlChar **)(lVar2 + 0x20) = buffer;
      iVar1 = _xmlStrlen(buffer);
      *(xmlChar **)(lVar2 + 0x28) = buffer + iVar1;
      _inputPush(ctxt,lVar2);
    }
  }
  return;
}

