
int _xmlSkipBlankChars(long param_1)

{
  byte bVar1;
  int local_1c;
  byte *local_18;
  
  local_1c = 0;
  if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x110) != 3)) {
    local_18 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
    while ((*local_18 == 0x20 || (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))))) {
      if (*local_18 == 10) {
        *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      if (*local_18 == 0) {
        *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_18;
        _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
        local_18 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      }
    }
    *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_18;
  }
  else {
    do {
      bVar1 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      while ((bVar1 == 0x20 || (((8 < bVar1 && (bVar1 < 0xb)) || (bVar1 == 0xd))))) {
        _xmlNextChar(param_1);
        local_1c = local_1c + 1;
        bVar1 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      }
      while (((bVar1 == 0 && (1 < *(int *)(param_1 + 0x40))) && (*(int *)(param_1 + 0x110) != 5))) {
        _xmlPopInput(param_1);
        bVar1 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      }
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
    } while (((bVar1 == 0x20) || ((8 < bVar1 && (bVar1 < 0xb)))) || (bVar1 == 0xd));
  }
  return local_1c;
}

