
undefined4 FUN_1001c4139(long *param_1,xmlNodePtr param_2)

{
  bool bVar1;
  int iVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  long lVar5;
  long lVar6;
  undefined4 local_7c;
  long local_50;
  xmlChar *local_48;
  long local_30;
  undefined4 local_24;
  int local_20;
  
  local_24 = 1;
  bVar1 = false;
  if (param_1 == (long *)0x0) {
    local_7c = 0xffffffff;
  }
  else if (param_2 == (xmlNodePtr)0x0) {
    local_7c = 0xffffffff;
  }
  else {
    local_48 = (xmlChar *)FUN_1001c3779(param_1,param_2,"href");
    if (local_48 == (xmlChar *)0x0) {
      local_48 = _xmlStrdup((xmlChar *)"");
      if (local_48 == (xmlChar *)0x0) {
        return 0xffffffff;
      }
      bVar1 = true;
    }
    if (*local_48 == '#') {
      bVar1 = true;
    }
    pxVar3 = (xmlChar *)FUN_1001c3779(param_1,param_2,"parse");
    if (pxVar3 != (xmlChar *)0x0) {
      iVar2 = _xmlStrEqual(pxVar3,(xmlChar *)"xml");
      if (iVar2 == 0) {
        iVar2 = _xmlStrEqual(pxVar3,(xmlChar *)"text");
        if (iVar2 == 0) {
          FUN_1001c36b8(param_1,param_2,0x641,"invalid value %s for \'parse\'\n",pxVar3);
          if (local_48 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_48);
          }
          if (pxVar3 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(pxVar3);
          }
          return 0xffffffff;
        }
        local_24 = 0;
      }
      else {
        local_24 = 1;
      }
    }
    pxVar4 = _xmlNodeGetBase((xmlDocPtr)*param_1,param_2);
    if (pxVar4 == (xmlChar *)0x0) {
      local_30 = _xmlBuildURI(local_48,*(undefined8 *)(*param_1 + 0x88));
    }
    else {
      local_30 = _xmlBuildURI(local_48,pxVar4);
    }
    if (local_30 == 0) {
      lVar5 = _xmlURIEscape(pxVar4);
      lVar6 = _xmlURIEscape(local_48);
      local_30 = _xmlBuildURI(lVar6,lVar5);
      if (lVar5 != 0) {
        (*(code *)_xmlFree)(lVar5);
      }
      if (lVar6 != 0) {
        (*(code *)_xmlFree)(lVar6);
      }
    }
    if (pxVar3 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(pxVar3);
    }
    if (local_48 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_48);
    }
    if (pxVar4 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(pxVar4);
    }
    if (local_30 == 0) {
      FUN_1001c36b8(param_1,param_2,0x645,"failed build URL\n",0);
      local_7c = 0xffffffff;
    }
    else {
      local_50 = FUN_1001c3779(param_1,param_2,"xpointer");
      lVar5 = _xmlParseURI(local_30);
      if (lVar5 == 0) {
        FUN_1001c36b8(param_1,param_2,0x645,"invalid value URI %s\n",local_30);
        if (local_50 != 0) {
          (*(code *)_xmlFree)(local_50);
        }
        (*(code *)_xmlFree)(local_30);
        local_7c = 0xffffffff;
      }
      else {
        if (*(long *)(lVar5 + 0x40) != 0) {
          if (*(int *)((long)param_1 + 0x54) == 0) {
            FUN_1001c36b8(param_1,param_2,0x652,
                          "Invalid fragment identifier in URI %s use the xpointer attribute\n",
                          local_30);
            if (local_50 != 0) {
              (*(code *)_xmlFree)(local_50);
            }
            _xmlFreeURI(lVar5);
            (*(code *)_xmlFree)(local_30);
            return 0xffffffff;
          }
          if (local_50 == 0) {
            local_50 = *(long *)(lVar5 + 0x40);
          }
          else {
            (*(code *)_xmlFree)(*(undefined8 *)(lVar5 + 0x40));
          }
          *(undefined8 *)(lVar5 + 0x40) = 0;
        }
        pxVar3 = (xmlChar *)_xmlSaveUri(lVar5);
        _xmlFreeURI(lVar5);
        (*(code *)_xmlFree)(local_30);
        if (pxVar3 == (xmlChar *)0x0) {
          FUN_1001c36b8(param_1,param_2,0x645,"invalid value URI %s\n",local_30);
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          local_7c = 0xffffffff;
        }
        else {
          if (!bVar1) {
            for (local_20 = 0; local_20 < (int)param_1[8]; local_20 = local_20 + 1) {
              iVar2 = _xmlStrEqual(pxVar3,*(xmlChar **)(param_1[9] + (long)local_20 * 8));
              if (iVar2 != 0) {
                FUN_1001c36b8(param_1,param_2,0x640,"detected a recursion in %s\n",pxVar3);
                return 0xffffffff;
              }
            }
          }
          lVar5 = FUN_1001c38a6(param_1,pxVar3,param_2);
          if (lVar5 == 0) {
            local_7c = 0xffffffff;
          }
          else {
            *(long *)(lVar5 + 8) = local_50;
            *(undefined8 *)(lVar5 + 0x10) = 0;
            *(undefined4 *)(lVar5 + 0x28) = local_24;
            *(undefined4 *)(lVar5 + 0x2c) = 1;
            (*(code *)_xmlFree)(pxVar3);
            local_7c = 0;
          }
        }
      }
    }
  }
  return local_7c;
}

