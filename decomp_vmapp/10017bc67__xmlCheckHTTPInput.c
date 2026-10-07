
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlCheckHTTPInput(xmlParserCtxtPtr ctxt,xmlParserInputPtr ret)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar *pxVar3;
  xmlCharEncodingHandlerPtr pxVar4;
  
  if (ret == (xmlParserInputPtr)0x0) {
    return (xmlParserInputPtr)0x0;
  }
  if (ret->buf == (xmlParserInputBufferPtr)0x0) {
    return ret;
  }
  if (ret->buf->readcallback != _xmlIOHTTPRead) {
    return ret;
  }
  if (ret->buf->context != (void *)0x0) {
    iVar1 = _xmlNanoHTTPReturnCode(ret->buf->context);
    if (iVar1 < 400) {
      pxVar2 = (xmlChar *)_xmlNanoHTTPMimeType(ret->buf->context);
      pxVar3 = _xmlStrstr(pxVar2,(xmlChar *)"/xml");
      if (((pxVar3 != (xmlChar *)0x0) ||
          (pxVar2 = _xmlStrstr(pxVar2,(xmlChar *)"+xml"), pxVar2 != (xmlChar *)0x0)) &&
         (pxVar2 = (xmlChar *)_xmlNanoHTTPEncoding(ret->buf->context), pxVar2 != (xmlChar *)0x0)) {
        pxVar4 = _xmlFindCharEncodingHandler((char *)pxVar2);
        if (pxVar4 == (xmlCharEncodingHandlerPtr)0x0) {
          ___xmlErrEncoding(ctxt,0x1f,"Unknown encoding %s",pxVar2,0);
        }
        else {
          _xmlSwitchInputEncoding(ctxt,ret,pxVar4);
        }
        if (ret->encoding == (xmlChar *)0x0) {
          pxVar2 = _xmlStrdup(pxVar2);
          ret->encoding = pxVar2;
        }
      }
      pxVar2 = (xmlChar *)_xmlNanoHTTPRedir(ret->buf->context);
      if (pxVar2 != (xmlChar *)0x0) {
        if (ret->filename != (char *)0x0) {
          (*(code *)_xmlFree)(ret->filename);
        }
        if (ret->directory != (char *)0x0) {
          (*(code *)_xmlFree)(ret->directory);
          ret->directory = (char *)0x0;
        }
        pxVar2 = _xmlStrdup(pxVar2);
        ret->filename = (char *)pxVar2;
      }
      return ret;
    }
    if (ret->filename == (char *)0x0) {
      ___xmlLoaderErr(ctxt,"failed to load HTTP resource\n",0);
    }
    else {
      ___xmlLoaderErr(ctxt,"failed to load HTTP resource \"%s\"\n",ret->filename);
    }
    _xmlFreeInputStream(ret);
    return (xmlParserInputPtr)0x0;
  }
  return ret;
}

