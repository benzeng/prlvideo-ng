
undefined4 _xmlParseEnumeratedType(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 local_1c;
  
  if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'N') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'O')) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'T')) &&
     (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'A' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'T')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'I' &&
       ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'O' &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'N')))))))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 8;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 8;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 8;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ' ') ||
       (((8 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
         (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0xb)) ||
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r')))) {
      _xmlSkipBlankChars(param_1);
      lVar2 = _xmlParseNotationType(param_1);
      *param_2 = lVar2;
      if (*param_2 == 0) {
        local_1c = 0;
      }
      else {
        local_1c = 10;
      }
    }
    else {
      FUN_100144217(param_1,0x41,"Space required after \'NOTATION\'\n");
      local_1c = 0;
    }
  }
  else {
    lVar2 = _xmlParseEnumerationType(param_1);
    *param_2 = lVar2;
    if (*param_2 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = 9;
    }
  }
  return local_1c;
}

