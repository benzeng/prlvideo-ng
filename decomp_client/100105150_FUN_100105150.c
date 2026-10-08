
undefined1 FUN_100105150(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined1 uVar5;
  
  pcVar2 = operator_new(0x400);
  ___bzero(pcVar2,0x400);
  sVar3 = _readlink(param_1,pcVar2,0x400);
  if (sVar3 < 0) {
    piVar4 = ___error();
    iVar1 = *piVar4;
    uVar5 = 0;
    if ((iVar1 != 2) && (uVar5 = 0, iVar1 != 0x14)) {
      if (DAT_10230ffd0 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        FUN_100df99c0("PXAPPCORE","prl_client_app",1,"readlink() err %i, path=\"%s\"",iVar1,param_1)
        ;
      }
    }
  }
  else {
    std::string::assign(param_2,(ulong)pcVar2);
    uVar5 = 1;
  }
  operator_delete(pcVar2);
  return uVar5;
}

