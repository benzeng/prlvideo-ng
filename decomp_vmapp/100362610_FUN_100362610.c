
void FUN_100362610(undefined4 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = (ulong)(*(int *)(param_3 + 8) == 0x23);
  lVar2 = 0;
  if (uVar1 < (ulong)(*(long *)(param_3 + 0x48) - *(long *)(param_3 + 0x40) >> 3)) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x40) + uVar1 * 8);
  }
  local_10 = *(undefined4 *)(lVar2 + 0xc);
  local_c = param_1;
  (*DAT_1011c6780)(1,&local_10,&local_c);
  return;
}

