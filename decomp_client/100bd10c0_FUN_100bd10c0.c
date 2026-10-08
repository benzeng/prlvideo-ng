
ulong FUN_100bd10c0(long param_1,int param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  
  *(undefined4 *)(param_1 + 0x28) = 1;
  lVar3 = *(long *)(param_1 + 0x80);
  iVar6 = *(int *)(lVar3 + 0x1a0);
  if (iVar6 < 0) {
    FUN_100bf2cd0("s3_pkt.c",0x274,"s->s3->wnum <= INT_MAX");
    lVar3 = *(long *)(param_1 + 0x80);
    iVar6 = *(int *)(lVar3 + 0x1a0);
  }
  *(undefined4 *)(lVar3 + 0x1a0) = 0;
  uVar4 = FUN_100be45f0(param_1);
  if (((uVar4 & 0x3000) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    uVar4 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      uVar5 = 0xe5;
      uVar7 = 0x27d;
      goto LAB_100bd116c;
    }
  }
  if (iVar6 <= param_4) {
    uVar8 = param_4 - iVar6;
    uVar1 = *(uint *)(param_1 + 0x1c8);
    if (uVar8 <= *(uint *)(param_1 + 0x1c8)) {
      uVar1 = uVar8;
    }
    uVar4 = FUN_100bd1280(param_1,param_2,iVar6 + param_3,uVar1,0);
    if (0 < (int)uVar4) {
      if (param_2 == 0x17) {
        do {
          iVar2 = (int)uVar4;
          uVar8 = uVar8 - iVar2;
          if ((uVar8 == 0) || ((*(byte *)(param_1 + 0x1b0) & 1) != 0)) {
LAB_100bd1232:
            *(undefined4 *)(*(long *)(param_1 + 0x80) + 0xe8) = 0;
            return (ulong)(uint)(iVar2 + iVar6);
          }
          iVar6 = iVar6 + iVar2;
          uVar1 = *(uint *)(param_1 + 0x1c8);
          if (uVar8 <= *(uint *)(param_1 + 0x1c8)) {
            uVar1 = uVar8;
          }
          uVar4 = FUN_100bd1280(param_1,0x17,iVar6 + param_3,uVar1,0);
        } while (0 < (int)uVar4);
      }
      else {
        do {
          iVar2 = (int)uVar4;
          uVar8 = uVar8 - iVar2;
          if (uVar8 == 0) goto LAB_100bd1232;
          iVar6 = iVar2 + iVar6;
          uVar1 = *(uint *)(param_1 + 0x1c8);
          if (uVar8 <= *(uint *)(param_1 + 0x1c8)) {
            uVar1 = uVar8;
          }
          uVar4 = FUN_100bd1280(param_1,param_2,iVar6 + param_3,uVar1,0);
        } while (0 < (int)uVar4);
      }
    }
    *(int *)(*(long *)(param_1 + 0x80) + 0x1a0) = iVar6;
    return uVar4;
  }
  uVar5 = 0x10f;
  uVar7 = 0x28c;
LAB_100bd116c:
  FUN_100c62ee0(0x14,0x9e,uVar5,"s3_pkt.c",uVar7);
  return 0xffffffff;
}

