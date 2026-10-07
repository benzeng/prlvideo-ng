
void FUN_1003625d0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (*(int *)(lVar1 + 0x48) == param_2) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  FUN_1003713c0(*(undefined8 *)(param_1 + 0xc0),0,param_2);
  return;
}

