
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010dd40(undefined8 param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  cVar1 = QThread::isRunning();
  if (cVar1 == '\0') {
    if (lVar3 == local_38) {
      FUN_1008e3970("","vm",0,"AddTimer: no runloop object created");
      return;
    }
  }
  else {
    local_48 = param_2;
    local_40 = param_3;
    uVar2 = _CFArrayCreate(0,&local_48,2,0);
    local_70 = 0;
    local_60 = PTR__CFRetain_100ba2048;
    local_58 = PTR__CFRelease_100ba2040;
    local_50 = 0;
    local_68 = uVar2;
    dVar4 = (double)_CFAbsoluteTimeGetCurrent();
    auVar5._8_4_ = (int)((ulong)param_1 >> 0x20);
    auVar5._0_8_ = param_1;
    auVar5._12_4_ = _UNK_100b2e9f4;
    lVar3 = _CFRunLoopTimerCreate
                      (dVar4 + (((double)CONCAT44(_DAT_100b2e9f0,(int)param_1) - _DAT_100b2ea00) +
                               (auVar5._8_8_ - _UNK_100b2ea08)) / _DAT_100b2ea10,0,0,0,FUN_10010dea0
                       ,&local_70);
    _CFRelease(uVar2);
    if (lVar3 == 0) {
      (*param_2)(param_3);
    }
    else {
      uVar2 = FUN_1007123b0();
      _CFRunLoopAddTimer(uVar2,lVar3,*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
      _CFRelease(lVar3);
    }
    if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

