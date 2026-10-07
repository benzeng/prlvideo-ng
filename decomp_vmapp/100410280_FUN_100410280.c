
undefined8 FUN_100410280(byte *param_1,ulong *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_2 + 2) = 1;
  bVar1 = *param_1;
  if (bVar1 < 0x88) {
    if (0x34 < bVar1) {
      if (bVar1 == 0x35) {
LAB_10041037e:
        *(undefined4 *)(param_2 + 2) = 2;
        return 0;
      }
LAB_1004103c6:
      FUN_1008e3970("","Scsi",0,"ERROR: unknown SCSI command 0x%x");
      return 0xffffffff;
    }
    if (bVar1 < 0x28) {
      if (bVar1 == 8) {
        *(undefined4 *)(param_2 + 2) = 0;
      }
      else if (bVar1 != 10) goto LAB_1004103c6;
      uVar4 = (ulong)CONCAT11((char)*(undefined2 *)(param_1 + 2),
                              (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8));
      param_2[1] = uVar4;
      param_2[1] = ((ulong)param_1[1] & 0x1f) << 0x10 | uVar4;
      uVar3 = (uint)param_1[4];
    }
    else {
      if (bVar1 == 0x28) {
        *(undefined4 *)(param_2 + 2) = 0;
      }
      else if (bVar1 != 0x2a) goto LAB_1004103c6;
      uVar3 = *(uint *)(param_1 + 2);
      param_2[1] = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18);
      uVar3 = (uint)CONCAT11((char)*(undefined2 *)(param_1 + 7),
                             (char)((ushort)*(undefined2 *)(param_1 + 7) >> 8));
    }
  }
  else {
    if (bVar1 < 0x8a) {
      if (bVar1 != 0x88) goto LAB_1004103c6;
      *(undefined4 *)(param_2 + 2) = 0;
    }
    else {
      if (0xa7 < bVar1) {
        if (bVar1 == 0xa8) {
          *(undefined4 *)(param_2 + 2) = 0;
        }
        else if (bVar1 != 0xaa) goto LAB_1004103c6;
        uVar3 = *(uint *)(param_1 + 2);
        param_2[1] = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18);
        uVar3 = *(uint *)(param_1 + 5);
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        goto LAB_1004103bc;
      }
      if (bVar1 != 0x8a) {
        if (bVar1 == 0x91) goto LAB_10041037e;
        goto LAB_1004103c6;
      }
    }
    uVar3 = (uint)*(undefined8 *)(param_1 + 2);
    uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
    param_2[1] = CONCAT44(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18,
                          uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
    uVar3 = *(uint *)(param_1 + 10);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
LAB_1004103bc:
  *param_2 = (ulong)(uVar3 * param_3);
  return 0;
}

