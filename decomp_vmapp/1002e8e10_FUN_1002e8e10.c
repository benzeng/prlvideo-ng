
undefined8 FUN_1002e8e10(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if (DAT_1011ccc18 == (code *)0x0) goto LAB_1002e8e6c;
    uVar1 = 10;
  }
  else {
    if ((*(int *)(param_1 + 0x178) != 1) || (DAT_1011ccc18 == (code *)0x0)) goto LAB_1002e8e6c;
    uVar1 = 0xb;
  }
  (*DAT_1011ccc18)(1,0x22,uVar1);
LAB_1002e8e6c:
  *(int *)(param_1 + 0x147) = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x147);
  uVar1 = 6;
  if (0xc < *(uint *)(param_2 + 0x43c)) {
    *(undefined1 *)(param_2 + 0x4e4) = *(undefined1 *)(param_1 + 0x14b);
    *(undefined4 *)(param_2 + 0x4e0) = *(undefined4 *)(param_1 + 0x147);
    *(undefined8 *)(param_2 + 0x4d8) = *(undefined8 *)(param_1 + 0x13f);
    *(undefined4 *)(param_2 + 0x454) = 0xd;
    *(undefined4 *)(param_2 + 0x468) = 0;
    uVar1 = 7;
    if (*(char *)(param_1 + 0x14b) != '\x02') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

