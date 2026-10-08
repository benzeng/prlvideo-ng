
QString * FUN_100da2bf0(QString *param_1,undefined8 param_2,char param_3,char param_4,
                       undefined1 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  long lVar10;
  long lVar11;
  QString local_4f0;
  QArrayData *local_4e8;
  undefined1 local_4e0 [4];
  ushort local_4dc;
  undefined1 local_449;
  QArrayData *local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::toUtf8();
  pQVar9 = local_4e8 + *(long *)(local_4e8 + 0x10);
  uVar4 = FUN_100da4d90(pQVar9,local_438);
  if (uVar4 < 0x400) {
    iVar3 = _strcmp((char *)pQVar9,local_438);
    if ((((iVar3 == 0) || (iVar3 = _lstat_INODE64(pQVar9,local_4e0), iVar3 != 0)) ||
        ((local_4dc & 0xf000) != 0xa000)) || (param_3 != '\0')) {
      lVar5 = _CFURLCreateFromFileSystemRepresentation(0,local_438,uVar4,0);
      _CFRetain();
      uVar8 = 0x300;
      if (param_4 == '\0') {
        uVar8 = 0;
      }
      lVar11 = 0;
      lVar10 = lVar5;
      do {
        lVar6 = _CFURLCreateBookmarkDataFromFile(0,lVar10,0);
        lVar7 = lVar10;
        if (lVar6 == 0) break;
        lVar7 = _CFURLCreateByResolvingBookmarkData(0,lVar6,uVar8,0,0,&local_449,0);
        if (lVar10 != 0) {
          _CFRelease(lVar10);
        }
        bVar1 = true;
        if (param_3 != '\0') {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if (lVar11 == 0) {
            bVar1 = false;
            _CFRetain(lVar7);
            lVar11 = lVar7;
          }
          else {
            cVar2 = _CFEqual(lVar11,lVar7);
            if (cVar2 == '\0') {
              bVar1 = false;
            }
            else {
              _CFRelease(lVar7);
              lVar7 = 0;
            }
          }
        }
        _CFRelease();
        lVar10 = lVar7;
      } while (!bVar1);
      if (lVar11 != 0) {
        _CFRelease(lVar11);
      }
      if (lVar5 != 0) {
        _CFRelease();
      }
      if (lVar7 == 0) {
        bVar1 = false;
      }
      else {
        cVar2 = _CFURLGetFileSystemRepresentation(lVar7,1,local_438,0x400);
        if ((cVar2 != '\0') && (uVar4 = FUN_100da4d90(local_438,local_438), uVar4 < 0x400)) {
          _CFRelease(lVar7);
          goto LAB_100da2e4a;
        }
        _CFRelease(lVar7);
        bVar1 = false;
      }
    }
    else {
LAB_100da2e4a:
      bVar1 = true;
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
    }
  }
  else {
    bVar1 = false;
  }
  if (*(int *)local_4e8 != -1) {
    if (*(int *)local_4e8 != 0) {
      LOCK();
      *(int *)local_4e8 = *(int *)local_4e8 + -1;
      local_439 = *(int *)local_4e8 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100da2e97;
    }
    QArrayData::deallocate(local_4e8,1,8);
  }
LAB_100da2e97:
  if (!bVar1) goto LAB_100da2f51;
  QByteArray::QByteArray((QByteArray *)&local_448,local_438,-1);
  FUN_1000551a0(&local_4f0,&local_448);
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_439 = *(int *)local_448 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100da2f06;
    }
    QArrayData::deallocate(local_448,1,8);
  }
LAB_100da2f06:
  QString::operator=(param_1,&local_4f0);
  if (*(int *)local_4f0.field0_0x0 != -1) {
    if (*(int *)local_4f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + -1;
      local_439 = *(int *)local_4f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100da2f51;
    }
    QArrayData::deallocate((QArrayData *)local_4f0.field0_0x0,2,8);
  }
LAB_100da2f51:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

