
int _xmlValidateDocumentFinal(xmlValidCtxtPtr ctxt,xmlDocPtr doc)

{
  xmlHashTablePtr table;
  int local_2c;
  
  if (ctxt == (xmlValidCtxtPtr)0x0) {
    local_2c = 0;
  }
  else if (doc == (xmlDocPtr)0x0) {
    FUN_1008b74a8(ctxt,0x209,"xmlValidateDocumentFinal: doc == NULL\n",0);
    local_2c = 0;
  }
  else {
    table = doc->refs;
    ctxt->doc = doc;
    ctxt->valid = 1;
    _xmlHashScan(table,FUN_1008c2dcb,ctxt);
    local_2c = ctxt->valid;
  }
  return local_2c;
}

