
bool FUN_100550060(long param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  int local_9c;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_88 [15];
  undefined1 local_79;
  undefined1 local_78 [64];
  uint local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_100761480(local_88);
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::check_existing() started");
  QString::toUtf8();
  cVar2 = FUN_100761540(local_88,local_90 + *(long *)(local_90 + 0x10),1,1,1,0,0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_79 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100550120;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100550120:
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"check_existing(%s) file not found",
                  local_98 + *(long *)(local_98 + 0x10));
    plVar3 = (long *)0x0;
    lVar4 = 0;
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_79 = *(int *)local_98 != 0;
        UNLOCK();
        plVar3 = (long *)0x0;
        lVar4 = 0;
        if ((bool)local_79) goto LAB_10055053d;
      }
      plVar3 = (long *)0x0;
      QArrayData::deallocate(local_98,1,8);
      lVar4 = 0;
    }
    goto LAB_10055053d;
  }
  pcVar5 = *(char **)(param_1 + 0x18);
  plVar3 = (long *)0x0;
  if ((pcVar5 == (char *)0x0) || (plVar3 = (long *)0x0, *pcVar5 == '\0')) {
LAB_10055049c:
    lVar4 = FUN_100553bc0(local_88,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          FUN_100550000,plVar3);
    if (lVar4 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"check_existing(%s) checks of snapshot image failed",
                    local_d8 + *(long *)(local_d8 + 0x10));
      lVar4 = 0;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_79 = *(int *)local_d8 != 0;
          UNLOCK();
          lVar4 = 0;
          if ((bool)local_79) goto LAB_10055053d;
        }
        lVar4 = 0;
        QArrayData::deallocate(local_d8,1,8);
      }
    }
    else {
      FUN_100554070(lVar4);
    }
    goto LAB_10055053d;
  }
  local_9c = 0;
  plVar3 = (long *)FUN_10060e060(pcVar5 + 1,&local_9c);
  if (plVar3 != (long *)0x0) {
    local_9c = (**(code **)(*plVar3 + 0x30))(plVar3);
    if (local_9c < 0) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"check_existing(%s) init cript failed (%d)",
                    local_b0 + *(long *)(local_b0 + 0x10),local_9c);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_79 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_100550451;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
    }
    else {
      local_9c = (**(code **)(*plVar3 + 0x58))(plVar3,local_78);
      if (local_9c < 0) {
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,"check_existing(%s) get cript info failed (%d)",
                      local_b8 + *(long *)(local_b8 + 0x10),local_9c);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_79 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_100550451;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
      }
      else {
        if (local_38 < 0x11) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
          if ((local_38 <= *(uint *)(lVar4 + 4)) &&
             (local_38 <= *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 4))) {
            local_9c = (**(code **)(*plVar3 + 0x48))(plVar3,lVar4 + *(long *)(lVar4 + 0x10));
            if (local_9c < 0) {
              QString::toUtf8();
              FUN_1008e3970("","TransMem",0,"check_existing(%s) set key failed (%d)",
                            local_c8 + *(long *)(local_c8 + 0x10),local_9c);
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_79 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_100550451;
                }
                QArrayData::deallocate(local_c8,1,8);
              }
            }
            else {
              lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
              local_9c = (**(code **)(*plVar3 + 0x50))(plVar3,lVar4 + *(long *)(lVar4 + 0x10));
              if (-1 < local_9c) goto LAB_10055049c;
              QString::toUtf8();
              FUN_1008e3970("","TransMem",0,"check_existing(%s) set init failed (%d)",
                            local_d0 + *(long *)(local_d0 + 0x10),local_9c);
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_79 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_79) goto LAB_100550451;
                }
                QArrayData::deallocate(local_d0,1,8);
              }
            }
            goto LAB_100550451;
          }
        }
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,"check_existing(%s) Unexpected block size %d",
                      local_c0 + *(long *)(local_c0 + 0x10),local_38);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_79 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_100550451;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
      }
    }
LAB_100550451:
    lVar4 = 0;
    goto LAB_10055053d;
  }
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"check_existing(%s) create cript failed (%d)",
                local_a8 + *(long *)(local_a8 + 0x10),local_9c);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_79 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_10055034d;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_10055034d:
  plVar3 = (long *)0x0;
  lVar4 = 0;
LAB_10055053d:
  FUN_1007614d0(local_88);
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)(plVar3);
  }
  pcVar5 = "failed";
  if (lVar4 != 0) {
    pcVar5 = "done";
  }
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::check_existing() %s",pcVar5);
  FUN_100761500(local_88);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4 != 0;
}

