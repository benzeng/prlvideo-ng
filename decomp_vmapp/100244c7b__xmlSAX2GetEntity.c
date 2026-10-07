
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlEntityPtr _xmlSAX2GetEntity(void *ctx,xmlChar *name)

{
  xmlEntityPtr local_40;
  xmlNodePtr local_28;
  xmlParserCtxtPtr local_20;
  xmlEntityPtr local_18;
  int local_c;
  
  local_18 = (xmlEntityPtr)0x0;
  if (ctx == (void *)0x0) {
    local_40 = (xmlEntityPtr)0x0;
  }
  else {
    local_20 = ctx;
    if ((*(int *)((long)ctx + 0x150) != 0) ||
       (local_40 = _xmlGetPredefinedEntity(name), local_18 = local_40, local_40 == (xmlEntityPtr)0x0
       )) {
      if ((local_20->myDoc == (xmlDocPtr)0x0) || (local_20->myDoc->standalone != 1)) {
        local_18 = _xmlGetDocEntity(local_20->myDoc,name);
      }
      else if (local_20->inSubset == 2) {
        local_20->myDoc->standalone = 0;
        local_18 = _xmlGetDocEntity(local_20->myDoc,name);
        local_20->myDoc->standalone = 1;
      }
      else {
        local_18 = _xmlGetDocEntity(local_20->myDoc,name);
        if (local_18 == (xmlEntityPtr)0x0) {
          local_20->myDoc->standalone = 0;
          local_18 = _xmlGetDocEntity(local_20->myDoc,name);
          if (local_18 != (xmlEntityPtr)0x0) {
            FUN_100244280(local_20,0x67,
                          "Entity(%s) document marked standalone but requires external subset\n",
                          name,0);
          }
          local_20->myDoc->standalone = 1;
        }
      }
      if (((local_18 != (xmlEntityPtr)0x0) &&
          (((local_20->validate != 0 || (local_20->replaceEntities != 0)) &&
           (local_18->children == (_xmlNode *)0x0)))) &&
         (local_18->etype == XML_EXTERNAL_GENERAL_PARSED_ENTITY)) {
        local_c = _xmlParseCtxtExternalEntity(local_20,local_18->URI,local_18->ExternalID,&local_28)
        ;
        if (local_c != 0) {
          FUN_100244280(local_20,0x68,"Failure to process entity %s\n",name,0);
          local_20->validate = 0;
          return (xmlEntityPtr)0x0;
        }
        _xmlAddChildList((xmlNodePtr)local_18,local_28);
        local_18->owner = 1;
      }
      local_40 = local_18;
    }
  }
  return local_40;
}

