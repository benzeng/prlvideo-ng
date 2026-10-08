
xmlXPathContextPtr _xmlXPathNewContext(xmlDocPtr doc)

{
  xmlHashTablePtr pxVar1;
  xmlXPathContextPtr local_28;
  
  local_28 = (xmlXPathContextPtr)(*(code *)_xmlMalloc)(0x158);
  if (local_28 == (xmlXPathContextPtr)0x0) {
    FUN_1008d87c3(0,"creating context\n");
    local_28 = (xmlXPathContextPtr)0x0;
  }
  else {
    _memset(local_28,0,0x158);
    local_28->doc = doc;
    local_28->node = (xmlNodePtr)0x0;
    local_28->varHash = (xmlHashTablePtr)0x0;
    local_28->nb_types = 0;
    local_28->max_types = 0;
    local_28->types = (xmlXPathTypePtr)0x0;
    pxVar1 = _xmlHashCreate(0);
    local_28->funcHash = pxVar1;
    local_28->nb_axis = 0;
    local_28->max_axis = 0;
    local_28->axis = (xmlXPathAxisPtr)0x0;
    local_28->nsHash = (xmlHashTablePtr)0x0;
    local_28->user = (void *)0x0;
    local_28->contextSize = -1;
    local_28->proximityPosition = -1;
    _xmlXPathRegisterAllFunctions(local_28);
  }
  return local_28;
}

