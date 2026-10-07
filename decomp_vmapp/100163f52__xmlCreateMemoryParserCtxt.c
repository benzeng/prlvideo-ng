
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserCtxtPtr _xmlCreateMemoryParserCtxt(char *param_1,int param_2)

{
  xmlParserInputBufferPtr in;
  long *plVar1;
  xmlParserCtxtPtr local_40;
  
  if (param_1 == (char *)0x0) {
    local_40 = (xmlParserCtxtPtr)0x0;
  }
  else if (param_2 < 1) {
    local_40 = (xmlParserCtxtPtr)0x0;
  }
  else {
    local_40 = _xmlNewParserCtxt();
    if (local_40 == (xmlParserCtxtPtr)0x0) {
      local_40 = (xmlParserCtxtPtr)0x0;
    }
    else {
      in = _xmlParserInputBufferCreateMem(param_1,param_2,XML_CHAR_ENCODING_ERROR);
      if (in == (xmlParserInputBufferPtr)0x0) {
        _xmlFreeParserCtxt(local_40);
        local_40 = (xmlParserCtxtPtr)0x0;
      }
      else {
        plVar1 = (long *)_xmlNewInputStream(local_40);
        if (plVar1 == (long *)0x0) {
          _xmlFreeParserInputBuffer(in);
          _xmlFreeParserCtxt(local_40);
          local_40 = (xmlParserCtxtPtr)0x0;
        }
        else {
          plVar1[1] = 0;
          *plVar1 = (long)in;
          plVar1[3] = **(long **)(*plVar1 + 0x20);
          plVar1[4] = **(long **)(*plVar1 + 0x20);
          plVar1[5] = **(long **)(*plVar1 + 0x20) + (ulong)*(uint *)(*(long *)(*plVar1 + 0x20) + 8);
          _inputPush(local_40,plVar1);
        }
      }
    }
  }
  return local_40;
}

