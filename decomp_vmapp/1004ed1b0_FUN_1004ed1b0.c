
void FUN_1004ed1b0(long param_1)

{
  int kq;
  int iVar1;
  QArrayData *pQVar2;
  long lVar3;
  QArrayData *local_88;
  undefined1 local_79;
  kevent local_78;
  long local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  kq = _kqueue();
  if (kq < 0) goto LAB_1004ed361;
  local_88 = (QArrayData *)QString::fromAscii_helper("/Volumes",8);
  FUN_1004ec530(param_1,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_79 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1004ed234;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004ed234:
  local_78.ident = 0;
  local_78.filter = -9;
  local_78.flags = 1;
  local_78.udata._4_4_ = 0;
  local_78._20_8_ = 0;
  local_78._12_8_ = 0;
  local_58 = (long)*(int *)(param_1 + 0x10);
  local_50 = 0xffff;
  local_4e = 5;
  local_3c = 0;
  local_44 = 0;
  local_4c = 0;
  iVar1 = _kevent(kq,&local_78,2,(kevent *)0x0,0,(timespec *)0x0);
  if (-1 < iVar1) {
    do {
      iVar1 = _kevent(kq,(kevent *)0x0,0,&local_78,2,(timespec *)0x0);
      if (iVar1 < 0) break;
      if ((0 < iVar1) && ((local_78._12_8_ & 0x18) != 0)) {
        pQVar2 = (QArrayData *)QString::fromAscii_helper("/Volumes",8);
        FUN_1004ec530(param_1);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_79 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1004ed340;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
      }
LAB_1004ed340:
    } while (*(char *)(param_1 + 0x18) != '\0');
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (-1 < kq) {
      _close(kq);
    }
  }
LAB_1004ed361:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

