
int * FUN_1001f0649(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  xmlChar *str1;
  undefined8 uVar3;
  int *local_48;
  long local_20;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_48 = (int *)0x0;
  }
  else {
    local_48 = (int *)_xmlSchemaNewFacet();
    if (local_48 == (int *)0x0) {
      FUN_1001e8056(param_1,"allocating facet",param_3);
      local_48 = (int *)0x0;
    }
    else {
      *(long *)(local_48 + 10) = param_3;
      lVar2 = FUN_1001ecf8b(param_1,param_3,"value");
      if (lVar2 == 0) {
        FUN_1001e81bc(param_1,param_3,0,0x6ac,"Facet %s has no value\n",
                      *(undefined8 *)(param_3 + 0x10),0);
        _xmlSchemaFreeFacet(local_48);
        local_48 = (int *)0x0;
      }
      else {
        if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"minInclusive"),
            iVar1 == 0 ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0))))
        {
          if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
             ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"minExclusive"),
              iVar1 == 0 ||
              (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)))
             ) {
            if ((((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                (iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"maxInclusive"),
                iVar1 == 0)) ||
               (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0))
            {
              if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                 ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"maxExclusive"),
                  iVar1 == 0 ||
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                  iVar1 == 0)))) {
                if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                   ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"totalDigits"),
                    iVar1 == 0 ||
                    (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                          PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                    iVar1 == 0)))) {
                  if ((((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                      (iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),
                                            (xmlChar *)"fractionDigits"), iVar1 == 0)) ||
                     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                     iVar1 == 0)) {
                    if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                       ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"pattern"),
                        iVar1 == 0 ||
                        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                              PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                        iVar1 == 0)))) {
                      if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                         ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),
                                                (xmlChar *)"enumeration"), iVar1 == 0 ||
                          (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                          iVar1 == 0)))) {
                        if ((((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                            (iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),
                                                  (xmlChar *)"whiteSpace"), iVar1 == 0)) ||
                           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                           iVar1 == 0)) {
                          if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                             ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),
                                                    (xmlChar *)"length"), iVar1 == 0 ||
                              (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750
                                                   ), iVar1 == 0)))) {
                            if (((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                               ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),
                                                      (xmlChar *)"maxLength"), iVar1 == 0 ||
                                (iVar1 = _xmlStrEqual(*(xmlChar **)
                                                       (*(long *)(param_3 + 0x48) + 0x10),
                                                                                                            
                                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                                iVar1 == 0)))) {
                              if ((((param_3 == 0) || (*(long *)(param_3 + 0x48) == 0)) ||
                                  (iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),
                                                        (xmlChar *)"minLength"), iVar1 == 0)) ||
                                 (iVar1 = _xmlStrEqual(*(xmlChar **)
                                                        (*(long *)(param_3 + 0x48) + 0x10),
                                                                                                              
                                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                                 iVar1 == 0)) {
                                FUN_1001e81bc(param_1,param_3,0,0x6cd,"Unknown facet type %s\n",
                                              *(undefined8 *)(param_3 + 0x10),0);
                                _xmlSchemaFreeFacet(local_48);
                                return (int *)0x0;
                              }
                              *local_48 = 0x3f3;
                            }
                            else {
                              *local_48 = 0x3f2;
                            }
                          }
                          else {
                            *local_48 = 0x3f1;
                          }
                        }
                        else {
                          *local_48 = 0x3f0;
                        }
                      }
                      else {
                        *local_48 = 0x3ef;
                      }
                    }
                    else {
                      *local_48 = 0x3ee;
                    }
                  }
                  else {
                    *local_48 = 0x3ed;
                  }
                }
                else {
                  *local_48 = 0x3ec;
                }
              }
              else {
                *local_48 = 0x3eb;
              }
            }
            else {
              *local_48 = 0x3ea;
            }
          }
          else {
            *local_48 = 0x3e9;
          }
        }
        else {
          *local_48 = 1000;
        }
        FUN_1001ef36d(param_1,0,local_48,param_3,"id");
        *(long *)(local_48 + 4) = lVar2;
        if (((*local_48 != 0x3ee) && (*local_48 != 0x3ef)) &&
           ((str1 = (xmlChar *)FUN_1001ecf8b(param_1,param_3,"fixed"), str1 != (xmlChar *)0x0 &&
            (iVar1 = _xmlStrEqual(str1,(xmlChar *)"true"), iVar1 != 0)))) {
          local_48[0xc] = 1;
        }
        local_20 = *(long *)(param_3 + 0x18);
        if (((local_20 != 0) && (*(long *)(local_20 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"annotation"),
            iVar1 != 0 &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0))))
        {
          uVar3 = FUN_1001f020a(param_1,param_2,local_20);
          *(undefined8 *)(local_48 + 8) = uVar3;
          local_20 = *(long *)(local_20 + 0x30);
        }
        if (local_20 != 0) {
          FUN_1001e81bc(param_1,param_3,local_20,0x6cc,"Facet %s has unexpected child content\n",
                        *(undefined8 *)(param_3 + 0x10),0);
        }
      }
    }
  }
  return local_48;
}

