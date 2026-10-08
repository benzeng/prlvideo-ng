
undefined4 FUN_100c4fe00(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_3c [4];
  int local_38 [2];
  undefined1 *local_30;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_100c3fad0();
    if (lVar3 != 0) {
      lVar4 = FUN_100c26720();
      if (lVar4 != 0) {
        uVar2 = 0;
        iVar1 = FUN_100c36bd0(lVar3,lVar4,0);
        if (iVar1 != 0) {
          iVar1 = FUN_100c26610(lVar4);
          local_38[0] = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
          local_30 = local_3c;
          local_38[1] = 2;
          local_3c[0] = 0xff;
          iVar1 = FUN_100c83760(local_38,0);
          uVar2 = FUN_100c8aea0(1,iVar1 * 2,0x10);
        }
        FUN_100c26640(lVar4);
      }
    }
  }
  return uVar2;
}

