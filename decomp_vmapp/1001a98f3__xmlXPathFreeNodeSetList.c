
void _xmlXPathFreeNodeSetList(xmlXPathObjectPtr obj)

{
  if (obj != (xmlXPathObjectPtr)0x0) {
    (*(code *)_xmlFree)(obj);
  }
  return;
}

