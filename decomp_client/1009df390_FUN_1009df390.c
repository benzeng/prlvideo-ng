
void FUN_1009df390(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = _SecKeychainAddGenericPassword
                    (0,0xf,PTR_s_ParallelsServer_10227e408,*(undefined4 *)(param_1 + 8),
                     *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                     *(undefined8 *)(param_1 + 0x18),0);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 < -0x62d3) {
    if (iVar1 == -0x62db) {
      pcVar2 = "(!)Error: No default keychain could be found.";
    }
    else {
      if (iVar1 != -0x62d6) goto LAB_1009df454;
      pcVar2 = "(!)Error: Tried to add more data than is possible for KeyChain.";
    }
  }
  else {
    if (iVar1 != -0x62d3) {
      if (iVar1 == 0) {
        return;
      }
LAB_1009df454:
      FUN_100df99c0("","PasswordEncryption",0,
                    "(!)Error: Can\'t add password entry to keychan with result code = %d.");
      return;
    }
    pcVar2 = "(!)Error: Tried to add a password that already exists in the keychain.";
  }
  FUN_100df99c0("","PasswordEncryption",0,pcVar2);
  return;
}

