
xmlNodePtr _xmlTextMerge(xmlNodePtr first,xmlNodePtr second)

{
  xmlNodePtr local_20;
  
  local_20 = second;
  if ((((first != (xmlNodePtr)0x0) && (local_20 = first, second != (xmlNodePtr)0x0)) &&
      (first->type == XML_TEXT_NODE)) &&
     ((second->type == XML_TEXT_NODE && (second->name == first->name)))) {
    _xmlNodeAddContent(first,second->content);
    _xmlUnlinkNode(second);
    _xmlFreeNode(second);
  }
  return local_20;
}

