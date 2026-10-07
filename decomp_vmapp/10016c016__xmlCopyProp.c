
xmlAttrPtr _xmlCopyProp(xmlNodePtr target,xmlAttrPtr cur)

{
  int iVar1;
  xmlNsPtr pxVar2;
  xmlNs *pxVar3;
  _xmlNode *p_Var4;
  xmlChar *value;
  xmlAttrPtr local_50;
  xmlAttrPtr local_38;
  _xmlDoc *local_28;
  _xmlDoc *local_20;
  _xmlNode *local_18;
  
  if (cur == (xmlAttrPtr)0x0) {
    local_50 = (xmlAttrPtr)0x0;
  }
  else {
    if (target == (xmlNodePtr)0x0) {
      if (cur->parent == (_xmlNode *)0x0) {
        if (cur->children == (_xmlNode *)0x0) {
          local_38 = _xmlNewDocProp((xmlDocPtr)0x0,cur->name,(xmlChar *)0x0);
        }
        else {
          local_38 = _xmlNewDocProp(cur->children->doc,cur->name,(xmlChar *)0x0);
        }
      }
      else {
        local_38 = _xmlNewDocProp(cur->parent->doc,cur->name,(xmlChar *)0x0);
      }
    }
    else {
      local_38 = _xmlNewDocProp(target->doc,cur->name,(xmlChar *)0x0);
    }
    if (local_38 == (xmlAttrPtr)0x0) {
      local_50 = (xmlAttrPtr)0x0;
    }
    else {
      local_38->parent = target;
      if ((cur->ns == (xmlNs *)0x0) || (target == (xmlNodePtr)0x0)) {
        local_38->ns = (xmlNs *)0x0;
      }
      else {
        pxVar2 = _xmlSearchNs(target->doc,target,cur->ns->prefix);
        if (pxVar2 == (xmlNsPtr)0x0) {
          pxVar2 = _xmlSearchNs(cur->doc,cur->parent,cur->ns->prefix);
          if (pxVar2 != (xmlNsPtr)0x0) {
            local_20 = (_xmlDoc *)0x0;
            for (local_28 = (_xmlDoc *)target; local_28->parent != (_xmlNode *)0x0;
                local_28 = (_xmlDoc *)local_28->parent) {
              local_20 = local_28;
            }
            if (target->doc == local_28) {
              local_28 = local_20;
            }
            pxVar2 = _xmlNewNs((xmlNodePtr)local_28,pxVar2->href,pxVar2->prefix);
            local_38->ns = pxVar2;
          }
        }
        else {
          iVar1 = _xmlStrEqual(pxVar2->href,cur->ns->href);
          if (iVar1 == 0) {
            pxVar3 = (xmlNs *)_xmlNewReconciliedNs(target->doc,target,cur->ns);
            local_38->ns = pxVar3;
          }
          else {
            local_38->ns = pxVar2;
          }
        }
      }
      if (cur->children != (_xmlNode *)0x0) {
        p_Var4 = (_xmlNode *)FUN_10016c9a1(cur->children,local_38->doc,local_38);
        local_38->children = p_Var4;
        local_38->last = (_xmlNode *)0x0;
        for (local_18 = local_38->children; local_18 != (_xmlNode *)0x0; local_18 = local_18->next)
        {
          if (local_18->next == (_xmlNode *)0x0) {
            local_38->last = local_18;
          }
        }
      }
      if ((((target != (xmlNodePtr)0x0) && (cur != (xmlAttrPtr)0x0)) &&
          (target->doc != (_xmlDoc *)0x0)) &&
         (((cur->doc != (_xmlDoc *)0x0 && (cur->doc->ids != (void *)0x0)) &&
          (cur->parent != (_xmlNode *)0x0)))) {
        iVar1 = _xmlIsID(cur->doc,cur->parent,cur);
        if (iVar1 != 0) {
          value = _xmlNodeListGetString(cur->doc,cur->children,1);
          if (value != (xmlChar *)0x0) {
            _xmlAddID((xmlValidCtxtPtr)0x0,target->doc,value,local_38);
            (*(code *)_xmlFree)(value);
          }
        }
      }
      local_50 = local_38;
    }
  }
  return local_50;
}

