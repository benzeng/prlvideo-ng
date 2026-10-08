
undefined8 FUN_1000d8780(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_98 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::toUtf8();
  iVar2 = _FSPathMakeRef(local_a0 + *(long *)(local_a0 + 0x10),local_88,0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_89 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1000d881f;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_1000d881f:
  if (iVar2 == 0) {
    cVar1 = FUN_1000ad140(local_88);
    puVar4 = (undefined *)0x0;
    if (cVar1 == '\0') {
      uVar5 = 5;
      lVar3 = 0;
    }
    else {
      QMutex::lock();
      lVar3 = DAT_1023108a8;
      if (DAT_1023108a8 != 0) {
        DAT_1023108b0 = DAT_1023108b0 + 1;
      }
      QMutex::unlock();
      puVar4 = (undefined *)0x0;
      if (lVar3 != 0) {
        QMutex::lock();
        lVar3 = DAT_1023108a8;
        if (DAT_1023108a8 != 0) {
          DAT_1023108b0 = DAT_1023108b0 + 1;
        }
        QMutex::unlock();
        FUN_100055290(&DAT_102310898);
        puVar4 = &DAT_102310898;
        if (lVar3 != 0) {
          cVar1 = FUN_1000ad670(lVar3,local_88,&local_98);
          if ((cVar1 == '\0') && (*(int *)(local_98 + 4) == 0)) {
            uVar5 = 3;
          }
          else {
            uVar5 = 0;
          }
          puVar4 = &DAT_102310898;
          goto LAB_1000d8a4b;
        }
      }
      uVar5 = 3;
      lVar3 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get CSharedAppsDsp instance");
    }
  }
  else {
    uVar5 = 5;
    lVar3 = 0;
    if (DAT_10230ffd0 < 1) {
      puVar4 = (undefined *)0x0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,
                    local_a8 + *(long *)(local_a8 + 0x10));
      lVar3 = 0;
      if (*(int *)local_a8 == -1) {
        puVar4 = (undefined *)0x0;
      }
      else {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_89 = *(int *)local_a8 != 0;
          UNLOCK();
          lVar3 = 0;
          if ((bool)local_89) {
            puVar4 = (undefined *)0x0;
            goto LAB_1000d8a4b;
          }
        }
        lVar3 = 0;
        QArrayData::deallocate(local_a8,1,8);
        puVar4 = (undefined *)0x0;
      }
    }
  }
LAB_1000d8a4b:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_89 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1000d8a87;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000d8a87:
  if (lVar3 != 0) {
    FUN_100055290(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

