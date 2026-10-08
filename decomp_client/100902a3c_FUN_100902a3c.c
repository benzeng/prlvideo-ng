
void FUN_100902a3c(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x3c) != 1)) {
    if (DAT_102312c80 != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
          ppxVar3 = ___xmlGenericError();
          pxVar1 = *ppxVar3;
          ppvVar4 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar4,"Free catalog entry\n");
        }
        else {
          ppxVar3 = ___xmlGenericError();
          pxVar1 = *ppxVar3;
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          ppvVar4 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar4,"Free catalog entry %s\n",uVar2);
        }
      }
      else {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Free catalog entry %s\n",uVar2);
      }
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x30));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

