
void FUN_10065fa90(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (DAT_1011b55f8 < 2) goto LAB_10065fd3b;
  QString::toUtf8();
  FUN_1008e3970("","pvsHostInfo",2,"Name = \'%s\'",local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10065fb19;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10065fb19:
  if (DAT_1011b55f8 < 2) goto LAB_10065fd3b;
  QString::toUtf8();
  FUN_1008e3970("","pvsHostInfo",2,"BSD Name = \'%s\'",local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_10065fb8f;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10065fb8f:
  if ((((1 < DAT_1011b55f8) &&
       (FUN_1008e3970("","pvsHostInfo",2,"Disk Size = %llu",*(undefined8 *)(param_1 + 0x18)),
       1 < DAT_1011b55f8)) &&
      (FUN_1008e3970("","pvsHostInfo",2,"Logical Sector Size = %llu",*(undefined8 *)(param_1 + 0x20)
                    ), 1 < DAT_1011b55f8)) &&
     (FUN_1008e3970("","pvsHostInfo",2,"Rotation rate = %u",*(undefined4 *)(param_1 + 0x10)),
     1 < DAT_1011b55f8)) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      pcVar3 = "NO";
    }
    else {
      pcVar3 = "YES";
    }
    FUN_1008e3970("","pvsHostInfo",2,"Virtual = %s",pcVar3);
    if (1 < DAT_1011b55f8) {
      if (*(char *)(param_1 + 0x14) == '\0') {
        pcVar3 = "NO";
      }
      else {
        pcVar3 = "YES";
      }
      FUN_1008e3970("","pvsHostInfo",2,"Removable = %s",pcVar3);
      if (1 < DAT_1011b55f8) {
        if (*(char *)(param_1 + 0x15) == '\0') {
          pcVar3 = "NO";
        }
        else {
          pcVar3 = "YES";
        }
        FUN_1008e3970("","pvsHostInfo",2,"External = %s",pcVar3);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","pvsHostInfo",2,"Partition map: %d entries",
                        *(int *)(*(long *)(param_1 + 0x30) + 0xc) -
                        *(int *)(*(long *)(param_1 + 0x30) + 8));
        }
      }
    }
  }
LAB_10065fd3b:
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = 0;
  if (*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    do {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","pvsHostInfo",2,"Partition #%d:",uVar2 & 0xffffffff);
        lVar1 = *(long *)(param_1 + 0x30);
      }
      FUN_10065fe40(*(undefined8 *)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + uVar2) * 8));
      uVar2 = uVar2 + 1;
      lVar1 = *(long *)(param_1 + 0x30);
    } while ((long)uVar2 < (long)*(int *)(lVar1 + 0xc) - (long)*(int *)(lVar1 + 8));
  }
  return;
}

