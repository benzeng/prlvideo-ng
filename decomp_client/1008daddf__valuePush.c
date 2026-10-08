
int _valuePush(long param_1,long param_2)

{
  xmlGenericErrorFunc pxVar1;
  long lVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  int local_3c;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_3c = -1;
  }
  else {
    if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x28)) {
      lVar2 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x30),(long)*(int *)(param_1 + 0x2c) << 4);
      if (lVar2 == 0) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"realloc failed !\n");
        return 0;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) * 2;
      *(long *)(param_1 + 0x30) = lVar2;
    }
    *(long *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = param_2;
    *(long *)(param_1 + 0x20) = param_2;
    local_3c = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = local_3c + 1;
  }
  return local_3c;
}

