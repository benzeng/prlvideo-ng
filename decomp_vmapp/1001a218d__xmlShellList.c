
int _xmlShellList(xmlShellCtxtPtr ctxt,char *arg,xmlNodePtr node,xmlNodePtr node2)

{
  xmlNodePtr local_10;
  
  if (ctxt != (xmlShellCtxtPtr)0x0) {
    if (node == (xmlNodePtr)0x0) {
      _fwrite("NULL\n",1,5,ctxt->output);
    }
    else {
      if ((node->type == XML_DOCUMENT_NODE) || (node->type == XML_HTML_DOCUMENT_NODE)) {
        local_10 = node->children;
      }
      else {
        if (node->type == XML_NAMESPACE_DECL) {
          _xmlLsOneNode(ctxt->output,node);
          return 0;
        }
        if (node->children == (_xmlNode *)0x0) {
          _xmlLsOneNode(ctxt->output,node);
          return 0;
        }
        local_10 = node->children;
      }
      for (; local_10 != (xmlNodePtr)0x0; local_10 = local_10->next) {
        _xmlLsOneNode(ctxt->output,local_10);
      }
    }
  }
  return 0;
}

