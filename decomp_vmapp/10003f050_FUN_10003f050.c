
void FUN_10003f050(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  QArrayData *local_b0;
  undefined **local_a8;
  long local_a0;
  QArrayData *local_98;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  FUN_10003f670(&local_98,param_2,local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_89 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_10003f0c2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10003f0c2:
  FUN_10003fbb0(&local_a8,local_88);
  local_b0 = (QArrayData *)QString::fromAscii_helper("CFBundleDocumentTypes",0x15);
  FUN_100040f00(local_a0,&local_b0);
  FUN_100040ba0();
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_89 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_10003f147;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10003f147:
  local_a8 = &PTR_FUN_100bef2a8;
  if (local_a0 != 0) {
    _CFRelease(local_a0);
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

