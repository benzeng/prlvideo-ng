
int FUN_1009034ea(FILE *param_1,undefined8 param_2)

{
  xmlDocPtr doc;
  xmlDtdPtr cur;
  xmlNsPtr ns;
  xmlNodePtr cur_00;
  xmlOutputBufferPtr buf;
  int local_4c;
  
  doc = _xmlNewDoc((xmlChar *)0x0);
  if (doc == (xmlDocPtr)0x0) {
    local_4c = -1;
  }
  else {
    cur = _xmlNewDtd(doc,(xmlChar *)"catalog",
                     (xmlChar *)"-//OASIS//DTD Entity Resolution XML Catalog V1.0//EN",
                     (xmlChar *)
                     "http://www.oasis-open.org/committees/entity/release/1.0/catalog.dtd");
    _xmlAddChild((xmlNodePtr)doc,(xmlNodePtr)cur);
    ns = _xmlNewNs((xmlNodePtr)0x0,(xmlChar *)"urn:oasis:names:tc:entity:xmlns:xml:catalog",
                   (xmlChar *)0x0);
    if (ns == (xmlNsPtr)0x0) {
      _xmlFreeDoc(doc);
      local_4c = -1;
    }
    else {
      cur_00 = _xmlNewDocNode(doc,ns,(xmlChar *)"catalog",(xmlChar *)0x0);
      if (cur_00 == (xmlNodePtr)0x0) {
        _xmlFreeNs(ns);
        _xmlFreeDoc(doc);
        local_4c = -1;
      }
      else {
        cur_00->nsDef = ns;
        _xmlAddChild((xmlNodePtr)doc,cur_00);
        FUN_100902fd2(param_2,cur_00,doc,ns,0);
        buf = _xmlOutputBufferCreateFile(param_1,(xmlCharEncodingHandlerPtr)0x0);
        if (buf == (xmlOutputBufferPtr)0x0) {
          _xmlFreeDoc(doc);
          local_4c = -1;
        }
        else {
          local_4c = _xmlSaveFormatFileTo(buf,doc,(char *)0x0,1);
          _xmlFreeDoc(doc);
        }
      }
    }
  }
  return local_4c;
}

