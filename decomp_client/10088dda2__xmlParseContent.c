
void _xmlParseContent(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  while( true ) {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      return;
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '/')) break;
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x40);
    pcVar3 = *(char **)(*(long *)(param_1 + 0x38) + 0x20);
    if ((*pcVar3 == '<') && (pcVar3[1] == '?')) {
      _xmlParsePI(param_1);
    }
    else if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
              (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!' &&
                (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '[')) &&
               (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'C')))) &&
             (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'D' &&
               (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'A')) &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'T')))) &&
            ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'A' &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 8) == '[')))) {
      _xmlParseCDSect(param_1);
    }
    else if ((*pcVar3 == '<') &&
            (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '!' &&
              (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == '-')) &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == '-')))) {
      _xmlParseComment(param_1);
      *(undefined4 *)(param_1 + 0x110) = 7;
    }
    else if (*pcVar3 == '<') {
      _xmlParseElement(param_1);
    }
    else if (*pcVar3 == '&') {
      _xmlParseReference(param_1);
    }
    else {
      _xmlParseCharData(param_1,0);
    }
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
    while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0' && (1 < *(int *)(param_1 + 0x40)))
          ) {
      _xmlPopInput(param_1);
    }
    if (((*(int *)(param_1 + 0x1c4) == 0) &&
        (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
               *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        500)) {
      FUN_100879c6f(param_1);
    }
    if (((uVar2 & 0xffffffff) == *(ulong *)(*(long *)(param_1 + 0x38) + 0x40)) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x20) == lVar1)) {
      FUN_100877520(param_1,1,"detected an error in element content\n");
      *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
      return;
    }
  }
  return;
}

