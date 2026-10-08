
void _xmlNodeSetContentLen(xmlNodePtr cur,xmlChar *content,int len)

{
  int iVar1;
  xmlNodePtr pxVar2;
  xmlChar *pxVar3;
  ulong uVar4;
  _xmlNode *local_10;
  
  if ((cur != (xmlNodePtr)0x0) && (cur->type < XML_HTML_DOCUMENT_NODE)) {
    uVar4 = 1L << ((byte)cur->type & 0x3f);
    if ((uVar4 & 0x806) == 0) {
      if ((uVar4 & 0x11f8) != 0) {
        if (((cur->content != (xmlChar *)0x0) && ((_xmlAttr **)cur->content != &cur->properties)) &&
           ((cur->doc == (_xmlDoc *)0x0 ||
            ((cur->doc->dict == (_xmlDict *)0x0 ||
             (iVar1 = _xmlDictOwns(cur->doc->dict,cur->content), iVar1 == 0)))))) {
          (*(code *)_xmlFree)(cur->content);
        }
        if (cur->children != (_xmlNode *)0x0) {
          _xmlFreeNodeList(cur->children);
        }
        cur->last = (_xmlNode *)0x0;
        cur->children = cur->last;
        if (content == (xmlChar *)0x0) {
          cur->content = (xmlChar *)0x0;
        }
        else {
          pxVar3 = _xmlStrndup(content,len);
          cur->content = pxVar3;
        }
        cur->properties = (_xmlAttr *)0x0;
        cur->nsDef = (xmlNs *)0x0;
      }
    }
    else {
      if (cur->children != (_xmlNode *)0x0) {
        _xmlFreeNodeList(cur->children);
      }
      pxVar2 = _xmlStringLenGetNodeList(cur->doc,content,len);
      cur->children = pxVar2;
      if (cur != (xmlNodePtr)0x0) {
        local_10 = cur->children;
        if (local_10 == (_xmlNode *)0x0) {
          cur->last = (_xmlNode *)0x0;
        }
        else {
          for (; local_10->next != (_xmlNode *)0x0; local_10 = local_10->next) {
            local_10->parent = cur;
          }
          local_10->parent = cur;
          cur->last = local_10;
        }
      }
    }
  }
  return;
}

