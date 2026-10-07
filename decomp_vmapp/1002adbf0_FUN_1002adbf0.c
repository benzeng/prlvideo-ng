
void FUN_1002adbf0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1011c4a88;
  lVar2 = *(long *)(param_2 + 0x88);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x868);
  }
  if (DAT_1011c4a88 != lVar2) {
    DAT_1011c4a88 = lVar2;
    _CGLSetCurrentContext();
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    (*DAT_1011c5738)(0x8ca9);
    (*DAT_1011c5de8)(0x8ca9,0x8ce0,0xde1,0,0);
    (*DAT_1011c5738)(0x8ca9,0);
    (*DAT_1011c5c00)(0x405);
    (*DAT_1011c5b20)(1,param_2 + 0xa8);
  }
  *(undefined4 *)(param_2 + 0xa8) = 0;
  if (*(int *)(param_2 + 0xa4) == *(int *)(param_2 + 0xa0)) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  if (*(int *)(param_2 + 0xa4) != 0) {
    (*DAT_1011c5b80)(1,(undefined4 *)(param_2 + 0xa4));
  }
  *(undefined4 *)(param_2 + 0xa4) = 0;
  if (DAT_1011c4a88 != lVar1) {
    DAT_1011c4a88 = lVar1;
    _CGLSetCurrentContext(lVar1);
    return;
  }
  return;
}

