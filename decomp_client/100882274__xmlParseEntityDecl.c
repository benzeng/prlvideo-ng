
void _xmlParseEntityDecl(long *param_1)

{
  long lVar1;
  int iVar2;
  xmlDocPtr pxVar3;
  xmlDtdPtr pxVar4;
  xmlChar *local_70;
  xmlChar *local_68;
  xmlChar *local_60;
  xmlChar *local_58;
  xmlChar *local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  long local_38;
  long local_30;
  long local_28;
  xmlEntityPtr local_20;
  
  local_60 = (xmlChar *)0x0;
  local_58 = (xmlChar *)0x0;
  local_50 = (xmlChar *)0x0;
  local_68 = (xmlChar *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_70 = (xmlChar *)0x0;
  if (**(char **)(param_1[7] + 0x20) != '<') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '!') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 2) != 'E') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 3) != 'N') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 4) != 'T') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 5) != 'I') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 6) != 'T') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'Y') {
    local_38 = param_1[7];
    if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
        (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
       (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
      FUN_100879c6f(param_1);
    }
    param_1[0x27] = param_1[0x27] + 8;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 8;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 8;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) == '\0') &&
       (iVar2 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar2 < 1)) {
      _xmlPopInput(param_1);
    }
    local_3c = _xmlSkipBlankChars(param_1);
    if (local_3c == 0) {
      FUN_100877b3f(param_1,0x41,"Space required after \'<!ENTITY\'\n");
    }
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlNextChar(param_1);
      local_3c = _xmlSkipBlankChars(param_1);
      if (local_3c == 0) {
        FUN_100877b3f(param_1,0x41,"Space required after \'%\'\n");
      }
      local_40 = 1;
    }
    local_60 = (xmlChar *)_xmlParseName(param_1);
    if (local_60 != (xmlChar *)0x0) {
      local_3c = _xmlSkipBlankChars(param_1);
      if (local_3c == 0) {
        FUN_100877b3f(param_1,0x41,"Space required after the entity name\n");
      }
      *(undefined4 *)(param_1 + 0x22) = 10;
      if (local_40 == 0) {
        if ((**(char **)(param_1[7] + 0x20) == '\"') || (**(char **)(param_1[7] + 0x20) == '\'')) {
          local_58 = (xmlChar *)_xmlParseEntityValue(param_1,&local_70);
          if ((*param_1 != 0) &&
             ((*(int *)((long)param_1 + 0x14c) == 0 && (*(long *)(*param_1 + 0x30) != 0)))) {
            (**(code **)(*param_1 + 0x30))(param_1[1],local_60,1,0,0,local_58);
          }
          if ((param_1[2] == 0) ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(param_1[2] + 0x68),
                                   (xmlChar *)"SAX compatibility mode document"), iVar2 != 0)) {
            if (param_1[2] == 0) {
              pxVar3 = _xmlNewDoc((xmlChar *)"SAX compatibility mode document");
              param_1[2] = (long)pxVar3;
            }
            if (*(long *)(param_1[2] + 0x50) == 0) {
              lVar1 = param_1[2];
              pxVar4 = _xmlNewDtd((xmlDocPtr)param_1[2],(xmlChar *)"fake",(xmlChar *)0x0,
                                  (xmlChar *)0x0);
              *(xmlDtdPtr *)(lVar1 + 0x50) = pxVar4;
            }
            _xmlSAX2EntityDecl(param_1,local_60,1,(xmlChar *)0x0,(xmlChar *)0x0,local_58);
          }
        }
        else {
          local_50 = (xmlChar *)_xmlParseExternalID(param_1,&local_68,1);
          if ((local_50 == (xmlChar *)0x0) && (local_68 == (xmlChar *)0x0)) {
            FUN_100877520(param_1,0x54,0);
          }
          if (local_50 != (xmlChar *)0x0) {
            local_28 = _xmlParseURI(local_50);
            if (local_28 == 0) {
              FUN_1008781db(param_1,0x5b,"Invalid URI: %s\n",local_50);
            }
            else {
              if (*(long *)(local_28 + 0x40) != 0) {
                FUN_100877520(param_1,0x5c,0);
              }
              _xmlFreeURI(local_28);
            }
          }
          if ((((**(char **)(param_1[7] + 0x20) != '>') && (**(char **)(param_1[7] + 0x20) != ' '))
              && ((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))))) &&
             (**(char **)(param_1[7] + 0x20) != '\r')) {
            FUN_100877b3f(param_1,0x41,"Space required before \'NDATA\'\n");
          }
          _xmlSkipBlankChars(param_1);
          if ((((**(char **)(param_1[7] + 0x20) == 'N') &&
               (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == 'D')) &&
              (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'A')) &&
             ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'T' &&
              (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'A')))) {
            param_1[0x27] = param_1[0x27] + 5;
            *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 5;
            *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 5;
            if (**(char **)(param_1[7] + 0x20) == '%') {
              _xmlParserHandlePEReference(param_1);
            }
            if ((**(char **)(param_1[7] + 0x20) == '\0') &&
               (iVar2 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar2 < 1)) {
              _xmlPopInput(param_1);
            }
            if ((**(char **)(param_1[7] + 0x20) != ' ') &&
               (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
                (**(char **)(param_1[7] + 0x20) != '\r')))) {
              FUN_100877b3f(param_1,0x41,"Space required after \'NDATA\'\n");
            }
            _xmlSkipBlankChars(param_1);
            local_48 = _xmlParseName(param_1);
            if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
               (*(long *)(*param_1 + 0x50) != 0)) {
              (**(code **)(*param_1 + 0x50))(param_1[1],local_60,local_68,local_50,local_48);
            }
          }
          else {
            if ((*param_1 != 0) &&
               ((*(int *)((long)param_1 + 0x14c) == 0 && (*(long *)(*param_1 + 0x30) != 0)))) {
              (**(code **)(*param_1 + 0x30))(param_1[1],local_60,2,local_68,local_50,0);
            }
            if ((*(int *)((long)param_1 + 0x1c) != 0) &&
               ((param_1[2] == 0 ||
                (iVar2 = _xmlStrEqual(*(xmlChar **)(param_1[2] + 0x68),
                                      (xmlChar *)"SAX compatibility mode document"), iVar2 != 0))))
            {
              if (param_1[2] == 0) {
                pxVar3 = _xmlNewDoc((xmlChar *)"SAX compatibility mode document");
                param_1[2] = (long)pxVar3;
              }
              if (*(long *)(param_1[2] + 0x50) == 0) {
                lVar1 = param_1[2];
                pxVar4 = _xmlNewDtd((xmlDocPtr)param_1[2],(xmlChar *)"fake",(xmlChar *)0x0,
                                    (xmlChar *)0x0);
                *(xmlDtdPtr *)(lVar1 + 0x50) = pxVar4;
              }
              _xmlSAX2EntityDecl(param_1,local_60,2,local_68,local_50,(xmlChar *)0x0);
            }
          }
        }
      }
      else if ((**(char **)(param_1[7] + 0x20) == '\"') || (**(char **)(param_1[7] + 0x20) == '\''))
      {
        local_58 = (xmlChar *)_xmlParseEntityValue(param_1,&local_70);
        if ((local_58 != (xmlChar *)0x0) &&
           (((*param_1 != 0 && (*(int *)((long)param_1 + 0x14c) == 0)) &&
            (*(long *)(*param_1 + 0x30) != 0)))) {
          (**(code **)(*param_1 + 0x30))(param_1[1],local_60,4,0,0,local_58);
        }
      }
      else {
        local_50 = (xmlChar *)_xmlParseExternalID(param_1,&local_68,1);
        if ((local_50 == (xmlChar *)0x0) && (local_68 == (xmlChar *)0x0)) {
          FUN_100877520(param_1,0x54,0);
        }
        if (local_50 != (xmlChar *)0x0) {
          local_30 = _xmlParseURI(local_50);
          if (local_30 == 0) {
            FUN_1008781db(param_1,0x5b,"Invalid URI: %s\n",local_50);
          }
          else {
            if (*(long *)(local_30 + 0x40) == 0) {
              if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
                 (*(long *)(*param_1 + 0x30) != 0)) {
                (**(code **)(*param_1 + 0x30))(param_1[1],local_60,5,local_68,local_50,0);
              }
            }
            else {
              FUN_100877520(param_1,0x5c,0);
            }
            _xmlFreeURI(local_30);
          }
        }
      }
      _xmlSkipBlankChars(param_1);
      if (**(char **)(param_1[7] + 0x20) == '>') {
        if (param_1[7] != local_38) {
          FUN_100877b3f(param_1,0x5a,
                        "Entity declaration doesn\'t start and stop in the same entity\n");
        }
        _xmlNextChar(param_1);
      }
      else {
        FUN_1008780de(param_1,0x25,"xmlParseEntityDecl: entity %s not terminated\n",local_60);
      }
      if (local_70 != (xmlChar *)0x0) {
        local_20 = (xmlEntityPtr)0x0;
        if (local_40 == 0) {
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x28) != 0)) {
            local_20 = (xmlEntityPtr)(**(code **)(*param_1 + 0x28))(param_1[1],local_60);
          }
          if ((local_20 == (xmlEntityPtr)0x0) && ((long *)param_1[1] == param_1)) {
            local_20 = _xmlSAX2GetEntity(param_1,local_60);
          }
        }
        else if ((*param_1 != 0) && (*(long *)(*param_1 + 0xc0) != 0)) {
          local_20 = (xmlEntityPtr)(**(code **)(*param_1 + 0xc0))(param_1[1],local_60);
        }
        if (local_20 == (xmlEntityPtr)0x0) {
          (*(code *)_xmlFree)(local_70);
        }
        else if (local_20->orig == (xmlChar *)0x0) {
          local_20->orig = local_70;
        }
        else {
          (*(code *)_xmlFree)(local_70);
        }
      }
      if (local_58 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_58);
      }
      if (local_50 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_50);
      }
      if (local_68 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_68);
      }
      return;
    }
    FUN_100877b3f(param_1,0x44,"xmlParseEntityDecl: no name\n");
    return;
  }
  return;
}

