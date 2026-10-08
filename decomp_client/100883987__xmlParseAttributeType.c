
undefined4 _xmlParseAttributeType(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
            *(long *)(*(long *)(param_1 + 0x38) + 0x18))) {
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        500) {
      FUN_100879c6f(param_1);
    }
  }
  if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'C') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'D')) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'A')) &&
     ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'T' &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'A')))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 5;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 5;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_1c = 1;
  }
  else if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'I') &&
            ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'D' &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'R')))) &&
           (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'E')) &&
          ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'F' &&
           (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'S')))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_1c = 4;
  }
  else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'I') &&
           (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'D' &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'R')) &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'E')))) &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'F')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 5;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 5;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_1c = 3;
  }
  else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'I') &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'D')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_1c = 2;
  }
  else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'E') &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'N' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'T')))) &&
          ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'I' &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'T' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'Y')))))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_1c = 5;
  }
  else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'E') &&
           (((((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'N' &&
               (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'T')) &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'I')) &&
             ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'T' &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'I')))) &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'E')))) &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'S')) {
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
    local_1c = 6;
  }
  else if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'N') &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'M')) &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'T' &&
            (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'O' &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'K')) &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'E')))))) &&
          ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'N' &&
           (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'S')))) {
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
    local_1c = 8;
  }
  else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'N') &&
          (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'M' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'T')) &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'O' &&
            (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'K' &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'E')) &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'N')))))))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 7;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 7;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_1c = 7;
  }
  else {
    local_1c = _xmlParseEnumeratedType(param_1,param_2);
  }
  return local_1c;
}

