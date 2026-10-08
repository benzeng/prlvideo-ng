
void FUN_1008c2ff6(long param_1,xmlValidCtxtPtr param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x5c) == 3)) &&
     (*(xmlChar **)(param_1 + 0x50) != (xmlChar *)0x0)) {
    iVar1 = _xmlValidateNotationUse
                      (param_2,*(xmlDocPtr *)(param_1 + 0x40),*(xmlChar **)(param_1 + 0x50));
    if (iVar1 != 1) {
      param_2->valid = 0;
    }
  }
  return;
}

