
xmlChar * FUN_1008c75c1(long param_1)

{
  xmlChar *pxVar1;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    _xmlNextChar(param_1);
    pxVar1 = *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20);
    while ((((8 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
             (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0xb)) ||
            ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r' ||
             (0x1f < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
           (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\"'))) {
      _xmlNextChar(param_1);
    }
    if ((((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9) ||
         (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) &&
       (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x20)) {
      FUN_1008c3ec0(param_1,0x2c,"Unfinished SystemLiteral\n",0,0);
    }
    else {
      local_10 = _xmlStrndup(pxVar1,(int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) -
                                    (int)pxVar1);
      _xmlNextChar(param_1);
    }
  }
  else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
    _xmlNextChar(param_1);
    pxVar1 = *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20);
    while (((((8 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
              (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0xb)) ||
             (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r')) ||
            (0x1f < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
           (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\''))) {
      _xmlNextChar(param_1);
    }
    if (((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9) ||
        (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
       ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r' &&
        (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x20)))) {
      FUN_1008c3ec0(param_1,0x2c,"Unfinished SystemLiteral\n",0,0);
    }
    else {
      local_10 = _xmlStrndup(pxVar1,(int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) -
                                    (int)pxVar1);
      _xmlNextChar(param_1);
    }
  }
  else {
    FUN_1008c3ec0(param_1,0x2b," or \' expected\n",0,0);
  }
  return local_10;
}

