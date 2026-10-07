
xmlEntityPtr
_xmlAddDtdEntity(xmlDocPtr doc,xmlChar *name,int type,xmlChar *ExternalID,xmlChar *SystemID,
                xmlChar *content)

{
  _xmlDtd *p_Var1;
  xmlEntityPtr local_50;
  
  if (doc == (xmlDocPtr)0x0) {
    FUN_10013676e(0x209,"xmlAddDtdEntity: document is NULL");
    local_50 = (xmlEntityPtr)0x0;
  }
  else if (doc->extSubset == (_xmlDtd *)0x0) {
    FUN_10013676e(0x20a,"xmlAddDtdEntity: document without external subset");
    local_50 = (xmlEntityPtr)0x0;
  }
  else {
    p_Var1 = doc->extSubset;
    local_50 = (xmlEntityPtr)FUN_100136a6d(p_Var1,name,type,ExternalID,SystemID,content);
    if (local_50 == (xmlEntityPtr)0x0) {
      local_50 = (xmlEntityPtr)0x0;
    }
    else {
      local_50->parent = p_Var1;
      local_50->doc = p_Var1->doc;
      if (p_Var1->last == (_xmlNode *)0x0) {
        p_Var1->last = (_xmlNode *)local_50;
        p_Var1->children = p_Var1->last;
      }
      else {
        p_Var1->last->next = (_xmlNode *)local_50;
        local_50->prev = p_Var1->last;
        p_Var1->last = (_xmlNode *)local_50;
      }
    }
  }
  return local_50;
}

