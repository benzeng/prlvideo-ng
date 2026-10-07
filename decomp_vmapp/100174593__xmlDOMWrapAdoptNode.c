
int _xmlDOMWrapAdoptNode
              (xmlDOMWrapCtxtPtr_conflict ctxt,xmlDocPtr sourceDoc,xmlNodePtr node,xmlDocPtr destDoc
              ,xmlNodePtr destParent,int options)

{
  xmlElementType xVar1;
  bool bVar2;
  int iVar3;
  xmlChar *pxVar4;
  xmlEntityPtr pxVar5;
  xmlChar *pxVar6;
  ulong uVar7;
  int local_70;
  xmlDocPtr local_48;
  
  if (((node == (xmlNodePtr)0x0) || (destDoc == (xmlDocPtr)0x0)) ||
     ((destParent != (xmlNodePtr)0x0 && (destParent->doc != destDoc)))) {
    local_70 = -1;
  }
  else if (((node->doc == (_xmlDoc *)0x0) || (sourceDoc == (xmlDocPtr)0x0)) ||
          (node->doc == sourceDoc)) {
    local_48 = sourceDoc;
    if (sourceDoc == (xmlDocPtr)0x0) {
      local_48 = node->doc;
    }
    if (local_48 == destDoc) {
      local_70 = -1;
    }
    else {
      if (node->type < XML_NOTATION_NODE) {
        uVar7 = 1L << ((byte)node->type & 0x3f);
        if ((uVar7 & 0x1be) != 0) {
          if ((node->parent != (_xmlNode *)0x0) && (node->parent != destParent)) {
            _xmlUnlinkNode(node);
          }
          if (node->type != XML_ELEMENT_NODE) {
            if (node->type != XML_ATTRIBUTE_NODE) {
              bVar2 = true;
              node->doc = destDoc;
              if ((local_48 != (xmlDocPtr)0x0) && (local_48->dict == destDoc->dict)) {
                bVar2 = false;
              }
              xVar1 = node->type;
              if (xVar1 == XML_ENTITY_REF_NODE) {
                node->content = (xmlChar *)0x0;
                node->children = (_xmlNode *)0x0;
                node->last = (_xmlNode *)0x0;
                if (((destDoc->intSubset != (_xmlDtd *)0x0) ||
                    (destDoc->extSubset != (_xmlDtd *)0x0)) &&
                   (pxVar5 = _xmlGetDocEntity(destDoc,node->name), pxVar5 != (xmlEntityPtr)0x0)) {
                  node->content = pxVar5->content;
                  node->children = (_xmlNode *)pxVar5;
                  node->last = (_xmlNode *)pxVar5;
                }
                if ((bVar2) && (node->name != (xmlChar *)0x0)) {
                  if (destDoc->dict == (_xmlDict *)0x0) {
                    if (((local_48 != (xmlDocPtr)0x0) && (local_48->dict != (_xmlDict *)0x0)) &&
                       (iVar3 = _xmlDictOwns(local_48->dict,node->name), iVar3 != 0)) {
                      pxVar4 = _xmlStrdup(node->name);
                      node->name = pxVar4;
                    }
                  }
                  else {
                    pxVar4 = node->name;
                    pxVar6 = _xmlDictLookup(destDoc->dict,node->name,-1);
                    node->name = pxVar6;
                    if (((local_48 == (xmlDocPtr)0x0) || (local_48->dict == (_xmlDict *)0x0)) ||
                       (iVar3 = _xmlDictOwns(local_48->dict,pxVar4), iVar3 == 0)) {
                      (*(code *)_xmlFree)(pxVar4);
                    }
                  }
                }
              }
              else if (xVar1 < XML_ENTITY_NODE) {
                if (((((XML_ATTRIBUTE_NODE < xVar1) && (bVar2)) && (node->content != (xmlChar *)0x0)
                     ) && ((local_48 != (xmlDocPtr)0x0 && (local_48->dict != (_xmlDict *)0x0)))) &&
                   (iVar3 = _xmlDictOwns(local_48->dict,node->content), iVar3 != 0)) {
                  if (destDoc->dict == (_xmlDict *)0x0) {
                    pxVar4 = _xmlStrdup(node->content);
                    node->content = pxVar4;
                  }
                  else {
                    pxVar4 = _xmlDictLookup(destDoc->dict,node->content,-1);
                    node->content = pxVar4;
                  }
                }
              }
              else if (xVar1 == XML_PI_NODE) {
                if ((bVar2) && (node->name != (xmlChar *)0x0)) {
                  if (destDoc->dict == (_xmlDict *)0x0) {
                    if (((local_48 != (xmlDocPtr)0x0) && (local_48->dict != (_xmlDict *)0x0)) &&
                       (iVar3 = _xmlDictOwns(local_48->dict,node->name), iVar3 != 0)) {
                      pxVar4 = _xmlStrdup(node->name);
                      node->name = pxVar4;
                    }
                  }
                  else {
                    pxVar4 = node->name;
                    pxVar6 = _xmlDictLookup(destDoc->dict,node->name,-1);
                    node->name = pxVar6;
                    if (((local_48 == (xmlDocPtr)0x0) || (local_48->dict == (_xmlDict *)0x0)) ||
                       (iVar3 = _xmlDictOwns(local_48->dict,pxVar4), iVar3 == 0)) {
                      (*(code *)_xmlFree)(pxVar4);
                    }
                  }
                }
                if (((bVar2) && (node->content != (xmlChar *)0x0)) &&
                   ((local_48 != (xmlDocPtr)0x0 &&
                    ((local_48->dict != (_xmlDict *)0x0 &&
                     (iVar3 = _xmlDictOwns(local_48->dict,node->content), iVar3 != 0)))))) {
                  if (destDoc->dict == (_xmlDict *)0x0) {
                    pxVar4 = _xmlStrdup(node->content);
                    node->content = pxVar4;
                  }
                  else {
                    pxVar4 = _xmlDictLookup(destDoc->dict,node->content,-1);
                    node->content = pxVar4;
                  }
                }
              }
              return 0;
            }
            iVar3 = FUN_100174110(ctxt,local_48,node,destDoc,destParent,options);
            return iVar3;
          }
          iVar3 = FUN_100173713(ctxt,local_48,node,destDoc,destParent,options);
          return iVar3;
        }
        if ((uVar7 & 0x800) != 0) {
          return 2;
        }
      }
      local_70 = 1;
    }
  }
  else {
    local_70 = -1;
  }
  return local_70;
}

