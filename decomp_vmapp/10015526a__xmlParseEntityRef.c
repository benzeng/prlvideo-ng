
xmlEntityPtr _xmlParseEntityRef(long *param_1)

{
  int iVar1;
  xmlChar *name;
  xmlChar *pxVar2;
  xmlEntityPtr local_10;
  
  local_10 = (xmlEntityPtr)0x0;
  if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
    FUN_100146394(param_1);
  }
  if (**(char **)(param_1[7] + 0x20) == '&') {
    _xmlNextChar(param_1);
    name = (xmlChar *)_xmlParseName(param_1);
    if (name == (xmlChar *)0x0) {
      FUN_100144217(param_1,0x44,"xmlParseEntityRef: no name\n");
    }
    else if (**(char **)(param_1[7] + 0x20) == ';') {
      _xmlNextChar(param_1);
      if (*param_1 != 0) {
        if (*(long *)(*param_1 + 0x28) != 0) {
          local_10 = (xmlEntityPtr)(**(code **)(*param_1 + 0x28))(param_1[1],name);
        }
        if (((int)param_1[3] == 1) && (local_10 == (xmlEntityPtr)0x0)) {
          local_10 = _xmlGetPredefinedEntity(name);
        }
        if ((((int)param_1[3] == 1) && (local_10 == (xmlEntityPtr)0x0)) &&
           ((long *)param_1[1] == param_1)) {
          local_10 = _xmlSAX2GetEntity(param_1,name);
        }
      }
      if (local_10 == (xmlEntityPtr)0x0) {
        if (((int)param_1[6] == 1) ||
           ((*(int *)((long)param_1 + 0x8c) == 0 && ((int)param_1[0x12] == 0)))) {
          FUN_1001447b6(param_1,0x1a,"Entity \'%s\' not defined\n",name);
        }
        else {
          FUN_1001448b3(param_1,0x1b,"Entity \'%s\' not defined\n",name);
          if ((((int)param_1[0x2a] == 0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x80) != 0)) {
            (**(code **)(*param_1 + 0x80))(param_1,name);
          }
        }
        *(undefined4 *)(param_1 + 0x13) = 0;
      }
      else if (local_10->etype == XML_EXTERNAL_GENERAL_UNPARSED_ENTITY) {
        FUN_1001447b6(param_1,0x1c,"Entity reference to unparsed entity %s\n",name);
      }
      else if (((int)param_1[0x22] == 0xc) &&
              (local_10->etype == XML_EXTERNAL_GENERAL_PARSED_ENTITY)) {
        FUN_1001447b6(param_1,0x1d,"Attribute references external entity \'%s\'\n",name);
      }
      else {
        if (((((int)param_1[0x22] == 0xc) &&
             ((local_10 != (xmlEntityPtr)0x0 &&
              (iVar1 = _xmlStrEqual(local_10->name,(xmlChar *)"lt"), iVar1 == 0)))) &&
            (local_10->content != (xmlChar *)0x0)) &&
           (pxVar2 = _xmlStrchr(local_10->content,'<'), pxVar2 != (xmlChar *)0x0)) {
          FUN_1001447b6(param_1,0x26,"\'<\' in entity \'%s\' is not allowed in attributes values\n",
                        name);
          return local_10;
        }
        if (local_10->etype - XML_INTERNAL_PARAMETER_ENTITY < 2) {
          FUN_1001447b6(param_1,0x1e,"Attempt to reference the parameter entity \'%s\'\n",name);
        }
      }
    }
    else {
      FUN_100143bf8(param_1,0x17,0);
    }
  }
  return local_10;
}

