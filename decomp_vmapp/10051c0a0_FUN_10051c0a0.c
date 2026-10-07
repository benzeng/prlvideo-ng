
void FUN_10051c0a0(long *param_1,undefined8 param_2,long *param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  uint local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  pcVar8 = (char *)0x0;
  if (*param_3 != 0) {
    pcVar8 = *(char **)(*param_3 + 0x10);
  }
  QByteArray::QByteArray((QByteArray *)&local_40,pcVar8,param_4);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,(QByteArray *)&local_40);
  local_44 = uVar2;
  if (uVar2 != 0) {
    QMutex::lock();
    bVar9 = true;
    plVar1 = (long *)param_1[0x14];
    if (*(uint *)(plVar1 + 4) != 0) {
      uVar5 = *(uint *)((long)plVar1 + 0x24) ^ uVar2;
      plVar3 = *(long **)(plVar1[1] + ((ulong)uVar5 % (ulong)*(uint *)(plVar1 + 4)) * 8);
      if (plVar3 != plVar1) {
LAB_10051c140:
        if ((*(uint *)(plVar3 + 1) != uVar5) || (uVar2 != *(uint *)((long)plVar3 + 0xc)))
        goto LAB_10051c14a;
        if (plVar3 != plVar1) {
          FUN_10051db00(&local_50,param_1 + 0x14,&local_44);
          FUN_10051dbe0(param_1 + 0x14,&local_44);
          bVar9 = false;
          QMutex::unlock();
          local_70 = local_50;
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 == 0) {
              QListData::detach((int)&local_70);
              lVar6 = (long)*(int *)(local_70 + 8);
              if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_70 + lVar6 * 8) &&
                 (lVar7 = *(int *)(local_70 + 0xc) - lVar6,
                 lVar7 != 0 && lVar6 <= *(int *)(local_70 + 0xc))) {
                _memcpy(local_70 + lVar6 * 8 + 0x10,
                        local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,lVar7 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + 1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
            }
          }
          local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
          local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
          if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
            do {
              local_58 = 1;
              uVar4 = *(undefined8 *)local_68;
              lVar6 = FUN_1002a6120(uVar4,0,1);
              uVar10 = 0xf000001c;
              if ((lVar6 != 0) &&
                 (uVar10 = 0xf0000009, *(int *)(local_40 + 4) <= *(int *)(lVar6 + 8))) {
                uVar10 = 0;
                FUN_1002a5a50(lVar6,0,local_40 + *(long *)(local_40 + 0x10));
              }
              FUN_1004c07d0(param_1,uVar4,uVar10);
              local_68 = local_68 + 8;
            } while (local_68 != local_60);
          }
          local_58 = 1;
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10051c34d;
            }
            QListData::dispose(local_70);
          }
LAB_10051c34d:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10051c233;
            }
            QListData::dispose(local_50);
          }
          goto LAB_10051c233;
        }
      }
    }
LAB_10051c1f8:
    QMutex::lock();
    uVar4 = FUN_10051d850(param_1 + 0x12,&local_44);
    FUN_100050840(uVar4,&local_40);
    QMutex::unlock();
LAB_10051c233:
    if (bVar9) {
      QMutex::unlock();
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
LAB_10051c14a:
  plVar3 = (long *)*plVar3;
  if (plVar3 == plVar1) goto LAB_10051c1f8;
  goto LAB_10051c140;
}

