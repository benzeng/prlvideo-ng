
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserCtxtPtr _htmlCreateFileParserCtxt(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  xmlSAXHandlerV1 *pxVar5;
  xmlParserInputPtr pxVar6;
  ulong uVar7;
  xmlParserCtxtPtr local_60;
  
  if (param_1 == 0) {
    local_60 = (xmlParserCtxtPtr)0x0;
  }
  else {
    local_60 = (xmlParserCtxtPtr)FUN_1008cc381();
    if (local_60 == (xmlParserCtxtPtr)0x0) {
      local_60 = (xmlParserCtxtPtr)0x0;
    }
    else {
      pcVar4 = (char *)_xmlCanonicPath(param_1);
      if (pcVar4 == (char *)0x0) {
        pxVar5 = ___xmlDefaultSAXHandler();
        if (pxVar5->error != (errorSAXFunc)0x0) {
          pxVar5 = ___xmlDefaultSAXHandler();
          (*pxVar5->error)((void *)0x0,"out of memory\n");
        }
        _xmlFreeParserCtxt(local_60);
        local_60 = (xmlParserCtxtPtr)0x0;
      }
      else {
        pxVar6 = _xmlLoadExternalEntity(pcVar4,(char *)0x0,local_60);
        (*(code *)_xmlFree)(pcVar4);
        if (pxVar6 == (xmlParserInputPtr)0x0) {
          _xmlFreeParserCtxt(local_60);
          local_60 = (xmlParserCtxtPtr)0x0;
        }
        else {
          _inputPush(local_60,pxVar6);
          puVar2 = _xmlMallocAtomic;
          if (param_2 != (char *)0x0) {
            iVar3 = _xmlStrlen((xmlChar *)"charset=");
            uVar7 = 0xffffffffffffffff;
            pcVar4 = param_2;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            pcVar4 = (char *)(*(code *)puVar2)((long)iVar3 + ~uVar7);
            if (pcVar4 != (char *)0x0) {
              _strcpy(pcVar4,"charset=");
              _strcat(pcVar4,param_2);
              FUN_1008c9e09(local_60,pcVar4);
              (*(code *)_xmlFree)(pcVar4);
            }
          }
        }
      }
    }
  }
  return local_60;
}

