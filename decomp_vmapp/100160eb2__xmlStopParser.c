
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlStopParser(xmlParserCtxtPtr ctxt)

{
  if (ctxt != (xmlParserCtxtPtr)0x0) {
    ctxt->instate = ~XML_PARSER_EOF;
    ctxt->disableSAX = 1;
    if (ctxt->input != (xmlParserInputPtr)0x0) {
      ctxt->input->cur = (xmlChar *)"";
      ctxt->input->base = ctxt->input->cur;
    }
  }
  return;
}

