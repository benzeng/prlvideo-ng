
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined4
FUN_1001f8651(long param_1,int param_2,xmlChar *param_3,xmlDocPtr param_4,char *param_5,int param_6,
             undefined8 param_7,long param_8,undefined8 param_9,long *param_10)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  xmlParserCtxtPtr ctxt;
  xmlErrorPtr pxVar4;
  xmlNodePtr pxVar5;
  undefined4 local_88;
  xmlChar *local_70;
  undefined8 local_58;
  long local_50;
  xmlDocPtr local_48;
  undefined4 local_3c;
  int local_38;
  long local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = (xmlDocPtr)0x0;
  local_3c = 0;
  local_38 = 0;
  bVar1 = false;
  local_30 = 0;
  if (param_10 != (long *)0x0) {
    *param_10 = 0;
  }
  if (param_2 == 2) {
    local_3c = 0xbea;
  }
  else if (param_2 < 3) {
    if (-1 < param_2) {
      local_3c = 0xc0a;
    }
  }
  else if (param_2 == 3) {
    local_3c = 0xc09;
  }
  if (((param_2 == 0) || (*(long *)(*(long *)(param_1 + 0x30) + 0x10) == 0)) ||
     (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 8) < 1)) {
LAB_1001f8a11:
    local_70 = param_3;
    if (param_4 == (xmlDocPtr)0x0) {
      if ((param_3 == (xmlChar *)0x0) && (param_5 == (char *)0x0)) {
        FUN_1001e80a3(param_1,0,0x6de,
                      "No information for parsing was provided with the given schema parser context.\n"
                      ,0,0);
      }
      else {
        ctxt = _xmlNewParserCtxt();
        if (ctxt != (xmlParserCtxtPtr)0x0) {
          if ((*(long *)(param_1 + 0x98) != 0) && (ctxt->dict != (xmlDictPtr)0x0)) {
            _xmlDictFree(ctxt->dict);
            ctxt->dict = *(xmlDictPtr *)(param_1 + 0x98);
            _xmlDictReference(ctxt->dict);
          }
          if (param_3 == (xmlChar *)0x0) {
            if (param_5 != (char *)0x0) {
              local_48 = _xmlCtxtReadMemory(ctxt,param_5,param_6,(char *)0x0,(char *)0x0,2);
              local_70 = _xmlStrdup((xmlChar *)"in_memory_buffer");
              if (local_48 != (xmlDocPtr)0x0) {
                local_48->URL = local_70;
              }
            }
          }
          else {
            local_48 = _xmlCtxtReadFile(ctxt,(char *)param_3,(char *)0x0,2);
          }
          if ((local_48 == (xmlDocPtr)0x0) &&
             ((pxVar4 = _xmlGetLastError(), pxVar4 == (xmlErrorPtr)0x0 || (pxVar4->domain != 8)))) {
            local_38 = 1;
            FUN_1001e8d5c(param_1,0xbfb,param_7,0,"Failed to parse the XML resource \'%s\'",local_70
                          ,0);
          }
          _xmlFreeParserCtxt(ctxt);
          if ((local_48 == (xmlDocPtr)0x0) && (local_38 != 0)) goto LAB_1001f8c7e;
          goto LAB_1001f8a5b;
        }
        FUN_1001e8056(0,"xmlSchemaGetDoc, allocating a parser context",0);
      }
    }
    else {
      bVar1 = true;
      local_48 = param_4;
      if (param_4->URL != (xmlChar *)0x0) {
        local_70 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_4->URL,-1);
      }
LAB_1001f8a5b:
      if (local_48 != (xmlDocPtr)0x0) {
        local_38 = 1;
        pxVar5 = _xmlDocGetRootElement(local_48);
        if (pxVar5 == (xmlNodePtr)0x0) {
          FUN_1001e8d5c(param_1,0x6df,param_7,0,"The document \'%s\' has no document element",
                        local_70,0);
          _xmlFreeDoc(local_48);
          local_48 = (xmlDocPtr)0x0;
LAB_1001f8c7e:
          if (((local_48 != (xmlDocPtr)0x0) && (!bVar1)) && (_xmlFreeDoc(local_48), local_30 != 0))
          {
            *(undefined8 *)(local_30 + 0x20) = 0;
          }
          return *(undefined4 *)(param_1 + 0x20);
        }
        FUN_1001f6d66(param_1,pxVar5);
        if ((((pxVar5 == (xmlNodePtr)0x0) || (pxVar5->ns == (xmlNs *)0x0)) ||
            (iVar2 = _xmlStrEqual(pxVar5->name,(xmlChar *)"schema"), iVar2 == 0)) ||
           (iVar2 = _xmlStrEqual(pxVar5->ns->href,PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
           iVar2 == 0)) {
          FUN_1001e8d5c(param_1,0x6ec,param_7,0,"The XML document \'%s\' is not a schema document",
                        local_70,0);
          _xmlFreeDoc(local_48);
          local_48 = (xmlDocPtr)0x0;
          goto LAB_1001f8c7e;
        }
        local_58 = FUN_1001ecf8b(param_1,pxVar5,"targetNamespace");
      }
      if (((local_30 != 0) || (local_38 == 0)) ||
         (local_30 = FUN_1001eb239(param_1,param_2,local_58), local_30 != 0)) {
        if (local_30 != 0) {
          *(xmlChar **)(local_30 + 8) = local_70;
          *(int *)(local_30 + 0x30) = local_38;
          if (local_48 != (xmlDocPtr)0x0) {
            *(xmlDocPtr *)(local_30 + 0x20) = local_48;
            *(undefined8 *)(local_30 + 0x18) = local_58;
            *(undefined8 *)(local_30 + 0x10) = local_58;
            if (bVar1) {
              *(undefined4 *)(local_30 + 0x3c) = 1;
            }
          }
          if ((param_2 == 0) || (param_2 == 1)) {
            *(int *)(local_30 + 0x38) = *(int *)(local_30 + 0x38) + 1;
          }
          if (local_50 != 0) {
            *(long *)(local_50 + 0x18) = local_30;
          }
        }
        goto LAB_1001f8df7;
      }
    }
LAB_1001f8a01:
    if (((local_48 != (xmlDocPtr)0x0) && (!bVar1)) && (_xmlFreeDoc(local_48), local_30 != 0)) {
      *(undefined8 *)(local_30 + 0x20) = 0;
    }
    local_88 = 0xffffffff;
  }
  else {
    if (((param_3 == (xmlChar *)0x0) || (local_30 = FUN_1001f7fff(param_1,param_3), local_30 == 0))
       || (*(long *)(*(long *)(param_1 + 0x30) + 0x18) != local_30)) {
      local_50 = FUN_1001f7c29();
      if (local_50 == 0) {
        return 0xffffffff;
      }
      FUN_1001f8525(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18),local_50);
      *(int *)(local_50 + 8) = param_2;
      if ((param_2 == 0) || (param_2 == 1)) {
        *(undefined8 *)(local_50 + 0x10) = param_9;
        if (param_3 == (xmlChar *)0x0) goto LAB_1001f8df7;
        local_58 = param_9;
      }
      if (local_30 == 0) {
LAB_1001f889e:
        if ((param_2 == 0) || (param_2 == 1)) {
          if (local_30 == 0) {
            local_30 = FUN_1001f8138(param_1,param_9,1);
            if (local_30 != 0) {
              *(long *)(local_50 + 0x18) = local_30;
              if (*(long *)(local_30 + 8) != 0) {
                iVar2 = _xmlStrEqual(param_3,*(xmlChar **)(local_30 + 8));
                if (iVar2 == 0) {
                  FUN_1001e8dfe(param_1,0xc0b,param_7,0,
                                "Skipping import of schema located at \'%s\' for the namespace \'%s\', since this namespace was already imported with the schema located at \'%s\'"
                                ,param_3,param_9,*(undefined8 *)(local_30 + 8));
                }
                goto LAB_1001f8df7;
              }
              *(xmlChar **)(local_30 + 8) = param_3;
            }
LAB_1001f8908:
            if ((local_30 == 0) || (*(long *)(local_30 + 0x20) == 0)) goto LAB_1001f8a11;
            FUN_1001e8d2a(param_1,"xmlSchemaAddSchemaDoc",
                          "trying to load a schema doc, but a doc is already assigned to the schema bucket"
                         );
            goto LAB_1001f8a01;
          }
          *(long *)(local_50 + 0x18) = local_30;
        }
        else {
          if (local_30 == 0) goto LAB_1001f8908;
          if ((*(long *)(local_30 + 0x10) == 0) && (*(long *)(local_30 + 0x18) != param_8)) {
            lVar3 = FUN_1001f808c(param_1,param_3,param_8);
            if (lVar3 == 0) {
              local_30 = 0;
              goto LAB_1001f8908;
            }
            *(long *)(local_50 + 0x18) = lVar3;
          }
          else {
            *(long *)(local_50 + 0x18) = local_30;
          }
        }
      }
      else if (((param_2 == 0) || (param_2 == 1)) && (*(int *)(local_30 + 0x38) == 0)) {
        FUN_1001e8d5c(param_1,local_3c,param_7,0,
                      "The schema document \'%s\' cannot be imported, since it was already included or redefined"
                      ,param_3,0);
      }
      else {
        if (((param_2 == 0) || (param_2 == 1)) || (*(int *)(local_30 + 0x38) == 0))
        goto LAB_1001f889e;
        FUN_1001e8d5c(param_1,local_3c,param_7,0,
                      "The schema document \'%s\' cannot be included or redefined, since it was already imported"
                      ,param_3,0);
      }
    }
    else {
      FUN_1001e8d5c(param_1,local_3c,param_7,0,"The schema must not import/include/redefine itself",
                    0,0);
    }
LAB_1001f8df7:
    if (param_10 != (long *)0x0) {
      *param_10 = local_30;
    }
    local_88 = 0;
  }
  return local_88;
}

