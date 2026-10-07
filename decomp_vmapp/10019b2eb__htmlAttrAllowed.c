
htmlStatus _htmlAttrAllowed(htmlElemDesc *param_1,xmlChar *param_2,int param_3)

{
  int iVar1;
  char **local_10;
  
  if ((param_1 != (htmlElemDesc *)0x0) && (param_2 != (xmlChar *)0x0)) {
    if (param_1->attrs_req != (char **)0x0) {
      for (local_10 = param_1->attrs_req; *local_10 != (char *)0x0; local_10 = local_10 + 1) {
        iVar1 = _xmlStrcmp((xmlChar *)*local_10,param_2);
        if (iVar1 == 0) {
          return HTML_REQUIRED;
        }
      }
    }
    if (param_1->attrs_opt != (char **)0x0) {
      for (local_10 = param_1->attrs_opt; *local_10 != (char *)0x0; local_10 = local_10 + 1) {
        iVar1 = _xmlStrcmp((xmlChar *)*local_10,param_2);
        if (iVar1 == 0) {
          return HTML_VALID;
        }
      }
    }
    if ((param_3 != 0) && (param_1->attrs_depr != (char **)0x0)) {
      for (local_10 = param_1->attrs_depr; *local_10 != (char *)0x0; local_10 = local_10 + 1) {
        iVar1 = _xmlStrcmp((xmlChar *)*local_10,param_2);
        if (iVar1 == 0) {
          return HTML_DEPRECATED;
        }
      }
    }
  }
  return HTML_INVALID;
}

