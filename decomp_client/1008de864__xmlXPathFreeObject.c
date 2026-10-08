
void _xmlXPathFreeObject(xmlXPathObjectPtr obj)

{
  if (obj != (xmlXPathObjectPtr)0x0) {
    if ((obj->type == XPATH_NODESET) || (obj->type == XPATH_XSLT_TREE)) {
      if (obj->boolval == 0) {
        if (obj->nodesetval != (xmlNodeSetPtr)0x0) {
          _xmlXPathFreeNodeSet(obj->nodesetval);
        }
      }
      else if (obj->nodesetval != (xmlNodeSetPtr)0x0) {
        FUN_1008dcef4(obj->nodesetval);
      }
    }
    else if (obj->type == XPATH_LOCATIONSET) {
      if (obj->user != (void *)0x0) {
        _xmlXPtrFreeLocationSet(obj->user);
      }
    }
    else if ((obj->type == XPATH_STRING) && (obj->stringval != (xmlChar *)0x0)) {
      (*(code *)_xmlFree)(obj->stringval);
    }
    (*(code *)_xmlFree)(obj);
  }
  return;
}

