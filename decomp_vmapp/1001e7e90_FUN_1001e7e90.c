
long FUN_1001e7e90(undefined8 param_1,long *param_2,int *param_3)

{
  xmlChar *pxVar1;
  int *local_40;
  xmlChar *local_20;
  int *local_18;
  undefined4 local_10;
  int local_c;
  
  local_20 = (xmlChar *)0x0;
  if (*param_2 != 0) {
    (*(code *)_xmlFree)(*param_2);
  }
  *param_2 = 0;
  local_40 = param_3;
  do {
    local_10 = FUN_100208e22(*(undefined8 *)(local_40 + 0x1c));
    for (local_18 = *(int **)(local_40 + 0x1e); local_18 != (int *)0x0;
        local_18 = *(int **)(local_18 + 2)) {
      if (*local_18 == 0x3ef) {
        local_c = FUN_1001e7209(*(undefined8 *)(local_18 + 0xe),local_10,&local_20);
        if (local_c == -1) {
          FUN_1001e8d2a(param_1,"xmlSchemaFormatFacetEnumSet",
                        "compute the canonical lexical representation");
          if (*param_2 != 0) {
            (*(code *)_xmlFree)(*param_2);
          }
          *param_2 = 0;
          return 0;
        }
        if (*param_2 == 0) {
          pxVar1 = _xmlStrdup((xmlChar *)"\'");
          *param_2 = (long)pxVar1;
        }
        else {
          pxVar1 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)", \'");
          *param_2 = (long)pxVar1;
        }
        pxVar1 = _xmlStrcat((xmlChar *)*param_2,local_20);
        *param_2 = (long)pxVar1;
        pxVar1 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"\'");
        *param_2 = (long)pxVar1;
        if (local_20 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_20);
          local_20 = (xmlChar *)0x0;
        }
      }
    }
    local_40 = *(int **)(local_40 + 0x1c);
  } while ((local_40 != (int *)0x0) && (*local_40 != 1));
  return *param_2;
}

