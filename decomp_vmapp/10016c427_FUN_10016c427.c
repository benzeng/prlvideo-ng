
xmlDocPtr FUN_10016c427(xmlDocPtr param_1,xmlDocPtr param_2,xmlNodePtr param_3,int param_4)

{
  long lVar1;
  xmlChar *pxVar2;
  _xmlDtd *p_Var3;
  xmlRegisterNodeFunc *ppxVar4;
  xmlDocPtr pxVar5;
  xmlNsPtr pxVar6;
  xmlEntityPtr pxVar7;
  _xmlNode *p_Var8;
  xmlDocPtr local_60;
  xmlDocPtr local_18;
  _xmlNode *local_10;
  
  if (param_1 == (xmlDocPtr)0x0) {
    local_60 = (xmlDocPtr)0x0;
  }
  else {
    switch(param_1->type) {
    default:
      local_60 = (xmlDocPtr)(*(code *)_xmlMalloc)(0x78);
      if (local_60 == (xmlDocPtr)0x0) {
        FUN_1001658b8("copying node");
        local_60 = (xmlDocPtr)0x0;
      }
      else {
        _memset(local_60,0,0x78);
        local_60->type = param_1->type;
        local_60->doc = param_2;
        local_60->parent = param_3;
        if (param_1->name == "text") {
          local_60->name = "text";
        }
        else if (param_1->name == "textnoenc") {
          local_60->name = "textnoenc";
        }
        else if (param_1->name == "comment") {
          local_60->name = "comment";
        }
        else if (param_1->name != (char *)0x0) {
          if ((param_2 == (xmlDocPtr)0x0) || (param_2->dict == (_xmlDict *)0x0)) {
            pxVar2 = _xmlStrdup((xmlChar *)param_1->name);
            local_60->name = (char *)pxVar2;
          }
          else {
            pxVar2 = _xmlDictLookup(param_2->dict,(xmlChar *)param_1->name,-1);
            local_60->name = (char *)pxVar2;
          }
        }
        if ((((param_1->type == XML_ELEMENT_NODE) || (param_1->intSubset == (_xmlDtd *)0x0)) ||
            (param_1->type == XML_ENTITY_REF_NODE)) ||
           ((param_1->type == XML_XINCLUDE_END || (param_1->type == XML_XINCLUDE_START)))) {
          if (param_1->type == XML_ELEMENT_NODE) {
            *(undefined2 *)&local_60->encoding = *(undefined2 *)&param_1->encoding;
          }
        }
        else {
          p_Var3 = (_xmlDtd *)_xmlStrdup((xmlChar *)param_1->intSubset);
          local_60->intSubset = p_Var3;
        }
        if (param_3 != (xmlNodePtr)0x0) {
          if ((___xmlRegisterCallbacks != 0) &&
             (ppxVar4 = ___xmlRegisterNodeDefaultValue(), *ppxVar4 != (xmlRegisterNodeFunc)0x0)) {
            ppxVar4 = ___xmlRegisterNodeDefaultValue();
            (**ppxVar4)((xmlNodePtr)local_60);
          }
          pxVar5 = (xmlDocPtr)_xmlAddChild(param_3,(xmlNodePtr)local_60);
          if (pxVar5 != local_60) {
            return pxVar5;
          }
        }
        if (param_4 != 0) {
          if ((param_1->type == XML_ELEMENT_NODE) && (param_1->oldNs != (_xmlNs *)0x0)) {
            pxVar6 = _xmlCopyNamespaceList(param_1->oldNs);
            local_60->oldNs = pxVar6;
          }
          lVar1._0_4_ = param_1->compression;
          lVar1._4_4_ = param_1->standalone;
          if (lVar1 != 0) {
            pxVar6 = _xmlSearchNs(param_2,(xmlNodePtr)local_60,
                                  *(xmlChar **)(*(long *)&param_1->compression + 0x18));
            if (pxVar6 == (xmlNsPtr)0x0) {
              pxVar6 = _xmlSearchNs(param_1->doc,(xmlNodePtr)param_1,
                                    *(xmlChar **)(*(long *)&param_1->compression + 0x18));
              local_18 = local_60;
              if (pxVar6 != (xmlNsPtr)0x0) {
                for (; local_18->parent != (_xmlNode *)0x0; local_18 = (xmlDocPtr)local_18->parent)
                {
                }
                pxVar6 = _xmlNewNs((xmlNodePtr)local_18,pxVar6->href,pxVar6->prefix);
                *(xmlNsPtr *)&local_60->compression = pxVar6;
              }
            }
            else {
              *(xmlNsPtr *)&local_60->compression = pxVar6;
            }
          }
          if ((param_1->type == XML_ELEMENT_NODE) && (param_1->extSubset != (_xmlDtd *)0x0)) {
            p_Var3 = (_xmlDtd *)
                     _xmlCopyPropList((xmlNodePtr)local_60,(xmlAttrPtr)param_1->extSubset);
            local_60->extSubset = p_Var3;
          }
          if (param_1->type == XML_ENTITY_REF_NODE) {
            if ((param_2 == (xmlDocPtr)0x0) || (param_1->doc != param_2)) {
              pxVar7 = _xmlGetDocEntity(param_2,(xmlChar *)local_60->name);
              local_60->children = (_xmlNode *)pxVar7;
            }
            else {
              local_60->children = param_1->children;
            }
            local_60->last = local_60->children;
          }
          else if ((param_1->children != (_xmlNode *)0x0) && (param_4 != 2)) {
            p_Var8 = (_xmlNode *)FUN_10016c9a1(param_1->children,param_2,local_60);
            local_60->children = p_Var8;
            if (local_60 != (xmlDocPtr)0x0) {
              local_10 = local_60->children;
              if (local_10 == (_xmlNode *)0x0) {
                local_60->last = (_xmlNode *)0x0;
              }
              else {
                for (; local_10->next != (_xmlNode *)0x0; local_10 = local_10->next) {
                  local_10->parent = (_xmlNode *)local_60;
                }
                local_10->parent = (_xmlNode *)local_60;
                local_60->last = local_10;
              }
            }
          }
        }
        if (((param_3 == (xmlNodePtr)0x0) && (___xmlRegisterCallbacks != 0)) &&
           (ppxVar4 = ___xmlRegisterNodeDefaultValue(), *ppxVar4 != (xmlRegisterNodeFunc)0x0)) {
          ppxVar4 = ___xmlRegisterNodeDefaultValue();
          (**ppxVar4)((xmlNodePtr)local_60);
        }
      }
      break;
    case XML_ATTRIBUTE_NODE:
      local_60 = (xmlDocPtr)_xmlCopyProp(param_3,(xmlAttrPtr)param_1);
      break;
    case XML_DOCUMENT_NODE:
    case XML_HTML_DOCUMENT_NODE:
    case XML_DOCB_DOCUMENT_NODE:
      local_60 = _xmlCopyDoc(param_1,param_4);
      break;
    case XML_DOCUMENT_TYPE_NODE:
    case XML_NOTATION_NODE:
    case XML_DTD_NODE:
    case XML_ELEMENT_DECL:
    case XML_ATTRIBUTE_DECL:
    case XML_ENTITY_DECL:
      local_60 = (xmlDocPtr)0x0;
      break;
    case XML_NAMESPACE_DECL:
      local_60 = (xmlDocPtr)_xmlCopyNamespaceList((xmlNsPtr)param_1);
    }
  }
  return local_60;
}

