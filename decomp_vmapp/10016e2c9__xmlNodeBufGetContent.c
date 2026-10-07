
int _xmlNodeBufGetContent(xmlBufferPtr buffer,xmlNodePtr cur)

{
  xmlElementType xVar1;
  xmlEntityPtr pxVar2;
  int local_54;
  xmlNodePtr local_48;
  xmlNodePtr local_30;
  xmlNodePtr local_20;
  xmlNodePtr local_10;
  
  if ((cur == (xmlNodePtr)0x0) || (buffer == (xmlBufferPtr)0x0)) {
    local_54 = -1;
  }
  else {
    switch(cur->type) {
    case XML_ELEMENT_NODE:
    case XML_DOCUMENT_FRAG_NODE:
      local_30 = cur;
LAB_10016e493:
      if (local_30 != (xmlNodePtr)0x0) {
        xVar1 = local_30->type;
        if (XML_ATTRIBUTE_NODE < xVar1) {
          if (xVar1 < XML_ENTITY_REF_NODE) {
            if (local_30->content != (xmlChar *)0x0) {
              _xmlBufferCat(buffer,local_30->content);
            }
          }
          else if (xVar1 == XML_ENTITY_REF_NODE) {
            _xmlNodeBufGetContent(buffer,local_30->children);
          }
        }
        if ((local_30->children == (_xmlNode *)0x0) || (local_30->children->type == XML_ENTITY_DECL)
           ) {
          if (local_30 == cur) break;
          if (local_30->next == (_xmlNode *)0x0) {
            do {
              local_30 = local_30->parent;
              if (local_30 == (_xmlNode *)0x0) break;
              if (local_30 == cur) {
                local_30 = (xmlNodePtr)0x0;
                break;
              }
              if (local_30->next != (_xmlNode *)0x0) {
                local_30 = local_30->next;
                break;
              }
            } while (local_30 != (_xmlNode *)0x0);
          }
          else {
            local_30 = local_30->next;
          }
        }
        else {
          local_30 = local_30->children;
        }
        goto LAB_10016e493;
      }
      break;
    case XML_ATTRIBUTE_NODE:
      for (local_20 = cur->children; local_20 != (xmlNodePtr)0x0; local_20 = local_20->next) {
        if (local_20->type == XML_TEXT_NODE) {
          _xmlBufferCat(buffer,local_20->content);
        }
        else {
          _xmlNodeBufGetContent(buffer,local_20);
        }
      }
      break;
    case XML_TEXT_NODE:
    case XML_CDATA_SECTION_NODE:
      _xmlBufferCat(buffer,cur->content);
      break;
    case XML_ENTITY_REF_NODE:
      pxVar2 = _xmlGetDocEntity(cur->doc,cur->name);
      if (pxVar2 == (xmlEntityPtr)0x0) {
        return -1;
      }
      for (local_10 = pxVar2->children; local_10 != (xmlNodePtr)0x0; local_10 = local_10->next) {
        _xmlNodeBufGetContent(buffer,local_10);
      }
      break;
    case XML_PI_NODE:
    case XML_COMMENT_NODE:
      _xmlBufferCat(buffer,cur->content);
      break;
    case XML_DOCUMENT_NODE:
    case XML_HTML_DOCUMENT_NODE:
    case XML_DOCB_DOCUMENT_NODE:
      for (local_48 = cur->children; local_48 != (xmlNodePtr)0x0; local_48 = local_48->next) {
        if (((local_48->type == XML_ELEMENT_NODE) || (local_48->type == XML_TEXT_NODE)) ||
           (local_48->type == XML_CDATA_SECTION_NODE)) {
          _xmlNodeBufGetContent(buffer,local_48);
        }
      }
      break;
    case XML_NAMESPACE_DECL:
      _xmlBufferCat(buffer,cur->name);
    }
    local_54 = 0;
  }
  return local_54;
}

