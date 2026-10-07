
int _xmlLsCountNode(xmlNodePtr node)

{
  int local_28;
  int local_14;
  _xmlNode *local_10;
  
  local_14 = 0;
  local_10 = (_xmlNode *)0x0;
  if (node == (xmlNodePtr)0x0) {
    local_28 = 0;
  }
  else {
    switch(node->type) {
    case XML_ELEMENT_NODE:
      local_10 = node->children;
      break;
    case XML_ATTRIBUTE_NODE:
      local_10 = node->children;
      break;
    case XML_TEXT_NODE:
    case XML_CDATA_SECTION_NODE:
    case XML_PI_NODE:
    case XML_COMMENT_NODE:
      if (node->content != (xmlChar *)0x0) {
        local_14 = _xmlStrlen(node->content);
      }
      break;
    case XML_ENTITY_REF_NODE:
    case XML_ENTITY_NODE:
    case XML_DOCUMENT_TYPE_NODE:
    case XML_DOCUMENT_FRAG_NODE:
    case XML_NOTATION_NODE:
    case XML_DTD_NODE:
    case XML_ELEMENT_DECL:
    case XML_ATTRIBUTE_DECL:
    case XML_ENTITY_DECL:
    case XML_NAMESPACE_DECL:
    case XML_XINCLUDE_START:
    case XML_XINCLUDE_END:
      local_14 = 1;
      break;
    case XML_DOCUMENT_NODE:
    case XML_HTML_DOCUMENT_NODE:
    case XML_DOCB_DOCUMENT_NODE:
      local_10 = node->children;
    }
    for (; local_10 != (_xmlNode *)0x0; local_10 = local_10->next) {
      local_14 = local_14 + 1;
    }
    local_28 = local_14;
  }
  return local_28;
}

