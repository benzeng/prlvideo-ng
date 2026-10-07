
xmlXPathContextPtr _xmlXPtrNewContext(xmlDocPtr param_1,xmlNodePtr param_2,xmlNodePtr param_3)

{
  xmlXPathContextPtr pxVar1;
  
  pxVar1 = _xmlXPathNewContext(param_1);
  if (pxVar1 != (xmlXPathContextPtr)0x0) {
    pxVar1->xptr = 1;
    pxVar1->here = param_2;
    pxVar1->origin = param_3;
    _xmlXPathRegisterFunc(pxVar1,"range-to",_xmlXPtrRangeToFunction);
    _xmlXPathRegisterFunc(pxVar1,"range",_xmlXPtrRangeFunction);
    _xmlXPathRegisterFunc(pxVar1,"range-inside",_xmlXPtrRangeInsideFunction);
    _xmlXPathRegisterFunc(pxVar1,"string-range",_xmlXPtrStringRangeFunction);
    _xmlXPathRegisterFunc(pxVar1,"start-point",_xmlXPtrStartPointFunction);
    _xmlXPathRegisterFunc(pxVar1,"end-point",_xmlXPtrEndPointFunction);
    _xmlXPathRegisterFunc(pxVar1,"here",_xmlXPtrHereFunction);
    _xmlXPathRegisterFunc(pxVar1," origin",_xmlXPtrOriginFunction);
  }
  return pxVar1;
}

