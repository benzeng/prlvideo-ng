
void FUN_10027d250(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_10027cc50();
  *param_1 = &PTR_FUN_100bafad0;
  param_1[0x90c] = 0;
  ___bzero(param_1 + 3,0x4844);
  param_1[0x1217] = 0;
  ___bzero(param_1 + 0x90e,0x4844);
  lVar1 = DAT_1011c3688;
  param_1[0x1219] = DAT_1011c3688;
  param_1[0x121a] = *(undefined8 *)(*(long *)(lVar1 + 0x60) + 0x20);
  param_1[0x121b] = param_1 + 0x121c;
  *(undefined4 *)(param_1 + 0x121c) = 0;
  param_1[0x121d] = 0;
  lVar1 = param_1[2];
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  uVar4 = 1 << (DAT_101115cd0 & 0x1f);
  *(uint *)(lVar1 + 0x2c) = uVar4;
  uVar4 = 1 << (DAT_101115cd4 & 0x1f) | uVar4;
  *(uint *)(lVar1 + 0x2c) = uVar4;
  uVar4 = 1 << (DAT_101115cd8 & 0x1f) | uVar4;
  *(uint *)(lVar1 + 0x2c) = uVar4;
  uVar4 = 1 << (DAT_101115cdc & 0x1f) | uVar4;
  *(uint *)(lVar1 + 0x2c) = uVar4;
  uVar4 = 1 << (DAT_101115ce0 & 0x1f) | uVar4;
  *(uint *)(lVar1 + 0x2c) = uVar4;
  *(uint *)(lVar1 + 0x2c) = 1 << (DAT_101115ce4 & 0x1f) | uVar4;
  iVar2 = FUN_1007da300("devices.net.virtio.tx_offload",1);
  lVar1 = param_1[2];
  if (iVar2 != 0) {
    uVar4 = 1 << (DAT_101115ce8 & 0x1f) | *(uint *)(lVar1 + 0x2c);
    *(uint *)(lVar1 + 0x2c) = uVar4;
    uVar4 = 1 << (DAT_101115cec & 0x1f) | uVar4;
    *(uint *)(lVar1 + 0x2c) = uVar4;
    *(uint *)(lVar1 + 0x2c) = 1 << (DAT_101115cf0 & 0x1f) | uVar4;
  }
  uVar4 = *(uint *)(lVar1 + 0x28);
  uVar5 = *(uint *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x1218) = 0;
  pbVar3 = (byte *)FUN_1002f0000(4,uVar5 & 0xffff,0);
  param_1[0x1217] = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to create queue %d:%d:%d",4,uVar5 & 0xffff,0);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_48);
    FUN_10002d9d0(&local_48);
  }
  else {
    *pbVar3 = *pbVar3 | 1;
  }
  uVar5 = *(uint *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x90d) = 1;
  pbVar3 = (byte *)FUN_1002f0000(4,uVar5 & 0xffff,1);
  param_1[0x90c] = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to create queue %d:%d:%d",4,uVar5 & 0xffff,1);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_68);
    FUN_10002d9d0(&local_68);
  }
  else {
    *pbVar3 = *pbVar3 | 1;
  }
  uVar4 = uVar4 & 1;
  if (uVar4 != 0) {
    iVar2 = FUN_1007da300("devices.net.virtio.posted_interrupts",0);
    if (iVar2 != 0) {
      *(uint *)param_1[0x1217] = *(uint *)param_1[0x1217] | 2;
      *(uint *)param_1[0x90c] = *(uint *)param_1[0x90c] | 2;
    }
  }
  iVar2 = FUN_1007da300("devices.net.virtio.mrg_rx",uVar4);
  if (iVar2 != 0) {
    lVar1 = param_1[2];
    uVar5 = *(uint *)(lVar1 + 0x2c) | 0x8000;
    *(uint *)(lVar1 + 0x2c) = uVar5;
    if (uVar4 != 0) {
      uVar5 = 1 << (DAT_101115d00 & 0x1f) | uVar5;
      *(uint *)(lVar1 + 0x2c) = uVar5;
      uVar5 = 1 << (DAT_101115d04 & 0x1f) | uVar5;
      *(uint *)(lVar1 + 0x2c) = uVar5;
      uVar5 = 1 << (DAT_101115d08 & 0x1f) | uVar5;
      *(uint *)(lVar1 + 0x2c) = uVar5;
      uVar5 = 1 << (DAT_101115d0c & 0x1f) | uVar5;
      *(uint *)(lVar1 + 0x2c) = uVar5;
      *(uint *)(lVar1 + 0x2c) = 1 << (DAT_101115d10 & 0x1f) | uVar5;
    }
  }
  iVar2 = FUN_1007da300("devices.net.virtio.event_idx",1);
  if (iVar2 != 0) {
    *(uint *)(param_1[2] + 0x2c) = *(uint *)(param_1[2] + 0x2c) | 0x20000000;
  }
  iVar2 = FUN_1007da300("devices.net.virtio.rx_csum",uVar4);
  if (iVar2 == 0) {
    *(uint *)(param_1[2] + 0x2c) = *(uint *)(param_1[2] + 0x2c) & 0xfffffffd;
  }
  if (2 < DAT_1011b55f8) {
    lVar1 = param_1[2];
    FUN_1008e3970("","LocalDevices",3,
                  "[CNetVirtIo::CNetVirtIo] parent:%p netbuf:%p flags:%08x, features: %08x",param_2,
                  lVar1,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c));
  }
  return;
}

