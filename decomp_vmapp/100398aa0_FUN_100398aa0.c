
ulong FUN_100398aa0(uint param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar3 = FUN_10038e450();
  uVar4 = 0xb;
  if ((1 < param_1 - 0x2b) && (param_1 != 0x23)) {
    if (param_1 == 0x6d) {
      uVar4 = 0xc;
    }
    else {
      cVar1 = FUN_10038e260(param_1);
      uVar4 = 3;
      if (cVar1 == '\0') {
        cVar1 = FUN_10038e230(param_1);
        if ((cVar1 != '\0') && (cVar1 = FUN_10038e230(uVar3), cVar1 == '\0')) {
          cVar1 = FUN_10038e2b0(param_1);
          if (cVar1 == '\0') {
            return 4;
          }
          uVar4 = (ulong)(*(uint *)(&DAT_100b3ee34 + (ulong)param_1 * 8) >> 0x18) /
                  (ulong)(*(uint *)(&DAT_100b3ee34 + (ulong)param_1 * 8) >> 0x10 & 0xff);
          iVar5 = (int)uVar4;
          if (iVar5 != 1) {
            return (ulong)((uint)(iVar5 == 2) * 2);
          }
          return uVar4;
        }
        cVar1 = FUN_10038e270(param_1);
        uVar4 = 6;
        if (cVar1 == '\0') {
          cVar1 = FUN_10038e2b0(param_1);
          uVar4 = 7;
          if (cVar1 == '\0') {
            cVar1 = FUN_10038e2f0(uVar3);
            uVar4 = 9;
            if (cVar1 == '\0') {
              cVar1 = FUN_10038e310(uVar3);
              uVar4 = 10;
              if (cVar1 == '\0') {
                bVar2 = FUN_10038e320(uVar3);
                uVar4 = (ulong)bVar2 << 3;
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}

