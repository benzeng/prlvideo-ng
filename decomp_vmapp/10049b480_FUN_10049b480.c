
void FUN_10049b480(undefined8 *param_1,undefined8 param_2)

{
  QMutex *this;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_100bc2368;
  param_1[2] = param_2;
  param_1[3] = PTR_shared_null_100ba20d0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 4));
  this = operator_new(8);
  QMutex::QMutex(this,0);
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    QMutex::~QMutex(this);
    operator_delete(this);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = this;
    *puVar1 = &PTR_FUN_10111c8d8;
  }
  param_1[5] = puVar1;
  param_1[6] = 0;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR_CocoaProcessWatcher_100bedbb0,PTR_s_alloc_100bed228);
  lVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar2,PTR_s_initNotifications__100bed728,param_1);
  param_1[1] = lVar3;
  if (lVar3 == 0) {
    FUN_1008e3970("PROCMON","prl_sharedapps",0,"Unable to create process watcher");
  }
  else if (3 < DAT_1011b55f8) {
    FUN_1008e3970("PROCMON","prl_sharedapps",4,"Starting process monitor");
  }
  return;
}

