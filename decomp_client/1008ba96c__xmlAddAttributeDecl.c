
xmlAttributePtr
_xmlAddAttributeDecl
          (xmlValidCtxtPtr ctxt,xmlDtdPtr dtd,xmlChar *elem,xmlChar *name,xmlChar *ns,
          xmlAttributeType type,xmlAttributeDefault def,xmlChar *defaultValue,xmlEnumerationPtr tree
          )

{
  int iVar1;
  void *pvVar2;
  xmlChar *pxVar3;
  long lVar4;
  xmlAttributePtr local_70;
  xmlHashTablePtr local_28;
  xmlDictPtr local_18;
  long local_10;
  
  local_18 = (xmlDictPtr)0x0;
  if (dtd == (xmlDtdPtr)0x0) {
    _xmlFreeEnumeration(tree);
    local_70 = (xmlAttributePtr)0x0;
  }
  else if (name == (xmlChar *)0x0) {
    _xmlFreeEnumeration(tree);
    local_70 = (xmlAttributePtr)0x0;
  }
  else if (elem == (xmlChar *)0x0) {
    _xmlFreeEnumeration(tree);
    local_70 = (xmlAttributePtr)0x0;
  }
  else {
    if (dtd->doc != (_xmlDoc *)0x0) {
      local_18 = dtd->doc->dict;
    }
    if ((type < (XML_ATTRIBUTE_NOTATION|XML_ATTRIBUTE_CDATA)) &&
       ((1L << ((byte)type & 0x3f) & 0x7feU) != 0)) {
      if ((defaultValue != (xmlChar *)0x0) &&
         (iVar1 = _xmlValidateAttributeValue(type,defaultValue), iVar1 == 0)) {
        FUN_1008b763a(ctxt,dtd,500,"Attribute %s of %s: invalid default value\n",elem,name,
                      defaultValue);
        defaultValue = (xmlChar *)0x0;
        if (ctxt != (xmlValidCtxtPtr)0x0) {
          ctxt->valid = 0;
        }
      }
      if ((((dtd->doc == (_xmlDoc *)0x0) || (dtd->doc->extSubset != dtd)) ||
          (dtd->doc->intSubset == (_xmlDtd *)0x0)) ||
         ((dtd->doc->intSubset->attributes == (void *)0x0 ||
          (pvVar2 = _xmlHashLookup3(dtd->doc->intSubset->attributes,name,ns,elem),
          pvVar2 == (void *)0x0)))) {
        local_28 = dtd->attributes;
        if (local_28 == (xmlHashTablePtr)0x0) {
          local_28 = _xmlHashCreateDict(0,local_18);
          dtd->attributes = local_28;
        }
        if (local_28 == (xmlHashTablePtr)0x0) {
          FUN_1008b7324(ctxt,"xmlAddAttributeDecl: Table creation failed!\n");
          local_70 = (xmlAttributePtr)0x0;
        }
        else {
          local_70 = (xmlAttributePtr)(*(code *)_xmlMalloc)(0x78);
          if (local_70 == (xmlAttributePtr)0x0) {
            FUN_1008b7324(ctxt,"malloc failed");
            local_70 = (xmlAttributePtr)0x0;
          }
          else {
            _memset(local_70,0,0x78);
            local_70->type = XML_ATTRIBUTE_DECL;
            local_70->atype = type;
            local_70->doc = dtd->doc;
            if (local_18 == (xmlDictPtr)0x0) {
              pxVar3 = _xmlStrdup(name);
              local_70->name = pxVar3;
              pxVar3 = _xmlStrdup(ns);
              local_70->prefix = pxVar3;
              pxVar3 = _xmlStrdup(elem);
              local_70->elem = pxVar3;
            }
            else {
              pxVar3 = _xmlDictLookup(local_18,name,-1);
              local_70->name = pxVar3;
              pxVar3 = _xmlDictLookup(local_18,ns,-1);
              local_70->prefix = pxVar3;
              pxVar3 = _xmlDictLookup(local_18,elem,-1);
              local_70->elem = pxVar3;
            }
            local_70->def = def;
            local_70->tree = tree;
            if (defaultValue != (xmlChar *)0x0) {
              if (local_18 == (xmlDictPtr)0x0) {
                pxVar3 = _xmlStrdup(defaultValue);
                local_70->defaultValue = pxVar3;
              }
              else {
                pxVar3 = _xmlDictLookup(local_18,defaultValue,-1);
                local_70->defaultValue = pxVar3;
              }
            }
            iVar1 = _xmlHashAddEntry3(local_28,local_70->name,local_70->prefix,local_70->elem,
                                      local_70);
            if (iVar1 < 0) {
              FUN_1008b78a2(ctxt,dtd,0x1f5,"Attribute %s of element %s: already defined\n",name,elem
                            ,0);
              FUN_1008ba782(local_70);
              local_70 = (xmlAttributePtr)0x0;
            }
            else {
              lVar4 = FUN_1008bc7c3(dtd,elem,1);
              if (lVar4 != 0) {
                if (((type == XML_ATTRIBUTE_ID) && (iVar1 = FUN_1008ba6d7(0,lVar4,1), iVar1 != 0))
                   && (FUN_1008b763a(ctxt,dtd,0x208,
                                     "Element %s has too may ID attributes defined : %s\n",elem,name
                                     ,0), ctxt != (xmlValidCtxtPtr)0x0)) {
                  ctxt->valid = 0;
                }
                iVar1 = _xmlStrEqual(local_70->name,(xmlChar *)"xmlns");
                if ((iVar1 == 0) &&
                   ((local_70->prefix == (xmlChar *)0x0 ||
                    (iVar1 = _xmlStrEqual(local_70->prefix,(xmlChar *)"xmlns"), iVar1 == 0)))) {
                  for (local_10 = *(long *)(lVar4 + 0x58);
                      (local_10 != 0 &&
                      (((iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"xmlns"),
                        iVar1 != 0 ||
                        ((local_70->prefix != (xmlChar *)0x0 &&
                         (iVar1 = _xmlStrEqual(local_70->prefix,(xmlChar *)"xmlns"), iVar1 != 0))))
                       && (*(long *)(local_10 + 0x48) != 0))));
                      local_10 = *(long *)(local_10 + 0x48)) {
                  }
                  if (local_10 == 0) {
                    local_70->nexth = *(_xmlAttribute **)(lVar4 + 0x58);
                    *(xmlAttributePtr *)(lVar4 + 0x58) = local_70;
                  }
                  else {
                    local_70->nexth = *(_xmlAttribute **)(local_10 + 0x48);
                    *(xmlAttributePtr *)(local_10 + 0x48) = local_70;
                  }
                }
                else {
                  local_70->nexth = *(_xmlAttribute **)(lVar4 + 0x58);
                  *(xmlAttributePtr *)(lVar4 + 0x58) = local_70;
                }
              }
              local_70->parent = dtd;
              if (dtd->last == (_xmlNode *)0x0) {
                dtd->last = (_xmlNode *)local_70;
                dtd->children = dtd->last;
              }
              else {
                dtd->last->next = (_xmlNode *)local_70;
                local_70->prev = dtd->last;
                dtd->last = (_xmlNode *)local_70;
              }
            }
          }
        }
      }
      else {
        local_70 = (xmlAttributePtr)0x0;
      }
    }
    else {
      FUN_1008b74a8(ctxt,1,"Internal: ATTRIBUTE struct corrupted invalid type\n",0);
      _xmlFreeEnumeration(tree);
      local_70 = (xmlAttributePtr)0x0;
    }
  }
  return local_70;
}

