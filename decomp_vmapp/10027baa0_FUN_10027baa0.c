
bool FUN_10027baa0(int *param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((*(uint *)(param_2 + 8) & 0x20100000) == 0x20000000) {
    uVar7 = 1;
    if (param_1[1] != *param_1) {
      iVar4 = FUN_1008e38f0(&DAT_101115c9c);
      uVar7 = 0;
      if (iVar4 != 0) {
        uVar7 = 0;
        FUN_1008e3970("","LocalDevices",0,"e1000: context-descr in the middle of the packet");
      }
    }
    lVar5 = (long)*param_1;
    lVar6 = lVar5 * 0x10;
    *param_1 = *param_1 + 1;
    *(undefined1 *)(param_1 + lVar5 * 4 + 0x212) = *param_2;
    *(undefined1 *)((long)param_1 + lVar6 + 0x849) = param_2[1];
    *(undefined2 *)((long)param_1 + lVar6 + 0x84a) = *(undefined2 *)(param_2 + 2);
    *(undefined1 *)(param_1 + lVar5 * 4 + 0x213) = param_2[4];
    *(undefined1 *)((long)param_1 + lVar6 + 0x84d) = param_2[5];
    *(undefined2 *)((long)param_1 + lVar6 + 0x84e) = *(undefined2 *)(param_2 + 6);
    *(undefined1 *)(param_1 + lVar5 * 4 + 0x214) = 1;
    uVar1 = *(undefined4 *)(param_2 + 8);
    bVar2 = (byte)((uint)uVar1 >> 0x18);
    *(byte *)((long)param_1 + lVar6 + 0x851) = bVar2 & 2 | bVar2 >> 2 & 1 | (bVar2 & 1) << 2;
    *(byte *)((long)param_1 + lVar6 + 0x853) = (byte)((uint)uVar1 >> 0x10) & 0xf;
    *(short *)(param_1 + lVar5 * 4 + 0x215) = (short)uVar1;
    *(undefined1 *)((long)param_1 + lVar6 + 0x852) = param_2[0xd];
    *(undefined2 *)((long)param_1 + lVar6 + 0x856) = *(undefined2 *)(param_2 + 0xe);
  }
  else {
    cVar3 = FUN_10027b770(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      return false;
    }
    uVar7 = *(uint *)(param_2 + 8) & 0x1000000;
  }
  iVar4 = *param_1;
  if (uVar7 == 0) {
    if (0x1ff < iVar4) {
      iVar4 = FUN_1008e38f0(&DAT_101115ca4);
      if (iVar4 != 0) {
        FUN_1008e3970("","LocalDevices",0,
                      "no slots left in e1000_sg: curr_pkt_desc_num %u, sg_mapped_size %u ",
                      *param_1 - param_1[1]);
      }
      *(long *)(*(long *)(param_1 + 6) + 0xf4) = *(long *)(*(long *)(param_1 + 6) + 0xf4) + 1;
      *param_1 = param_1[1];
      *(undefined2 *)(param_1 + 2) = 0;
      param_1[4] = param_3;
      if ((param_2[0xb] & 1) == 0) {
        *(undefined1 *)((long)param_1 + 10) = 1;
      }
    }
    return false;
  }
  param_1[1] = iVar4;
  param_1[4] = param_3;
  if (iVar4 < 0x41) {
    return 0xff < param_1[3];
  }
  return true;
}

