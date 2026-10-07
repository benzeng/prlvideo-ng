
/* WARNING: Removing unreachable block (ram,0x0001001d1103) */
/* WARNING: Removing unreachable block (ram,0x0001001d111a) */

void FUN_1001d0baa(xmlNodePtr param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  xmlChar *pxVar2;
  undefined4 local_54;
  xmlChar *local_30;
  long local_28;
  undefined4 local_14;
  long *local_10;
  
  local_30 = (xmlChar *)0x0;
  local_28 = 0;
  if (param_1 != (xmlNodePtr)0x0) {
    iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"group");
    local_54 = param_2;
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"public");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"system");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"rewriteSystem");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"delegatePublic");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"delegateSystem");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"uri");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"rewriteURI");
                  if (iVar1 == 0) {
                    iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"delegateURI");
                    if (iVar1 == 0) {
                      iVar1 = _xmlStrEqual(param_1->name,(xmlChar *)"nextCatalog");
                      if (iVar1 != 0) {
                        local_28 = FUN_1001d091f(param_1,3,"nextCatalog",0,"catalog",param_2,param_4
                                                );
                      }
                    }
                    else {
                      local_28 = FUN_1001d091f(param_1,0xc,"delegateURI","uriStartString","catalog",
                                               param_2,param_4);
                    }
                  }
                  else {
                    local_28 = FUN_1001d091f(param_1,0xb,"rewriteURI","uriStartString",
                                             "rewritePrefix",param_2,param_4);
                  }
                }
                else {
                  local_28 = FUN_1001d091f(param_1,10,"uri","name","uri",param_2,param_4);
                }
              }
              else {
                local_28 = FUN_1001d091f(param_1,9,"delegateSystem","systemIdStartString","catalog",
                                         param_2,param_4);
              }
            }
            else {
              local_28 = FUN_1001d091f(param_1,8,"delegatePublic","publicIdStartString","catalog",
                                       param_2,param_4);
            }
          }
          else {
            local_28 = FUN_1001d091f(param_1,7,"rewriteSystem","systemIdStartString","rewritePrefix"
                                     ,param_2,param_4);
          }
        }
        else {
          local_28 = FUN_1001d091f(param_1,6,"system","systemId","uri",param_2,param_4);
        }
      }
      else {
        local_28 = FUN_1001d091f(param_1,5,"public","publicId","uri",param_2,param_4);
      }
    }
    else {
      local_14 = 0;
      pxVar2 = _xmlGetProp(param_1,(xmlChar *)"prefer");
      if (pxVar2 != (xmlChar *)0x0) {
        iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"system");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"public");
          if (iVar1 == 0) {
            FUN_1001ceeac(param_3,param_1,0x674,"Invalid value for prefer: \'%s\'\n",pxVar2,0,0);
          }
          else {
            local_54 = 1;
          }
        }
        else {
          local_54 = 2;
        }
        (*(code *)_xmlFree)(pxVar2);
        local_14 = local_54;
      }
      pxVar2 = _xmlGetProp(param_1,(xmlChar *)"id");
      local_30 = _xmlGetNsProp(param_1,(xmlChar *)"base",
                               (xmlChar *)"http://www.w3.org/XML/1998/namespace");
      local_28 = FUN_1001cef6b(4,pxVar2,local_30,0,local_14,param_4);
      (*(code *)_xmlFree)(pxVar2);
    }
    if (local_28 != 0) {
      if (param_3 != 0) {
        *(long *)(local_28 + 8) = param_3;
        if (*(long *)(param_3 + 0x10) == 0) {
          *(long *)(param_3 + 0x10) = local_28;
        }
        else {
          for (local_10 = *(long **)(param_3 + 0x10); *local_10 != 0; local_10 = (long *)*local_10)
          {
          }
          *local_10 = local_28;
        }
      }
      if (*(int *)(local_28 + 0x18) == 4) {
        FUN_1001d112c(param_1->children,local_54,param_3,local_28);
      }
    }
    if (local_30 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_30);
    }
  }
  return;
}

