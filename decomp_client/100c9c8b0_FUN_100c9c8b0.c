
bool FUN_100c9c8b0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_102318440 == 0) {
    DAT_102318440 = FUN_100c5ff30(FUN_100c9c9a0);
    if (DAT_102318440 == 0) {
      return false;
    }
  }
  else {
    iVar1 = FUN_100c60360(DAT_102318440,param_1);
    if (iVar1 != -1) {
      puVar2 = (undefined8 *)FUN_100c60820(DAT_102318440,iVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[4] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 5) = 0xffffffff;
        if (puVar2[6] != 0) {
          FUN_100c60790(puVar2[6],FUN_100c74e10);
          puVar2[6] = 0;
        }
        FUN_100bf3910(puVar2);
      }
      FUN_100c60270(DAT_102318440,iVar1);
    }
  }
  iVar1 = FUN_100c604e0(DAT_102318440,param_1);
  return iVar1 != 0;
}

