
xmlOutputBufferPtr
___xmlOutputBufferCreateFilename(char *URI,xmlCharEncodingHandlerPtr encoder,int compression)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  xmlOutputBufferPtr pxVar4;
  xmlOutputBufferPtr local_58;
  int local_24;
  void *local_20;
  char *local_18;
  
  local_24 = 0;
  local_20 = (void *)0x0;
  local_18 = (char *)0x0;
  bVar1 = true;
  if (DAT_1023124ac == 0) {
    _xmlRegisterDefaultOutputCallbacks();
  }
  if (URI == (char *)0x0) {
    local_58 = (xmlOutputBufferPtr)0x0;
  }
  else {
    plVar3 = (long *)_xmlParseURI(URI);
    if (plVar3 != (long *)0x0) {
      if ((*plVar3 != 0) && (iVar2 = _xmlStrEqual((xmlChar *)*plVar3,(xmlChar *)"file"), iVar2 == 0)
         ) {
        bVar1 = false;
      }
      if (*plVar3 != 0) {
        local_18 = (char *)_xmlURIUnescapeString(URI,0,0);
      }
      _xmlFreeURI(plVar3);
    }
    if (local_18 != (char *)0x0) {
      local_24 = DAT_1023124a8;
      if ((((0 < compression) && (compression < 10)) && (bVar1)) &&
         (local_20 = (void *)FUN_1008ac240(local_18,compression), local_24 = DAT_1023124a8,
         local_20 != (void *)0x0)) {
        pxVar4 = _xmlAllocOutputBuffer(encoder);
        if (pxVar4 != (xmlOutputBufferPtr)0x0) {
          pxVar4->context = local_20;
          pxVar4->writecallback = FUN_1008ac376;
          pxVar4->closecallback = FUN_1008ac3b8;
        }
        (*(code *)_xmlFree)(local_18);
        return pxVar4;
      }
      do {
        do {
          local_24 = local_24 + -1;
          if (local_24 < 0) goto LAB_1008add48;
        } while ((*(long *)(&DAT_1023126a0 + (long)local_24 * 0x20) == 0) ||
                (iVar2 = (**(code **)(&DAT_1023126a0 + (long)local_24 * 0x20))(local_18), iVar2 == 0
                ));
        if (*(code **)(&DAT_1023126a0 + (long)local_24 * 0x20) == _xmlIOHTTPMatch) {
          local_20 = _xmlIOHTTPOpenW(local_18,compression);
        }
        else {
          local_20 = (void *)(**(code **)(&DAT_1023126a8 + (long)local_24 * 0x20))(local_18);
        }
      } while (local_20 == (void *)0x0);
LAB_1008add48:
      (*(code *)_xmlFree)(local_18);
    }
    if (local_20 == (void *)0x0) {
      local_24 = DAT_1023124a8;
      if (((0 < compression) && (compression < 10)) &&
         ((bVar1 && (local_20 = (void *)FUN_1008ac240(URI,compression), local_24 = DAT_1023124a8,
                    local_20 != (void *)0x0)))) {
        pxVar4 = _xmlAllocOutputBuffer(encoder);
        if (pxVar4 == (xmlOutputBufferPtr)0x0) {
          return (xmlOutputBufferPtr)0x0;
        }
        pxVar4->context = local_20;
        pxVar4->writecallback = FUN_1008ac376;
        pxVar4->closecallback = FUN_1008ac3b8;
        return pxVar4;
      }
      do {
        do {
          local_24 = local_24 + -1;
          if (local_24 < 0) goto LAB_1008ade90;
        } while ((*(long *)(&DAT_1023126a0 + (long)local_24 * 0x20) == 0) ||
                (iVar2 = (**(code **)(&DAT_1023126a0 + (long)local_24 * 0x20))(URI), iVar2 == 0));
        if (*(code **)(&DAT_1023126a0 + (long)local_24 * 0x20) == _xmlIOHTTPMatch) {
          local_20 = _xmlIOHTTPOpenW(URI,compression);
        }
        else {
          local_20 = (void *)(**(code **)(&DAT_1023126a8 + (long)local_24 * 0x20))(URI);
        }
      } while (local_20 == (void *)0x0);
    }
LAB_1008ade90:
    if (local_20 == (void *)0x0) {
      local_58 = (xmlOutputBufferPtr)0x0;
    }
    else {
      local_58 = _xmlAllocOutputBuffer(encoder);
      if (local_58 != (xmlOutputBufferPtr)0x0) {
        local_58->context = local_20;
        local_58->writecallback =
             *(xmlOutputWriteCallback *)(&DAT_1023126b0 + (long)local_24 * 0x20);
        local_58->closecallback =
             *(xmlOutputCloseCallback *)(&DAT_1023126b8 + (long)local_24 * 0x20);
      }
    }
  }
  return local_58;
}

