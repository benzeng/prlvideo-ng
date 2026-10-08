
void _xmlParseMarkupDecl(long param_1)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!') {
      bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2);
      if (bVar1 == 0x45) {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'L') {
          _xmlParseElementDecl(param_1);
        }
        else if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'N') {
          _xmlParseEntityDecl(param_1);
        }
      }
      else if (bVar1 < 0x46) {
        if (bVar1 == 0x2d) {
          _xmlParseComment(param_1);
        }
        else if (bVar1 == 0x41) {
          _xmlParseAttributeListDecl(param_1);
        }
      }
      else if (bVar1 == 0x4e) {
        _xmlParseNotationDecl(param_1);
      }
    }
    else if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '?') {
      _xmlParsePI(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x40) == 1)) {
    _xmlParsePEReference(param_1);
  }
  if ((((*(int *)(param_1 + 0x94) == 0) && (1 < *(int *)(param_1 + 0x40))) &&
      (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<')) &&
     ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!' &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '[')))) {
    FUN_100886774(param_1);
  }
  *(undefined4 *)(param_1 + 0x110) = 3;
  return;
}

