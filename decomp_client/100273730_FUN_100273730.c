
void FUN_100273730(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = FUN_100078040();
  bVar1 = FUN_10007a7b0(uVar2);
  bVar1 = bVar1 | *(byte *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x38) = bVar1;
  if (2 < DAT_10230ffd0) {
    pcVar3 = "NO";
    if (bVar1 != 0) {
      pcVar3 = "YES";
    }
    FUN_100df99c0("","prl_client_app",3,"Resume is finished. Windows resumed: %s",pcVar3);
  }
  uVar2 = FUN_100370280();
  FUN_1003744d0(uVar2);
  return;
}

