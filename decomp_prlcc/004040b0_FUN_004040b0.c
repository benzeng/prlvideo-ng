
void FUN_004040b0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_14 [3];
  void *local_8;
  
  local_8 = (void *)0x0;
  local_14[0] = param_1;
  iVar1 = pthread_create(&DAT_0061d500,(pthread_attr_t *)0x0,FUN_00404590,local_14);
  if (iVar1 != 0) {
    DAT_0061c698 = 0;
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: can\'t start worker thread");
    return;
  }
  pthread_join(DAT_0061d500,&local_8);
  DAT_0061d500 = 0;
  return;
}

