
xmlChar * FUN_1008c786d(long param_1)

{
  xmlChar *pxVar1;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    _xmlNextChar(param_1);
    pxVar1 = *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20);
    while ((&_xmlIsPubidChar_tab)[(int)(uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20)] != '\0')
    {
      _xmlNextChar(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
      local_10 = _xmlStrndup(pxVar1,(int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) -
                                    (int)pxVar1);
      _xmlNextChar(param_1);
    }
    else {
      FUN_1008c3ec0(param_1,0x2c,"Unfinished PubidLiteral\n",0,0);
    }
  }
  else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
    _xmlNextChar(param_1);
    pxVar1 = *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20);
    while (((&_xmlIsPubidChar_tab)[(int)(uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20)] != '\0'
           && (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\''))) {
      _xmlNextChar(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
      local_10 = _xmlStrndup(pxVar1,(int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) -
                                    (int)pxVar1);
      _xmlNextChar(param_1);
    }
    else {
      FUN_1008c3ec0(param_1,0x2c,"Unfinished PubidLiteral\n",0,0);
    }
  }
  else {
    FUN_1008c3ec0(param_1,0x2b,"PubidLiteral \" or \' expected\n",0,0);
  }
  return local_10;
}

