
uint _xmlXPathEvaluatePredicateResult(long param_1,undefined4 *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  uint local_44;
  uint local_3c;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    local_44 = 0;
  }
  else {
    switch(*param_2) {
    default:
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Internal error at %s:%d\n","xpath.c",0x2c25);
      local_44 = 0;
      break;
    case 1:
    case 9:
      if (*(long *)(param_2 + 2) == 0) {
        local_44 = 0;
      }
      else {
        local_44 = (uint)(**(int **)(param_2 + 2) != 0);
      }
      break;
    case 2:
      local_44 = param_2[4];
      break;
    case 3:
      local_44 = (uint)(*(double *)(param_2 + 6) ==
                       (double)*(int *)(*(long *)(param_1 + 0x18) + 0x6c));
      break;
    case 4:
      if ((*(long *)(param_2 + 8) == 0) ||
         (iVar2 = _xmlStrlen(*(xmlChar **)(param_2 + 8)), iVar2 == 0)) {
        local_3c = 0;
      }
      else {
        local_3c = 1;
      }
      local_44 = local_3c;
      break;
    case 7:
      if (*(int **)(param_2 + 10) == (int *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = (uint)(**(int **)(param_2 + 10) != 0);
      }
    }
  }
  return local_44;
}

