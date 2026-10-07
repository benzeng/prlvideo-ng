
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserCtxtPtr _xmlCreateEntityParserCtxt(char *param_1,char *param_2,undefined8 param_3)

{
  char *URL;
  xmlParserInputPtr pxVar1;
  xmlParserCtxtPtr local_48;
  char *local_18;
  
  local_18 = (char *)0x0;
  local_48 = _xmlNewParserCtxt();
  if (local_48 == (xmlParserCtxtPtr)0x0) {
    local_48 = (xmlParserCtxtPtr)0x0;
  }
  else {
    URL = (char *)_xmlBuildURI(param_1,param_3);
    if (URL == (char *)0x0) {
      pxVar1 = _xmlLoadExternalEntity(param_1,param_2,local_48);
      if (pxVar1 == (xmlParserInputPtr)0x0) {
        _xmlFreeParserCtxt(local_48);
        local_48 = (xmlParserCtxtPtr)0x0;
      }
      else {
        _inputPush(local_48,pxVar1);
        if (local_48->directory == (char *)0x0) {
          local_18 = _xmlParserGetDirectory(param_1);
        }
        if ((local_48->directory == (char *)0x0) && (local_18 != (char *)0x0)) {
          local_48->directory = local_18;
        }
      }
    }
    else {
      pxVar1 = _xmlLoadExternalEntity(URL,param_2,local_48);
      if (pxVar1 == (xmlParserInputPtr)0x0) {
        (*(code *)_xmlFree)(URL);
        _xmlFreeParserCtxt(local_48);
        local_48 = (xmlParserCtxtPtr)0x0;
      }
      else {
        _inputPush(local_48,pxVar1);
        if (local_48->directory == (char *)0x0) {
          local_18 = _xmlParserGetDirectory(URL);
        }
        if ((local_48->directory == (char *)0x0) && (local_18 != (char *)0x0)) {
          local_48->directory = local_18;
        }
        (*(code *)_xmlFree)(URL);
      }
    }
  }
  return local_48;
}

