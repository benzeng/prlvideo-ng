
void FUN_100c563f0(long param_1,long param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_100c60360(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar1 < 0) break;
    FUN_100c60270(*(undefined8 *)(param_1 + 8),iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) == param_2) {
    FUN_100c55660(param_2,0);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

