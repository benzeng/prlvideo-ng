
void FUN_1002423a0(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 < param_2) {
      *(int *)(param_1 + 0x58) = param_2;
      lVar2 = *(long *)(param_1 + 0x50);
      if (-1 < *(int *)(lVar2 + 0x10)) {
        QTimer::stop();
        lVar2 = *(long *)(param_1 + 0x50);
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      QTimer::start((int)lVar2);
      iVar1 = *(int *)(param_1 + 0x58);
    }
    FUN_100815b40(param_1,iVar1,param_3);
    return;
  }
  return;
}

