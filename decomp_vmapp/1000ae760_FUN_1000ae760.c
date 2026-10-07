
void FUN_1000ae760(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x1930);
  if ((*(byte *)(lVar1 + 0x233) & 0x80) == 0) {
    *(undefined4 *)(param_2 + 3) = 4;
    pcVar2 = FUN_10078bf20;
  }
  else if (*(short *)(lVar1 + 0x220) == 0x40) {
    *(undefined4 *)(param_2 + 3) = 3;
    pcVar2 = FUN_10078c280;
  }
  else if (*(short *)(lVar1 + 0x220) == 0x20) {
    if ((*(byte *)(lVar1 + 0x98) & 0x20) == 0) {
      *(undefined4 *)(param_2 + 3) = 1;
      pcVar2 = FUN_10078bf40;
    }
    else {
      *(undefined4 *)(param_2 + 3) = 2;
      pcVar2 = FUN_10078c0a0;
    }
  }
  else {
    *(undefined4 *)(param_2 + 3) = 0;
    pcVar2 = FUN_10078bf30;
  }
  param_2[4] = (long)pcVar2;
  *param_2 = (ulong)*(uint *)(param_1 + 0x5ac) << 0x14;
  param_2[1] = (long)FUN_1000ae810;
  param_2[2] = (long)FUN_1000ae880;
  return;
}

