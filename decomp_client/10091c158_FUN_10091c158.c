
undefined8 FUN_10091c158(undefined8 *param_1,int *param_2,long param_3)

{
  xmlGenericErrorFunc pxVar1;
  xmlChar *pxVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  long local_38;
  long local_30;
  int *local_28;
  long local_20;
  
  local_38 = 0;
  if (param_3 == 0) {
    if (*param_2 == 2) {
      local_28 = param_2;
      if (**(int **)(param_2 + 0x2e) == 2) {
        local_20 = *(long *)(*(long *)(param_2 + 0x2a) + (long)param_2[0x29] * 8);
        pxVar2 = _xmlStrdup((xmlChar *)"Element \'");
        *param_1 = pxVar2;
        pxVar2 = (xmlChar *)
                 FUN_10091a69e(&local_38,*(undefined8 *)(local_20 + 0x20),
                               *(undefined8 *)(local_20 + 0x18));
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
        *param_1 = pxVar2;
        if (local_38 != 0) {
          (*(code *)_xmlFree)(local_38);
          local_38 = 0;
        }
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\', ");
        *param_1 = pxVar2;
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"attribute \'");
        *param_1 = pxVar2;
      }
      else {
        pxVar2 = _xmlStrdup((xmlChar *)"Element \'");
        *param_1 = pxVar2;
      }
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_38,*(undefined8 *)(*(long *)(local_28 + 0x2e) + 0x20),
                             *(undefined8 *)(*(long *)(local_28 + 0x2e) + 0x18));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = pxVar2;
      if (local_38 != 0) {
        (*(code *)_xmlFree)(local_38);
        local_38 = 0;
      }
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\': ");
      *param_1 = pxVar2;
    }
    else {
      if (*param_2 != 1) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemas.c",0x77f);
        return 0;
      }
      pxVar2 = _xmlStrdup((xmlChar *)"");
      *param_1 = pxVar2;
    }
  }
  else {
    if (*(int *)(param_3 + 8) == 2) {
      local_30 = *(long *)(param_3 + 0x28);
      pxVar2 = _xmlStrdup((xmlChar *)"Element \'");
      *param_1 = pxVar2;
      if (*(long *)(local_30 + 0x48) == 0) {
        pxVar2 = (xmlChar *)FUN_10091a69e(&local_38,0,*(undefined8 *)(local_30 + 0x10));
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
        *param_1 = pxVar2;
      }
      else {
        pxVar2 = (xmlChar *)
                 FUN_10091a69e(&local_38,*(undefined8 *)(*(long *)(local_30 + 0x48) + 0x10),
                               *(undefined8 *)(local_30 + 0x10));
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
        *param_1 = pxVar2;
      }
      if (local_38 != 0) {
        (*(code *)_xmlFree)(local_38);
        local_38 = 0;
      }
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\', ");
      *param_1 = pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"attribute \'");
      *param_1 = pxVar2;
    }
    else {
      pxVar2 = _xmlStrdup((xmlChar *)"Element \'");
      *param_1 = pxVar2;
    }
    if (*(long *)(param_3 + 0x48) == 0) {
      pxVar2 = (xmlChar *)FUN_10091a69e(&local_38,0,*(undefined8 *)(param_3 + 0x10));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = pxVar2;
    }
    else {
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_38,*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x10),
                             *(undefined8 *)(param_3 + 0x10));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = pxVar2;
    }
    if (local_38 != 0) {
      (*(code *)_xmlFree)(local_38);
      local_38 = 0;
    }
    pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\': ");
    *param_1 = pxVar2;
  }
  return *param_1;
}

