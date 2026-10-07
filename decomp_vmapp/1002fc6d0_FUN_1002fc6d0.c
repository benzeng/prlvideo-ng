
void FUN_1002fc6d0(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    *(long *)(param_1 + 0x118d8) = param_2;
    *(undefined4 *)(param_1 + 0x118e0) = param_3;
  }
  if ((*(long *)(param_1 + 0x9b8 + (ulong)*(uint *)(param_1 + 0x118c0) * 0x8f0) != 0) &&
     (*(long *)(param_1 + 0x118d8) != 0)) {
    lVar2 = FUN_1002adb30(param_1);
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118e4));
    iVar1 = *(int *)(param_1 + 0x118f0);
    (*(code *)DAT_1011c4a88[0xc4])
              (*DAT_1011c4a88,0xcf2,
               (ulong)*(uint *)(param_1 + 0x118e0) / (ulong)*(uint *)(param_1 + 0x118fc));
    if (iVar1 == 0x32315659) {
      (*(code *)DAT_1011c4a88[0x134])
                (*DAT_1011c4a88,0xde1,0,0,0,*(undefined4 *)(param_1 + 0x118c4),
                 *(undefined4 *)(param_1 + 0x118c8),*(undefined4 *)(param_1 + 0x118f4),
                 *(undefined4 *)(param_1 + 0x118f8),*(undefined8 *)(param_1 + 0x118d8));
      (*(code *)DAT_1011c4a88[0xc4])
                (*DAT_1011c4a88,0xcf2,
                 (ulong)*(uint *)(param_1 + 0x118e0) / (ulong)*(uint *)(param_1 + 0x118fc) >> 1);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118ec));
      (*(code *)DAT_1011c4a88[0x134])
                (*DAT_1011c4a88,0xde1,0,0,0,*(uint *)(param_1 + 0x118c4) >> 1,
                 *(uint *)(param_1 + 0x118c8) >> 1,*(undefined4 *)(param_1 + 0x118f4),
                 *(undefined4 *)(param_1 + 0x118f8),
                 (ulong)(*(uint *)(param_1 + 0x118c8) * *(int *)(param_1 + 0x118e0)) +
                 *(long *)(param_1 + 0x118d8));
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118e8));
      (*(code *)DAT_1011c4a88[0x134])
                (*DAT_1011c4a88,0xde1,0,0,0,*(uint *)(param_1 + 0x118c4) >> 1,
                 *(uint *)(param_1 + 0x118c8) >> 1,*(undefined4 *)(param_1 + 0x118f4),
                 *(undefined4 *)(param_1 + 0x118f8),
                 (ulong)(*(uint *)(param_1 + 0x118c8) * *(int *)(param_1 + 0x118e0) * 5 >> 2) +
                 *(long *)(param_1 + 0x118d8));
    }
    else {
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,0xde1,0,0x8058,*(undefined4 *)(param_1 + 0x118c4),
                 *(undefined4 *)(param_1 + 0x118c8),0,*(undefined4 *)(param_1 + 0x118f4),
                 *(undefined4 *)(param_1 + 0x118f8),*(undefined8 *)(param_1 + 0x118d8));
    }
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,0);
    FUN_1002ac290(param_1,*(undefined4 *)(param_1 + 0x118c0),2);
    if (lVar2 != 0) {
      FUN_1002adb30(param_1,lVar2);
      return;
    }
  }
  return;
}

