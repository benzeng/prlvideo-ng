
void FUN_1007f00e0(int param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_100df99c0("","prl_client_app",0,"handleInputSourceShortcutChanged. Type = %d",param_1);
  if (((1 < param_1 - 0x2f9U) || (param_3 < 4)) || ((*param_2 & 0xfffffffe) == 0x3c)) {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    iVar4 = (*DAT_102311c30)(0x3c,&local_2c,&local_30,&local_34);
    if (iVar4 == 0) {
      if (DAT_102310a18 == (void *)0x0) {
        pvVar5 = operator_new(0x20);
        FUN_1007eff10(pvVar5);
        DAT_10226c4da = 1;
        DAT_102310a18 = pvVar5;
      }
      uVar2 = local_30;
      uVar1 = local_34;
      pvVar5 = DAT_102310a18;
      uVar3 = (*DAT_102311c38)(0x3c);
      FUN_1007f02f0(pvVar5,uVar2,uVar1,0,uVar3);
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"CGSGetSymbolicHotKeyValue err = %d",iVar4);
    }
    iVar4 = (*DAT_102311c30)(0x3d,&local_2c,&local_30,&local_34);
    if (iVar4 == 0) {
      if (DAT_102310a18 == (void *)0x0) {
        pvVar5 = operator_new(0x20);
        FUN_1007eff10(pvVar5);
        DAT_10226c4da = 1;
        DAT_102310a18 = pvVar5;
      }
      uVar2 = local_30;
      uVar1 = local_34;
      pvVar5 = DAT_102310a18;
      uVar3 = (*DAT_102311c38)(0x3d);
      FUN_1007f02f0(pvVar5,uVar2,uVar1,1,uVar3);
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"CGSGetSymbolicHotKeyValue err = %d",iVar4);
    }
  }
  return;
}

