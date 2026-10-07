
undefined4 FUN_100197103(long *param_1)

{
  int iVar1;
  xmlChar *str1;
  undefined4 local_34;
  int local_10;
  undefined4 local_c;
  
  if ((**(char **)(param_1[7] + 0x20) == '<') &&
     (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '/')) {
    param_1[0x27] = param_1[0x27] + 2;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
    str1 = (xmlChar *)FUN_1001928f4(param_1);
    if (str1 == (xmlChar *)0x0) {
      local_34 = 0;
    }
    else {
      FUN_100190e92(param_1);
      if (((((**(byte **)(param_1[7] + 0x20) < 9) || (10 < **(byte **)(param_1[7] + 0x20))) &&
           (**(char **)(param_1[7] + 0x20) != '\r')) && (**(byte **)(param_1[7] + 0x20) < 0x20)) ||
         (**(char **)(param_1[7] + 0x20) != '>')) {
        FUN_100190598(param_1,0x49,"End tag : expected \'>\'\n",0,0);
        if ((int)param_1[0x38] != 0) {
          while ((**(char **)(param_1[7] + 0x20) != '\0' && (**(char **)(param_1[7] + 0x20) != '>'))
                ) {
            _xmlNextChar(param_1);
          }
          _xmlNextChar(param_1);
        }
      }
      else {
        _xmlNextChar(param_1);
      }
      local_10 = (int)param_1[0x25];
      do {
        local_10 = local_10 + -1;
        if (local_10 < 0) break;
        iVar1 = _xmlStrEqual(str1,*(xmlChar **)(param_1[0x26] + (long)local_10 * 8));
      } while (iVar1 == 0);
      if (local_10 < 0) {
        FUN_100190598(param_1,0x4c,"Unexpected end tag : %s\n",str1,0);
        local_34 = 0;
      }
      else {
        FUN_1001912ad(param_1,str1);
        iVar1 = _xmlStrEqual(str1,(xmlChar *)param_1[0x24]);
        if (((iVar1 == 0) && (param_1[0x24] != 0)) &&
           (iVar1 = _xmlStrEqual((xmlChar *)param_1[0x24],str1), iVar1 == 0)) {
          FUN_100190598(param_1,0x4c,"Opening and ending tag mismatch: %s and %s\n",str1,
                        param_1[0x24]);
        }
        if (((xmlChar *)param_1[0x24] == (xmlChar *)0x0) ||
           (iVar1 = _xmlStrEqual((xmlChar *)param_1[0x24],str1), iVar1 == 0)) {
          local_c = 0;
        }
        else {
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
            (**(code **)(*param_1 + 0x78))(param_1[1],str1);
          }
          FUN_100190874(param_1);
          local_c = 1;
        }
        local_34 = local_c;
      }
    }
  }
  else {
    FUN_100190598(param_1,0x4a,"htmlParseEndTag: \'</\' not found\n",0,0);
    local_34 = 0;
  }
  return local_34;
}

