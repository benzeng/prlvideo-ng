
void FUN_100388010(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined8 param_10,undefined1 param_11,long param_12,undefined8 param_13,
                  undefined4 param_14,byte param_15,long param_16,undefined4 param_17)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_12 + 0x78) >> (param_15 & 0x1f);
  if (*(uint *)(param_12 + 0x78) >> (param_15 & 0x1f) == 0) {
    uVar2 = 1;
  }
  uVar3 = *(uint *)(param_12 + 0x7c) >> (param_15 & 0x1f);
  if (*(uint *)(param_12 + 0x7c) >> (param_15 & 0x1f) == 0) {
    uVar3 = 1;
  }
  uVar1 = *(uint *)(DAT_1011c8478 + 4);
  if (*(char *)(DAT_1011c8478 + 0x37) != '\0') {
    (*DAT_1011c5bc0)(0x3000);
    (*DAT_1011c5bc0)(0x3001);
    (*DAT_1011c5bc0)(0x3002);
    (*DAT_1011c5bc0)(0x3003);
    (*DAT_1011c5bc0)(0x3004);
    (*DAT_1011c5bc0)(0x3005);
  }
  if (uVar1 < 0x140) {
    (*DAT_1011c5bc0)(0xbc0);
  }
  if (*(uint *)(DAT_1011c8478 + 0x1c) < 2) {
    (*DAT_1011c72d0)(0,0,uVar2,uVar3);
    (*DAT_1011c5ba8)(0,DAT_100b44c90);
  }
  else {
    (*DAT_1011c80c0)(0,0,(float)uVar2,(float)uVar3,0);
    (*DAT_1011c7980)(0,DAT_100b44c90,0);
  }
  (*DAT_1011c5bc0)(0xc11);
  (*DAT_1011c5bc0)(0xbe2);
  (*DAT_1011c5bc0)(0xb44);
  (*DAT_1011c5970)(1,1,1,1);
  (*DAT_1011c6748)(0x408,0x1b02);
  if ((*(byte *)(param_12 + 0xac) & 1) == 0) {
    (*DAT_1011c5bc0)(0xb71);
    (*DAT_1011c5ba0)(0);
  }
  else {
    (*DAT_1011c5bc0)(0xb90);
    (*DAT_1011c5c78)(0xb71);
    (*DAT_1011c5ba0)(1);
    (*DAT_1011c5b98)(0x207);
    (*DAT_1011c5bc0)(0x8037);
  }
  (*DAT_1011c5bc0)(0x8db9);
  if (param_2 < 0x806f) {
    if (param_2 == 0xde0) {
      uVar4 = 1;
      goto switchD_100388344_caseD_58;
    }
    if (param_2 == 0xde1) {
      uVar4 = 9;
      switch(param_3) {
      case 0x55:
      case 0x56:
        uVar4 = 0;
        if (*(int *)(param_12 + 0x1c) != param_3) {
          uVar4 = 0xc;
        }
        break;
      case 0x57:
        uVar4 = 0xb;
        break;
      case 0x58:
        break;
      case 0x59:
        uVar4 = 10;
        break;
      default:
        uVar4 = 5;
        if (((*(byte *)(param_12 + 0xac) & 1) == 0) && (uVar4 = 3, *(char *)(param_16 + 4) == '\0'))
        {
          uVar4 = 0;
        }
      }
      goto switchD_100388344_caseD_58;
    }
  }
  else if (param_2 < 0x8c18) {
    if (param_2 - 0x8515U < 6) {
      uVar4 = 4;
      goto switchD_100388344_caseD_58;
    }
    if (param_2 == 0x806f) {
      uVar4 = 0xd;
      goto switchD_100388344_caseD_58;
    }
    uVar4 = 2;
    if (param_2 == 0x84f5) goto switchD_100388344_caseD_58;
  }
  else {
    if (param_2 == 0x8c18) {
      uVar4 = 7;
      goto switchD_100388344_caseD_58;
    }
    if (param_2 == 0x8c1a) {
      uVar4 = 6;
      goto switchD_100388344_caseD_58;
    }
    if (param_2 == 0x9009) {
      uVar4 = 8;
      if (*(uint *)(DAT_1011c8478 + 4) < 0x19a) {
        uVar4 = 0;
      }
      goto switchD_100388344_caseD_58;
    }
  }
  uVar4 = 0;
switchD_100388344_caseD_58:
  FUN_100388400(param_1,uVar4,param_4,param_7,param_8,param_9,param_5,param_6,param_13,uVar2,uVar3,
                param_14,1,param_16,param_17,param_11);
  return;
}

