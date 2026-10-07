
xmlDtdPtr _xmlCopyDtd(xmlDtdPtr dtd)

{
  uint uVar1;
  xmlEntitiesTablePtr pxVar2;
  xmlNotationTablePtr pxVar3;
  xmlElementTablePtr pxVar4;
  xmlAttributeTablePtr pxVar5;
  xmlDtdPtr local_60;
  xmlNodePtr local_38;
  xmlAttributePtr local_30;
  xmlAttributePtr local_28;
  
  local_30 = (xmlAttributePtr)0x0;
  if (dtd == (xmlDtdPtr)0x0) {
    local_60 = (xmlDtdPtr)0x0;
  }
  else {
    local_60 = _xmlNewDtd((xmlDocPtr)0x0,dtd->name,dtd->ExternalID,dtd->SystemID);
    if (local_60 == (xmlDtdPtr)0x0) {
      local_60 = (xmlDtdPtr)0x0;
    }
    else {
      if (dtd->entities != (void *)0x0) {
        pxVar2 = _xmlCopyEntitiesTable(dtd->entities);
        local_60->entities = pxVar2;
      }
      if (dtd->notations != (void *)0x0) {
        pxVar3 = _xmlCopyNotationTable(dtd->notations);
        local_60->notations = pxVar3;
      }
      if (dtd->elements != (void *)0x0) {
        pxVar4 = _xmlCopyElementTable(dtd->elements);
        local_60->elements = pxVar4;
      }
      if (dtd->attributes != (void *)0x0) {
        pxVar5 = _xmlCopyAttributeTable(dtd->attributes);
        local_60->attributes = pxVar5;
      }
      if (dtd->pentities != (void *)0x0) {
        pxVar2 = _xmlCopyEntitiesTable(dtd->pentities);
        local_60->pentities = pxVar2;
      }
      local_38 = dtd->children;
      while (local_38 != (xmlNodePtr)0x0) {
        local_28 = (xmlAttributePtr)0x0;
        if (local_38->type == XML_ENTITY_DECL) {
          uVar1 = *(uint *)((long)&local_38->properties + 4);
          if (uVar1 != 0) {
            if (uVar1 < 4) {
              local_28 = (xmlAttributePtr)FUN_100165974(local_60,local_38->name);
            }
            else if (uVar1 < 6) {
              local_28 = (xmlAttributePtr)FUN_1001659c5(local_60,local_38->name);
            }
          }
        }
        else if (local_38->type == XML_ELEMENT_DECL) {
          local_28 = (xmlAttributePtr)
                     _xmlGetDtdQElementDesc(local_60,local_38->name,(xmlChar *)local_38->nsDef);
        }
        else if (local_38->type == XML_ATTRIBUTE_DECL) {
          local_28 = _xmlGetDtdQAttrDesc(local_60,*(xmlChar **)&local_38->line,local_38->name,
                                         local_38->psvi);
        }
        else if (local_38->type == XML_COMMENT_NODE) {
          local_28 = (xmlAttributePtr)_xmlCopyNode(local_38,0);
        }
        if (local_28 == (xmlAttributePtr)0x0) {
          local_38 = local_38->next;
        }
        else {
          if (local_30 == (xmlAttributePtr)0x0) {
            local_60->children = (_xmlNode *)local_28;
          }
          else {
            local_30->next = (_xmlNode *)local_28;
          }
          local_28->prev = (_xmlNode *)local_30;
          local_28->parent = local_60;
          local_28->next = (_xmlNode *)0x0;
          local_60->last = (_xmlNode *)local_28;
          local_30 = local_28;
          local_38 = local_38->next;
        }
      }
    }
  }
  return local_60;
}

