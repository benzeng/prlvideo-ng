
undefined8 FUN_1000f1ca0(QString *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  QArrayData *local_450;
  QString local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(undefined1 *)&param_1[2].field0_0x0 = 0;
  local_38 = lVar1;
  lVar3 = _CFBundleGetMainBundle();
  if (lVar3 == 0) {
    uVar5 = 3;
    if (DAT_10230ffd0 < 1) goto LAB_1000f1e76;
    pcVar4 = "CFBundleGetMainBundle() err";
  }
  else {
    lVar3 = _CFBundleCopyBundleURL(lVar3);
    if (lVar3 != 0) {
      cVar2 = _CFURLGetFileSystemRepresentation(lVar3,1,local_438,0x400);
      if (cVar2 == '\0') {
        uVar5 = 3;
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",1,"CFURLGetFileSystemRepresentation() err");
        }
      }
      else {
        _strlen(local_438);
        QString::fromUtf8_helper((char *)&local_450,(int)local_438);
        QString::normalized(&local_448,&local_450,1,0);
        QString::operator=(param_1,&local_448);
        if (*(int *)local_448.field0_0x0 != -1) {
          if (*(int *)local_448.field0_0x0 != 0) {
            LOCK();
            *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
            local_439 = *(int *)local_448.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_439) goto LAB_1000f1d91;
          }
          QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
        }
LAB_1000f1d91:
        uVar5 = 0;
        if (*(int *)local_450 != -1) {
          if (*(int *)local_450 != 0) {
            LOCK();
            *(int *)local_450 = *(int *)local_450 + -1;
            local_439 = *(int *)local_450 != 0;
            UNLOCK();
            if ((bool)local_439) goto LAB_1000f1e6e;
          }
          QArrayData::deallocate(local_450,2,8);
        }
      }
LAB_1000f1e6e:
      _CFRelease(lVar3);
      goto LAB_1000f1e76;
    }
    uVar5 = 3;
    if (DAT_10230ffd0 < 1) goto LAB_1000f1e76;
    pcVar4 = "CFBundleCopyBundleURL() err";
  }
  uVar5 = 3;
  FUN_100df99c0("SGAC","prl_client_app",1,pcVar4);
LAB_1000f1e76:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

