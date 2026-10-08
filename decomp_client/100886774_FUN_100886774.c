
void FUN_100886774(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  xmlGenericErrorFunc pxVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  xmlGenericErrorFunc *ppxVar10;
  void **ppvVar11;
  int local_2c;
  
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
  *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
  *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
    _xmlParserHandlePEReference(param_1);
  }
  if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
     (iVar8 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar8 < 1)) {
    _xmlPopInput(param_1);
  }
  _xmlSkipBlankChars(param_1);
  if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'I') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'N')) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'C')) &&
     (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'L' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'U')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'D' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'E')))))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 7;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 7;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar8 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar8 < 1)) {
      _xmlPopInput(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '[') {
      _xmlNextChar(param_1);
    }
    else {
      FUN_100877520(param_1,0x53,0);
    }
    piVar9 = ___xmlParserDebugEntities();
    if (*piVar9 != 0) {
      if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
        ppxVar10 = ___xmlGenericError();
        pxVar4 = *ppxVar10;
        uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x34);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        ppvVar11 = ___xmlGenericErrorContext();
        (*pxVar4)(*ppvVar11,"%s(%d): ",uVar5,(ulong)uVar1);
      }
      ppxVar10 = ___xmlGenericError();
      pxVar4 = *ppxVar10;
      ppvVar11 = ___xmlGenericErrorContext();
      (*pxVar4)(*ppvVar11,"Entering INCLUDE Conditional Section\n");
    }
    do {
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') ||
         (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ']' &&
           (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == ']')) &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '>')))) goto LAB_100886c04;
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x40);
      if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!')) &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '[')) {
        FUN_100886774(param_1);
      }
      else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ' ') ||
               ((8 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
                (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0xb)))) ||
              (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r')) {
        _xmlNextChar(param_1);
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
        _xmlParsePEReference(param_1);
      }
      else {
        _xmlParseMarkupDecl(param_1);
      }
      while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0' &&
             (1 < *(int *)(param_1 + 0x40)))) {
        _xmlPopInput(param_1);
      }
    } while ((*(long *)(*(long *)(param_1 + 0x38) + 0x20) != lVar6) ||
            ((uVar7 & 0xffffffff) != *(ulong *)(*(long *)(param_1 + 0x38) + 0x40)));
    FUN_100877520(param_1,0x3c,0);
LAB_100886c04:
    piVar9 = ___xmlParserDebugEntities();
    if (*piVar9 != 0) {
      if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
        ppxVar10 = ___xmlGenericError();
        pxVar4 = *ppxVar10;
        uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x34);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        ppvVar11 = ___xmlGenericErrorContext();
        (*pxVar4)(*ppvVar11,"%s(%d): ",uVar5,(ulong)uVar1);
      }
      ppxVar10 = ___xmlGenericError();
      pxVar4 = *ppxVar10;
      ppvVar11 = ___xmlGenericErrorContext();
      (*pxVar4)(*ppvVar11,"Leaving INCLUDE Conditional Section\n");
    }
  }
  else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'I') &&
           (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'G')) &&
          ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'N' &&
           (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'O' &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'R')) &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'E')))))) {
    local_2c = 0;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar8 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar8 < 1)) {
      _xmlPopInput(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '[') {
      _xmlNextChar(param_1);
    }
    else {
      FUN_100877520(param_1,0x53,0);
    }
    piVar9 = ___xmlParserDebugEntities();
    if (*piVar9 != 0) {
      if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
        ppxVar10 = ___xmlGenericError();
        pxVar4 = *ppxVar10;
        uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x34);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        ppvVar11 = ___xmlGenericErrorContext();
        (*pxVar4)(*ppvVar11,"%s(%d): ",uVar5,(ulong)uVar1);
      }
      ppxVar10 = ___xmlGenericError();
      pxVar4 = *ppxVar10;
      ppvVar11 = ___xmlGenericErrorContext();
      (*pxVar4)(*ppvVar11,"Entering IGNORE Conditional Section\n");
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14c);
    uVar3 = *(undefined4 *)(param_1 + 0x110);
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0xf;
    while ((-1 < local_2c && (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\0'))) {
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
         ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!' &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '[')))) {
        local_2c = local_2c + 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
           (iVar8 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar8 < 1)) {
          _xmlPopInput(param_1);
        }
      }
      else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ']') &&
              ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == ']' &&
               (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '>')))) {
        local_2c = local_2c + -1;
        if (-1 < local_2c) {
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
          *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
               *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
          *(int *)(*(long *)(param_1 + 0x38) + 0x38) =
               *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
          if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
            _xmlParserHandlePEReference(param_1);
          }
          if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
             (iVar8 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar8 < 1))
          {
            _xmlPopInput(param_1);
          }
        }
      }
      else {
        _xmlNextChar(param_1);
      }
    }
    *(undefined4 *)(param_1 + 0x14c) = uVar2;
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    piVar9 = ___xmlParserDebugEntities();
    if (*piVar9 != 0) {
      if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
        ppxVar10 = ___xmlGenericError();
        pxVar4 = *ppxVar10;
        uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x34);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        ppvVar11 = ___xmlGenericErrorContext();
        (*pxVar4)(*ppvVar11,"%s(%d): ",uVar5,(ulong)uVar1);
      }
      ppxVar10 = ___xmlGenericError();
      pxVar4 = *ppxVar10;
      ppvVar11 = ___xmlGenericErrorContext();
      (*pxVar4)(*ppvVar11,"Leaving IGNORE Conditional Section\n");
    }
  }
  else {
    FUN_100877520(param_1,0x5f,0);
  }
  if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') && (*(int *)(param_1 + 0x1c4) == 0))
      && (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
                *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      500)) {
    FUN_100879c6f(param_1);
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
    FUN_100877520(param_1,0x3b,0);
  }
  else {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar8 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar8 < 1)) {
      _xmlPopInput(param_1);
    }
  }
  return;
}

