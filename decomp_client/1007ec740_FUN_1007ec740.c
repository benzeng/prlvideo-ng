
void FUN_1007ec740(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_100867e00(*(undefined8 *)(param_1 + 0x10),0);
  }
  uVar1 = FUN_100152280();
  lVar2 = FUN_100152a20(uVar1,param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = CAntivirusInfo::installedAntivirus(0);
    FUN_1007ec650(param_1,uVar1,0);
    return;
  }
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x18);
  if (lVar2 != 0) {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
  return;
}

