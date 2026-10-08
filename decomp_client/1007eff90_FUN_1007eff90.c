
void FUN_1007eff90(QObject *param_1)

{
  int iVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1022300f0;
  iVar1 = (*DAT_1023119d0)(FUN_1007f00e0,0x2f9,0);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGSRemoveNotifyProc error = %d i =%d\n",iVar1,0);
  }
  iVar1 = (*DAT_1023119d0)(FUN_1007f00e0,0x2fa,0);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGSRemoveNotifyProc error = %d i =%d\n",iVar1,1);
  }
  iVar1 = (*DAT_1023119d0)(FUN_1007f00e0,0x2fc,0);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGSRemoveNotifyProc error = %d i =%d\n",iVar1,3);
  }
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x18));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}

