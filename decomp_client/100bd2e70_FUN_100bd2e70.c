
undefined8 FUN_100bd2e70(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x3f0) == 0) {
    lVar2 = *(long *)(param_1 + 0x130);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == 0)) {
      FUN_100c62ee0(0x14,0x124,0x85,"s3_pkt.c",0x5ca);
      return 0;
    }
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x3a8);
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x10))(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x20))
                    (param_1,(uVar1 >> 9 & 0x10) + 0x11);
  uVar6 = 0;
  if (iVar3 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 200);
    if ((*(byte *)(param_1 + 0x49) & 0x10) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x40);
      puVar5 = (undefined4 *)(lVar2 + 0x48);
    }
    else {
      puVar4 = (undefined8 *)(lVar2 + 0x50);
      puVar5 = (undefined4 *)(lVar2 + 0x58);
    }
    iVar3 = (**(code **)(lVar2 + 0x28))(param_1,*puVar4,*puVar5,*(long *)(param_1 + 0x80) + 0x314);
    if (iVar3 == 0) {
      FUN_100c62ee0(0x14,0x124,0x44,"s3_pkt.c",0x5e6);
    }
    else {
      *(int *)(*(long *)(param_1 + 0x80) + 0x394) = iVar3;
      uVar6 = 1;
    }
  }
  return uVar6;
}

