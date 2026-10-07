
char * FUN_1002da2f0(ulong *param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  if (DAT_1011c568c == 0) {
    pcVar3 = "";
  }
  else {
    uVar1 = *param_1;
    uVar4 = param_1[1] >> 0x3b;
    if (uVar4 < 5) {
      pcVar2 = (&PTR_s_DISABLED_100bb3e90)[uVar4];
    }
    else {
      pcVar2 = "UNDEF";
    }
    pcVar3 = &DAT_1011b9c30;
    _snprintf(&DAT_1011b9c30,0x80,
              "SLOT_CTX(%s(%d) RHPortNumber:%d Speed:%d MaxExitLat:%d NumOfPorts:%d UsbDevAddr:%d)",
              pcVar2,uVar4,uVar1 >> 0x30 & 0xff,(uint)(uVar1 >> 0x14) & 0xf,
              (uint)(uVar1 >> 0x20) & 0xffff,(uint)(byte)(uVar1 >> 0x38),
              (uint)(param_1[1] >> 0x20) & 0xff);
    DAT_1011b9caf = 0;
  }
  return pcVar3;
}

