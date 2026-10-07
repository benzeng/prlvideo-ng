
undefined1
FUN_10075ee40(char *param_1,undefined4 param_2,long param_3,undefined8 param_4,void *param_5,
             uint param_6,undefined8 param_7)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 auStack_40038 [4096];
  undefined1 auStack_3f038 [4096];
  undefined1 auStack_3e038 [253960];
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_6 < 0x40000) {
    uVar6 = (ulong)param_6;
    _memcpy(auStack_40038,param_5,uVar6);
    ___bzero(auStack_40038 + uVar6,0x40000 - uVar6);
    DAT_1011bf990 = 0;
    if (*(short *)(param_3 + 0x220) == 0x20) {
      cVar2 = FUN_10075ab50(param_2,param_3,param_4,param_7,0xc7c,auStack_3f038,0x3f000);
    }
    else {
      cVar2 = FUN_10075d300(param_2,param_3,param_4,param_7,0xc7c,auStack_3e038,0x3e000);
    }
    lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    *(undefined8 *)((long)param_5 + 4000) = 0x40000;
    if (cVar2 == '\0') {
      uVar5 = 0;
    }
    else {
      lVar3 = QIODevice::write(param_1,(longlong)auStack_40038);
      uVar5 = 1;
      if (lVar3 != 0x40000) {
        uVar5 = 0;
        FUN_1008e3970("","dbgdump",0,"can\'t write out windbg mini dump file");
      }
    }
  }
  else {
    uVar5 = 0;
    lVar4 = lVar1;
  }
  if (lVar4 == lVar1) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

