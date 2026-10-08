
void FUN_100945226(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  if ((-1 < *(int *)(param_1 + 0xa4)) &&
     ((*(int *)(param_1 + 0x120) == -1 || (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x120)))))
  {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlschemas.c",0x5f0a,param_5,param_6,
              param_2);
  }
  return;
}

