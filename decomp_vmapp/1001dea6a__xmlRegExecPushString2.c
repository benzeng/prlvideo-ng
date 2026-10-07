
int _xmlRegExecPushString2(xmlRegExecCtxtPtr exec,xmlChar *value,xmlChar *value2,void *data)

{
  xmlChar xVar1;
  xmlChar *pxVar2;
  long lVar3;
  int local_dc;
  xmlChar local_b8 [156];
  int local_1c;
  int local_18;
  int local_14;
  xmlChar *local_10;
  
  if (exec == (xmlRegExecCtxtPtr)0x0) {
    local_dc = -1;
  }
  else if (*(long *)(exec + 8) == 0) {
    local_dc = -1;
  }
  else if (*(int *)exec == 0) {
    if (value2 == (xmlChar *)0x0) {
      local_dc = _xmlRegExecPushString(exec,value,data);
    }
    else {
      lVar3 = -1;
      pxVar2 = value2;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        xVar1 = *pxVar2;
        pxVar2 = pxVar2 + 1;
      } while (xVar1 != '\0');
      local_1c = ~(uint)lVar3 - 1;
      lVar3 = -1;
      pxVar2 = value;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        xVar1 = *pxVar2;
        pxVar2 = pxVar2 + 1;
      } while (xVar1 != '\0');
      local_18 = ~(uint)lVar3 - 1;
      if (local_18 + local_1c + 2 < 0x97) {
        local_10 = local_b8;
      }
      else {
        local_10 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(local_18 + local_1c + 2));
        if (local_10 == (xmlChar *)0x0) {
          *(undefined4 *)exec = 0xffffffff;
          return -1;
        }
      }
      pxVar2 = local_10;
      for (lVar3 = (long)local_18; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pxVar2 = *value;
        value = value + 1;
        pxVar2 = pxVar2 + 1;
      }
      local_10[local_18] = '|';
      pxVar2 = local_10 + local_18;
      for (lVar3 = (long)local_1c; pxVar2 = pxVar2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
        *pxVar2 = *value2;
        value2 = value2 + 1;
      }
      local_10[(long)(local_18 + local_1c) + 1] = '\0';
      if (*(long *)(*(long *)(exec + 8) + 0x40) == 0) {
        local_14 = FUN_1001ddc17(exec,local_10,data,1);
      }
      else {
        local_14 = FUN_1001dd9cc(exec,*(undefined8 *)(exec + 8),local_10,data);
      }
      if (local_b8 != local_10) {
        (*(code *)_xmlFree)(local_b8);
      }
      local_dc = local_14;
    }
  }
  else {
    local_dc = *(int *)exec;
  }
  return local_dc;
}

