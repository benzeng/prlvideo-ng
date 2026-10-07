
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100430570(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = QThread::currentThread();
  if (lVar3 != param_1 + 0x28) {
    FUN_100431310(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x42f8) != -1) {
    if (param_2 <= *(int *)(param_1 + 0x42fc)) {
      return;
    }
    QObject::killTimer((int)param_1);
    *(undefined4 *)(param_1 + 0x42f8) = 0xffffffff;
  }
  if (0 < param_2) {
    *(int *)(param_1 + 0x42fc) = param_2;
    uVar1 = QObject::startTimer(param_1,param_2,1);
    *(undefined4 *)(param_1 + 0x42f8) = uVar1;
    return;
  }
  if ((DAT_1011bbea0 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1011bbea0), iVar2 != 0)) {
    _DAT_1011bbe98 = PTR_shared_null_100ba20d0;
    ___cxa_atexit(FUN_10002f530,&DAT_1011bbe98,0x100000000);
    ___cxa_guard_release(&DAT_1011bbea0);
  }
  FUN_100430650(param_1,&DAT_1011bbe98);
  return;
}

