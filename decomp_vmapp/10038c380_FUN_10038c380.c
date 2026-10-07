
void FUN_10038c380(long *param_1,long param_2,uint *param_3,int param_4,undefined4 param_5,
                  long param_6,uint *param_7,uint param_8,int param_9)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_3[2] <= *param_3) {
    return;
  }
  if (param_3[3] <= param_3[1]) {
    return;
  }
  uVar2 = param_3[5];
  uVar3 = param_3[4];
  if (uVar2 < param_3[4] || uVar2 == uVar3) {
    return;
  }
  if (param_7[2] <= *param_7) {
    return;
  }
  if (param_7[3] <= param_7[1]) {
    return;
  }
  uVar4 = param_7[5];
  uVar5 = param_7[4];
  if (uVar4 < param_7[4] || uVar4 == uVar5) {
    return;
  }
  if (uVar2 - uVar3 != uVar4 - uVar5) {
    return;
  }
  uVar6 = **(undefined8 **)(param_2 + 0x40);
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  (*DAT_1011c5708)(0x88eb,**(undefined4 **)(param_6 + 0x58));
  (*DAT_1011c66f0)(0x806c,param_7[3] - param_7[1]);
  uVar2 = *(uint *)(param_6 + 8);
  if (0xffffff < *(uint *)(&DAT_100b3e3b4 + (ulong)uVar2 * 8)) goto switchD_10038c544_caseD_11;
  switch(uVar2 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xf:
  case 0x10:
    break;
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    break;
  case 10:
    goto switchD_10038c544_caseD_0;
  case 0x12:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x34:
  case 0x37:
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x35:
  case 0x36:
  case 0x38:
  }
  switch(uVar2 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
switchD_10038c544_caseD_0:
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    break;
  case 7:
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  }
switchD_10038c544_caseD_11:
  if (0 < param_9) {
    iVar7 = 0;
    do {
      if (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar2 * 8) < 0x1000000) {
        switch(uVar2 - 0x53) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 0xb:
        case 0xc:
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 0xf:
        case 0x10:
          break;
        case 8:
        case 9:
        case 0xd:
        case 0xe:
          break;
        case 10:
          goto switchD_10038c68f_caseD_0;
        case 0x12:
        case 0x13:
        case 0x18:
        case 0x19:
        case 0x34:
        case 0x37:
          break;
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x1a:
        case 0x1b:
        case 0x35:
        case 0x36:
        case 0x38:
        }
        switch(uVar2 - 0x53) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
        case 9:
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
switchD_10038c68f_caseD_0:
          break;
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0xc:
          break;
        case 7:
          break;
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        }
      }
      iVar7 = iVar7 + 1;
    } while (param_9 != iVar7);
  }
  uVar2 = param_3[4];
  if (uVar2 < param_3[5]) {
    iVar7 = param_3[5] - uVar2;
    param_4 = param_4 + uVar2;
    do {
      (**(code **)(*param_1 + 0x38))(param_1,uVar6,param_4,param_5);
      FUN_100389b40();
      param_4 = param_4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  (*DAT_1011c5708)(0x88eb,0);
  (*DAT_1011c66f0)(0x806c,0);
  puVar1 = (uint *)(*(long *)(param_6 + 0x90) + (ulong)param_8 * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_9 & 0x1f));
  return;
}

