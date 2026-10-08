
uint FUN_100878f14(long param_1,uint param_2)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  uint local_38;
  uint local_34;
  int local_1c;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    local_38 = 0;
  }
  else {
    local_34 = param_2;
    if (*(int *)(param_1 + 0x1fc) < (int)param_2) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Pbm popping %d NS\n",(ulong)param_2);
      local_34 = *(uint *)(param_1 + 0x1fc);
    }
    if (*(int *)(param_1 + 0x1fc) < 1) {
      local_38 = 0;
    }
    else {
      for (local_1c = 0; local_1c < (int)local_34; local_1c = local_1c + 1) {
        *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
        *(undefined8 *)(*(long *)(param_1 + 0x208) + (long)*(int *)(param_1 + 0x1fc) * 8) = 0;
      }
      local_38 = local_34;
    }
  }
  return local_38;
}

