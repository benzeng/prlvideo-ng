
void FUN_10027b690(long param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (long)param_2;
  lVar6 = lVar4 * 0x2850;
  lVar5 = lVar4 * 0x100;
  *(ulong *)(param_1 + 0x158 + lVar6) =
       CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x3804 + lVar5),
                *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x3800 + lVar5)) & 0xfffffffffffffff0;
  *(undefined2 *)(param_1 + 0x51fc) = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  uVar3 = *(uint *)(lVar2 + 0x3808 + lVar5) & 0xfff80;
  *(uint *)(lVar2 + 0x3808 + lVar5) = uVar3;
  uVar3 = uVar3 >> 4;
  *(short *)(lVar2 + 6 + lVar4 * 6) = (short)uVar3;
  *(undefined1 *)(lVar2 + 2 + lVar4 * 6) = 0;
  uVar1 = *(ushort *)(lVar2 + 0x3810 + lVar5);
  *(uint *)(param_1 + 0x170 + lVar6) = (uint)uVar1;
  *(ushort *)(lVar2 + 4 + lVar4 * 6) = uVar1;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,
                  "e1000_init_tx_ring[%d]: tx_addr=0x%llx, tx_size=%u, tdh:tdt=%x:%x",param_2,
                  *(undefined8 *)(param_1 + 0x158 + lVar6),uVar3,
                  *(undefined2 *)(lVar2 + 0x3810 + lVar5),*(undefined2 *)(lVar2 + 0x3818 + lVar5));
  }
  return;
}

