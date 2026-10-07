
bool FUN_00409f30(pthread_t *param_1,__start_routine *param_2)

{
  int iVar1;
  
  iVar1 = pthread_create(param_1,(pthread_attr_t *)0x0,param_2,(void *)0x0);
  if (iVar1 != 0) {
    *param_1 = 0;
  }
  return iVar1 == 0;
}

