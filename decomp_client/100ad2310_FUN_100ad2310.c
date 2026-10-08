
void FUN_100ad2310(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  iVar1 = FUN_100ae6090(param_1 + 0x990);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      auVar3 = FUN_100ae60d0(param_1 + 0x990,iVar2);
      local_48 = 0;
      local_44 = 0;
      local_40 = (auVar3._8_4_ + 1) - auVar3._0_4_;
      local_3c = (auVar3._12_4_ + 1) - auVar3._4_4_;
      local_38 = iVar2;
      _PrlDevSecondaryDisplay_SendCaptureScreenRequest(*(undefined8 *)(param_1 + 0xf0),&local_48);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}

