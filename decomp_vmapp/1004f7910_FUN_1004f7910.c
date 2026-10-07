
undefined1 FUN_1004f7910(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 uVar7;
  QString local_3c0;
  QString local_3b8;
  QString local_3b0;
  QString local_3a8;
  QString local_3a0;
  QString local_398;
  QString local_390;
  QString local_388;
  undefined2 local_380;
  undefined1 local_37e [510];
  undefined8 local_180;
  char local_172;
  undefined1 local_171;
  undefined1 local_170 [80];
  undefined1 local_120 [152];
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  QString::toUtf8_helper(&local_388);
  iVar4 = _FSPathMakeRef((QArrayData *)
                         (local_388.field0_0x0 + *(long *)(local_388.field0_0x0 + 0x10)),local_88,
                         &local_172);
  if (*(int *)local_388.field0_0x0 != -1) {
    if (*(int *)local_388.field0_0x0 != 0) {
      LOCK();
      *(int *)local_388.field0_0x0 = *(int *)local_388.field0_0x0 + -1;
      local_171 = *(int *)local_388.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_171) goto LAB_1004f79a1;
    }
    QArrayData::deallocate((QArrayData *)local_388.field0_0x0,1,8);
  }
LAB_1004f79a1:
  if (iVar4 == 0) {
    if (local_172 == '\0') {
      FUN_1008ef550();
      lVar6 = *param_2;
      sVar3 = _PtrToHand(*(long *)(lVar6 + 0x10) + lVar6,&local_180,(long)*(int *)(lVar6 + 4));
      if (sVar3 == 0) {
        sVar3 = _FSGetCatalogInfo(local_88,0x800,local_120,&local_380,0,local_170);
        if (sVar3 == 0) {
          _FSCreateResFile(local_170,local_380,local_37e,0,0,0,0);
          sVar3 = _ResError();
          iVar4 = (int)sVar3;
          if ((iVar4 == -0x30) || (sVar3 == 0)) {
            uVar5 = _FSOpenResFile(local_88,2);
            sVar3 = _ResError();
            iVar4 = (int)sVar3;
            uVar7 = 0;
            if ((iVar4 != -0x581) && (iVar4 != -0x27)) {
              if (sVar3 == 0) {
                lVar6 = _Get1Resource(0x736c6e6b,1);
                if (lVar6 == 0) {
                  sVar3 = _ResError();
                  if ((sVar3 != -0xc0) && (sVar3 != 0)) {
                    if (DAT_1011b55f8 < 1) {
                      uVar7 = 0;
                    }
                    else {
                      QString::toUtf8_helper(&local_3a8);
                      FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                                    "Get1Resource() err %i, path=\"%s\"",(int)sVar3,
                                    (QArrayData *)
                                    (local_3a8.field0_0x0 + *(long *)(local_3a8.field0_0x0 + 0x10)))
                      ;
                      if (*(int *)local_3a8.field0_0x0 != -1) {
                        local_3b0.field0_0x0 = local_3a8.field0_0x0;
                        if (*(int *)local_3a8.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_3a8.field0_0x0 = *(int *)local_3a8.field0_0x0 + -1;
                          local_171 = *(int *)local_3a8.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_171) {
                            uVar7 = 0;
                            goto LAB_1004f806f;
                          }
                        }
                        goto LAB_1004f805e;
                      }
                      uVar7 = 0;
                    }
                    goto LAB_1004f806f;
                  }
LAB_1004f7dcb:
                  _AddResource(local_180,0x736c6e6b,1,0);
                  sVar3 = _ResError();
                  if (sVar3 == 0) {
                    _WriteResource(local_180);
                    sVar3 = _ResError();
                    if (sVar3 == 0) {
                      _ReleaseResource(local_180);
                      uVar7 = 1;
                    }
                    else if (DAT_1011b55f8 < 1) {
                      uVar7 = 0;
                    }
                    else {
                      QString::toUtf8_helper(&local_3c0);
                      FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                                    "WriteResource() err %i, path=\"%s\"",(int)sVar3,
                                    (QArrayData *)
                                    (local_3c0.field0_0x0 + *(long *)(local_3c0.field0_0x0 + 0x10)))
                      ;
                      if (*(int *)local_3c0.field0_0x0 != -1) {
                        local_3b0.field0_0x0 = local_3c0.field0_0x0;
                        if (*(int *)local_3c0.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + -1;
                          local_171 = *(int *)local_3c0.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_171) {
                            uVar7 = 0;
                            goto LAB_1004f806f;
                          }
                        }
                        goto LAB_1004f805e;
                      }
                      uVar7 = 0;
                    }
                  }
                  else if (DAT_1011b55f8 < 1) {
                    uVar7 = 0;
                  }
                  else {
                    QString::toUtf8_helper(&local_3b8);
                    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                                  "AddResource() err %i, path=\"%s\"",(int)sVar3,
                                  (QArrayData *)
                                  (local_3b8.field0_0x0 + *(long *)(local_3b8.field0_0x0 + 0x10)));
                    if (*(int *)local_3b8.field0_0x0 == -1) {
                      uVar7 = 0;
                    }
                    else {
                      local_3b0.field0_0x0 = local_3b8.field0_0x0;
                      if (*(int *)local_3b8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
                        local_171 = *(int *)local_3b8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_171) {
                          uVar7 = 0;
                          goto LAB_1004f806f;
                        }
                      }
LAB_1004f805e:
                      QArrayData::deallocate((QArrayData *)local_3b0.field0_0x0,1,8);
                      uVar7 = 0;
                    }
                  }
                }
                else {
                  _RemoveResource(lVar6);
                  sVar3 = _ResError();
                  _DisposeHandle(lVar6);
                  if (sVar3 == 0) goto LAB_1004f7dcb;
                  if (0 < DAT_1011b55f8) {
                    QString::toUtf8_helper(&local_3b0);
                    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                                  "RemoveResource() err %i, path=\"%s\"",(int)sVar3,
                                  (QArrayData *)
                                  (local_3b0.field0_0x0 + *(long *)(local_3b0.field0_0x0 + 0x10)));
                    if (*(int *)local_3b0.field0_0x0 == -1) {
                      uVar7 = 0;
                      goto LAB_1004f806f;
                    }
                    if (*(int *)local_3b0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_3b0.field0_0x0 = *(int *)local_3b0.field0_0x0 + -1;
                      local_171 = *(int *)local_3b0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_171) {
                        uVar7 = 0;
                        goto LAB_1004f806f;
                      }
                    }
                    goto LAB_1004f805e;
                  }
                  uVar7 = 0;
                }
LAB_1004f806f:
                _CloseResFile(uVar5);
              }
              else if (DAT_1011b55f8 < 1) {
                uVar7 = 0;
              }
              else {
                QString::toUtf8_helper(&local_3a0);
                FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                              "FSOpenResFile() err %i, path=\"%s\"",iVar4,
                              (QArrayData *)
                              (local_3a0.field0_0x0 + *(long *)(local_3a0.field0_0x0 + 0x10)));
                if (*(int *)local_3a0.field0_0x0 == -1) {
                  uVar7 = 0;
                }
                else {
                  if (*(int *)local_3a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_3a0.field0_0x0 = *(int *)local_3a0.field0_0x0 + -1;
                    local_171 = *(int *)local_3a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_171) {
                      uVar7 = 0;
                      goto LAB_1004f7cf9;
                    }
                  }
                  QArrayData::deallocate((QArrayData *)local_3a0.field0_0x0,1,8);
                  uVar7 = 0;
                }
              }
            }
          }
          else {
            if (0 < DAT_1011b55f8) goto LAB_1004f7b7b;
            uVar7 = 0;
          }
        }
        else if (DAT_1011b55f8 < 1) {
          uVar7 = 0;
        }
        else {
          iVar4 = (int)sVar3;
LAB_1004f7b7b:
          uVar7 = 0;
          FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,"FSGetCatalogInfo() err %i",iVar4);
        }
LAB_1004f7cf9:
        cVar2 = _IsHandleValid(local_180);
        if (cVar2 != '\0') {
          _DisposeHandle(local_180);
        }
      }
      else if (DAT_1011b55f8 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,"PtrToHand() err %i, size=%i",
                      (int)sVar3,*(undefined4 *)(*param_2 + 4));
      }
      FUN_1008ef5a0();
      goto LAB_1004f7d1a;
    }
    if (DAT_1011b55f8 < 1) {
      uVar7 = 0;
      goto LAB_1004f7d1a;
    }
    QString::toUtf8_helper(&local_398);
    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                  "Path=\"%s\" is directory, cannot get shortcut resources",
                  (QArrayData *)(local_398.field0_0x0 + *(long *)(local_398.field0_0x0 + 0x10)));
    if (*(int *)local_398.field0_0x0 == -1) {
      uVar7 = 0;
      goto LAB_1004f7d1a;
    }
    local_390.field0_0x0 = local_398.field0_0x0;
    if (*(int *)local_398.field0_0x0 != 0) {
      LOCK();
      *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + -1;
      local_171 = *(int *)local_398.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_171) {
        uVar7 = 0;
        goto LAB_1004f7d1a;
      }
    }
  }
  else {
    if (DAT_1011b55f8 < 1) {
      uVar7 = 0;
      goto LAB_1004f7d1a;
    }
    QString::toUtf8_helper(&local_390);
    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar4
                  ,(QArrayData *)(local_390.field0_0x0 + *(long *)(local_390.field0_0x0 + 0x10)));
    if (*(int *)local_390.field0_0x0 == -1) {
      uVar7 = 0;
      goto LAB_1004f7d1a;
    }
    if (*(int *)local_390.field0_0x0 != 0) {
      LOCK();
      *(int *)local_390.field0_0x0 = *(int *)local_390.field0_0x0 + -1;
      local_171 = *(int *)local_390.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_171) {
        uVar7 = 0;
        goto LAB_1004f7d1a;
      }
    }
  }
  QArrayData::deallocate((QArrayData *)local_390.field0_0x0,1,8);
  uVar7 = 0;
LAB_1004f7d1a:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

