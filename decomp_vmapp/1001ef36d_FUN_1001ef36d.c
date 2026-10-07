
int FUN_1001ef36d(undefined8 param_1,undefined8 param_2,undefined8 param_3,xmlNodePtr param_4,
                 xmlChar *param_5)

{
  xmlAttrPtr attr;
  xmlChar *pxVar1;
  xmlIDPtr pxVar2;
  undefined8 uVar3;
  int local_64;
  int local_2c;
  xmlChar *local_28;
  
  local_28 = _xmlGetNoNsProp(param_4,param_5);
  if (local_28 == (xmlChar *)0x0) {
    local_64 = 0;
  }
  else {
    attr = (xmlAttrPtr)FUN_1001ece01(param_4,param_5);
    if (attr == (xmlAttrPtr)0x0) {
      local_64 = -1;
    }
    else {
      local_2c = _xmlValidateNCName(local_28,1);
      if (local_2c == 0) {
        if (attr->atype != XML_ATTRIBUTE_ID) {
          pxVar1 = (xmlChar *)_xmlSchemaCollapseString(local_28);
          if (pxVar1 != (xmlChar *)0x0) {
            local_28 = pxVar1;
          }
          pxVar2 = _xmlAddID((xmlValidCtxtPtr)0x0,param_4->doc,local_28,attr);
          if (pxVar2 == (xmlIDPtr)0x0) {
            local_2c = 0xbdd;
            uVar3 = _xmlSchemaGetBuiltInType(0x17);
            FUN_1001ea8df(param_1,0xbdd,param_3,attr,uVar3,0,0,
                          "Duplicate value \'%s\' of simple type \'xs:ID\'",local_28,0);
          }
          else {
            attr->atype = XML_ATTRIBUTE_ID;
          }
          if (pxVar1 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(pxVar1);
          }
        }
      }
      else if (0 < local_2c) {
        local_2c = 0xbdd;
        uVar3 = _xmlSchemaGetBuiltInType(0x17);
        FUN_1001ea8df(param_1,0xbdd,param_3,attr,uVar3,0,0,
                      "The value \'%s\' of simple type \'xs:ID\' is not a valid \'xs:NCName\'",
                      local_28,0);
      }
      (*(code *)_xmlFree)(local_28);
      local_64 = local_2c;
    }
  }
  return local_64;
}

