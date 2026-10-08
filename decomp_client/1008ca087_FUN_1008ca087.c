
void FUN_1008ca087(long param_1,undefined8 *param_2)

{
  int iVar1;
  xmlChar *str1;
  bool bVar2;
  int iVar3;
  int local_2c;
  xmlChar *local_28;
  xmlChar *local_10;
  
  bVar2 = false;
  local_10 = (xmlChar *)0x0;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    local_2c = 1;
    local_28 = (xmlChar *)*param_2;
    while (local_28 != (xmlChar *)0x0) {
      str1 = (xmlChar *)param_2[local_2c];
      iVar1 = local_2c + 1;
      if (str1 == (xmlChar *)0x0) {
LAB_1008ca134:
        if (str1 != (xmlChar *)0x0) {
          iVar3 = _xmlStrcasecmp(local_28,(xmlChar *)"content");
          if (iVar3 == 0) {
            local_10 = str1;
          }
        }
      }
      else {
        iVar3 = _xmlStrcasecmp(local_28,(xmlChar *)"http-equiv");
        if (iVar3 != 0) goto LAB_1008ca134;
        iVar3 = _xmlStrcasecmp(str1,(xmlChar *)"Content-Type");
        if (iVar3 != 0) goto LAB_1008ca134;
        bVar2 = true;
      }
      local_2c = local_2c + 2;
      local_28 = (xmlChar *)param_2[iVar1];
    }
    if ((bVar2) && (local_10 != (xmlChar *)0x0)) {
      FUN_1008c9e09(param_1,local_10);
    }
  }
  return;
}

