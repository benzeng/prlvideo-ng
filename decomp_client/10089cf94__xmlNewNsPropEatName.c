
xmlAttrPtr _xmlNewNsPropEatName(xmlNodePtr node,xmlNsPtr ns,xmlChar *name,xmlChar *value)

{
  undefined8 local_30;
  
  if (name == (xmlChar *)0x0) {
    local_30 = (xmlAttrPtr)0x0;
  }
  else {
    local_30 = (xmlAttrPtr)FUN_10089cc22(node,ns,name,value,1);
  }
  return local_30;
}

