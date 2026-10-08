
int _xmlShellDir(xmlShellCtxtPtr ctxt,char *arg,xmlNodePtr node,xmlNodePtr node2)

{
  if (ctxt != (xmlShellCtxtPtr)0x0) {
    if (node == (xmlNodePtr)0x0) {
      _fwrite("NULL\n",1,5,ctxt->output);
    }
    else if ((node->type == XML_DOCUMENT_NODE) || (node->type == XML_HTML_DOCUMENT_NODE)) {
      _xmlDebugDumpDocumentHead(ctxt->output,(xmlDocPtr)node);
    }
    else if (node->type == XML_ATTRIBUTE_NODE) {
      _xmlDebugDumpAttr(ctxt->output,(xmlAttrPtr)node,0);
    }
    else {
      _xmlDebugDumpOneNode(ctxt->output,node,0);
    }
  }
  return 0;
}

