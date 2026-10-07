
undefined8 FUN_10037e910(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(int *)(param_2 + 0x851c) - 1;
  uVar3 = 0x8006;
  if (uVar1 < 5) {
    uVar3 = *(undefined4 *)(&DAT_100b3e140 + (long)(int)uVar1 * 4);
  }
  if (*(int *)(param_2 + 0x85a8) == 0) {
    (*DAT_1011c5790)(uVar3);
  }
  else {
    uVar1 = *(int *)(param_2 + 0x85b4) - 1;
    uVar2 = 0x8006;
    if (uVar1 < 5) {
      uVar2 = *(undefined4 *)(&DAT_100b3e140 + (long)(int)uVar1 * 4);
    }
    (*DAT_1011c57a0)(uVar3,uVar2);
  }
  return 0;
}

