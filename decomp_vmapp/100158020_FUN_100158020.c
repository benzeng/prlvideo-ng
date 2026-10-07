
xmlChar * FUN_100158020(long param_1,xmlChar *param_2,xmlChar *param_3,long *param_4,
                       undefined8 *param_5,int *param_6,undefined8 param_7)

{
  int iVar1;
  void *pvVar2;
  xmlChar *cur;
  xmlChar *local_60;
  xmlChar *local_18;
  undefined4 local_10;
  
  local_18 = (xmlChar *)0x0;
  local_10 = 0;
  *param_5 = 0;
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100146394(param_1);
  }
  local_60 = (xmlChar *)FUN_100157353(param_1,param_4);
  if (local_60 == (xmlChar *)0x0) {
    FUN_100144217(param_1,0x44,"error parsing attribute name\n");
    local_60 = (xmlChar *)0x0;
  }
  else {
    if ((*(long *)(param_1 + 0x228) != 0) &&
       (pvVar2 = _xmlHashQLookup2(*(xmlHashTablePtr *)(param_1 + 0x228),param_2,param_3,
                                  (xmlChar *)*param_4,local_60), (int)pvVar2 != 0)) {
      local_10 = 1;
    }
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '=') {
      _xmlNextChar(param_1);
      _xmlSkipBlankChars(param_1);
      cur = (xmlChar *)FUN_1001577fc(param_1,param_6,param_7,local_10);
      *(undefined4 *)(param_1 + 0x110) = 7;
      if (*param_4 == *(long *)(param_1 + 0x1e0)) {
        if ((*(int *)(param_1 + 0x1a4) != 0) &&
           (iVar1 = _xmlStrEqual(local_60,(xmlChar *)"lang"), iVar1 != 0)) {
          local_18 = _xmlStrndup(cur,*param_6);
          iVar1 = _xmlCheckLanguageID(local_18);
          if (iVar1 == 0) {
            FUN_100144304(param_1,0x62,"Malformed value for xml:lang : %s\n",local_18,0);
          }
        }
        iVar1 = _xmlStrEqual(local_60,(xmlChar *)"space");
        if (iVar1 != 0) {
          local_18 = _xmlStrndup(cur,*param_6);
          iVar1 = _xmlStrEqual(local_18,(xmlChar *)"default");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(local_18,(xmlChar *)"preserve");
            if (iVar1 == 0) {
              FUN_100144304(param_1,0x66,
                            "Invalid value \"%s\" for xml:space : \"default\" or \"preserve\" expected\n"
                            ,local_18,0);
            }
            else {
              **(undefined4 **)(param_1 + 0x170) = 1;
            }
          }
          else {
            **(undefined4 **)(param_1 + 0x170) = 0;
          }
        }
        if (local_18 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_18);
        }
      }
      *param_5 = cur;
    }
    else {
      FUN_1001447b6(param_1,0x29,"Specification mandate value for attribute %s\n",local_60);
      local_60 = (xmlChar *)0x0;
    }
  }
  return local_60;
}

