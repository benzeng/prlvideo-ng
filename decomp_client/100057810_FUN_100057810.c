
undefined1 FUN_100057810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  QArrayData *local_68;
  undefined1 local_60 [24];
  undefined **local_48 [2];
  undefined **local_38 [2];
  undefined1 local_21;
  
  FUN_10005ae70(local_38);
  local_38[0] = &PTR_FUN_10226c378;
  FUN_10005ae70(local_48);
  local_48[0] = &PTR_FUN_10226c338;
  FUN_10005bd60(local_60);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"Add path=\"%s\" to <persistent-others>",
                  local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000578c6;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_1000578c6:
  FUN_100059350(local_38,param_1,param_2);
  iVar1 = FUN_10005bfb0(local_60);
  if (iVar1 == 0) {
    iVar1 = FUN_10005c0c0(local_60,local_48);
    if (iVar1 == 0) {
      FUN_10005bc90(local_48,local_38);
      FUN_10005c150(local_60,local_48);
      uVar2 = 1;
      FUN_10005c060(local_60);
    }
    else if (DAT_10230ffd0 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to get persistent-others section from Dock defaults, err %i",iVar1);
    }
  }
  else if (DAT_10230ffd0 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_100df99c0("SGAC","prl_client_app",1,"Failed to read Dock defaults, err %i",iVar1);
  }
  FUN_10005be80(local_60);
  FUN_10005aeb0(local_48);
  FUN_10005aeb0(local_38);
  return uVar2;
}

