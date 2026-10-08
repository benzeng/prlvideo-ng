
undefined8 * FUN_100962bd4(long param_1,xmlChar *param_2,long param_3,xmlChar *param_4)

{
  int iVar1;
  xmlDocPtr pxVar2;
  xmlChar *pxVar3;
  xmlNodePtr pxVar4;
  xmlAttrPtr pxVar5;
  undefined8 *local_70;
  int local_34;
  xmlNodePtr local_28;
  
  local_34 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0xd0) <= local_34) {
      pxVar2 = _xmlReadFile((char *)param_2,(char *)0x0,0);
      if (pxVar2 == (xmlDocPtr)0x0) {
        FUN_100960ece(param_1,param_3,0x429,"xmlRelaxNG: could not load %s\n",param_2,0);
        local_70 = (undefined8 *)0x0;
      }
      else {
        local_70 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
        if (local_70 == (undefined8 *)0x0) {
          FUN_100960bbc(param_1,"allocating include\n");
          _xmlFreeDoc(pxVar2);
          local_70 = (undefined8 *)0x0;
        }
        else {
          *local_70 = 0;
          local_70[1] = 0;
          local_70[2] = 0;
          local_70[3] = 0;
          local_70[4] = 0;
          local_70[2] = pxVar2;
          pxVar3 = _xmlStrdup(param_2);
          local_70[1] = pxVar3;
          *local_70 = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 **)(param_1 + 0x78) = local_70;
          if (((param_4 != (xmlChar *)0x0) &&
              (pxVar4 = _xmlDocGetRootElement(pxVar2), pxVar4 != (xmlNodePtr)0x0)) &&
             (pxVar5 = _xmlHasProp(pxVar4,(xmlChar *)"ns"), pxVar5 == (xmlAttrPtr)0x0)) {
            _xmlSetProp(pxVar4,(xmlChar *)"ns",param_4);
          }
          FUN_1009626fa(param_1,local_70);
          pxVar2 = (xmlDocPtr)FUN_10096e9ef(param_1,pxVar2);
          if (pxVar2 == (xmlDocPtr)0x0) {
            *(undefined8 *)(param_1 + 200) = 0;
            local_70 = (undefined8 *)0x0;
          }
          else {
            FUN_100962874(param_1);
            pxVar4 = _xmlDocGetRootElement(pxVar2);
            if (pxVar4 == (xmlNodePtr)0x0) {
              FUN_100960ece(param_1,param_3,0x3fe,"xmlRelaxNG: included document is empty %s\n",
                            param_2,0);
              local_70 = (undefined8 *)0x0;
            }
            else if (((pxVar4 == (xmlNodePtr)0x0) || (pxVar4->ns == (xmlNs *)0x0)) ||
                    ((iVar1 = _xmlStrEqual(pxVar4->name,(xmlChar *)"grammar"), iVar1 == 0 ||
                     (iVar1 = _xmlStrEqual(pxVar4->ns->href,
                                           PTR_s_http___relaxng_org_ns_structure__10227d2b0),
                     iVar1 == 0)))) {
              FUN_100960ece(param_1,param_3,0x40e,
                            "xmlRelaxNG: included document %s root is not a grammar\n",param_2,0);
              local_70 = (undefined8 *)0x0;
            }
            else {
              for (local_28 = *(xmlNodePtr *)(param_3 + 0x18); local_28 != (xmlNodePtr)0x0;
                  local_28 = local_28->next) {
                if (((local_28 == (xmlNodePtr)0x0) || (local_28->ns == (xmlNs *)0x0)) ||
                   ((iVar1 = _xmlStrEqual(local_28->name,(xmlChar *)"start"), iVar1 == 0 ||
                    (iVar1 = _xmlStrEqual(local_28->ns->href,
                                          PTR_s_http___relaxng_org_ns_structure__10227d2b0),
                    iVar1 == 0)))) {
                  if ((((local_28 != (xmlNodePtr)0x0) && (local_28->ns != (xmlNs *)0x0)) &&
                      (iVar1 = _xmlStrEqual(local_28->name,(xmlChar *)"define"), iVar1 != 0)) &&
                     (iVar1 = _xmlStrEqual(local_28->ns->href,
                                           PTR_s_http___relaxng_org_ns_structure__10227d2b0),
                     iVar1 != 0)) {
                    pxVar3 = _xmlGetProp(local_28,(xmlChar *)"name");
                    if (pxVar3 == (xmlChar *)0x0) {
                      FUN_100960ece(param_1,param_3,0x41d,
                                    "xmlRelaxNG: include %s has define without name\n",param_2,0);
                    }
                    else {
                      FUN_10096d1af(pxVar3);
                      iVar1 = FUN_100962958(param_1,param_2,pxVar4->children,pxVar3);
                      if (iVar1 == 0) {
                        FUN_100960ece(param_1,param_3,0x3f5,
                                      "xmlRelaxNG: include %s has a define %s but not the included grammar\n"
                                      ,param_2,pxVar3);
                      }
                      (*(code *)_xmlFree)(pxVar3);
                    }
                  }
                }
                else {
                  iVar1 = FUN_100962958(param_1,param_2,pxVar4->children,0);
                  if (iVar1 == 0) {
                    FUN_100960ece(param_1,param_3,0x453,
                                  "xmlRelaxNG: include %s has a start but not the included grammar\n"
                                  ,param_2,0);
                  }
                }
              }
            }
          }
        }
      }
      return local_70;
    }
    iVar1 = _xmlStrEqual(*(xmlChar **)
                          (*(long *)(*(long *)(param_1 + 0xd8) + (long)local_34 * 8) + 8),param_2);
    if (iVar1 != 0) break;
    local_34 = local_34 + 1;
  }
  FUN_100960ece(param_1,0,0x414,"Detected an Include recursion for %s\n",param_2,0);
  return (undefined8 *)0x0;
}

