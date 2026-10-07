
void FUN_1001bd477(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  long lVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar2 = (*(code *)_xmlMalloc)(0x50);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_1001a50bc(param_1,"creating evaluation context\n");
        (*(code *)_xmlFree)(param_1);
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 10;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if ((*(long *)(*(long *)(param_1 + 0x38) + 0x28) != 0) &&
       (lVar3 = FUN_1001bd0a7(*(undefined8 *)(param_1 + 0x18),
                              *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28)), lVar3 != 0)) {
      _valuePush(param_1,lVar3);
      return;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (*(int *)(lVar3 + 0x10) < 0) {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"xmlXPathRunEval: last is less than zero\n");
    }
    else {
      FUN_1001b9e7d(param_1,*(long *)(lVar3 + 8) + (long)*(int *)(lVar3 + 0x10) * 0x38);
    }
  }
  return;
}

