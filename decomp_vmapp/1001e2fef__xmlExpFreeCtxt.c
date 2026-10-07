
void _xmlExpFreeCtxt(xmlExpCtxtPtr ctxt)

{
  if (ctxt != (xmlExpCtxtPtr)0x0) {
    _xmlDictFree(*(xmlDictPtr *)ctxt);
    if (*(long *)(ctxt + 8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(ctxt + 8));
    }
    (*(code *)_xmlFree)(ctxt);
  }
  return;
}

