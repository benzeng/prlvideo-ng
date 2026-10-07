
undefined1 FUN_1004f8760(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  uint *puVar6;
  long lVar7;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  char local_8a;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  QString::toUtf8_helper(&local_98);
  iVar2 = _FSPathMakeRef((QArrayData *)(local_98.field0_0x0 + *(long *)(local_98.field0_0x0 + 0x10))
                         ,local_88,&local_8a);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_89 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1004f87f3;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,1,8);
  }
LAB_1004f87f3:
  if (iVar2 == 0) {
    if (local_8a == '\0') {
      FUN_1008ef550();
      uVar3 = _FSOpenResFile(local_88,1);
      sVar1 = _ResError();
      iVar2 = (int)sVar1;
      uVar5 = 0;
      if ((iVar2 != -0x581) && (uVar5 = 0, iVar2 != -0x27)) {
        if (sVar1 == 0) {
          puVar4 = (undefined8 *)_Get1IndResource(0x736c6e6b,1);
          sVar1 = _ResError();
          if (sVar1 == -0xc0) {
LAB_1004f8b2c:
            uVar5 = 0;
          }
          else if (sVar1 == 0) {
            _DetachResource(puVar4);
            iVar2 = _GetHandleSize(puVar4);
            *param_2 = iVar2;
            if (iVar2 == 0) {
              if (0 < DAT_1011b55f8) {
                QString::toUtf8_helper(&local_c0);
                FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                              "Zero resource size for path=\"%s\"",
                              (QArrayData *)
                              (local_c0.field0_0x0 + *(long *)(local_c0.field0_0x0 + 0x10)));
                if (*(int *)local_c0.field0_0x0 != -1) {
                  if (*(int *)local_c0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                    local_89 = *(int *)local_c0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_89) goto LAB_1004f8bb6;
                  }
                  QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,1,8);
                }
              }
            }
            else if (param_3 != (undefined8 *)0x0) {
              _HLock(puVar4);
              QByteArray::resize((int)param_3);
              puVar6 = (uint *)*param_3;
              if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
                QByteArray::reallocData(param_3,puVar6[1] + 1,puVar6[2] >> 0x1f);
                puVar6 = (uint *)*param_3;
              }
              _memcpy((void *)((long)puVar6 + *(long *)(puVar6 + 4)),(void *)*puVar4,(long)*param_2)
              ;
              _HUnlock(puVar4);
            }
LAB_1004f8bb6:
            _DisposeHandle(puVar4);
            uVar5 = 1;
          }
          else {
            if (DAT_1011b55f8 < 1) goto LAB_1004f8b2c;
            QString::toUtf8_helper(&local_b8);
            FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                          "Get1IndResource() err %i, path=\"%s\"",(int)sVar1,
                          (QArrayData *)
                          (local_b8.field0_0x0 + *(long *)(local_b8.field0_0x0 + 0x10)));
            if (*(int *)local_b8.field0_0x0 == -1) {
              uVar5 = 0;
            }
            else {
              if (*(int *)local_b8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                local_89 = *(int *)local_b8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_89) {
                  uVar5 = 0;
                  goto LAB_1004f8bc7;
                }
              }
              QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,1,8);
              uVar5 = 0;
            }
          }
LAB_1004f8bc7:
          _CloseResFile(uVar3);
        }
        else if (DAT_1011b55f8 < 1) {
          uVar5 = 0;
        }
        else {
          QString::toUtf8_helper(&local_b0);
          FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,"FSOpenResFile() err %i, path=\"%s\""
                        ,iVar2,(QArrayData *)
                               (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)));
          if (*(int *)local_b0.field0_0x0 == -1) {
            uVar5 = 0;
          }
          else {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_89 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_89) {
                uVar5 = 0;
                goto LAB_1004f8c05;
              }
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,1,8);
            uVar5 = 0;
          }
        }
      }
LAB_1004f8c05:
      FUN_1008ef5a0();
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1004f8c14;
    }
    if (DAT_1011b55f8 < 1) {
      uVar5 = 0;
      goto LAB_1004f8c14;
    }
    QString::toUtf8_helper(&local_a8);
    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                  "Path=\"%s\" is directory, cannot get shortcut resources",
                  (QArrayData *)(local_a8.field0_0x0 + *(long *)(local_a8.field0_0x0 + 0x10)));
    if (*(int *)local_a8.field0_0x0 == -1) {
      uVar5 = 0;
      goto LAB_1004f8c14;
    }
    local_a0.field0_0x0 = local_a8.field0_0x0;
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_89 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) {
        uVar5 = 0;
        goto LAB_1004f8c14;
      }
    }
  }
  else {
    if (DAT_1011b55f8 < 1) {
      uVar5 = 0;
      goto LAB_1004f8c14;
    }
    QString::toUtf8_helper(&local_a0);
    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar2
                  ,(QArrayData *)(local_a0.field0_0x0 + *(long *)(local_a0.field0_0x0 + 0x10)));
    if (*(int *)local_a0.field0_0x0 == -1) {
      uVar5 = 0;
      goto LAB_1004f8c14;
    }
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_89 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) {
        uVar5 = 0;
        goto LAB_1004f8c14;
      }
    }
  }
  QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,1,8);
  uVar5 = 0;
LAB_1004f8c14:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

