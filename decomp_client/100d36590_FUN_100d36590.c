
undefined1 FUN_100d36590(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  short sVar2;
  char *pcVar3;
  undefined1 uVar4;
  QArrayData *local_4a0;
  QString local_498;
  undefined1 local_489;
  char local_488 [1032];
  undefined1 local_80 [80];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  sVar2 = _FSFindFolder(param_1,param_2,0,local_80);
  if (sVar2 == 0) {
    ___bzero(local_488,0x400);
    sVar2 = _FSRefMakePath(local_80,local_488,0x400);
    if (sVar2 == 0) {
      _strlen(local_488);
      QString::fromUtf8_helper((char *)&local_4a0,(int)local_488);
      QString::normalized(&local_498,&local_4a0,1,0);
      QString::operator=(param_3,&local_498);
      if (*(int *)local_498.field0_0x0 != -1) {
        if (*(int *)local_498.field0_0x0 != 0) {
          LOCK();
          *(int *)local_498.field0_0x0 = *(int *)local_498.field0_0x0 + -1;
          local_489 = *(int *)local_498.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_489) goto LAB_100d366cd;
        }
        QArrayData::deallocate((QArrayData *)local_498.field0_0x0,2,8);
      }
LAB_100d366cd:
      uVar4 = 1;
      if (*(int *)local_4a0 != -1) {
        if (*(int *)local_4a0 != 0) {
          LOCK();
          *(int *)local_4a0 = *(int *)local_4a0 + -1;
          local_489 = *(int *)local_4a0 != 0;
          UNLOCK();
          if ((bool)local_489) goto LAB_100d3662d;
        }
        QArrayData::deallocate(local_4a0,2,8);
      }
      goto LAB_100d3662d;
    }
    pcVar3 = " Can\'t FSRefMakePath by error %d";
  }
  else {
    pcVar3 = " Can\'t get profile by error %d";
  }
  uVar4 = 0;
  FUN_100df99c0("","VIUtils",0,pcVar3,(int)sVar2);
LAB_100d3662d:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

