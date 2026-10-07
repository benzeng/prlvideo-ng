
long _xmlXPtrAdvanceNode(long param_1,int *param_2)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  long local_20;
  
  local_20 = param_1;
  do {
    if (local_20 == 0) {
      return 0;
    }
    if (*(long *)(local_20 + 0x18) == 0) goto LAB_1001c23f1;
    local_20 = *(long *)(local_20 + 0x18);
    if (param_2 != (int *)0x0) {
      *param_2 = *param_2 + 1;
    }
LAB_1001c2461:
    if ((((*(int *)(local_20 + 8) == 1) || (*(int *)(local_20 + 8) == 3)) ||
        (*(int *)(local_20 + 8) == 9)) ||
       ((*(int *)(local_20 + 8) == 0xd || (*(int *)(local_20 + 8) == 4)))) {
      return local_20;
    }
  } while (*(int *)(local_20 + 8) != 5);
  ppxVar2 = ___xmlGenericError();
  pxVar1 = *ppxVar2;
  ppvVar3 = ___xmlGenericErrorContext();
  (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xpointer.c",0x91f);
LAB_1001c23f1:
  if (*(long *)(local_20 + 0x30) == 0) {
    do {
      local_20 = *(long *)(local_20 + 0x28);
      if (param_2 != (int *)0x0) {
        *param_2 = *param_2 + -1;
      }
      if (local_20 == 0) {
        return 0;
      }
      if (*(long *)(local_20 + 0x30) != 0) {
        local_20 = *(long *)(local_20 + 0x30);
        break;
      }
    } while (local_20 != 0);
  }
  else {
    local_20 = *(long *)(local_20 + 0x30);
  }
  goto LAB_1001c2461;
}

