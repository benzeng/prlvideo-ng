
xmlAttrPtr _xmlNewProp(xmlNodePtr node,xmlChar *name,xmlChar *value)

{
  undefined8 local_28;
  
  if (name == (xmlChar *)0x0) {
    local_28 = (xmlAttrPtr)0x0;
  }
  else {
    local_28 = (xmlAttrPtr)FUN_1001692fa(node,0,name,value,0);
  }
  return local_28;
}

