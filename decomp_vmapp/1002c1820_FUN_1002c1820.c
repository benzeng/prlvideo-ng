
int FUN_1002c1820(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined1 local_88 [24];
  QArrayData *local_70;
  undefined **local_68;
  undefined1 local_60 [24];
  long local_48;
  uint local_40;
  int local_3c;
  undefined1 local_31;
  
  lVar5 = *(long *)(param_1 + 0x38);
  lVar3 = QThread::currentThreadId();
  if (lVar5 == lVar3) {
    if (param_2 < 0x2f) {
      if (param_2 < 0x20) {
        plVar4 = (long *)(param_1 + 0x2e8);
      }
      else {
        plVar4 = (long *)(param_1 + 0x2f0);
      }
    }
    else {
      plVar4 = (long *)(param_1 + 0x2f8);
    }
    local_3c = -0x7ffffff7;
    if (*plVar4 != 0) {
      lVar5 = 3;
      if (param_2 < 0x2f) {
        lVar5 = (ulong)(0x1f < param_2) + 1;
      }
      if ((*(uint *)(&DAT_100b381c0 + lVar5 * 4) & *(uint *)(param_1 + 0x2a8)) == 0) {
        FUN_10051b1b0(param_1 + 0x2a0,&DAT_1011c4ab8 + (ulong)param_2 * 6);
        local_70 = *(QArrayData **)(&DAT_1011c4ac0 + (ulong)param_2 * 0x30);
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        if (param_2 < 0x2f) {
          if (param_2 < 0x20) {
            puVar6 = (undefined8 *)(param_1 + 0x2e8);
          }
          else {
            puVar6 = (undefined8 *)(param_1 + 0x2f0);
          }
        }
        else {
          puVar6 = (undefined8 *)(param_1 + 0x2f8);
        }
        iVar2 = (**(code **)(*(long *)*puVar6 + 0x20))
                          ((long *)*puVar6,&DAT_1011c4ab8 + (ulong)param_2 * 6);
        if (iVar2 < 0) {
          local_3c = -0x7ffffa6f;
          if (iVar2 != -0x7ffffa6f) {
            if (iVar2 == -0x7ffdbffe) {
              FUN_10006a060(local_88);
              FUN_10006a120(local_88,&local_70,0);
              local_a8 = (void *)0x0;
              pvStack_a0 = (void *)0x0;
              local_98 = 0;
              FUN_1000648b0(DAT_1011c3650,0x80024002,&local_a8,local_88);
              if (local_a8 != (void *)0x0) {
                if (pvStack_a0 != local_a8) {
                  pvStack_a0 = (void *)((~((long)pvStack_a0 + (-4 - (long)local_a8)) &
                                        0xfffffffffffffffcU) + (long)pvStack_a0);
                }
                operator_delete(local_a8);
              }
              FUN_10006a680(local_88);
              local_3c = -0x7ffdbffe;
            }
            else {
              FUN_10006a060(local_c0);
              FUN_10006a120(local_c0,&local_70,0);
              local_d8 = (void *)0x0;
              pvStack_d0 = (void *)0x0;
              local_c8 = 0;
              FUN_1000648b0(DAT_1011c3650,0x80000471,&local_d8,local_c0);
              if (local_d8 != (void *)0x0) {
                if (pvStack_d0 != local_d8) {
                  pvStack_d0 = (void *)((~((long)pvStack_d0 + (-4 - (long)local_d8)) &
                                        0xfffffffffffffffcU) + (long)pvStack_d0);
                }
                operator_delete(local_d8);
              }
              FUN_10006a680(local_c0);
              local_3c = iVar2;
            }
          }
        }
        else {
          *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
          local_3c = 0;
        }
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            UNLOCK();
            if (*(int *)local_70 != 0) {
              return local_3c;
            }
            local_31 = 0;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
    }
  }
  else {
    local_68 = &PTR_FUN_100bb3410;
    local_3c = 0;
    local_48 = param_1;
    local_40 = param_2;
    cVar1 = FUN_100258250(param_1,local_60);
    if (cVar1 == '\0') {
      FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","rc","../Usb/AppUsb.cpp",0x7b3,
                    "ConnectToGuest");
    }
  }
  return local_3c;
}

