
void _xmlSetTreeDoc(xmlNodePtr tree,xmlDocPtr doc)

{
  _xmlAttr *local_10;
  
  if ((tree != (xmlNodePtr)0x0) && (tree->doc != doc)) {
    if (tree->type == XML_ELEMENT_NODE) {
      for (local_10 = tree->properties; local_10 != (_xmlAttr *)0x0; local_10 = local_10->next) {
        local_10->doc = doc;
        _xmlSetListDoc(local_10->children,doc);
      }
    }
    if (tree->children != (_xmlNode *)0x0) {
      _xmlSetListDoc(tree->children,doc);
    }
    tree->doc = doc;
  }
  return;
}

