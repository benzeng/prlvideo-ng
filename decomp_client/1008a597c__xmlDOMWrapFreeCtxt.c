
void _xmlDOMWrapFreeCtxt(xmlDOMWrapCtxtPtr ctxt)

{
  if (ctxt != (xmlDOMWrapCtxtPtr)0x0) {
    (*(code *)_xmlFree)(ctxt);
  }
  return;
}

