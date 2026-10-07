
void FUN_1001a1fea(long param_1,uint *param_2)

{
  uint uVar1;
  xmlGenericErrorFunc pxVar2;
  undefined8 uVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  char *pcVar6;
  int local_1c;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    uVar1 = *param_2;
    if (uVar1 == 2) {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      pcVar6 = _xmlBoolToText(param_2[4]);
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"Is a Boolean:%s\n",pcVar6);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          if (*(long *)(param_2 + 2) != 0) {
            for (local_1c = 0; local_1c < **(int **)(param_2 + 2); local_1c = local_1c + 1) {
              FUN_1001a1f30(param_1,*(undefined8 *)
                                     (*(long *)(*(long *)(param_2 + 2) + 8) + (long)local_1c * 8));
            }
            return;
          }
          ppxVar4 = ___xmlGenericError();
          pxVar2 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar5,"Empty node set\n");
          return;
        }
      }
      else {
        if (uVar1 == 3) {
          ppxVar4 = ___xmlGenericError();
          pxVar2 = *ppxVar4;
          uVar3 = *(undefined8 *)(param_2 + 6);
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar5,"Is a number:%0g\n",uVar3);
          return;
        }
        if (uVar1 == 4) {
          ppxVar4 = ___xmlGenericError();
          pxVar2 = *ppxVar4;
          uVar3 = *(undefined8 *)(param_2 + 8);
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar5,"Is a string:%s\n",uVar3);
          return;
        }
      }
      _xmlShellPrintXPathError(*param_2,(char *)0x0);
    }
  }
  return;
}

