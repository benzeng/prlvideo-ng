
/* WARNING: Type propagation algorithm not settling */

void FUN_100778a40(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  off_t oVar8;
  ssize_t sVar9;
  long lVar10;
  int iVar11;
  undefined1 local_961;
  QArrayData *local_960;
  QString local_958;
  QString local_950;
  QArrayData *local_948;
  long local_940 [2];
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  QArrayData *local_918;
  undefined1 local_909;
  timeval local_908;
  timeval local_8f8;
  undefined8 local_8e0;
  int local_8d8;
  uint local_8d0 [4];
  long local_8c0;
  char local_888 [2096];
  char *local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_8d8 = -1;
  local_8e0 = -1;
  local_58[0] = (char *)0x0;
  local_58[1] = (char *)0x0;
  local_58[2] = (char *)0x0;
  lVar10 = 0;
  do {
    local_958.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
    if (1 < *(int *)local_958.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_958.field0_0x0 = *(int *)local_958.field0_0x0 + 1;
      local_909 = *(int *)local_958.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_918,0xaf3db6);
    QString::append(&local_958);
    if (*(int *)local_918 != -1) {
      if (*(int *)local_918 != 0) {
        LOCK();
        *(int *)local_918 = *(int *)local_918 + -1;
        local_909 = *(int *)local_918 != 0;
        UNLOCK();
        if ((bool)local_909) goto LAB_100778b34;
      }
      QArrayData::deallocate(local_918,2,8);
    }
LAB_100778b34:
    QString::number((int)&local_960,(int)lVar10);
    local_950.field0_0x0 = local_958.field0_0x0;
    if (1 < *(int *)local_958.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_958.field0_0x0 = *(int *)local_958.field0_0x0 + 1;
      local_909 = *(int *)local_958.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_950);
    QString::toUtf8();
    if ((1 < *(uint *)local_948) || (*(long *)(local_948 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_948,*(uint *)(local_948 + 4) + 1,*(uint *)(local_948 + 8) >> 0x1f);
    }
    pcVar7 = _strdup((char *)(local_948 + *(long *)(local_948 + 0x10)));
    local_58[lVar10] = pcVar7;
    if (*(int *)local_948 != -1) {
      if (*(int *)local_948 != 0) {
        LOCK();
        *(int *)local_948 = *(int *)local_948 + -1;
        local_909 = *(int *)local_948 != 0;
        UNLOCK();
        if ((bool)local_909) goto LAB_100778bfd;
      }
      QArrayData::deallocate(local_948,1,8);
    }
LAB_100778bfd:
    if (*(int *)local_950.field0_0x0 != -1) {
      if (*(int *)local_950.field0_0x0 != 0) {
        LOCK();
        *(int *)local_950.field0_0x0 = *(int *)local_950.field0_0x0 + -1;
        local_909 = *(int *)local_950.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_909) goto LAB_100778c39;
      }
      QArrayData::deallocate((QArrayData *)local_950.field0_0x0,2,8);
    }
LAB_100778c39:
    if (*(int *)local_960 != -1) {
      if (*(int *)local_960 != 0) {
        LOCK();
        *(int *)local_960 = *(int *)local_960 + -1;
        local_909 = *(int *)local_960 != 0;
        UNLOCK();
        if ((bool)local_909) goto LAB_100778c75;
      }
      QArrayData::deallocate(local_960,2,8);
    }
LAB_100778c75:
    if (*(int *)local_958.field0_0x0 != -1) {
      if (*(int *)local_958.field0_0x0 != 0) {
        LOCK();
        *(int *)local_958.field0_0x0 = *(int *)local_958.field0_0x0 + -1;
        local_909 = *(int *)local_958.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_909) goto LAB_100778cb1;
      }
      QArrayData::deallocate((QArrayData *)local_958.field0_0x0,2,8);
    }
LAB_100778cb1:
    pcVar2 = local_58[0];
    if (pcVar7 == (char *)0x0) goto LAB_100778f78;
    lVar10 = lVar10 + 1;
  } while (lVar10 < 3);
  local_940[1] = 0;
  uStack_930 = 0;
  uStack_92c = 0;
  uStack_928 = 0;
  iVar3 = _open(local_58[0],0xa02);
  local_8e0 = CONCAT44(local_8e0._4_4_,iVar3);
  if (-1 < iVar3) {
    iVar4 = _statfs_INODE64(pcVar2,local_8d0);
    if ((iVar4 == 0) && (iVar4 = _strcmp("hfs",local_888), iVar4 == 0)) {
      local_8c0 = (ulong)local_8d0[0] * local_8c0;
      local_940[0] = local_8c0 / 0x1e;
      if (local_8c0 < 0x3c0000000) {
        local_940[0] = 0x20000000;
      }
      else if (0x258000001d < local_8c0) {
        local_940[0] = 0x140000000;
      }
      iVar3 = (int)(local_8c0 / local_940[0]) + 1;
      _gettimeofday(&local_908,(void *)0x0);
      if (1 < iVar3) {
        lVar10 = -1;
        iVar4 = 1;
        do {
          iVar11 = iVar4 + 1;
          iVar5 = _open(local_58[iVar4 % 3],0xa02);
          *(int *)((long)&local_8e0 + (long)(iVar4 % 3) * 4) = iVar5;
          if ((((((iVar5 < 0) || (iVar6 = _fcntl(iVar5,0x2b,local_940), iVar6 != 0)) ||
                (oVar8 = _lseek(iVar5,local_940[0] + -1,0), oVar8 < 0)) ||
               ((sVar9 = _write(iVar5,&local_961,1), sVar9 != 1 ||
                (oVar8 = _lseek(iVar5,0,0), oVar8 < 0)))) ||
              ((iVar6 = _fsync(iVar5), iVar6 != 0 ||
               (iVar5 = _fcntl(iVar5,0x31,local_940 + 1), iVar5 != 0)))) ||
             (((lVar1 = CONCAT44(uStack_928,uStack_92c), lVar10 != -1 && (lVar1 <= lVar10)) ||
              (_gettimeofday(&local_8f8,(void *)0x0), local_908.tv_sec + 0x14 < local_8f8.tv_sec))))
          break;
          lVar10 = (long)(iVar4 + 1 + (iVar11 / 3) * -3);
          iVar4 = *(int *)((long)&local_8e0 + lVar10 * 4);
          if (iVar4 != 0) {
            _close(iVar4);
            *(undefined4 *)((long)&local_8e0 + lVar10 * 4) = 0xffffffff;
          }
          _unlink(local_58[lVar10]);
          lVar10 = lVar1;
          iVar4 = iVar11;
        } while (iVar11 < iVar3);
      }
      iVar3 = (int)local_8e0;
      if ((int)local_8e0 < 0) goto LAB_100778f78;
    }
    _close(iVar3);
  }
LAB_100778f78:
  pcVar7 = local_58[0];
  if (local_58[0] != (char *)0x0) {
    if (-1 < (int)local_8e0) {
      _unlink(local_58[0]);
    }
    _free(pcVar7);
  }
  lVar10 = local_8e0;
  if (-1 < local_8e0) {
    _close(local_8e0._4_4_);
  }
  pcVar7 = local_58[1];
  if (local_58[1] != (char *)0x0) {
    if (-1 < lVar10) {
      _unlink(local_58[1]);
    }
    _free(pcVar7);
  }
  iVar3 = local_8d8;
  if (-1 < local_8d8) {
    _close(local_8d8);
  }
  pcVar7 = local_58[2];
  if (local_58[2] != (char *)0x0) {
    if (-1 < iVar3) {
      _unlink(local_58[2]);
    }
    _free(pcVar7);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

