
undefined4 FUN_1008f5ded(long *param_1,int *param_2,int param_3)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  undefined4 local_40;
  int local_3c;
  long local_28;
  int local_20;
  int local_1c;
  
  if ((param_1 == (long *)0x0) || (param_2 == (int *)0x0)) {
    local_40 = 0xffffffff;
  }
  else {
    local_28 = *param_1;
    if (local_28 == 0) {
      local_40 = 0xffffffff;
    }
    else {
      local_20 = *param_2;
      local_3c = param_3;
      do {
        while( true ) {
          if (local_3c < 0) {
            return 0xffffffff;
          }
          while ((local_28 != 0 &&
                 (((*(int *)(local_28 + 8) == 1 || (*(int *)(local_28 + 8) == 9)) ||
                  (*(int *)(local_28 + 8) == 0xd))))) {
            if (local_20 < 1) {
              local_28 = _xmlXPtrAdvanceNode(local_28,0);
              local_20 = 0;
            }
            else {
              local_28 = FUN_1008f2574(local_28,local_20);
              local_20 = 0;
            }
          }
          if (local_28 == 0) {
            *param_1 = 0;
            *param_2 = 0;
            return 0xffffffff;
          }
          if (local_20 == 0) {
            local_20 = 1;
          }
          if (local_3c == 0) {
            *param_1 = local_28;
            *param_2 = local_20;
            return 0;
          }
          local_1c = 0;
          if ((*(int *)(local_28 + 8) != 1) && (*(long *)(local_28 + 0x50) != 0)) {
            local_1c = _xmlStrlen(*(xmlChar **)(local_28 + 0x50));
          }
          if (local_1c < local_20) {
            ppxVar2 = ___xmlGenericError();
            pxVar1 = *ppxVar2;
            ppvVar3 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar3,"Internal error at %s:%d\n","xpointer.c",0x969);
            local_20 = local_1c;
          }
          if (local_3c + local_20 < local_1c) break;
          local_3c = local_3c - (local_1c - local_20);
          local_28 = _xmlXPtrAdvanceNode(local_28,0);
          local_20 = 0;
        }
      } while (local_1c <= local_3c + local_20);
      *param_1 = local_28;
      *param_2 = local_20 + local_3c;
      local_40 = 0;
    }
  }
  return local_40;
}

