
undefined8 FUN_100bcfe80(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
  FUN_100bcfc70();
  puVar3 = (undefined8 *)FUN_100bf3540(0x30,"s3_enc.c",0x250);
  *(undefined8 **)(*(long *)(param_1 + 0x80) + 0x1c0) = puVar3;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  uVar6 = 0;
  lVar4 = FUN_100c58d60(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x1b8),3,0,&local_48);
  if (lVar4 < 1) {
    FUN_100c62ee0(0x14,0x125,0x14c,"s3_enc.c",0x254);
  }
  else {
    uVar7 = 0;
    iVar2 = FUN_100beaa30(0,&local_38,&local_40);
    if (iVar2 != 0) {
      do {
        uVar1 = local_38;
        uVar5 = FUN_100bceee0(param_1);
        if (((uVar1 & uVar5) == 0) || (local_40 == 0)) {
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + uVar7 * 8) = 0;
        }
        else {
          uVar6 = FUN_100c65890();
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + uVar7 * 8) = uVar6;
          FUN_100c65920(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + uVar7 * 8),
                        local_40,0);
          FUN_100c65b10(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + uVar7 * 8),
                        local_48,lVar4);
        }
        uVar7 = uVar7 + 1;
        iVar2 = FUN_100beaa30(uVar7 & 0xffffffff,&local_38,&local_40);
      } while (iVar2 != 0);
    }
    uVar6 = 1;
    if ((**(byte **)(param_1 + 0x80) & 0x20) == 0) {
      FUN_100c586e0(*(undefined8 *)(*(byte **)(param_1 + 0x80) + 0x1b8));
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x1b8) = 0;
    }
  }
  return uVar6;
}

