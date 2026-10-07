
undefined4 FUN_1001f2b1b(xmlChar *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _xmlStrEqual(param_1,(xmlChar *)"qualified");
  if (iVar1 == 0) {
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"unqualified");
    if (iVar1 == 0) {
      return 1;
    }
  }
  else if ((*param_2 & param_3) == 0) {
    *param_2 = *param_2 | param_3;
  }
  return 0;
}

