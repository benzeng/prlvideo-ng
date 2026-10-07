
void _xmlParseNotationDecl(long *param_1)

{
  int iVar1;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  if ((((((**(char **)(param_1[7] + 0x20) == '<') &&
         (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'N')) &&
       ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'O' &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'T')))) &&
      ((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == 'A' &&
       ((*(char *)(*(long *)(param_1[7] + 0x20) + 6) == 'T' &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'I')))))) &&
     ((*(char *)(*(long *)(param_1[7] + 0x20) + 8) == 'O' &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 9) == 'N')))) {
    local_10 = param_1[7];
    if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
       (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) {
      if (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500) {
        FUN_100146347(param_1);
      }
    }
    param_1[0x27] = param_1[0x27] + 10;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 10;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 10;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(param_1[7] + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    if ((**(char **)(param_1[7] + 0x20) == ' ') ||
       (((8 < **(byte **)(param_1[7] + 0x20) && (**(byte **)(param_1[7] + 0x20) < 0xb)) ||
        (**(char **)(param_1[7] + 0x20) == '\r')))) {
      _xmlSkipBlankChars(param_1);
      local_20 = _xmlParseName(param_1);
      if (local_20 == 0) {
        FUN_100143bf8(param_1,0x30,0);
      }
      else if (((**(char **)(param_1[7] + 0x20) == ' ') ||
               ((8 < **(byte **)(param_1[7] + 0x20) && (**(byte **)(param_1[7] + 0x20) < 0xb)))) ||
              (**(char **)(param_1[7] + 0x20) == '\r')) {
        _xmlSkipBlankChars(param_1);
        local_18 = _xmlParseExternalID(param_1,&local_28,0);
        _xmlSkipBlankChars(param_1);
        if (**(char **)(param_1[7] + 0x20) == '>') {
          if (param_1[7] != local_10) {
            FUN_100144217(param_1,0x41,
                          "Notation declaration doesn\'t start and stop in the same entity\n");
          }
          _xmlNextChar(param_1);
          if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
             (*(long *)(*param_1 + 0x38) != 0)) {
            (**(code **)(*param_1 + 0x38))(param_1[1],local_20,local_28,local_18);
          }
        }
        else {
          FUN_100143bf8(param_1,0x31,0);
        }
        if (local_18 != 0) {
          (*(code *)_xmlFree)(local_18);
        }
        if (local_28 != 0) {
          (*(code *)_xmlFree)(local_28);
        }
      }
      else {
        FUN_100144217(param_1,0x41,"Space required after the NOTATION name\'\n");
      }
    }
    else {
      FUN_100144217(param_1,0x41,"Space required after \'<!NOTATION\'\n");
    }
  }
  return;
}

