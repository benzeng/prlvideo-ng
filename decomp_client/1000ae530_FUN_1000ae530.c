
undefined8 * FUN_1000ae530(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  QFileInfo local_4a8 [8];
  QArrayData *local_4a0;
  QString local_498;
  undefined1 local_489;
  char local_488 [1032];
  undefined1 local_80 [80];
  long local_30;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar3;
  iVar5 = _GetProcessBundleLocation(param_2,local_80);
  if (iVar5 == 0) {
    iVar5 = _FSRefMakePath(local_80,local_488,0x400);
    if (iVar5 == 0) {
      _strlen(local_488);
      QString::fromUtf8_helper((char *)&local_4a0,(int)local_488);
      QString::normalized(&local_498,&local_4a0,1,0);
      if (*(int *)local_4a0 != -1) {
        if (*(int *)local_4a0 != 0) {
          LOCK();
          *(int *)local_4a0 = *(int *)local_4a0 + -1;
          local_489 = *(int *)local_4a0 != 0;
          UNLOCK();
          if ((bool)local_489) goto LAB_1000ae673;
        }
        QArrayData::deallocate(local_4a0,2,8);
      }
LAB_1000ae673:
      QFileInfo::QFileInfo(local_4a8,&local_498);
      cVar4 = QFileInfo::isBundle();
      QFileInfo::~QFileInfo(local_4a8);
      if (cVar4 == '\0') {
        *param_1 = PTR_shared_null_1021e1288;
      }
      else {
        *param_1 = local_498.field0_0x0;
        if (1 < *(int *)local_498.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_498.field0_0x0 = *(int *)local_498.field0_0x0 + 1;
          local_489 = *(int *)local_498.field0_0x0 != 0;
          UNLOCK();
        }
      }
      if (*(int *)local_498.field0_0x0 != -1) {
        if (*(int *)local_498.field0_0x0 != 0) {
          LOCK();
          *(int *)local_498.field0_0x0 = *(int *)local_498.field0_0x0 + -1;
          local_489 = *(int *)local_498.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_489) goto LAB_1000ae5e1;
        }
        QArrayData::deallocate((QArrayData *)local_498.field0_0x0,2,8);
      }
      goto LAB_1000ae5e1;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pcVar6 = "Error: FSRefMakePath() failed for psn={%u, %u}";
    uVar7 = 0;
LAB_1000ae5d0:
    FUN_100df99c0("SGAC","prl_client_app",uVar7,pcVar6,uVar1,uVar2);
  }
  else if (1 < DAT_10230ffd0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pcVar6 = "Error: GetProcessBundleLocation(psn={%u, %u}) failed";
    uVar7 = 2;
    goto LAB_1000ae5d0;
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_1000ae5e1:
  if (lVar3 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

