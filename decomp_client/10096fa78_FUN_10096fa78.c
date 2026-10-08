
int FUN_10096fa78(void *param_1,xmlRegexpPtr param_2,xmlNodePtr param_3)

{
  undefined4 uVar1;
  xmlElementType xVar2;
  int iVar3;
  xmlRegExecCtxtPtr exec;
  int local_48;
  xmlNodePtr local_18;
  int local_10;
  
  local_10 = 0;
  uVar1 = *(undefined4 *)((long)param_1 + 0xb8);
  if ((param_1 == (void *)0x0) || (param_2 == (xmlRegexpPtr)0x0)) {
    local_48 = -1;
  }
  else {
    exec = _xmlRegNewExecCtxt(param_2,FUN_10096f8ee,param_1);
    *(undefined4 *)((long)param_1 + 0xb8) = 0;
    for (local_18 = param_3; local_18 != (xmlNodePtr)0x0; local_18 = local_18->next) {
      *(xmlNodePtr *)(*(long *)((long)param_1 + 0x60) + 8) = local_18;
      xVar2 = local_18->type;
      if (xVar2 == XML_ELEMENT_NODE) {
        if (local_18->ns == (xmlNs *)0x0) {
          local_10 = _xmlRegExecPushString(exec,local_18->name,param_1);
        }
        else {
          local_10 = _xmlRegExecPushString2(exec,local_18->name,local_18->ns->href,param_1);
        }
        if (local_10 < 0) {
          FUN_100964522(param_1,0x26,local_18->name,0,0);
        }
      }
      else if ((xVar2 != 0) && (xVar2 - XML_TEXT_NODE < 2)) {
        iVar3 = _xmlIsBlankNode(local_18);
        if (iVar3 == 0) {
          local_10 = _xmlRegExecPushString(exec,(xmlChar *)"#text",param_1);
          if (local_10 < 0) {
            FUN_100964522(param_1,0x27,local_18->parent->name,0,0);
          }
        }
      }
      if (local_10 < 0) break;
    }
    iVar3 = _xmlRegExecPushString(exec,(xmlChar *)0x0,(void *)0x0);
    if (iVar3 == 1) {
      local_10 = 0;
      *(undefined8 *)(*(long *)((long)param_1 + 0x60) + 8) = 0;
    }
    else if (iVar3 == 0) {
      FUN_100964522(param_1,0x16,"",0,0);
      local_10 = -1;
      if (((*(uint *)((long)param_1 + 0x38) ^ 1) & 1) != 0) {
        FUN_100964360(param_1);
      }
    }
    else {
      local_10 = -1;
    }
    _xmlRegFreeExecCtxt(exec);
    if ((local_10 == 0) && (*(int *)((long)param_1 + 0xb8) != 0)) {
      local_10 = *(int *)((long)param_1 + 0xb8);
    }
    *(undefined4 *)((long)param_1 + 0xb8) = uVar1;
    local_48 = local_10;
  }
  return local_48;
}

