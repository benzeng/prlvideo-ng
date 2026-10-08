
void FUN_10096d38a(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  xmlChar *pxVar3;
  long *plVar4;
  long local_28;
  
  lVar1 = *(long *)(param_2 + 0x58);
  while (local_28 = lVar1, local_28 != 0) {
    lVar1 = *(long *)(local_28 + 0x30);
    if ((*(long *)(local_28 + 0x48) == 0) ||
       (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                             PTR_s_http___relaxng_org_ns_structure__10227d2b0), iVar2 != 0)) {
      iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"name");
      if (iVar2 == 0) {
        iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"type");
        if (iVar2 == 0) {
          iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"href");
          if (iVar2 == 0) {
            iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"combine");
            if (iVar2 == 0) {
              iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"datatypeLibrary");
              if (iVar2 == 0) {
                iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"ns");
                if (iVar2 == 0) {
                  FUN_100960ece(param_1,param_2,0x459,"Unknown attribute %s on %s\n",
                                *(undefined8 *)(local_28 + 0x10),*(undefined8 *)(param_2 + 0x10));
                }
              }
              else {
                pxVar3 = _xmlNodeListGetString
                                   (*(xmlDocPtr *)(param_2 + 0x40),*(xmlNodePtr *)(local_28 + 0x18),
                                    1);
                if (pxVar3 != (xmlChar *)0x0) {
                  if (*pxVar3 != '\0') {
                    plVar4 = (long *)_xmlParseURI(pxVar3);
                    if (plVar4 == (long *)0x0) {
                      FUN_100960ece(param_1,param_2,0x41a,"Attribute %s contains invalid URI %s\n",
                                    *(undefined8 *)(local_28 + 0x10),pxVar3);
                    }
                    else {
                      if (*plVar4 == 0) {
                        FUN_100960ece(param_1,param_2,0x45e,"Attribute %s URI %s is not absolute\n",
                                      *(undefined8 *)(local_28 + 0x10),pxVar3);
                      }
                      if (plVar4[8] != 0) {
                        FUN_100960ece(param_1,param_2,0x45d,
                                      "Attribute %s URI %s has a fragment ID\n",
                                      *(undefined8 *)(local_28 + 0x10),pxVar3);
                      }
                      _xmlFreeURI(plVar4);
                    }
                  }
                  (*(code *)_xmlFree)(pxVar3);
                }
              }
            }
            else {
              iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"start");
              if ((iVar2 == 0) &&
                 (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"define"),
                 iVar2 == 0)) {
                FUN_100960ece(param_1,param_2,0x40a,"Attribute %s is not allowed on %s\n",
                              *(undefined8 *)(local_28 + 0x10),*(undefined8 *)(param_2 + 0x10));
              }
            }
          }
          else {
            iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"externalRef");
            if ((iVar2 == 0) &&
               (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"include"), iVar2 == 0
               )) {
              FUN_100960ece(param_1,param_2,0x40a,"Attribute %s is not allowed on %s\n",
                            *(undefined8 *)(local_28 + 0x10),*(undefined8 *)(param_2 + 0x10));
            }
          }
        }
        else {
          iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"value");
          if ((iVar2 == 0) &&
             (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"data"), iVar2 == 0)) {
            FUN_100960ece(param_1,param_2,0x40a,"Attribute %s is not allowed on %s\n",
                          *(undefined8 *)(local_28 + 0x10),*(undefined8 *)(param_2 + 0x10));
          }
        }
      }
      else {
        iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"element");
        if ((((iVar2 == 0) &&
             (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"attribute"), iVar2 == 0
             )) && (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"ref"), iVar2 == 0
                   )) &&
           (((iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"parentRef"), iVar2 == 0
             && (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"param"), iVar2 == 0)
             ) && (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"define"),
                  iVar2 == 0)))) {
          FUN_100960ece(param_1,param_2,0x40a,"Attribute %s is not allowed on %s\n",
                        *(undefined8 *)(local_28 + 0x10),*(undefined8 *)(param_2 + 0x10));
        }
      }
    }
  }
  return;
}

