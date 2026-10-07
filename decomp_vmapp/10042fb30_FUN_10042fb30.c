
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042fb30(long param_1,undefined8 param_2,QString *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  QMutex::lock();
  QString::operator=((QString *)(param_1 + 0x42b0),param_3);
  *(undefined8 *)(param_1 + 0x42b8) = param_4;
  *(undefined8 *)(param_1 + 0x42c0) = param_5;
  *(undefined8 *)(param_1 + 0x42c8) = param_6;
  *(undefined8 *)(param_1 + 0x42d0) = param_7;
  FUN_100432ba0(param_1,param_2);
  QMutex::unlock();
  if (DAT_1011bbe50 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbe50);
    if (iVar1 != 0) {
      _DAT_1011bbe48 = PTR_shared_null_100ba20d0;
      ___cxa_atexit(FUN_10002f530,&DAT_1011bbe48,0x100000000);
      ___cxa_guard_release(&DAT_1011bbe50);
    }
  }
  FUN_10042fc70(param_1,&DAT_1011bbe48,param_3,param_4,param_5,param_6,param_7);
  return;
}

