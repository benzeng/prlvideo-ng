
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlClearParserCtxt(xmlParserCtxtPtr ctxt)

{
  if (ctxt != (xmlParserCtxtPtr)0x0) {
    _xmlClearNodeInfoSeq(&ctxt->node_seq);
    _xmlCtxtReset(ctxt);
  }
  return;
}

