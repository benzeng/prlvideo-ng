
long _xmlGetLineNo(xmlNodePtr node)

{
  ulong local_28;
  ulong local_10;
  
  local_10 = 0xffffffffffffffff;
  if (node == (xmlNodePtr)0x0) {
    local_28 = 0xffffffffffffffff;
  }
  else {
    if ((((node->type == XML_ELEMENT_NODE) || (node->type == XML_TEXT_NODE)) ||
        (node->type == XML_COMMENT_NODE)) || (node->type == XML_PI_NODE)) {
      local_10 = (ulong)node->line;
    }
    else if ((node->prev == (_xmlNode *)0x0) ||
            (((node->prev->type != XML_ELEMENT_NODE && (node->prev->type != XML_TEXT_NODE)) &&
             ((node->prev->type != XML_COMMENT_NODE && (node->prev->type != XML_PI_NODE)))))) {
      if ((node->parent != (_xmlNode *)0x0) && (node->parent->type == XML_ELEMENT_NODE)) {
        local_10 = _xmlGetLineNo(node->parent);
      }
    }
    else {
      local_10 = _xmlGetLineNo(node->prev);
    }
    local_28 = local_10;
  }
  return local_28;
}

