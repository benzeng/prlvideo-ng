
ulong FUN_10027e4d0(long param_1,long param_2,uint param_3,int *param_4,int *param_5)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  
  uVar6 = 0xfffffffe;
  if (*(int *)(param_1 + 8) != 0) {
    sVar1 = *(short *)(*(long *)(param_1 + 0x18) + 2);
    *(short *)(param_1 + 0x2a) = sVar1;
    if (sVar1 != *(short *)(param_1 + 0x28)) {
      if ((*(char *)(param_1 + 0x2f) == '\0') && ((*(byte *)(param_1 + 0xf) & 0x20) != 0)) {
        *(short *)(*(long *)(param_1 + 0x20) + 4 + (ulong)*(uint *)(param_1 + 4) * 8) = sVar1;
      }
      uVar3 = *(uint *)(param_1 + 4);
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar11 = 0;
      uVar6 = (ulong)uVar2 % (ulong)uVar3;
      uVar8 = *(ushort *)(*(long *)(param_1 + 0x18) + 4 + uVar6 * 2);
      *param_5 = 0;
      *param_4 = 0;
      uVar7 = (ulong)uVar8;
      uVar5 = (uint)uVar8;
      if ((uVar5 < uVar3) && (param_3 != 0)) {
        lVar4 = *(long *)(param_1 + 0x10);
        puVar10 = (undefined4 *)(param_2 + 8);
        uVar11 = 0;
        do {
          lVar9 = (ulong)uVar8 * 0x10;
          *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(lVar4 + lVar9);
          *puVar10 = *(undefined4 *)(lVar4 + 8 + lVar9);
          uVar8 = *(ushort *)(lVar4 + 0xc + lVar9);
          if ((uVar8 & 2) == 0) {
            if (*param_5 != 0) {
              FUN_1008e3970("","LocalDevices",0,
                            "[CVirtIoQueue::PopAvailEntry]: output descr after input!");
              return 0xffffffff;
            }
            *param_4 = *param_4 + 1;
          }
          else {
            *param_5 = *param_5 + 1;
          }
          if ((uVar8 & 1) == 0) {
            *(ushort *)(param_1 + 0x28) = uVar2 + 1;
            return uVar7;
          }
          uVar11 = uVar11 + 1;
          uVar8 = *(ushort *)(lVar4 + 0xe + lVar9);
          uVar5 = (uint)uVar8;
        } while ((uVar8 < uVar3) && (puVar10 = puVar10 + 4, uVar11 < param_3));
      }
      FUN_1008e3970("","LocalDevices",0,
                    "[CVirtIoQueue::PopAvailEntry][%u] ring_idx:%u  desc_idx:%u  num:%u",
                    uVar11 & 0xffffffff,uVar6,uVar5,uVar3);
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}

