
void FUN_1008c4bd5(long *param_1,xmlChar *param_2)

{
  int iVar1;
  int iVar2;
  htmlElemDesc *phVar3;
  int local_10;
  
  iVar1 = FUN_1008c4a59(param_2);
  local_10 = (int)param_1[0x25];
  while ((local_10 = local_10 + -1, -1 < local_10 &&
         (iVar2 = _xmlStrEqual(param_2,*(xmlChar **)(param_1[0x26] + (long)local_10 * 8)),
         iVar2 == 0))) {
    iVar2 = FUN_1008c4a59(*(undefined8 *)(param_1[0x26] + (long)local_10 * 8));
    if (iVar1 < iVar2) {
      return;
    }
  }
  if (local_10 < 0) {
    return;
  }
  while (iVar1 = _xmlStrEqual(param_2,(xmlChar *)param_1[0x24]), iVar1 == 0) {
    phVar3 = _htmlTagLookup((xmlChar *)param_1[0x24]);
    if ((phVar3 != (htmlElemDesc *)0x0) && (phVar3->endTag == '\x03')) {
      FUN_1008c3ec0(param_1,0x4c,"Opening and ending tag mismatch: %s and %s\n",param_2,
                    param_1[0x24]);
    }
    if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
      (**(code **)(*param_1 + 0x78))(param_1[1],param_1[0x24]);
    }
    FUN_1008c419c(param_1);
  }
  return;
}

