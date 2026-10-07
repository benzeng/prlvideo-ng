
char * FUN_1002da200(undefined4 *param_1,ulong param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  if (DAT_1011c568c == 0) {
    pcVar2 = "";
  }
  else {
    uVar3 = (uint)param_1[3] >> 10;
    bVar1 = (byte)uVar3 & 0x3f;
    if ((uVar3 & 0x3f) < 0x33) {
      pcVar4 = (&PTR_s_RESERVED_100bb3cf0)[bVar1];
    }
    else {
      pcVar4 = "VENDOR ";
    }
    pcVar2 = &DAT_1011b9b30;
    _snprintf(&DAT_1011b9b30,0x80,"TRB[%08x%08x] = ([%s](%d) PTR:%08x%08x STS:%08x CTRL:%08x)",
              param_2 >> 0x20,param_2,pcVar4,(uint)bVar1,param_1[1],*param_1,param_1[2],param_1[3]);
    DAT_1011b9baf = 0;
  }
  return pcVar2;
}

