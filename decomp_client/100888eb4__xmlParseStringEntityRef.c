
xmlEntityPtr _xmlParseStringEntityRef(long *param_1,long *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  char *local_28;
  xmlChar *local_20;
  char local_11;
  xmlEntityPtr local_10;
  
  local_10 = (xmlEntityPtr)0x0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    local_28 = (char *)*param_2;
    if (*local_28 == '&') {
      local_28 = local_28 + 1;
      local_11 = *local_28;
      local_20 = (xmlChar *)FUN_10087c917(param_1,&local_28);
      if (local_20 == (xmlChar *)0x0) {
        FUN_100877b3f(param_1,0x44,"xmlParseStringEntityRef: no name\n");
      }
      else {
        if (*local_28 == ';') {
          local_28 = local_28 + 1;
          if (*param_1 != 0) {
            if (*(long *)(*param_1 + 0x28) != 0) {
              local_10 = (xmlEntityPtr)(**(code **)(*param_1 + 0x28))(param_1[1],local_20);
            }
            if (local_10 == (xmlEntityPtr)0x0) {
              local_10 = _xmlGetPredefinedEntity(local_20);
            }
            if ((local_10 == (xmlEntityPtr)0x0) && ((long *)param_1[1] == param_1)) {
              local_10 = _xmlSAX2GetEntity(param_1,local_20);
            }
          }
          if (local_10 == (xmlEntityPtr)0x0) {
            if (((int)param_1[6] == 1) ||
               ((*(int *)((long)param_1 + 0x8c) == 0 && ((int)param_1[0x12] == 0)))) {
              FUN_1008780de(param_1,0x1a,"Entity \'%s\' not defined\n",local_20);
            }
            else {
              FUN_1008781db(param_1,0x1b,"Entity \'%s\' not defined\n",local_20);
            }
          }
          else if (local_10->etype == XML_EXTERNAL_GENERAL_UNPARSED_ENTITY) {
            FUN_1008780de(param_1,0x1c,"Entity reference to unparsed entity %s\n",local_20);
          }
          else if (((int)param_1[0x22] == 0xc) &&
                  (local_10->etype == XML_EXTERNAL_GENERAL_PARSED_ENTITY)) {
            FUN_1008780de(param_1,0x1d,"Attribute references external entity \'%s\'\n",local_20);
          }
          else if ((((int)param_1[0x22] == 0xc) &&
                   (((local_10 != (xmlEntityPtr)0x0 &&
                     (iVar1 = _xmlStrEqual(local_10->name,(xmlChar *)"lt"), iVar1 == 0)) &&
                    (local_10->content != (xmlChar *)0x0)))) &&
                  (pxVar2 = _xmlStrchr(local_10->content,'<'), pxVar2 != (xmlChar *)0x0)) {
            FUN_1008780de(param_1,0x26,
                          "\'<\' in entity \'%s\' is not allowed in attributes values\n",local_20);
          }
          else if (local_10->etype - XML_INTERNAL_PARAMETER_ENTITY < 2) {
            FUN_1008780de(param_1,0x1e,"Attempt to reference the parameter entity \'%s\'\n",local_20
                         );
          }
        }
        else {
          FUN_100877520(param_1,0x17,0);
        }
        (*(code *)_xmlFree)(local_20);
      }
    }
    *param_2 = (long)local_28;
    return local_10;
  }
  return (xmlEntityPtr)0x0;
}

