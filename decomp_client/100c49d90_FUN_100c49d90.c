
ulong FUN_100c49d90(void *param_1,undefined8 param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  if ((param_5 != param_4) || ((*param_3 & 0xfe) != 0x6a)) {
    uVar2 = 0x89;
    uVar6 = 0x70;
    goto LAB_100c49e0c;
  }
  pbVar5 = param_3 + 1;
  if (*param_3 == 0x6b) {
    if (3 < param_5) {
      iVar1 = 0;
      pbVar4 = pbVar5;
      do {
        pbVar5 = param_3 + 2;
        if (*pbVar4 != 0xbb) {
          if (*pbVar4 != 0xba) {
            uVar2 = 0x8a;
            uVar6 = 0x7b;
            goto LAB_100c49e0c;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        param_3 = pbVar4;
        pbVar4 = pbVar5;
      } while (iVar1 < param_5 + -3);
      if (iVar1 != 0) {
        uVar3 = (param_5 + -3) - iVar1;
        goto LAB_100c49e35;
      }
    }
    uVar2 = 0x8a;
    uVar6 = 0x83;
  }
  else {
    uVar3 = param_5 - 2;
LAB_100c49e35:
    if (pbVar5[(int)uVar3] == 0xcc) {
      _memcpy(param_1,pbVar5,(ulong)uVar3);
      return (ulong)uVar3;
    }
    uVar2 = 0x8b;
    uVar6 = 0x8b;
  }
LAB_100c49e0c:
  FUN_100c62ee0(4,0x80,uVar2,"rsa_x931.c",uVar6);
  return 0xffffffff;
}

