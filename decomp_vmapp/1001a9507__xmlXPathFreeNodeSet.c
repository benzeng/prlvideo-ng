
void _xmlXPathFreeNodeSet(xmlNodeSetPtr obj)

{
  int local_c;
  
  if (obj != (xmlNodeSetPtr)0x0) {
    if (obj->nodeTab != (xmlNodePtr *)0x0) {
      for (local_c = 0; local_c < obj->nodeNr; local_c = local_c + 1) {
        if ((obj->nodeTab[local_c] != (xmlNodePtr)0x0) &&
           (obj->nodeTab[local_c]->type == XML_NAMESPACE_DECL)) {
          _xmlXPathNodeSetFreeNs(obj->nodeTab[local_c]);
        }
      }
      (*(code *)_xmlFree)(obj->nodeTab);
    }
    (*(code *)_xmlFree)(obj);
  }
  return;
}

