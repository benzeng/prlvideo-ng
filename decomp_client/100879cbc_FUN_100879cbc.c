
void FUN_100879cbc(long param_1)

{
  int iVar1;
  
  _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
    iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
    if (iVar1 < 1) {
      _xmlPopInput(param_1);
    }
  }
  return;
}

