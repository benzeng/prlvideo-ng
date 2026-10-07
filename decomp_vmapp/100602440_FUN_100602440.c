
int FUN_100602440(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  plVar2 = (long *)FUN_10059ac80(param_1 + 0x10,0x80401,&local_38);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("Backup","vdisk",0,"Disk open(BACKUP) failed, err = 0x%X",local_38);
  }
  else {
    lVar3 = *param_2;
    uVar4 = (ulong)*(uint *)(lVar3 + 8);
    lVar5 = 0;
    if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
      do {
        uVar1 = *(undefined8 *)(lVar3 + 0x10 + ((int)uVar4 + lVar5) * 8);
        local_38 = FUN_1005b4780(uVar1,param_3,plVar2);
        if (local_38 < 0) {
          FUN_1007d6a70(&local_48,uVar1);
          QString::toUtf8();
          FUN_1008e3970("Backup","vdisk",0,"Cache building for %s failed, err = 0x%X",
                        local_40 + *(long *)(local_40 + 0x10),local_38);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10060256b;
            }
            QArrayData::deallocate(local_40,1,8);
          }
LAB_10060256b:
          if (*(int *)local_48 == -1) break;
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate(local_48,2,8);
          break;
        }
        lVar5 = lVar5 + 1;
        lVar3 = *param_2;
        uVar4 = (ulong)*(int *)(lVar3 + 8);
      } while (lVar5 < (long)((long)*(int *)(lVar3 + 0xc) - uVar4));
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return local_38;
}

