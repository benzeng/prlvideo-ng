
void _xmlXPathFreeContext(xmlXPathContextPtr ctxt)

{
  if (ctxt != (xmlXPathContextPtr)0x0) {
    _xmlXPathRegisteredNsCleanup(ctxt);
    _xmlXPathRegisteredFuncsCleanup(ctxt);
    _xmlXPathRegisteredVariablesCleanup(ctxt);
    _xmlResetError(&ctxt->lastError);
    (*(code *)_xmlFree)(ctxt);
  }
  return;
}

