
undefined8 FUN_100920fff(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  undefined8 local_40;
  
  if (param_2 == 0xe) {
    local_40 = FUN_100920924(param_1,param_3,param_4);
  }
  else if (param_2 == 0x11) {
    local_40 = FUN_100920d1e(param_1,param_3,param_4);
  }
  else {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlschemas.c",0x1162);
    local_40 = 0;
  }
  return local_40;
}

