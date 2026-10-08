
void FUN_1009df480(long param_1)

{
  int iVar1;
  
  iVar1 = _SecKeychainFindGenericPassword
                    (0,0xf,PTR_s_ParallelsServer_10227e408,*(undefined4 *)(param_1 + 8),
                     *(undefined8 *)(param_1 + 0x10),param_1 + 0x20,param_1 + 0x18,param_1);
  *(int *)(param_1 + 0x24) = iVar1;
  if ((iVar1 != -0x62d4) && (iVar1 != 0)) {
    FUN_100df99c0("","PasswordEncryption",0,
                  "(!)Error: Can\'t find password entry in keychan. Result code = %d.");
    return;
  }
  return;
}

