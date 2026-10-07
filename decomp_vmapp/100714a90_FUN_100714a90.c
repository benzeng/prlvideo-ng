
ulong FUN_100714a90(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (DAT_1011ccb40 == 0) {
    uVar1 = FUN_1007426e0();
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar1 = FUN_10071f830();
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar1 = FUN_100741800(&DAT_10116db30);
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0) {
          DAT_10116db40 = FUN_100742210();
          if (((DAT_10116db40 != -1) && (DAT_10116db38 = FUN_1007420b0(), DAT_10116db38 != -1)) &&
             (iVar2 = FUN_100742250(DAT_10116db38), iVar2 == 0)) {
            DAT_10116db48 = FUN_1007151a0();
            FUN_100742310(DAT_10116db38);
            if (DAT_10116db48 != 0) {
              FUN_100715e50();
              FUN_1007229e0(".",1);
              DAT_1011ccb40 = 1;
              return 0;
            }
          }
          FUN_100714b70();
          FUN_1007426d0();
          uVar3 = FUN_10071e780();
          return uVar3;
        }
        FUN_1007426d0();
      }
      else {
        FUN_1007426d0();
      }
    }
  }
  return uVar3;
}

