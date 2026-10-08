
xmlNodePtr
FUN_10089cc22(xmlNodePtr param_1,xmlNs *param_2,xmlChar *param_3,xmlChar *param_4,int param_5)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlNodePtr pxVar3;
  xmlRegisterNodeFunc *ppxVar4;
  xmlNodePtr local_70;
  xmlDocPtr local_68;
  xmlDocPtr local_28;
  _xmlNode *local_18;
  _xmlNode *local_10;
  
  local_28 = (xmlDocPtr)0x0;
  if ((param_1 == (xmlNodePtr)0x0) || (param_1->type == XML_ELEMENT_NODE)) {
    local_70 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x60);
    if (local_70 == (xmlNodePtr)0x0) {
      if (param_5 == 1) {
        (*(code *)_xmlFree)(param_3);
      }
      FUN_1008991e0("building attribute");
      local_70 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_70,0,0x60);
      local_70->type = XML_ATTRIBUTE_NODE;
      local_70->parent = param_1;
      if (param_1 != (xmlNodePtr)0x0) {
        local_28 = param_1->doc;
        local_70->doc = local_28;
      }
      local_70->ns = param_2;
      if (param_5 == 0) {
        if ((local_28 == (xmlDocPtr)0x0) || (local_28->dict == (_xmlDict *)0x0)) {
          pxVar2 = _xmlStrdup(param_3);
          local_70->name = pxVar2;
        }
        else {
          pxVar2 = _xmlDictLookup(local_28->dict,param_3,-1);
          local_70->name = pxVar2;
        }
      }
      else {
        local_70->name = param_3;
      }
      if (param_4 != (xmlChar *)0x0) {
        pxVar2 = _xmlEncodeEntitiesReentrant(local_28,param_4);
        pxVar3 = _xmlStringGetNodeList(local_28,pxVar2);
        local_70->children = pxVar3;
        local_70->last = (_xmlNode *)0x0;
        for (local_18 = local_70->children; local_18 != (_xmlNode *)0x0; local_18 = local_18->next)
        {
          local_18->parent = local_70;
          if (local_18->next == (_xmlNode *)0x0) {
            local_70->last = local_18;
          }
        }
        (*(code *)_xmlFree)(pxVar2);
      }
      if (param_1 != (xmlNodePtr)0x0) {
        if (param_1->properties == (_xmlAttr *)0x0) {
          param_1->properties = (_xmlAttr *)local_70;
        }
        else {
          for (local_10 = (_xmlNode *)param_1->properties; local_10->next != (_xmlNode *)0x0;
              local_10 = local_10->next) {
          }
          local_10->next = local_70;
          local_70->prev = local_10;
        }
      }
      if (param_1 == (xmlNodePtr)0x0) {
        local_68 = (xmlDocPtr)0x0;
      }
      else {
        local_68 = param_1->doc;
      }
      iVar1 = _xmlIsID(local_68,param_1,(xmlAttrPtr)local_70);
      if (iVar1 == 1) {
        _xmlAddID((xmlValidCtxtPtr)0x0,param_1->doc,param_4,(xmlAttrPtr)local_70);
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar4 = ___xmlRegisterNodeDefaultValue(), *ppxVar4 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar4 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar4)(local_70);
      }
    }
  }
  else {
    if (param_5 == 1) {
      (*(code *)_xmlFree)(param_3);
    }
    local_70 = (xmlNodePtr)0x0;
  }
  return local_70;
}

