
void FUN_10088988a(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '[') {
    *(undefined4 *)(param_1 + 0x110) = 3;
    _xmlNextChar(param_1);
    do {
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ']') goto LAB_100889985;
      lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x40);
      _xmlSkipBlankChars(param_1);
      _xmlParseMarkupDecl(param_1);
      _xmlParsePEReference(param_1);
      while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0' &&
             (1 < *(int *)(param_1 + 0x40)))) {
        _xmlPopInput(param_1);
      }
    } while ((*(long *)(*(long *)(param_1 + 0x38) + 0x20) != lVar1) ||
            ((uVar2 & 0xffffffff) != *(ulong *)(*(long *)(param_1 + 0x38) + 0x40)));
    FUN_100877520(param_1,1,"xmlParseInternalSubset: error detected in Markup declaration\n");
LAB_100889985:
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ']') {
      _xmlNextChar(param_1);
      _xmlSkipBlankChars(param_1);
    }
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '>') {
    FUN_100877520(param_1,0x3d,0);
  }
  _xmlNextChar(param_1);
  return;
}

