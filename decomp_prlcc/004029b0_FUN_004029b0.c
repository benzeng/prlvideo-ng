
undefined8 FUN_004029b0(void)

{
  char *__filename;
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  stat64 sStack_e8;
  char *local_58 [5];
  
  puVar2 = PTR___log_level_0061bd30;
  bVar1 = false;
  lVar4 = 0;
  local_58[0] = "/sys/module/prl_tg";
  local_58[1] = "/sys/module/prl_eth";
  local_58[2] = "/sys/module/prl_fs";
  local_58[3] = "/sys/module/prl_fs_freeze";
  do {
    __filename = local_58[lVar4];
    iVar3 = __xstat64(1,__filename,&sStack_e8);
    if ((iVar3 != 0) && (bVar1 = true, 1 < *(int *)puVar2)) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Kernel module %s is missed",__filename);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (bVar1) {
    lVar4 = 0;
    do {
      iVar3 = FUN_00403c70();
      if (iVar3 == 0) {
        return 0;
      }
      lVar4 = lVar4 + 1;
      sleep(1);
    } while (lVar4 != 10);
    FUN_0040d100();
  }
  return 0;
}

