
bool FUN_100991a90(long param_1)

{
  int iVar1;
  undefined8 in_RAX;
  uint local_14;
  
  local_14 = (uint)((ulong)in_RAX >> 0x20);
  iVar1 = (*DAT_102310bf0)(*(undefined8 *)(param_1 + 0x30),&local_14);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get migration type. error 0x%X");
  }
  return iVar1 >= 0 && (local_14 == 4 || local_14 == 1);
}

