
undefined8 FUN_100b9f400(uint *param_1,char *param_2)

{
  int iVar1;
  sbyte sVar2;
  uint uVar3;
  
  iVar1 = _strcasecmp(param_2,PTR_s_x86_1022cfff0);
  sVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_2,PTR_s_x86_64_1022cfff8);
    sVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_2,PTR_s_ia64_1022d0000);
      uVar3 = 0;
      sVar2 = 2;
      if (iVar1 != 0) goto LAB_100b9f45e;
    }
  }
  uVar3 = 1 << sVar2 | *param_1;
LAB_100b9f45e:
  *param_1 = uVar3;
  return 0;
}

