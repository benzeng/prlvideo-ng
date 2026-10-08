
int _xmlShellBase(xmlShellCtxtPtr ctxt,char *arg,xmlNodePtr node,xmlNodePtr node2)

{
  xmlChar *pxVar1;
  
  if (ctxt != (xmlShellCtxtPtr)0x0) {
    if (node == (xmlNodePtr)0x0) {
      _fwrite("NULL\n",1,5,ctxt->output);
    }
    else {
      pxVar1 = _xmlNodeGetBase(node->doc,node);
      if (pxVar1 == (xmlChar *)0x0) {
        _fwrite(" No base found !!!\n",1,0x13,ctxt->output);
      }
      else {
        _fprintf(ctxt->output,"%s\n",pxVar1);
        (*(code *)_xmlFree)(pxVar1);
      }
    }
  }
  return 0;
}

