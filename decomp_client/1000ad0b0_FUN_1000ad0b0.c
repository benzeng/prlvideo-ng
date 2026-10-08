
undefined8 FUN_1000ad0b0(void)

{
  short sVar1;
  undefined8 uVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  sVar1 = _GetCurrentProcess(&local_10);
  if (sVar1 == 0) {
    sVar1 = _GetFrontProcess(&local_18);
    if (sVar1 == 0) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,"psn_self={%u, %u}, psn_front={%u, %u}",local_10,
                      local_c,local_18,local_14);
      }
      if ((local_c != local_14) ||
         (uVar2 = CONCAT71((uint7)(uint3)((uint)local_c >> 8),1), local_10 != local_18)) {
        uVar2 = FUN_1000a9930(&local_18);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

