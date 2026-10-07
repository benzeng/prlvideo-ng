
void FUN_1001b3903(long *param_1)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
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
      return;
    }
    local_10 = _xmlStrndup(pxVar1,(int)*param_1 - (int)pxVar1);
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  else {
    if (*(char *)*param_1 != '\'') {
      _xmlXPathErr(param_1,3);
      return;
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
      return;
    }
    local_10 = _xmlStrndup(pxVar1,(int)*param_1 - (int)pxVar1);
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (local_10 != (xmlChar *)0x0) {
    uVar2 = _xmlXPathNewString(local_10);
    FUN_1001a5741(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xc,4,0,0,uVar2,0);
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

