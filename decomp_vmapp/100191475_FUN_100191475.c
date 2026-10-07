
void FUN_100191475(long *param_1,long param_2)

{
  int iVar1;
  
  while (((param_2 != 0 && (param_1[0x24] != 0)) &&
         (iVar1 = FUN_1001911a8(param_2,param_1[0x24]), iVar1 != 0))) {
    if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
      (**(code **)(*param_1 + 0x78))(param_1[1],param_1[0x24]);
    }
    FUN_100190874(param_1);
  }
  if (param_2 == 0) {
    FUN_1001913f7(param_1);
  }
  else {
    while ((param_2 == 0 && (param_1[0x24] != 0))) {
      iVar1 = _xmlStrEqual((xmlChar *)param_1[0x24],(xmlChar *)"head");
      if ((iVar1 == 0) &&
         ((iVar1 = _xmlStrEqual((xmlChar *)param_1[0x24],(xmlChar *)"body"), iVar1 == 0 &&
          (iVar1 = _xmlStrEqual((xmlChar *)param_1[0x24],(xmlChar *)"html"), iVar1 == 0)))) {
        return;
      }
      if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
        (**(code **)(*param_1 + 0x78))(param_1[1],param_1[0x24]);
      }
      FUN_100190874(param_1);
    }
  }
  return;
}

