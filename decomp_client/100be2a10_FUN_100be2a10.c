
undefined8 FUN_100be2a10(long param_1,undefined2 *param_2,undefined4 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined2 *)0x0) {
LAB_100be2a69:
    *param_3 = 5;
    return 0;
  }
  if (param_4 < 5) {
    uVar1 = 0x16b;
    uVar2 = 0x170;
  }
  else {
    if (*(long *)(param_1 + 0x290) != 0) {
      *param_2 = 0x200;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(*(long *)(param_1 + 0x290) + 9);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(*(long *)(param_1 + 0x290) + 8);
      *(undefined1 *)(param_2 + 2) = 0;
      goto LAB_100be2a69;
    }
    uVar1 = 0x171;
    uVar2 = 0x176;
  }
  FUN_100c62ee0(0x14,0x134,uVar1,"d1_srtp.c",uVar2);
  return 1;
}

