
undefined8 FUN_100406c00(long *param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = param_1[3];
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,1);
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_1 + 2,0,1);
    if (cVar2 == '\0') {
      return 1;
    }
    *(int *)(param_1 + 3) = (int)lVar1;
  }
  return 0;
}

