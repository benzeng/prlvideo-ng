
undefined8 FUN_100d80520(void)

{
  int iVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  uVar3 = (undefined7)((ulong)in_RAX >> 8);
  if (DAT_102318968 == '\0') {
    QMutex::lock();
    if (DAT_102318968 == '\0') {
      iVar1 = FUN_100dfaf30(&DAT_102318969);
      if (iVar1 != 0) {
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("","cmn_utils",1,"Failed to get Sandbox status");
        }
        DAT_102318969 = 0;
      }
      DAT_102318968 = '\x01';
    }
    uVar2 = QMutex::unlock();
    uVar3 = (undefined7)((ulong)uVar2 >> 8);
    if (DAT_102318968 == '\0') {
      FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","gs_bSandboxStatusGot",
                    "ParallelsDirs.cpp",0xee,"getSandboxStatus");
      uVar3 = extraout_var;
    }
  }
  return CONCAT71(uVar3,DAT_102318969);
}

