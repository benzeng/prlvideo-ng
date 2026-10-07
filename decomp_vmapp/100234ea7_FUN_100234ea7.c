
undefined4 * FUN_100234ea7(long param_1,xmlNodePtr param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  xmlChar *pxVar4;
  xmlHashTablePtr pxVar5;
  void *pvVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *local_60;
  
  if (param_2 == (xmlNodePtr)0x0) {
    return (undefined4 *)0x0;
  }
  if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
      (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"element"), iVar2 == 0)) ||
     (iVar2 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
     iVar2 == 0)) {
    if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
       ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"attribute"), iVar2 == 0 ||
        (iVar2 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
        iVar2 == 0)))) {
      if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
         ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"empty"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
          iVar2 == 0)))) {
        if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
            (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"text"), iVar2 == 0)) ||
           (iVar2 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0)
           , iVar2 == 0)) {
          if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
             ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"zeroOrMore"), iVar2 == 0 ||
              (iVar2 = _xmlStrEqual(param_2->ns->href,
                                    PTR_s_http___relaxng_org_ns_structure__1011151b0), iVar2 == 0)))
             ) {
            if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
               ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"oneOrMore"), iVar2 == 0 ||
                (iVar2 = _xmlStrEqual(param_2->ns->href,
                                      PTR_s_http___relaxng_org_ns_structure__1011151b0), iVar2 == 0)
                ))) {
              if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                  (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"optional"), iVar2 == 0)) ||
                 (iVar2 = _xmlStrEqual(param_2->ns->href,
                                       PTR_s_http___relaxng_org_ns_structure__1011151b0), iVar2 == 0
                 )) {
                if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                   ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"choice"), iVar2 == 0 ||
                    (iVar2 = _xmlStrEqual(param_2->ns->href,
                                          PTR_s_http___relaxng_org_ns_structure__1011151b0),
                    iVar2 == 0)))) {
                  if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                      (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"group"), iVar2 == 0)) ||
                     (iVar2 = _xmlStrEqual(param_2->ns->href,
                                           PTR_s_http___relaxng_org_ns_structure__1011151b0),
                     iVar2 == 0)) {
                    if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                        (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"ref"), iVar2 == 0)) ||
                       (iVar2 = _xmlStrEqual(param_2->ns->href,
                                             PTR_s_http___relaxng_org_ns_structure__1011151b0),
                       iVar2 == 0)) {
                      if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                         ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"data"), iVar2 == 0 ||
                          (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                PTR_s_http___relaxng_org_ns_structure__1011151b0),
                          iVar2 == 0)))) {
                        if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                           ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"value"), iVar2 == 0 ||
                            (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                            iVar2 == 0)))) {
                          if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                              (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"list"), iVar2 == 0))
                             || (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                            
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                iVar2 == 0)) {
                            if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                               ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"interleave"),
                                iVar2 == 0 ||
                                (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                            
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                iVar2 == 0)))) {
                              if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
                                 ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"externalRef"),
                                  iVar2 == 0 ||
                                  (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                                
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                  iVar2 == 0)))) {
                                if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0))
                                    || (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"notAllowed"),
                                       iVar2 == 0)) ||
                                   (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                                  
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                   iVar2 == 0)) {
                                  if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)
                                      ) || ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"grammar"
                                                                 ), iVar2 == 0 ||
                                            (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                                                    
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                            iVar2 == 0)))) {
                                    if (((param_2 == (xmlNodePtr)0x0) ||
                                        (param_2->ns == (xmlNs *)0x0)) ||
                                       ((iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"parentRef"),
                                        iVar2 == 0 ||
                                        (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                                            
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                        iVar2 == 0)))) {
                                      if ((((param_2 == (xmlNodePtr)0x0) ||
                                           (param_2->ns == (xmlNs *)0x0)) ||
                                          (iVar2 = _xmlStrEqual(param_2->name,(xmlChar *)"mixed"),
                                          iVar2 == 0)) ||
                                         (iVar2 = _xmlStrEqual(param_2->ns->href,
                                                                                                                              
                                                  PTR_s_http___relaxng_org_ns_structure__1011151b0),
                                         iVar2 == 0)) {
                                        FUN_10022d5a6(param_1,param_2,0x45b,
                                                      "Unexpected node %s is not a pattern\n",
                                                      param_2->name,0);
                                        local_60 = (undefined4 *)0x0;
                                      }
                                      else if (param_2->children == (_xmlNode *)0x0) {
                                        FUN_10022d5a6(param_1,param_2,0x3ff,"Mixed is empty\n",0,0);
                                        local_60 = (undefined4 *)0x0;
                                      }
                                      else {
                                        local_60 = (undefined4 *)FUN_1002346bc(param_1,param_2);
                                        if (local_60 != (undefined4 *)0x0) {
                                          if (((*(long *)(local_60 + 0xc) != 0) &&
                                              (*(long *)(*(long *)(local_60 + 0xc) + 0x40) != 0)) &&
                                             (puVar8 = (undefined4 *)FUN_10022dc25(param_1,param_2),
                                             puVar8 != (undefined4 *)0x0)) {
                                            *puVar8 = 0x12;
                                            *(undefined8 *)(puVar8 + 0xc) =
                                                 *(undefined8 *)(local_60 + 0xc);
                                            *(undefined4 **)(local_60 + 0xc) = puVar8;
                                          }
                                          puVar8 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                                          if (puVar8 == (undefined4 *)0x0) {
                                            return local_60;
                                          }
                                          *puVar8 = 3;
                                          *(undefined8 *)(puVar8 + 0x10) =
                                               *(undefined8 *)(local_60 + 0xc);
                                          *(undefined4 **)(local_60 + 0xc) = puVar8;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(long *)(param_1 + 0x38) == 0) {
                                        FUN_10022d5a6(param_1,param_2,0x427,
                                                      "Use of parentRef without a parent grammar\n",
                                                      0,0);
                                        return (undefined4 *)0x0;
                                      }
                                      local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                                      if (local_60 == (undefined4 *)0x0) {
                                        return (undefined4 *)0x0;
                                      }
                                      *local_60 = 0xd;
                                      pxVar4 = _xmlGetProp(param_2,(xmlChar *)"name");
                                      *(xmlChar **)(local_60 + 4) = pxVar4;
                                      if (*(long *)(local_60 + 4) == 0) {
                                        FUN_10022d5a6(param_1,param_2,0x426,
                                                      "parentRef has no name\n",0,0);
                                      }
                                      else {
                                        FUN_100239887(*(undefined8 *)(local_60 + 4));
                                        iVar2 = _xmlValidateNCName(*(xmlChar **)(local_60 + 4),0);
                                        if (iVar2 != 0) {
                                          FUN_10022d5a6(param_1,param_2,0x425,
                                                        "parentRef name \'%s\' is not an NCName\n",
                                                        *(undefined8 *)(local_60 + 4),0);
                                        }
                                      }
                                      if (param_2->children != (_xmlNode *)0x0) {
                                        FUN_10022d5a6(param_1,param_2,0x428,
                                                      "parentRef is not empty\n",0,0);
                                      }
                                      if (*(long *)(*(long *)(param_1 + 0x38) + 0x38) == 0) {
                                        lVar1 = *(long *)(param_1 + 0x38);
                                        pxVar5 = _xmlHashCreate(10);
                                        *(xmlHashTablePtr *)(lVar1 + 0x38) = pxVar5;
                                      }
                                      if (*(long *)(*(long *)(param_1 + 0x38) + 0x38) == 0) {
                                        FUN_10022d5a6(param_1,param_2,0x424,
                                                      "Could not create references hash\n",0,0);
                                        local_60 = (undefined4 *)0x0;
                                      }
                                      else if ((*(long *)(local_60 + 4) != 0) &&
                                              (iVar2 = _xmlHashAddEntry(*(xmlHashTablePtr *)
                                                                         (*(long *)(param_1 + 0x38)
                                                                         + 0x38),*(xmlChar **)
                                                                                  (local_60 + 4),
                                                                        local_60), iVar2 < 0)) {
                                        pvVar6 = _xmlHashLookup(*(xmlHashTablePtr *)
                                                                 (*(long *)(param_1 + 0x38) + 0x38),
                                                                *(xmlChar **)(local_60 + 4));
                                        if (pvVar6 == (void *)0x0) {
                                          FUN_10022d5a6(param_1,param_2,0x424,
                                                                                                                
                                                  "Internal error parentRef definitions \'%s\'\n",
                                                  *(undefined8 *)(local_60 + 4),0);
                                          local_60 = (undefined4 *)0x0;
                                        }
                                        else {
                                          *(undefined8 *)(local_60 + 0x16) =
                                               *(undefined8 *)((long)pvVar6 + 0x58);
                                          *(undefined4 **)((long)pvVar6 + 0x58) = local_60;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    uVar3 = *(undefined8 *)(param_1 + 0x38);
                                    lVar1 = *(long *)(param_1 + 0x30);
                                    *(long *)(param_1 + 0x38) = lVar1;
                                    lVar7 = FUN_100239064(param_1,param_2->children);
                                    if (lVar1 != 0) {
                                      *(long *)(param_1 + 0x30) = lVar1;
                                      *(undefined8 *)(param_1 + 0x38) = uVar3;
                                    }
                                    if (lVar7 == 0) {
                                      local_60 = (undefined4 *)0x0;
                                    }
                                    else {
                                      local_60 = *(undefined4 **)(lVar7 + 0x18);
                                    }
                                  }
                                }
                                else {
                                  local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                                  if (local_60 == (undefined4 *)0x0) {
                                    return (undefined4 *)0x0;
                                  }
                                  *local_60 = 1;
                                  if (param_2->children != (_xmlNode *)0x0) {
                                    FUN_10022d5a6(param_1,param_2,0x41f,
                                                  "xmlRelaxNGParse: notAllowed element is not empty\n"
                                                  ,0,0);
                                  }
                                }
                              }
                              else {
                                local_60 = (undefined4 *)FUN_100234c91(param_1,param_2);
                              }
                            }
                            else {
                              local_60 = (undefined4 *)FUN_1002346bc(param_1,param_2);
                            }
                          }
                          else {
                            local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                            if (local_60 == (undefined4 *)0x0) {
                              return (undefined4 *)0x0;
                            }
                            *local_60 = 8;
                            if (param_2->children == (_xmlNode *)0x0) {
                              FUN_10022d5a6(param_1,param_2,0x3ff,"Element %s is empty\n",
                                            param_2->name,0);
                            }
                            else {
                              uVar3 = FUN_100236ecb(param_1,param_2->children,0);
                              *(undefined8 *)(local_60 + 0xc) = uVar3;
                            }
                          }
                        }
                        else {
                          local_60 = (undefined4 *)FUN_1002327d1(param_1,param_2);
                        }
                      }
                      else {
                        local_60 = (undefined4 *)FUN_100232b3e(param_1,param_2);
                      }
                    }
                    else {
                      local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                      if (local_60 == (undefined4 *)0x0) {
                        return (undefined4 *)0x0;
                      }
                      *local_60 = 0xb;
                      pxVar4 = _xmlGetProp(param_2,(xmlChar *)"name");
                      *(xmlChar **)(local_60 + 4) = pxVar4;
                      if (*(long *)(local_60 + 4) == 0) {
                        FUN_10022d5a6(param_1,param_2,0x44e,"ref has no name\n",0,0);
                      }
                      else {
                        FUN_100239887(*(undefined8 *)(local_60 + 4));
                        iVar2 = _xmlValidateNCName(*(xmlChar **)(local_60 + 4),0);
                        if (iVar2 != 0) {
                          FUN_10022d5a6(param_1,param_2,0x44c,"ref name \'%s\' is not an NCName\n",
                                        *(undefined8 *)(local_60 + 4),0);
                        }
                      }
                      if (param_2->children != (_xmlNode *)0x0) {
                        FUN_10022d5a6(param_1,param_2,0x44f,"ref is not empty\n",0,0);
                      }
                      if (*(long *)(*(long *)(param_1 + 0x30) + 0x38) == 0) {
                        lVar1 = *(long *)(param_1 + 0x30);
                        pxVar5 = _xmlHashCreate(10);
                        *(xmlHashTablePtr *)(lVar1 + 0x38) = pxVar5;
                      }
                      if (*(long *)(*(long *)(param_1 + 0x30) + 0x38) == 0) {
                        FUN_10022d5a6(param_1,param_2,0x44a,"Could not create references hash\n",0,0
                                     );
                        local_60 = (undefined4 *)0x0;
                      }
                      else {
                        iVar2 = _xmlHashAddEntry(*(xmlHashTablePtr *)
                                                  (*(long *)(param_1 + 0x30) + 0x38),
                                                 *(xmlChar **)(local_60 + 4),local_60);
                        if (iVar2 < 0) {
                          pvVar6 = _xmlHashLookup(*(xmlHashTablePtr *)
                                                   (*(long *)(param_1 + 0x30) + 0x38),
                                                  *(xmlChar **)(local_60 + 4));
                          if (pvVar6 == (void *)0x0) {
                            if (*(long *)(local_60 + 4) == 0) {
                              FUN_10022d5a6(param_1,param_2,0x44a,"Error refs definitions\n",0,0);
                            }
                            else {
                              FUN_10022d5a6(param_1,param_2,0x44a,"Error refs definitions \'%s\'\n",
                                            *(undefined8 *)(local_60 + 4),0);
                            }
                            local_60 = (undefined4 *)0x0;
                          }
                          else {
                            *(undefined8 *)(local_60 + 0x16) = *(undefined8 *)((long)pvVar6 + 0x58);
                            *(undefined4 **)((long)pvVar6 + 0x58) = local_60;
                          }
                        }
                      }
                    }
                  }
                  else {
                    local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                    if (local_60 == (undefined4 *)0x0) {
                      return (undefined4 *)0x0;
                    }
                    *local_60 = 0x12;
                    if (param_2->children == (_xmlNode *)0x0) {
                      FUN_10022d5a6(param_1,param_2,0x3ff,"Element %s is empty\n",param_2->name,0);
                    }
                    else {
                      uVar3 = FUN_100236ecb(param_1,param_2->children,0);
                      *(undefined8 *)(local_60 + 0xc) = uVar3;
                    }
                  }
                }
                else {
                  local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                  if (local_60 == (undefined4 *)0x0) {
                    return (undefined4 *)0x0;
                  }
                  *local_60 = 0x11;
                  if (param_2->children == (_xmlNode *)0x0) {
                    FUN_10022d5a6(param_1,param_2,0x3ff,"Element %s is empty\n",param_2->name,0);
                  }
                  else {
                    uVar3 = FUN_100236ecb(param_1,param_2->children,0);
                    *(undefined8 *)(local_60 + 0xc) = uVar3;
                  }
                }
              }
              else {
                local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
                if (local_60 == (undefined4 *)0x0) {
                  return (undefined4 *)0x0;
                }
                *local_60 = 0xe;
                if (param_2->children == (_xmlNode *)0x0) {
                  FUN_10022d5a6(param_1,param_2,0x3ff,"Element %s is empty\n",param_2->name,0);
                }
                else {
                  uVar3 = FUN_100236ecb(param_1,param_2->children,1);
                  *(undefined8 *)(local_60 + 0xc) = uVar3;
                }
              }
            }
            else {
              local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
              if (local_60 == (undefined4 *)0x0) {
                return (undefined4 *)0x0;
              }
              *local_60 = 0x10;
              if (param_2->children == (_xmlNode *)0x0) {
                FUN_10022d5a6(param_1,param_2,0x3ff,"Element %s is empty\n",param_2->name,0);
              }
              else {
                uVar3 = FUN_100236ecb(param_1,param_2->children,1);
                *(undefined8 *)(local_60 + 0xc) = uVar3;
              }
            }
          }
          else {
            local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
            if (local_60 == (undefined4 *)0x0) {
              return (undefined4 *)0x0;
            }
            *local_60 = 0xf;
            if (param_2->children == (_xmlNode *)0x0) {
              FUN_10022d5a6(param_1,param_2,0x3ff,"Element %s is empty\n",param_2->name,0);
            }
            else {
              uVar3 = FUN_100236ecb(param_1,param_2->children,1);
              *(undefined8 *)(local_60 + 0xc) = uVar3;
            }
          }
        }
        else {
          local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
          if (local_60 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
          }
          *local_60 = 3;
          if (param_2->children != (_xmlNode *)0x0) {
            FUN_10022d5a6(param_1,param_2,0x455,"text: had a child node\n",0,0);
          }
        }
      }
      else {
        local_60 = (undefined4 *)FUN_10022dc25(param_1,param_2);
        if (local_60 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        *local_60 = 0;
        if (param_2->children != (_xmlNode *)0x0) {
          FUN_10022d5a6(param_1,param_2,0x401,"empty: had a child node\n",0,0);
        }
      }
    }
    else {
      local_60 = (undefined4 *)FUN_100236075(param_1,param_2);
    }
  }
  else {
    local_60 = (undefined4 *)FUN_100236b68(param_1,param_2);
  }
  return local_60;
}

