
void FUN_1002add10(undefined8 param_1,long param_2)

{
  if (DAT_1011c4a88 != *(long *)(param_2 + 0x88)) {
    DAT_1011c4a88 = *(long *)(param_2 + 0x88);
    _CGLSetCurrentContext();
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    _IOSurfaceSetValue(*(long *)(param_2 + 0x90),&cf_Inited,
                       *(undefined8 *)PTR__kCFBooleanFalse_100ba23c0);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    (*DAT_1011c5738)(0x8ca9);
    (*DAT_1011c5de8)(0x8ca9,0x8ce0,0x84f5,0,0);
    (*DAT_1011c5738)(0x8ca9,0);
    (*DAT_1011c5c00)(0x405);
    (*DAT_1011c5b20)(1,param_2 + 0x9c);
  }
  *(undefined4 *)(param_2 + 0x9c) = 0;
  if (*(int *)(param_2 + 0x98) != 0) {
    (*DAT_1011c5b80)(1,param_2 + 0x98);
  }
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(long *)(param_2 + 0x90) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  return;
}

