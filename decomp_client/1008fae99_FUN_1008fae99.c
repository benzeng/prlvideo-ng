
undefined4 FUN_1008fae99(long param_1,long param_2)

{
  int iVar1;
  long local_18;
  int local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 8) != 1) {
    return 0;
  }
  if (*(long *)(param_2 + 0x48) == 0) {
    return 0;
  }
  iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                       (xmlChar *)"http://www.w3.org/2003/XInclude");
  if ((iVar1 != 0) ||
     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                           (xmlChar *)"http://www.w3.org/2001/XInclude"), iVar1 != 0)) {
    iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                         (xmlChar *)"http://www.w3.org/2001/XInclude");
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x54) == 0)) {
      *(undefined4 *)(param_1 + 0x54) = 1;
    }
    iVar1 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"include");
    if (iVar1 != 0) {
      local_18 = *(long *)(param_2 + 0x18);
      local_c = 0;
      for (; local_18 != 0; local_18 = *(long *)(local_18 + 0x30)) {
        if (((*(int *)(local_18 + 8) == 1) && (*(long *)(local_18 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                  (xmlChar *)"http://www.w3.org/2003/XInclude"), iVar1 != 0 ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                  (xmlChar *)"http://www.w3.org/2001/XInclude"), iVar1 != 0)))) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"include");
          if (iVar1 != 0) {
            FUN_1008f6fe0(param_1,param_2,0x64e,"%s has an \'include\' child\n","include");
            return 0;
          }
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"fallback");
          if (iVar1 != 0) {
            local_c = local_c + 1;
          }
        }
      }
      if (1 < local_c) {
        FUN_1008f6fe0(param_1,param_2,0x64f,"%s has multiple fallback children\n","include");
        return 0;
      }
      return 1;
    }
    iVar1 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"fallback");
    if ((iVar1 != 0) &&
       (((((*(long *)(param_2 + 0x28) == 0 || (*(int *)(*(long *)(param_2 + 0x28) + 8) != 1)) ||
          (*(long *)(*(long *)(param_2 + 0x28) + 0x48) == 0)) ||
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(*(long *)(param_2 + 0x28) + 0x48) + 0x10),
                                (xmlChar *)"http://www.w3.org/2003/XInclude"), iVar1 == 0 &&
          (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(*(long *)(param_2 + 0x28) + 0x48) + 0x10),
                                (xmlChar *)"http://www.w3.org/2001/XInclude"), iVar1 == 0)))) ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x28) + 0x10),(xmlChar *)"include"),
        iVar1 == 0)))) {
      FUN_1008f6fe0(param_1,param_2,0x650,"%s is not the child of an \'include\'\n","fallback");
    }
  }
  return 0;
}

