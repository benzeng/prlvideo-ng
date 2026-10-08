
void FUN_100108220(undefined8 param_1,long param_2,QString *param_3)

{
  long lVar1;
  int iVar2;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (*(int *)(param_2 + 0x10) != 2) {
    if (*(int *)(param_2 + 0x10) == 1) {
      MacUtils::showInFinder(param_3);
      return;
    }
    goto LAB_1001083e8;
  }
  QString::toUtf8();
  iVar2 = _FSPathMakeRef(local_88 + *(long *)(local_88 + 0x10),local_78,0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) goto LAB_10010829c;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_10010829c:
  if (iVar2 == 0) {
    iVar2 = _LSOpenFSRef(local_78,0);
    if ((iVar2 == 0) || (DAT_10230ffd0 < 1)) goto LAB_1001083e8;
    QString::toUtf8();
    FUN_100df99c0("GSHEXT","prl_client_app",1,
                  "Warning: LSOpenFSRef() failed with error %i, path=\"%s\"",iVar2,
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 == -1) goto LAB_1001083e8;
    local_90 = local_98;
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      iVar2 = *(int *)local_98;
      UNLOCK();
      goto joined_r0x0001001083d0;
    }
  }
  else {
    if (DAT_10230ffd0 < 1) goto LAB_1001083e8;
    QString::toUtf8();
    FUN_100df99c0("GSHEXT","prl_client_app",1,
                  "Warning: FSPathMakeRef() failed with error %i, path=\"%s\"",iVar2,
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 == -1) goto LAB_1001083e8;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      iVar2 = *(int *)local_90;
      UNLOCK();
joined_r0x0001001083d0:
      if (iVar2 != 0) goto LAB_1001083e8;
    }
  }
  QArrayData::deallocate(local_90,1,8);
LAB_1001083e8:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

