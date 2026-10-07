
undefined8 FUN_10037ee60(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(int *)(param_2 + 0x8344) - 1;
  uVar3 = 0x1e00;
  uVar4 = 0x1e00;
  if (uVar1 < 8) {
    uVar4 = *(undefined4 *)(&DAT_100b3e160 + (long)(int)uVar1 * 4);
  }
  uVar1 = *(int *)(param_2 + 0x8348) - 1;
  if (uVar1 < 8) {
    uVar3 = *(undefined4 *)(&DAT_100b3e160 + (long)(int)uVar1 * 4);
  }
  uVar1 = *(int *)(param_2 + 0x834c) - 1;
  uVar2 = 0x1e00;
  if (uVar1 < 8) {
    uVar2 = *(undefined4 *)(&DAT_100b3e160 + (long)(int)uVar1 * 4);
  }
  if (*(int *)(param_2 + 0x8554) == 0) {
    (*DAT_1011c6b28)(uVar4,uVar3,uVar2);
  }
  else {
    uVar1 = *(int *)(param_2 + 0x8558) - 1;
    uVar3 = 0x1e00;
    uVar4 = 0x1e00;
    if (uVar1 < 8) {
      uVar4 = *(undefined4 *)(&DAT_100b3e160 + (long)(int)uVar1 * 4);
    }
    uVar1 = *(int *)(param_2 + 0x855c) - 1;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_100b3e160 + (long)(int)uVar1 * 4);
    }
    uVar1 = *(int *)(param_2 + 0x8560) - 1;
    uVar2 = 0x1e00;
    if (uVar1 < 8) {
      uVar2 = *(undefined4 *)(&DAT_100b3e160 + (long)(int)uVar1 * 4);
    }
    (*DAT_1011c6b30)(0x404);
    (*DAT_1011c6b30)(0x405,uVar4,uVar3,uVar2);
  }
  return 0;
}

