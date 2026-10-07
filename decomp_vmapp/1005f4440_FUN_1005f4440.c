
void FUN_1005f4440(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1007dba90(*(undefined8 *)(param_1 + 0x18),param_3 + param_2,param_2);
  *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) != '\0' && iVar1 == 0;
  return;
}

