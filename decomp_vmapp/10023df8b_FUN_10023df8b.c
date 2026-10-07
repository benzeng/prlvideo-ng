
int FUN_10023df8b(undefined8 param_1,long param_2,long param_3)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  long local_20;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),*(xmlChar **)(param_3 + 0x10)), iVar2 == 0)
     ) {
    return 0;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    if (**(char **)(param_2 + 0x18) == '\0') {
      if (*(long *)(param_3 + 0x48) != 0) {
        return 0;
      }
    }
    else if ((*(long *)(param_3 + 0x48) == 0) ||
            (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x18),
                                  *(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10)), iVar2 == 0)) {
      return 0;
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    if (**(int **)(param_2 + 0x50) == 2) {
      for (local_20 = *(long *)(*(int **)(param_2 + 0x50) + 0xc); local_20 != 0;
          local_20 = *(long *)(local_20 + 0x40)) {
        iVar2 = FUN_10023df8b(param_1,local_20,param_3);
        if (iVar2 == 1) {
          return 0;
        }
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    else {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","relaxng.c",0x22ab);
    }
  }
  return 1;
}

