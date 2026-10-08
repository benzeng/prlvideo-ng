
/* WARNING: Enum "enum_2039": Some values do not have unique names */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlParserCtxtPtr
_htmlCreatePushParserCtxt
          (htmlSAXHandlerPtr sax,void *user_data,char *chunk,int size,char *filename,
          xmlCharEncoding enc)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlParserInputBufferPtr in;
  _xmlSAXHandler *p_Var5;
  _xmlSAXHandler *p_Var6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  xmlParserCtxtPtr local_70;
  
  _xmlInitParser();
  in = _xmlAllocParserInputBuffer(enc);
  if (in == (xmlParserInputBufferPtr)0x0) {
    local_70 = (xmlParserCtxtPtr)0x0;
  }
  else {
    local_70 = (xmlParserCtxtPtr)FUN_1008cc381();
    if (local_70 == (xmlParserCtxtPtr)0x0) {
      _xmlFreeParserInputBuffer(in);
      local_70 = (xmlParserCtxtPtr)0x0;
    }
    else {
      if ((enc == XML_CHAR_ENCODING_UTF8) || (in->encoder != (xmlCharEncodingHandlerPtr)0x0)) {
        local_70->charset = 1;
      }
      if (sax != (htmlSAXHandlerPtr)0x0) {
        p_Var6 = local_70->sax;
        p_Var5 = (_xmlSAXHandler *)___htmlDefaultSAXHandler();
        if (p_Var6 != p_Var5) {
          (*(code *)_xmlFree)(local_70->sax);
        }
        p_Var6 = (_xmlSAXHandler *)(*(code *)_xmlMalloc)(0x100);
        local_70->sax = p_Var6;
        if (local_70->sax == (_xmlSAXHandler *)0x0) {
          (*(code *)_xmlFree)(in);
          (*(code *)_xmlFree)(local_70);
          return (htmlParserCtxtPtr)0x0;
        }
        _memcpy(local_70->sax,sax,0x100);
        if (user_data != (void *)0x0) {
          local_70->userData = user_data;
        }
      }
      if (filename == (char *)0x0) {
        local_70->directory = (char *)0x0;
      }
      else {
        pcVar7 = _xmlParserGetDirectory(filename);
        local_70->directory = pcVar7;
      }
      plVar8 = (long *)FUN_1008c5cb0(local_70);
      if (plVar8 == (long *)0x0) {
        _xmlFreeParserCtxt(local_70);
        (*(code *)_xmlFree)(in);
        local_70 = (xmlParserCtxtPtr)0x0;
      }
      else {
        if (filename == (char *)0x0) {
          plVar8[1] = 0;
        }
        else {
          lVar9 = _xmlCanonicPath(filename);
          plVar8[1] = lVar9;
        }
        *plVar8 = (long)in;
        plVar8[3] = **(long **)(*plVar8 + 0x20);
        plVar8[4] = **(long **)(*plVar8 + 0x20);
        plVar8[5] = **(long **)(*plVar8 + 0x20) + (ulong)*(uint *)(*(long *)(*plVar8 + 0x20) + 8);
        _inputPush(local_70,plVar8);
        if ((((0 < size) && (chunk != (char *)0x0)) && (local_70->input != (xmlParserInputPtr)0x0))
           && (local_70->input->buf != (xmlParserInputBufferPtr)0x0)) {
          pxVar1 = local_70->input->base;
          uVar2 = *(undefined8 *)local_70->input->buf->buffer;
          pxVar3 = local_70->input->cur;
          pxVar4 = local_70->input->base;
          _xmlParserInputBufferPush(local_70->input->buf,size,chunk);
          local_70->input->base =
               (xmlChar *)(*(long *)local_70->input->buf->buffer + (long)((int)pxVar1 - (int)uVar2))
          ;
          local_70->input->cur = local_70->input->base + ((int)pxVar3 - (int)pxVar4);
          local_70->input->end =
               (xmlChar *)
               (*(long *)local_70->input->buf->buffer +
               (ulong)*(uint *)(local_70->input->buf->buffer + 8));
        }
      }
    }
  }
  return local_70;
}

