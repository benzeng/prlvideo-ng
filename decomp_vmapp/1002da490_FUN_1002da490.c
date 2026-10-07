
undefined * FUN_1002da490(uint param_1,uint param_2,ushort param_3,ushort param_4,ushort param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 < 0x34) {
    lVar2 = (ulong)(param_2 & 0xff) * 0x10;
    uVar3 = param_1 & 0xff;
    uVar4 = (ulong)param_2;
    if ((((byte)(&DAT_100bb3f80)[lVar2] == uVar3) ||
        (uVar4 = (ulong)param_2, (byte)(&DAT_100bb3f81)[lVar2] == uVar3)) ||
       (uVar4 = (ulong)param_2, (byte)(&DAT_100bb3f82)[lVar2] == uVar3)) goto LAB_1002da4eb;
  }
  uVar4 = 0x32;
LAB_1002da4eb:
  uVar1 = 4;
  if ((param_1 & 0x1f) < 6) {
    uVar1 = (ulong)(param_1 & 0x1f);
  }
  _snprintf(&DAT_1011b9d30,0x80,"%s-%s-%s %s:%02x wValue:%04x wIndex:%04x wLength:%04x",
            (&PTR_s_OUT_100bb3f20)[param_1 >> 7],(&PTR_s_STD_100bb3f30)[param_1 >> 5 & 3],
            (&PTR_s_DEV_100bb3f50)[uVar1],(&PTR_s_GET_STATUS_100bb3f88)[uVar4 * 2],param_2,
            (uint)param_3,(uint)param_4,(uint)param_5);
  DAT_1011b9daf = 0;
  return &DAT_1011b9d30;
}

