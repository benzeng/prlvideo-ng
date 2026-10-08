
undefined8 FUN_10028b4e0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    uVar3 = 0x80000009;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Invalid server instance is null.");
    }
  }
  else {
    cVar1 = FUN_10061c2b0(*(undefined8 *)(param_1 + 0x18),0xa010);
    uVar3 = 0;
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_client_app",0,
                    "Trying to validate not KA filebased and not Temporary license.");
      uVar3 = 0x80000009;
    }
  }
  return uVar3;
}

