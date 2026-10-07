
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

htmlParserCtxtPtr _htmlCreateMemoryParserCtxt(char *buffer,int size)

{
  xmlParserInputBufferPtr pxVar1;
  long *plVar2;
  xmlParserCtxtPtr local_40;
  
  if (buffer == (char *)0x0) {
    local_40 = (xmlParserCtxtPtr)0x0;
  }
  else if (size < 1) {
    local_40 = (xmlParserCtxtPtr)0x0;
  }
  else {
    local_40 = (xmlParserCtxtPtr)FUN_100198a59();
    if (local_40 == (xmlParserCtxtPtr)0x0) {
      local_40 = (xmlParserCtxtPtr)0x0;
    }
    else {
      pxVar1 = _xmlParserInputBufferCreateMem(buffer,size,XML_CHAR_ENCODING_ERROR);
      if (pxVar1 == (xmlParserInputBufferPtr)0x0) {
        local_40 = (xmlParserCtxtPtr)0x0;
      }
      else {
        plVar2 = (long *)_xmlNewInputStream(local_40);
        if (plVar2 == (long *)0x0) {
          _xmlFreeParserCtxt(local_40);
          local_40 = (xmlParserCtxtPtr)0x0;
        }
        else {
          plVar2[1] = 0;
          *plVar2 = (long)pxVar1;
          plVar2[3] = **(long **)(*plVar2 + 0x20);
          plVar2[4] = **(long **)(*plVar2 + 0x20);
          plVar2[5] = **(long **)(*plVar2 + 0x20) + (ulong)*(uint *)(*(long *)(*plVar2 + 0x20) + 8);
          _inputPush(local_40,plVar2);
        }
      }
    }
  }
  return local_40;
}

