
void FUN_100362670(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (*(int *)(lVar1 + 0x28) == param_2) {
    *(undefined4 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  return;
}

