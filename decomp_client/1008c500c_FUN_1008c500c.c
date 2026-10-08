
void FUN_1008c500c(long *param_1,xmlChar *param_2)

{
  int iVar1;
  int local_c;
  
  if (DAT_102275a60 == 0) {
    return;
  }
  iVar1 = _xmlStrEqual(param_2,(xmlChar *)"html");
  if (iVar1 != 0) {
    return;
  }
  if ((((int)param_1[0x25] < 1) && (FUN_1008c40a7(param_1,"html"), *param_1 != 0)) &&
     (*(long *)(*param_1 + 0x70) != 0)) {
    (**(code **)(*param_1 + 0x70))(param_1[1],"html",0);
  }
  iVar1 = _xmlStrEqual(param_2,(xmlChar *)"body");
  if (iVar1 != 0) {
    return;
  }
  iVar1 = _xmlStrEqual(param_2,(xmlChar *)"head");
  if (iVar1 != 0) {
    return;
  }
  if (((int)param_1[0x25] < 2) &&
     ((((iVar1 = _xmlStrEqual(param_2,(xmlChar *)"script"), iVar1 != 0 ||
        (iVar1 = _xmlStrEqual(param_2,(xmlChar *)"style"), iVar1 != 0)) ||
       ((iVar1 = _xmlStrEqual(param_2,(xmlChar *)"meta"), iVar1 != 0 ||
        ((iVar1 = _xmlStrEqual(param_2,(xmlChar *)"link"), iVar1 != 0 ||
         (iVar1 = _xmlStrEqual(param_2,(xmlChar *)"title"), iVar1 != 0)))))) ||
      (iVar1 = _xmlStrEqual(param_2,(xmlChar *)"base"), iVar1 != 0)))) {
    FUN_1008c40a7(param_1,"head");
    if ((*param_1 != 0) && (*(long *)(*param_1 + 0x70) != 0)) {
      (**(code **)(*param_1 + 0x70))(param_1[1],"head",0);
    }
  }
  else {
    iVar1 = _xmlStrEqual(param_2,(xmlChar *)"noframes");
    if (((iVar1 == 0) && (iVar1 = _xmlStrEqual(param_2,(xmlChar *)"frame"), iVar1 == 0)) &&
       (iVar1 = _xmlStrEqual(param_2,(xmlChar *)"frameset"), iVar1 == 0)) {
      for (local_c = 0; local_c < (int)param_1[0x25]; local_c = local_c + 1) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(param_1[0x26] + (long)local_c * 8),(xmlChar *)"body");
        if (iVar1 != 0) {
          return;
        }
        iVar1 = _xmlStrEqual(*(xmlChar **)(param_1[0x26] + (long)local_c * 8),(xmlChar *)"head");
        if (iVar1 != 0) {
          return;
        }
      }
      FUN_1008c40a7(param_1,"body");
      if ((*param_1 != 0) && (*(long *)(*param_1 + 0x70) != 0)) {
        (**(code **)(*param_1 + 0x70))(param_1[1],"body",0);
      }
    }
  }
  return;
}

