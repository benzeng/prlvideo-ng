
xmlChar * _xmlNodeGetContent(xmlNodePtr cur)

{
  xmlEntityPtr pxVar1;
  xmlBufferPtr pxVar2;
  xmlChar *local_70;
  
  if (cur == (xmlNodePtr)0x0) {
    local_70 = (xmlChar *)0x0;
  }
  else {
    switch(cur->type) {
    default:
      local_70 = (xmlChar *)0x0;
      break;
    case XML_ELEMENT_NODE:
    case XML_DOCUMENT_FRAG_NODE:
      pxVar2 = _xmlBufferCreateSize(0x40);
      if (pxVar2 == (xmlBufferPtr)0x0) {
        local_70 = (xmlChar *)0x0;
      }
      else {
        _xmlNodeBufGetContent(pxVar2,cur);
        local_70 = pxVar2->content;
        pxVar2->content = (xmlChar *)0x0;
        _xmlBufferFree(pxVar2);
      }
      break;
    case XML_ATTRIBUTE_NODE:
      if (cur->parent == (_xmlNode *)0x0) {
        local_70 = _xmlNodeListGetString((xmlDocPtr)0x0,cur->children,1);
      }
      else {
        local_70 = _xmlNodeListGetString(cur->parent->doc,cur->children,1);
      }
      break;
    case XML_TEXT_NODE:
    case XML_CDATA_SECTION_NODE:
      if (cur->content == (xmlChar *)0x0) {
        local_70 = (xmlChar *)0x0;
      }
      else {
        local_70 = _xmlStrdup(cur->content);
      }
      break;
    case XML_ENTITY_REF_NODE:
      pxVar1 = _xmlGetDocEntity(cur->doc,cur->name);
      if (pxVar1 == (xmlEntityPtr)0x0) {
        local_70 = (xmlChar *)0x0;
      }
      else {
        pxVar2 = _xmlBufferCreate();
        if (pxVar2 == (xmlBufferPtr)0x0) {
          local_70 = (xmlChar *)0x0;
        }
        else {
          _xmlNodeBufGetContent(pxVar2,cur);
          local_70 = pxVar2->content;
          pxVar2->content = (xmlChar *)0x0;
          _xmlBufferFree(pxVar2);
        }
      }
      break;
    case XML_ENTITY_NODE:
    case XML_DOCUMENT_TYPE_NODE:
    case XML_NOTATION_NODE:
    case XML_DTD_NODE:
    case XML_XINCLUDE_START:
    case XML_XINCLUDE_END:
      local_70 = (xmlChar *)0x0;
      break;
    case XML_PI_NODE:
    case XML_COMMENT_NODE:
      if (cur->content == (xmlChar *)0x0) {
        local_70 = (xmlChar *)0x0;
      }
      else {
        local_70 = _xmlStrdup(cur->content);
      }
      break;
    case XML_DOCUMENT_NODE:
    case XML_HTML_DOCUMENT_NODE:
    case XML_DOCB_DOCUMENT_NODE:
      pxVar2 = _xmlBufferCreate();
      if (pxVar2 == (xmlBufferPtr)0x0) {
        local_70 = (xmlChar *)0x0;
      }
      else {
        _xmlNodeBufGetContent(pxVar2,cur);
        local_70 = pxVar2->content;
        pxVar2->content = (xmlChar *)0x0;
        _xmlBufferFree(pxVar2);
      }
      break;
    case XML_ELEMENT_DECL:
      local_70 = (xmlChar *)0x0;
      break;
    case XML_ATTRIBUTE_DECL:
      local_70 = (xmlChar *)0x0;
      break;
    case XML_ENTITY_DECL:
      local_70 = (xmlChar *)0x0;
      break;
    case XML_NAMESPACE_DECL:
      local_70 = _xmlStrdup(cur->name);
    }
  }
  return local_70;
}

