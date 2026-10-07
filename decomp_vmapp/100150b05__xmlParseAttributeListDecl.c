
void _xmlParseAttributeListDecl(long *param_1)

{
  int iVar1;
  long local_50;
  xmlEnumerationPtr local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  int local_20;
  int local_1c;
  
  if ((((((**(char **)(param_1[7] + 0x20) == '<') &&
         (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'A')) &&
       ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'T' &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'T')))) &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 5) == 'L')) &&
     (((*(char *)(*(long *)(param_1[7] + 0x20) + 6) == 'I' &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'S')) &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 8) == 'T')))) {
    local_30 = param_1[7];
    param_1[0x27] = param_1[0x27] + 9;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 9;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 9;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) != ' ') &&
       (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
        (**(char **)(param_1[7] + 0x20) != '\r')))) {
      FUN_100144217(param_1,0x41,"Space required after \'<!ATTLIST\'\n");
    }
    _xmlSkipBlankChars(param_1);
    local_40 = _xmlParseName(param_1);
    if (local_40 == 0) {
      FUN_100144217(param_1,0x44,"ATTLIST: no name for Element\n");
    }
    else {
      _xmlSkipBlankChars(param_1);
      if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
        FUN_100146394(param_1);
      }
      while (**(char **)(param_1[7] + 0x20) != '>') {
        local_28 = *(long *)(param_1[7] + 0x20);
        local_50 = 0;
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        local_48 = (xmlEnumerationPtr)0x0;
        local_38 = _xmlParseName(param_1);
        if (local_38 == 0) {
          FUN_100144217(param_1,0x44,"ATTLIST: no name for Attribute\n");
          break;
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        if ((**(char **)(param_1[7] + 0x20) != ' ') &&
           (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
            (**(char **)(param_1[7] + 0x20) != '\r')))) {
          FUN_100144217(param_1,0x41,"Space required after the attribute name\n");
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          break;
        }
        _xmlSkipBlankChars(param_1);
        local_20 = _xmlParseAttributeType(param_1,&local_48);
        if (local_20 < 1) {
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          break;
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        if (((**(char **)(param_1[7] + 0x20) != ' ') &&
            ((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))))) &&
           (**(char **)(param_1[7] + 0x20) != '\r')) {
          FUN_100144217(param_1,0x41,"Space required after the attribute type\n");
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          if (local_48 != (xmlEnumerationPtr)0x0) {
            _xmlFreeEnumeration(local_48);
          }
          break;
        }
        _xmlSkipBlankChars(param_1);
        local_1c = _xmlParseDefaultDecl(param_1,&local_50);
        if (local_1c < 1) {
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          if (local_48 != (xmlEnumerationPtr)0x0) {
            _xmlFreeEnumeration(local_48);
          }
          break;
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        if (**(char **)(param_1[7] + 0x20) != '>') {
          if ((**(char **)(param_1[7] + 0x20) != ' ') &&
             (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
              (**(char **)(param_1[7] + 0x20) != '\r')))) {
            FUN_100144217(param_1,0x41,"Space required after the attribute default value\n");
            if (local_50 != 0) {
              (*(code *)_xmlFree)(local_50);
            }
            if (local_48 != (xmlEnumerationPtr)0x0) {
              _xmlFreeEnumeration(local_48);
            }
            break;
          }
          _xmlSkipBlankChars(param_1);
        }
        if (*(long *)(param_1[7] + 0x20) == local_28) {
          FUN_100143bf8(param_1,1,"in xmlParseAttributeListDecl\n");
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          if (local_48 != (xmlEnumerationPtr)0x0) {
            _xmlFreeEnumeration(local_48);
          }
          break;
        }
        if (((*param_1 == 0) || (*(int *)((long)param_1 + 0x14c) != 0)) ||
           (*(long *)(*param_1 + 0x40) == 0)) {
          if (local_48 != (xmlEnumerationPtr)0x0) {
            _xmlFreeEnumeration(local_48);
          }
        }
        else {
          (**(code **)(*param_1 + 0x40))
                    (param_1[1],local_40,local_38,local_20,local_1c,local_50,local_48);
        }
        if ((((int)param_1[0x3f] != 0) && (local_50 != 0)) && ((local_1c != 3 && (local_1c != 2))))
        {
          FUN_100144daf(param_1,local_40,local_38,local_50);
        }
        if (((int)param_1[0x3f] != 0) && (local_20 != 1)) {
          FUN_1001450b0(param_1,local_40,local_38,local_20);
        }
        if (local_50 != 0) {
          (*(code *)_xmlFree)(local_50);
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
      }
      if (**(char **)(param_1[7] + 0x20) == '>') {
        if (param_1[7] != local_30) {
          FUN_100144217(param_1,0x5a,
                        "Attribute list declaration doesn\'t start and stop in the same entity\n");
        }
        _xmlNextChar(param_1);
      }
    }
  }
  return;
}

