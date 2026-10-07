
char * FUN_1002da3a0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  if (DAT_1011c568c == 0) {
    pcVar5 = "";
  }
  else {
    uVar1 = *param_1;
    if ((uVar1 & 7) < 6) {
      pcVar3 = (&PTR_s_DISABLED_100bb3eb0)[uVar1 & 7];
    }
    else {
      pcVar3 = "UNDEF";
    }
    uVar2 = (uint)(uVar1 >> 0x20);
    uVar4 = uVar2 >> 3 & 7;
    pcVar5 = &DAT_1011b9cb0;
    _snprintf(&DAT_1011b9cb0,0x80,
              "EP_CTX(%s(%d) %s:(%d) Mult:%d MaxStreams:%d MaxBurstSize:%d MaxPktSize:%d DP:%08x%08x C:%d)"
              ,pcVar3,(ulong)((uint)uVar1 & 7),(&PTR_s_NOT_VALID_100bb3ee0)[uVar4],uVar4,
              (uint)(uVar1 >> 8) & 3,(uint)(uVar1 >> 10) & 0x1f,uVar2 >> 8 & 0xff,
              (uint)(ushort)(uVar1 >> 0x30),*(undefined4 *)((long)param_1 + 0xc),
              (uint)param_1[1] & 0xfffffff0,(uint)param_1[1] & 1);
    DAT_1011b9d2f = 0;
  }
  return pcVar5;
}

