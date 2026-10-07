
/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_1002afc80(long param_1,long param_2,int param_3,int param_4,undefined4 param_5,
             undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  int local_3c;
  int local_38 [2];
  
  lVar1 = DAT_1011c4a88;
  uVar2 = (*DAT_1011ccc38)();
  local_38[1] = 0;
  local_38[0] = 0;
  local_3c = 0;
  (*DAT_1011ccd30)(param_2,local_38 + 1,&local_3c,local_38);
  if ((local_3c != param_3) || (local_38[0] != param_4)) {
    _CGLClearDrawable(param_2);
    _CGLUpdateContext(param_2);
    iVar3 = (*DAT_1011ccd28)(param_2,uVar2,param_3,param_4);
    if (iVar3 != 0) {
      return 0;
    }
  }
  _CGLGetVirtualScreen(*(undefined8 *)(param_1 + 0x868),&local_40);
  _CGLSetVirtualScreen(param_2,local_40);
  _CGLUpdateContext(param_2);
  if (DAT_1011c4a88 != param_2) {
    DAT_1011c4a88 = param_2;
    _CGLSetCurrentContext(param_2);
  }
  (*DAT_1011c72d0)(0,0,param_5,param_6);
  if (DAT_1011c4a88 != lVar1) {
    DAT_1011c4a88 = lVar1;
    _CGLSetCurrentContext();
  }
  return 1;
}

