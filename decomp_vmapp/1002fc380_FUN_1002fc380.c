
void FUN_1002fc380(long param_1,undefined4 *param_2,undefined8 *param_3,uint param_4,uint param_5,
                  undefined4 param_6,undefined4 param_7,int param_8,uint param_9,uint param_10,
                  undefined1 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x9b8 + (ulong)param_9 * 0x8f0) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x118c0) = param_9;
  *(uint *)(param_1 + 0x118c4) = param_4;
  *(uint *)(param_1 + 0x118c8) = param_5;
  uVar1 = *param_2;
  *(short *)(param_1 + 0x118a8) = (short)uVar1;
  uVar2 = param_2[1];
  *(short *)(param_1 + 0x118aa) = (short)uVar2;
  *(short *)(param_1 + 0x118ac) = (short)param_2[2] - (short)uVar1;
  *(short *)(param_1 + 0x118ae) = (short)param_2[3] - (short)uVar2;
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 0x118b8) = param_3[1];
  *(undefined8 *)(param_1 + 0x118b0) = uVar4;
  *(undefined4 *)(param_1 + 0x118cc) = param_6;
  *(undefined4 *)(param_1 + 0x118d0) = param_7;
  *(int *)(param_1 + 0x118f0) = param_8;
  *(byte *)(param_1 + 0x11900) = (byte)param_10 >> 4 & 1;
  *(undefined1 *)(param_1 + 0x11901) = param_11;
  iVar3 = 0x15;
  if ((param_10 & 0x2000) == 0) {
    iVar3 = param_8;
  }
  if (iVar3 == 0x32315659) {
    *(undefined8 *)(param_1 + 0x118f4) = 0x140100001903;
    *(undefined4 *)(param_1 + 0x118fc) = 1;
  }
  else {
    if (iVar3 == 0x59565955) {
      uVar4 = 0x85ba00008a1f;
    }
    else {
      if (iVar3 != 0x32595559) {
        *(undefined8 *)(param_1 + 0x118f4) = 0x8367000080e1;
        *(undefined4 *)(param_1 + 0x118fc) = 4;
        goto LAB_1002fc4c7;
      }
      uVar4 = 0x85bb00008a1f;
    }
    *(undefined8 *)(param_1 + 0x118f4) = uVar4;
    *(undefined4 *)(param_1 + 0x118fc) = 2;
  }
LAB_1002fc4c7:
  if ((param_10 & 0x2000) == 0) {
    lVar5 = FUN_1002adb30(param_1,*(undefined8 *)(param_1 + 0x9b8 + (ulong)param_9 * 0x8f0));
    (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,param_1 + 0x118e4);
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118e4));
    if (*(int *)(param_1 + 0x118f0) == 0x32315659) {
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,0xde1,0,0x8229,param_4,param_5,0,*(undefined4 *)(param_1 + 0x118f4),
                 *(undefined4 *)(param_1 + 0x118f8),0);
      (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,param_1 + 0x118ec);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118ec));
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,0xde1,0,0x8229,param_4 >> 1,param_5 >> 1,0,
                 *(undefined4 *)(param_1 + 0x118f4),*(undefined4 *)(param_1 + 0x118f8),0);
      (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,param_1 + 0x118e8);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,*(undefined4 *)(param_1 + 0x118e8));
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,0xde1,0,0x8229,param_4 >> 1,param_5 >> 1,0,
                 *(undefined4 *)(param_1 + 0x118f4),*(undefined4 *)(param_1 + 0x118f8),0);
    }
    else {
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,0xde1,0,0x8058,param_4,param_5,0,*(undefined4 *)(param_1 + 0x118f4),
                 *(undefined4 *)(param_1 + 0x118f8),0);
    }
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0xde1,0);
    if (lVar5 != 0) {
      FUN_1002adb30(param_1,lVar5);
      return;
    }
  }
  return;
}

