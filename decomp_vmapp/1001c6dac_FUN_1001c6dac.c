
undefined4 FUN_1001c6dac(long *param_1,int param_2)

{
  xmlNodePtr cur;
  bool bVar1;
  int iVar2;
  xmlChar *str1;
  xmlChar *pxVar3;
  long lVar4;
  long lVar5;
  undefined4 local_68;
  xmlChar *local_50;
  long local_30;
  int local_24;
  _xmlNode *local_10;
  
  bVar1 = true;
  if (param_1 == (long *)0x0) {
    local_68 = 0xffffffff;
  }
  else if ((param_2 < 0) || (*(int *)((long)param_1 + 0xc) <= param_2)) {
    local_68 = 0xffffffff;
  }
  else {
    cur = *(xmlNodePtr *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18);
    if (cur == (xmlNodePtr)0x0) {
      local_68 = 0xffffffff;
    }
    else {
      local_50 = (xmlChar *)FUN_1001c3779(param_1,cur,"href");
      if ((local_50 == (xmlChar *)0x0) &&
         (local_50 = _xmlStrdup((xmlChar *)""), local_50 == (xmlChar *)0x0)) {
        return 0xffffffff;
      }
      str1 = (xmlChar *)FUN_1001c3779(param_1,cur,"parse");
      if (str1 != (xmlChar *)0x0) {
        iVar2 = _xmlStrEqual(str1,(xmlChar *)"xml");
        if (iVar2 == 0) {
          iVar2 = _xmlStrEqual(str1,(xmlChar *)"text");
          if (iVar2 == 0) {
            FUN_1001c36b8(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18),
                          0x641,"invalid value %s for \'parse\'\n",str1);
            if (local_50 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_50);
            }
            if (str1 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(str1);
            }
            return 0xffffffff;
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      pxVar3 = _xmlNodeGetBase((xmlDocPtr)*param_1,cur);
      if (pxVar3 == (xmlChar *)0x0) {
        local_30 = _xmlBuildURI(local_50,*(undefined8 *)(*param_1 + 0x88));
      }
      else {
        local_30 = _xmlBuildURI(local_50,pxVar3);
      }
      if (local_30 == 0) {
        lVar4 = _xmlURIEscape(pxVar3);
        lVar5 = _xmlURIEscape(local_50);
        local_30 = _xmlBuildURI(lVar5,lVar4);
        if (lVar4 != 0) {
          (*(code *)_xmlFree)(lVar4);
        }
        if (lVar5 != 0) {
          (*(code *)_xmlFree)(lVar5);
        }
      }
      if (local_30 == 0) {
        FUN_1001c36b8(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18),
                      0x645,"failed build URL\n",0);
        if (str1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str1);
        }
        if (local_50 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_50);
        }
        if (pxVar3 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar3);
        }
        local_68 = 0xffffffff;
      }
      else {
        lVar4 = param_1[0xc];
        param_1[0xc] = (long)pxVar3;
        if (bVar1) {
          local_24 = FUN_1001c58a7(param_1,local_30,param_2);
        }
        else {
          local_24 = FUN_1001c6731(param_1,local_30,param_2);
        }
        param_1[0xc] = lVar4;
        if (local_24 < 0) {
          local_10 = cur->children;
          while ((local_10 != (_xmlNode *)0x0 &&
                 ((((local_10->type != XML_ELEMENT_NODE || (local_10->ns == (xmlNs *)0x0)) ||
                   (iVar2 = _xmlStrEqual(local_10->name,(xmlChar *)"fallback"), iVar2 == 0)) ||
                  (((iVar2 = _xmlStrEqual(local_10->ns->href,
                                          (xmlChar *)"http://www.w3.org/2003/XInclude"), iVar2 == 0
                    && (iVar2 = _xmlStrEqual(local_10->ns->href,
                                             (xmlChar *)"http://www.w3.org/2001/XInclude"),
                       iVar2 == 0)) ||
                   (local_24 = FUN_1001c6c31(param_1,local_10,param_2), local_24 != 0))))))) {
            local_10 = local_10->next;
          }
        }
        if (local_24 < 0) {
          FUN_1001c36b8(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18),
                        0x644,"could not load %s, and no fallback was found\n",local_30);
        }
        if (local_30 != 0) {
          (*(code *)_xmlFree)(local_30);
        }
        if (str1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str1);
        }
        if (local_50 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_50);
        }
        if (pxVar3 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar3);
        }
        local_68 = 0;
      }
    }
  }
  return local_68;
}

