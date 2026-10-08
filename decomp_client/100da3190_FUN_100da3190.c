
undefined1 FUN_100da3190(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [14];
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  QString::toUtf8();
  iVar3 = _FSPathMakeRef(local_a0 + *(long *)(local_a0 + 0x10),local_88,&local_8a);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_89 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100da3220;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100da3220:
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
    lVar4 = _CFURLCreateFromFSRef(uVar1,local_88);
    if (lVar4 != 0) {
      lVar5 = _CFURLCreateBookmarkData(uVar1,lVar4,0x400,0,0,local_98);
      if (lVar5 == 0) {
        if (0 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","cmn_utils",1,"Failed on create bookmark data for path=\"%s\"",
                        local_b8 + *(long *)(local_b8 + 0x10));
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_89 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_89) goto LAB_100da3665;
            }
            QArrayData::deallocate(local_b8,1,8);
            uVar8 = 0;
            goto LAB_100da3706;
          }
        }
LAB_100da3665:
        uVar8 = 0;
      }
      else {
        QString::toUtf8();
        lVar6 = _CFStringCreateWithCString(uVar1,local_c0 + *(long *)(local_c0 + 0x10),0x8000100);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_89 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_100da336b;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_100da336b:
        if (lVar6 == 0) {
          if (DAT_10230ffd0 < 1) {
            uVar8 = 0;
          }
          else {
            QString::toUtf8();
            FUN_100df99c0("","cmn_utils",1,"Failed on create dstRef for path=\"%s\"",
                          local_c8 + *(long *)(local_c8 + 0x10));
            if (*(int *)local_c8 == -1) {
              uVar8 = 0;
            }
            else {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_89 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_89) {
                  uVar8 = 0;
                  goto LAB_100da36fe;
                }
              }
              QArrayData::deallocate(local_c8,1,8);
              uVar8 = 0;
            }
          }
        }
        else {
          lVar7 = _CFURLCreateWithFileSystemPath(uVar1,lVar6,0,0);
          if (lVar7 == 0) {
            if (0 < DAT_10230ffd0) {
              QString::toUtf8();
              FUN_100df99c0("","cmn_utils",1,"Failed on create dstUrl for path=\"%s\"",
                            local_d0 + *(long *)(local_d0 + 0x10));
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_89 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_89) {
                    uVar8 = 0;
                    goto LAB_100da36f2;
                  }
                }
                QArrayData::deallocate(local_d0,1,8);
                uVar8 = 0;
                goto LAB_100da36f2;
              }
            }
            uVar8 = 0;
          }
          else {
            cVar2 = _CFURLWriteBookmarkDataToFile(lVar5,lVar7,0,local_98);
            uVar8 = 1;
            if (cVar2 == '\0') {
              if (0 < DAT_10230ffd0) {
                QString::toUtf8();
                FUN_100df99c0("","cmn_utils",1,"Failed on write bookmark data for path=\"%s\"",
                              local_d8 + *(long *)(local_d8 + 0x10));
                if (*(int *)local_d8 != -1) {
                  if (*(int *)local_d8 != 0) {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + -1;
                    local_89 = *(int *)local_d8 != 0;
                    UNLOCK();
                    if ((bool)local_89) goto LAB_100da3437;
                  }
                  QArrayData::deallocate(local_d8,1,8);
                }
              }
LAB_100da3437:
              uVar8 = 0;
            }
            _CFRelease(lVar7);
          }
LAB_100da36f2:
          _CFRelease(lVar6);
        }
LAB_100da36fe:
        _CFRelease(lVar5);
      }
LAB_100da3706:
      _CFRelease(lVar4);
      lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100da371c;
    }
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
      lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100da371c;
    }
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",1,"Failed on create srcUrl for path=\"%s\"",
                  local_b0 + *(long *)(local_b0 + 0x10));
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (*(int *)local_b0 != -1) {
      local_a8 = local_b0;
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        iVar3 = *(int *)local_b0;
        UNLOCK();
        goto joined_r0x000100da34bf;
      }
      goto LAB_100da34c8;
    }
  }
  else if (0 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",1,"FSPathMakeRef(srcPath=%s) failed with error %ld",
                  local_a8 + *(long *)(local_a8 + 0x10),(long)iVar3);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        iVar3 = *(int *)local_a8;
        UNLOCK();
joined_r0x000100da34bf:
        local_89 = iVar3 != 0;
        if ((bool)local_89) goto LAB_100da34d7;
      }
LAB_100da34c8:
      QArrayData::deallocate(local_a8,1,8);
    }
  }
LAB_100da34d7:
  uVar8 = 0;
LAB_100da371c:
  if (lVar4 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

