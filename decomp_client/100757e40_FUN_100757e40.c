
bool FUN_100757e40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong local_28;
  
  uVar2 = FUN_100757f00();
  local_28 = 0;
  iVar1 = FUN_100d9d560(param_2,&local_28,0,0);
  if (iVar1 < 0) {
    uVar3 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","prl_client_app",0,"(!)Failed to get available space on disk. RC = %s [%.8X]",
                  uVar3,iVar1);
    bVar4 = true;
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Total size to backup = %lld MB",uVar2 >> 0x14);
    FUN_100df99c0("","prl_client_app",0,"Available disk space = %lld MB",local_28 >> 0x14);
    bVar4 = uVar2 < local_28;
  }
  return bVar4;
}

