
long _xmlParseExternalID(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long local_18;
  byte *local_10;
  
  local_18 = 0;
  if (((*(int *)(param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
             *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      500)) {
    FUN_100146347(param_1);
  }
  *param_2 = 0;
  if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'S') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'Y')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'S' &&
       ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'T' &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'E')))))) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'M')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
       (((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
         (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')))) {
      FUN_100144217(param_1,0x41,"Space required after \'SYSTEM\'\n");
    }
    _xmlSkipBlankChars(param_1);
    local_18 = _xmlParseSystemLiteral(param_1);
    if (local_18 == 0) {
      FUN_100143bf8(param_1,0x46,0);
    }
  }
  else if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'P') &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'U')) &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'B')) &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'L' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'I')))) &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'C')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
       (((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
         (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')))) {
      FUN_100144217(param_1,0x41,"Space required after \'PUBLIC\'\n");
    }
    _xmlSkipBlankChars(param_1);
    lVar2 = _xmlParsePubidLiteral(param_1);
    *param_2 = lVar2;
    if (*param_2 == 0) {
      FUN_100143bf8(param_1,0x47,0);
    }
    if (param_3 == 0) {
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100146394(param_1);
      }
      local_10 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      if (((*local_10 != 0x20) && ((*local_10 < 9 || (10 < *local_10)))) && (*local_10 != 0xd)) {
        return 0;
      }
      for (; (*local_10 == 0x20 || (((8 < *local_10 && (*local_10 < 0xb)) || (*local_10 == 0xd))));
          local_10 = local_10 + 1) {
      }
      if ((*local_10 != 0x27) && (*local_10 != 0x22)) {
        return 0;
      }
    }
    else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
             ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
              (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
            (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
      FUN_100144217(param_1,0x41,"Space required after the Public Identifier\n");
    }
    _xmlSkipBlankChars(param_1);
    local_18 = _xmlParseSystemLiteral(param_1);
    if (local_18 == 0) {
      FUN_100143bf8(param_1,0x46,0);
    }
  }
  return local_18;
}

