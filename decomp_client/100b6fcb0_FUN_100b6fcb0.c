
ulong FUN_100b6fcb0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x120) - 1;
  if ((uVar1 < 8) && ((0xf9U >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar1 = FUN_100b6f630(param_1,param_2,*(undefined4 *)(&DAT_101cdc1a0 + (long)(int)uVar1 * 4));
    uVar2 = 0;
    if ((uVar1 != 0) && (uVar2 = (ulong)uVar1, *(int *)(param_1 + 0x120) == 5)) {
      uVar2 = FUN_100b6f630(param_1,param_2,3);
      return uVar2;
    }
  }
  else {
    uVar2 = 0x80011003;
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","License",3,"Unknown license class");
    }
  }
  return uVar2;
}

