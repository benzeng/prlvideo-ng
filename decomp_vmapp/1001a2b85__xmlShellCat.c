
int _xmlShellCat(xmlShellCtxtPtr ctxt,char *arg,xmlNodePtr node,xmlNodePtr node2)

{
  if (ctxt != (xmlShellCtxtPtr)0x0) {
    if (node == (xmlNodePtr)0x0) {
      _fwrite("NULL\n",1,5,ctxt->output);
    }
    else {
      if (ctxt->doc->type == XML_HTML_DOCUMENT_NODE) {
        if (node->type == XML_HTML_DOCUMENT_NODE) {
          _htmlDocDump(ctxt->output,(xmlDocPtr)node);
        }
        else {
          _htmlNodeDumpFile(ctxt->output,ctxt->doc,node);
        }
      }
      else if (node->type == XML_DOCUMENT_NODE) {
        _xmlDocDump(ctxt->output,(xmlDocPtr)node);
      }
      else {
        _xmlElemDump(ctxt->output,ctxt->doc,node);
      }
      _fputc(10,ctxt->output);
    }
  }
  return 0;
}

