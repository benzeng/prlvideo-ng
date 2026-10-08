
void _xmlParseExternalSubset(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  long lVar1;
  ulong uVar2;
  xmlDocPtr pxVar3;
  
  FUN_1008785ae(param_1);
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '?')) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'x')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'm' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'l')))) &&
     (_xmlParseTextDecl(param_1), *(int *)(param_1 + 0x88) == 0x20)) {
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    pxVar3 = _xmlNewDoc((xmlChar *)"1.0");
    *(xmlDocPtr *)(param_1 + 0x10) = pxVar3;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x50) == 0)) {
    _xmlCreateIntSubset(*(xmlDocPtr *)(param_1 + 0x10),(xmlChar *)0x0,param_2,param_3);
  }
  *(undefined4 *)(param_1 + 0x110) = 3;
  *(undefined4 *)(param_1 + 0x94) = 1;
  do {
    if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '<') ||
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) != '?')) &&
        ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '<' ||
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) != '!')))) &&
       ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '%' &&
          (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ')) &&
         ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
          (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')))) goto LAB_100887d24;
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x40);
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
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
    while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0' && (1 < *(int *)(param_1 + 0x40)))
          ) {
      _xmlPopInput(param_1);
    }
  } while ((*(long *)(*(long *)(param_1 + 0x38) + 0x20) != lVar1) ||
          ((uVar2 & 0xffffffff) != *(ulong *)(*(long *)(param_1 + 0x38) + 0x40)));
  FUN_100877520(param_1,0x3c,0);
LAB_100887d24:
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\0') {
    FUN_100877520(param_1,0x3c,0);
  }
  return;
}

