
void FUN_100879c6f(long param_1)

{
  int iVar1;
  
  _xmlParserInputShrink(*(undefined8 *)(param_1 + 0x38));
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
    iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
    if (iVar1 < 1) {
      _xmlPopInput(param_1);
    }
  }
  return;
}

