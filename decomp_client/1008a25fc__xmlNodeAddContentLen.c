
void _xmlNodeAddContentLen(xmlNodePtr cur,xmlChar *content,int len)

{
  xmlNodePtr first;
  int iVar1;
  xmlNodePtr cur_00;
  xmlNodePtr pxVar2;
  xmlChar *pxVar3;
  ulong uVar4;
  
  if (((cur != (xmlNodePtr)0x0) && (0 < len)) && (cur->type < XML_HTML_DOCUMENT_NODE)) {
    uVar4 = 1L << ((byte)cur->type & 0x3f);
    if ((uVar4 & 0x802) == 0) {
      if (((uVar4 & 0x11f8) != 0) && (content != (xmlChar *)0x0)) {
        if (((_xmlAttr **)cur->content == &cur->properties) ||
           (((cur->doc != (_xmlDoc *)0x0 && (cur->doc->dict != (_xmlDict *)0x0)) &&
            (iVar1 = _xmlDictOwns(cur->doc->dict,cur->content), iVar1 != 0)))) {
          pxVar3 = _xmlStrncatNew(cur->content,content,len);
          cur->content = pxVar3;
          cur->properties = (_xmlAttr *)0x0;
          cur->nsDef = (xmlNs *)0x0;
        }
        else {
          pxVar3 = _xmlStrncat(cur->content,content,len);
          cur->content = pxVar3;
        }
      }
    }
    else {
      first = cur->last;
      cur_00 = _xmlNewTextLen(content,len);
      if (((cur_00 != (xmlNodePtr)0x0) && (pxVar2 = _xmlAddChild(cur,cur_00), pxVar2 == cur_00)) &&
         ((first != (xmlNodePtr)0x0 && (first->next == cur_00)))) {
        _xmlTextMerge(first,cur_00);
      }
    }
  }
  return;
}

