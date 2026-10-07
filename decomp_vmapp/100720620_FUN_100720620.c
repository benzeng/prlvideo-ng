
undefined8 FUN_100720620(uint *param_1,char *param_2)

{
  int iVar1;
  sbyte sVar2;
  uint uVar3;
  
  iVar1 = _strcasecmp(param_2,PTR_s_x86_10116e620);
  sVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_2,PTR_s_x86_64_10116e628);
    sVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_2,PTR_s_ia64_10116e630);
      uVar3 = 0;
      sVar2 = 2;
      if (iVar1 != 0) goto LAB_10072067e;
    }
  }
  uVar3 = 1 << sVar2 | *param_1;
LAB_10072067e:
  *param_1 = uVar3;
  return 0;
}

