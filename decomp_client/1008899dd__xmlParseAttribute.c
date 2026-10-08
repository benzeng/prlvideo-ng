
xmlChar * _xmlParseAttribute(long param_1,undefined8 *param_2)

{
  int iVar1;
  xmlChar *str1;
  xmlChar *local_30;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  local_30 = (xmlChar *)_xmlParseName(param_1);
  if (local_30 == (xmlChar *)0x0) {
    FUN_100877b3f(param_1,0x44,"error parsing attribute name\n");
    local_30 = (xmlChar *)0x0;
  }
  else {
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '=') {
      _xmlNextChar(param_1);
      _xmlSkipBlankChars(param_1);
      str1 = (xmlChar *)_xmlParseAttValue(param_1);
      *(undefined4 *)(param_1 + 0x110) = 7;
      if (((*(int *)(param_1 + 0x1a4) != 0) &&
          (iVar1 = _xmlStrEqual(local_30,(xmlChar *)"xml:lang"), iVar1 != 0)) &&
         (iVar1 = _xmlCheckLanguageID(str1), iVar1 == 0)) {
        FUN_100877c2c(param_1,0x62,"Malformed value for xml:lang : %s\n",str1,0);
      }
      iVar1 = _xmlStrEqual(local_30,(xmlChar *)"xml:space");
      if (iVar1 != 0) {
        iVar1 = _xmlStrEqual(str1,(xmlChar *)"default");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(str1,(xmlChar *)"preserve");
          if (iVar1 == 0) {
            FUN_100877c2c(param_1,0x66,
                          "Invalid value \"%s\" for xml:space : \"default\" or \"preserve\" expected\n"
                          ,str1,0);
          }
          else {
            **(undefined4 **)(param_1 + 0x170) = 1;
          }
        }
        else {
          **(undefined4 **)(param_1 + 0x170) = 0;
        }
      }
      *param_2 = str1;
    }
    else {
      FUN_1008780de(param_1,0x29,"Specification mandate value for attribute %s\n",local_30);
      local_30 = (xmlChar *)0x0;
    }
  }
  return local_30;
}

