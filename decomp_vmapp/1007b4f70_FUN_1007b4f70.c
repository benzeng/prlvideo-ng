
bool FUN_1007b4f70(long param_1,uint param_2,ushort *param_3,undefined8 param_4,long param_5)

{
  QArrayData *pQVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  QArrayData *local_b8;
  long *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined **local_98;
  undefined **local_90;
  uint local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined **local_48;
  long *local_40;
  undefined1 local_31;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(param_2 & 0xff,0x31,
                     (ulong)param_3[1] << 10 | (ulong)*param_3 << 0x20 |
                     (ulong)((*(uint *)(param_1 + 0x30) & 0xf) << 6) | 0x15);
  }
  local_48 = &PTR_FUN_1011a5ca8;
  plVar6 = (long *)FUN_1008e49f0(&local_48,param_3);
  local_40 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (local_40 == (long *)0x0) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    local_40 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_40 + 1) = 1;
    local_40[2] = (long)plVar6;
    *local_40 = (long)&PTR_FUN_1011a5cf8;
    if (plVar6 != (long *)0x0) {
      local_98 = &PTR_FUN_100bcf378;
      local_90 = &PTR_FUN_100bcf3a8;
      local_68 = local_68 & 0xffffff00;
      uStack_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_88 = param_2;
      local_80 = param_1;
      local_78 = param_4;
      local_70 = param_5;
      cVar3 = FUN_1008e5810(&local_98,local_40[2]);
      if (((char)local_68 == '\0') || (cVar3 == '\x01')) {
        if (DAT_1011ccc18 != (code *)0x0) {
          (*DAT_1011ccc18)(param_2 & 0xff,0x31,
                           (*(uint *)(param_1 + 0x30) & 0xf) << 6 |
                           (uint)(CONCAT44(uStack_64,local_68) >> 0x16) & 0xfffffc00 | 0x16);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xa4) = 2;
        local_a8 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_a8 + 1U) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + 1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,
                      "%sError: no proxy heart beat was received for %d msecs. Connection problems?"
                      ,local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(param_5 + 4));
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007b5148;
          }
          QArrayData::deallocate(local_a0,1,8);
        }
LAB_1007b5148:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007b529e;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
LAB_1007b529e:
      cVar4 = '\0';
      if (cVar3 != '\0') {
        local_b0 = (long *)0x0;
        cVar4 = (**(code **)(**(long **)(param_1 + 0x70) + 0x40))
                          (*(long **)(param_1 + 0x70),param_1,&local_40,&local_b0);
        if (cVar4 != '\0') {
          if (local_b0 == (long *)0x0) goto LAB_1007b5497;
          if (local_b0[2] != 0) {
            cVar4 = FUN_1008e5500();
            pcVar2 = DAT_1011ccc18;
            if (cVar4 == '\0') {
              pQVar1 = *(QArrayData **)(param_1 + 0x18);
              if (1 < *(int *)pQVar1 + 1U) {
                LOCK();
                *(int *)pQVar1 = *(int *)pQVar1 + 1;
                local_31 = *(int *)pQVar1 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              lVar7 = *(long *)(local_b8 + 0x10);
              plVar6 = (long *)0x0;
              if (local_b0 != (long *)0x0) {
                plVar6 = (long *)local_b0[2];
              }
              uVar5 = (**(code **)(*plVar6 + 0x10))();
              FUN_1008e3970("","IOCommunication",0,"%sError: failed to send message %d (error %d)",
                            local_b8 + lVar7,uVar5,local_5c);
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007b543d;
                }
                QArrayData::deallocate(local_b8,1,8);
              }
LAB_1007b543d:
              if (*(int *)pQVar1 != -1) {
                if (*(int *)pQVar1 != 0) {
                  LOCK();
                  *(int *)pQVar1 = *(int *)pQVar1 + -1;
                  local_31 = *(int *)pQVar1 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007b5473;
                }
                QArrayData::deallocate(pQVar1,2,8);
              }
            }
            else if (DAT_1011ccc18 != (code *)0x0) {
              plVar6 = (long *)0x0;
              if (local_b0 != (long *)0x0) {
                plVar6 = (long *)local_b0[2];
              }
              lVar7 = (**(code **)(*plVar6 + 0x10))();
              (*pcVar2)(param_2 & 0xff,0x31,
                        (ulong)(uint)(local_60 << 10) | lVar7 << 0x20 |
                        (ulong)((*(uint *)(param_1 + 0x30) & 0xf) << 6) | 0x17);
            }
          }
        }
LAB_1007b5473:
        if (local_b0 != (long *)0x0) {
          LOCK();
          plVar6 = local_b0 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*local_b0 + 0x10))();
          }
        }
      }
LAB_1007b5497:
      bVar8 = cVar4 != '\0';
      goto LAB_1007b549d;
    }
  }
  local_58 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IOCommunication",0,
                "%sError: invalid broker package header received (type %u, size %u)",
                local_50 + *(long *)(local_50 + 0x10),*param_3,param_3[1]);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b5234;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1007b5234:
  if (*(int *)local_58 == -1) {
    bVar8 = false;
  }
  else {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) {
        bVar8 = false;
        goto LAB_1007b549d;
      }
    }
    QArrayData::deallocate(local_58,2,8);
    bVar8 = false;
  }
LAB_1007b549d:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return bVar8;
}

