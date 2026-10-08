
ulong FUN_100b93870(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (DAT_1023118c8 == 0) {
    uVar1 = FUN_100bc14c0();
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar1 = FUN_100b9e610();
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar1 = FUN_100bc05e0(&DAT_1022cf500);
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0) {
          DAT_1022cf510 = FUN_100bc0ff0();
          if (((DAT_1022cf510 != -1) && (DAT_1022cf508 = FUN_100bc0e90(), DAT_1022cf508 != -1)) &&
             (iVar2 = FUN_100bc1030(DAT_1022cf508), iVar2 == 0)) {
            DAT_1022cf518 = FUN_100b93f80();
            FUN_100bc10f0(DAT_1022cf508);
            if (DAT_1022cf518 != 0) {
              FUN_100b94c30();
              FUN_100ba17c0(".",1);
              DAT_1023118c8 = 1;
              return 0;
            }
          }
          FUN_100b93950();
          FUN_100bc14b0();
          uVar3 = FUN_100b9d560();
          return uVar3;
        }
        FUN_100bc14b0();
      }
      else {
        FUN_100bc14b0();
      }
    }
  }
  return uVar3;
}

