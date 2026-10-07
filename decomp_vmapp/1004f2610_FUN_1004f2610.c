
undefined1 FUN_1004f2610(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  undefined1 uVar6;
  QArrayData *pQVar7;
  bool bVar8;
  QArrayData *local_458;
  QArrayData *local_450;
  QString local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  QString::toUtf8_helper(&local_448);
  pQVar7 = (QArrayData *)(local_448.field0_0x0 + *(long *)(local_448.field0_0x0 + 0x10));
  lVar3 = _opendir_INODE64(pQVar7);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    _strcpy(local_438,(char *)pQVar7);
    sVar4 = _strlen(local_438);
    local_438[sVar4] = '/';
LAB_1004f26c0:
    lVar5 = _readdir_INODE64(lVar3);
    if (lVar5 != 0) {
      if (1 < *(ushort *)(lVar5 + 0x12)) {
        cVar1 = *(char *)(lVar5 + 0x15);
        if ((cVar1 == 'd') || (cVar1 == 'D')) {
          bVar8 = *(byte *)(lVar5 + 0x16) == 0x40;
        }
        else if (cVar1 == '$') {
          bVar8 = (*(byte *)(lVar5 + 0x16) & 0xdf) == 0x52;
          if (!bVar8) {
            bVar8 = false;
          }
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          _strcpy(local_438 + sVar4 + 1,(char *)(lVar5 + 0x15));
          _strlen(local_438);
          QString::fromUtf8_helper((char *)&local_450,(int)local_438);
          cVar1 = FUN_1004f1030(&local_450);
          if ((cVar1 != '\0') &&
             (iVar2 = QString::lastIndexOf(&local_450,0x2f,0xffffffff,1), -1 < iVar2)) {
            QString::mid((int)&local_458,(int)&local_450);
            FUN_10000c490(param_2,&local_458);
            if (*(int *)local_458 != -1) {
              if (*(int *)local_458 != 0) {
                LOCK();
                *(int *)local_458 = *(int *)local_458 + -1;
                local_439 = *(int *)local_458 != 0;
                UNLOCK();
                if ((bool)local_439) goto LAB_1004f27e0;
              }
              QArrayData::deallocate(local_458,2,8);
            }
          }
LAB_1004f27e0:
          if (*(int *)local_450 != -1) {
            if (*(int *)local_450 != 0) {
              LOCK();
              *(int *)local_450 = *(int *)local_450 + -1;
              local_439 = *(int *)local_450 != 0;
              UNLOCK();
              if ((bool)local_439) goto LAB_1004f26c0;
            }
            QArrayData::deallocate(local_450,2,8);
          }
        }
      }
      goto LAB_1004f26c0;
    }
    _closedir(lVar3);
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar6 = 1;
  }
  if (*(int *)local_448.field0_0x0 != -1) {
    if (*(int *)local_448.field0_0x0 != 0) {
      LOCK();
      *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
      local_439 = *(int *)local_448.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_1004f2872;
    }
    QArrayData::deallocate((QArrayData *)local_448.field0_0x0,1,8);
  }
LAB_1004f2872:
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

