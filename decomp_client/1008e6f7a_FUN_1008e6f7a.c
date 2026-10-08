
xmlChar * FUN_1008e6f7a(long *param_1)

{
  xmlChar *pxVar1;
  xmlChar *local_10;
  
  if (*(char *)*param_1 == '\"') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    pxVar1 = (xmlChar *)*param_1;
    while ((((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) ||
            ((*(char *)*param_1 == '\r' || (0x1f < *(byte *)*param_1)))) &&
           (*(char *)*param_1 != '\"'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    if ((((*(byte *)*param_1 < 9) || (10 < *(byte *)*param_1)) && (*(char *)*param_1 != '\r')) &&
       (*(byte *)*param_1 < 0x20)) {
      _xmlXPathErr(param_1,2);
      return (xmlChar *)0x0;
    }
    local_10 = _xmlStrndup(pxVar1,(int)*param_1 - (int)pxVar1);
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  else {
    if (*(char *)*param_1 != '\'') {
      _xmlXPathErr(param_1,3);
      return (xmlChar *)0x0;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    pxVar1 = (xmlChar *)*param_1;
    while (((((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))
            || (0x1f < *(byte *)*param_1)) && (*(char *)*param_1 != '\''))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    if (((*(byte *)*param_1 < 9) || (10 < *(byte *)*param_1)) &&
       ((*(char *)*param_1 != '\r' && (*(byte *)*param_1 < 0x20)))) {
      _xmlXPathErr(param_1,2);
      return (xmlChar *)0x0;
    }
    local_10 = _xmlStrndup(pxVar1,(int)*param_1 - (int)pxVar1);
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  return local_10;
}

