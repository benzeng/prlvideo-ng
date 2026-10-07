
void FUN_100362590(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (*(int *)(lVar1 + 0x38) == param_2) {
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  FUN_1003713c0(*(undefined8 *)(param_1 + 0xc0),1,param_2);
  return;
}

