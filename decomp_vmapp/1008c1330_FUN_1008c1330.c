
bool FUN_1008c1330(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_1011c2a00 == 0) {
    DAT_1011c2a00 = FUN_100884d30(FUN_1008c1420);
    if (DAT_1011c2a00 == 0) {
      return false;
    }
  }
  else {
    iVar1 = FUN_100885160(DAT_1011c2a00,param_1);
    if (iVar1 != -1) {
      puVar2 = (undefined8 *)FUN_100885620(DAT_1011c2a00,iVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[4] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 5) = 0xffffffff;
        if (puVar2[6] != 0) {
          FUN_100885590(puVar2[6],FUN_100899890);
          puVar2[6] = 0;
        }
        FUN_10081e1a0(puVar2);
      }
      FUN_100885070(DAT_1011c2a00,iVar1);
    }
  }
  iVar1 = FUN_1008852e0(DAT_1011c2a00,param_1);
  return iVar1 != 0;
}

