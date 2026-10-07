
char * FUN_1006b3170(char *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
  uVar1 = FUN_1007d6e70(param_2);
  QString::sprintf(param_1,"vme%08x.%d",(ulong)uVar1,param_3 & 0xffffffff);
  return param_1;
}

