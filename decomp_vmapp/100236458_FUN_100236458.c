
int * FUN_100236458(long param_1,xmlNodePtr param_2,int *param_3)

{
  int iVar1;
  xmlChar *pxVar2;
  undefined8 uVar3;
  long lVar4;
  int *local_30;
  long local_28;
  _xmlNode *local_18;
  long local_10;
  
  local_30 = param_3;
  if ((((((param_2 != (xmlNodePtr)0x0) && (param_2->ns != (xmlNs *)0x0)) &&
        (iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"name"), iVar1 != 0)) &&
       (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
       iVar1 != 0)) ||
      ((((param_2 != (xmlNodePtr)0x0 && (param_2->ns != (xmlNs *)0x0)) &&
        ((iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"anyName"), iVar1 != 0 &&
         (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
         iVar1 != 0)))) ||
       (((param_2 != (xmlNodePtr)0x0 && (param_2->ns != (xmlNs *)0x0)) &&
        ((iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"nsName"), iVar1 != 0 &&
         (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
         iVar1 != 0)))))))) && ((*param_3 != 4 && (*param_3 != 9)))) {
    local_30 = (int *)FUN_10022dc25(param_1,param_2);
    if (local_30 == (int *)0x0) {
      return (int *)0x0;
    }
    *(int **)(local_30 + 0xe) = param_3;
    if ((*(uint *)(param_1 + 0x40) & 1) == 0) {
      *local_30 = 4;
    }
    else {
      *local_30 = 9;
    }
  }
  if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
      (iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"name"), iVar1 == 0)) ||
     (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
     iVar1 == 0)) {
    if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
       ((iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"anyName"), iVar1 == 0 ||
        (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
        iVar1 == 0)))) {
      if (((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
         ((iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"nsName"), iVar1 == 0 ||
          (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
          iVar1 == 0)))) {
        if ((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
            (iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"choice"), iVar1 == 0)) ||
           (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0)
           , iVar1 == 0)) {
          FUN_10022d5a6(param_1,param_2,0x3ee,"expecting name, anyName, nsName or choice : got %s\n"
                        ,param_2->name,0);
          return (int *)0x0;
        }
        local_10 = 0;
        local_30 = (int *)FUN_10022dc25(param_1,param_2);
        if (local_30 == (int *)0x0) {
          return (int *)0x0;
        }
        *(int **)(local_30 + 0xe) = param_3;
        *local_30 = 0x11;
        if (param_2->children == (_xmlNode *)0x0) {
          FUN_10022d5a6(param_1,param_2,0x3ef,"Element choice is empty\n",0,0);
        }
        else {
          for (local_18 = param_2->children; local_18 != (_xmlNode *)0x0; local_18 = local_18->next)
          {
            lVar4 = FUN_100236458(param_1,local_18,local_30);
            if (lVar4 != 0) {
              if (local_10 == 0) {
                *(long *)(local_30 + 0x14) = lVar4;
                local_10 = *(long *)(local_30 + 0x14);
              }
              else {
                *(long *)(local_10 + 0x40) = lVar4;
                local_10 = lVar4;
              }
            }
          }
        }
      }
      else {
        local_30[4] = 0;
        local_30[5] = 0;
        pxVar2 = _xmlGetProp(param_2,(xmlChar *)"ns");
        *(xmlChar **)(local_30 + 6) = pxVar2;
        if (*(long *)(local_30 + 6) == 0) {
          FUN_10022d5a6(param_1,param_2,0x421,"nsName has no ns attribute\n",0,0);
        }
        if ((((*(uint *)(param_1 + 0x40) & 1) != 0) && (*(long *)(local_30 + 6) != 0)) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 6),
                                 (xmlChar *)"http://www.w3.org/2000/xmlns"), iVar1 != 0)) {
          FUN_10022d5a6(param_1,param_2,0x462,"Attribute with namespace \'%s\' is not allowed\n",
                        *(undefined8 *)(local_30 + 6),0);
        }
        if (param_2->children != (_xmlNode *)0x0) {
          uVar3 = FUN_10023627d(param_1,param_2->children,*param_3 == 9);
          *(undefined8 *)(local_30 + 0x14) = uVar3;
        }
      }
    }
    else {
      local_30[4] = 0;
      local_30[5] = 0;
      local_30[6] = 0;
      local_30[7] = 0;
      if (param_2->children != (_xmlNode *)0x0) {
        uVar3 = FUN_10023627d(param_1,param_2->children,*param_3 == 9);
        *(undefined8 *)(local_30 + 0x14) = uVar3;
      }
    }
  }
  else {
    pxVar2 = _xmlNodeGetContent(param_2);
    FUN_100239887(pxVar2);
    iVar1 = _xmlValidateNCName(pxVar2,0);
    if (iVar1 != 0) {
      if (param_2->parent == (_xmlNode *)0x0) {
        FUN_10022d5a6(param_1,param_2,0x3fb,"name \'%s\' is not an NCName\n",pxVar2,0);
      }
      else {
        FUN_10022d5a6(param_1,param_2,0x3fb,"Element %s name \'%s\' is not an NCName\n",
                      param_2->parent->name,pxVar2);
      }
    }
    *(xmlChar **)(local_30 + 4) = pxVar2;
    pxVar2 = _xmlGetProp(param_2,(xmlChar *)"ns");
    *(xmlChar **)(local_30 + 6) = pxVar2;
    if ((((*(uint *)(param_1 + 0x40) & 1) != 0) && (pxVar2 != (xmlChar *)0x0)) &&
       (iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"http://www.w3.org/2000/xmlns"), iVar1 != 0)) {
      FUN_10022d5a6(param_1,param_2,0x462,"Attribute with namespace \'%s\' is not allowed\n",pxVar2,
                    0);
    }
    if (((((*(uint *)(param_1 + 0x40) & 1) != 0) && (pxVar2 != (xmlChar *)0x0)) && (*pxVar2 == '\0')
        ) && (iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 4),(xmlChar *)"xmlns"), iVar1 != 0)) {
      FUN_10022d5a6(param_1,param_2,0x461,"Attribute with QName \'xmlns\' is not allowed\n",pxVar2,0
                   );
    }
  }
  if (local_30 != param_3) {
    if (*(long *)(param_3 + 0x14) == 0) {
      *(int **)(param_3 + 0x14) = local_30;
    }
    else {
      for (local_28 = *(long *)(param_3 + 0x14); *(long *)(local_28 + 0x40) != 0;
          local_28 = *(long *)(local_28 + 0x40)) {
      }
      *(int **)(local_28 + 0x40) = local_30;
    }
  }
  return local_30;
}

