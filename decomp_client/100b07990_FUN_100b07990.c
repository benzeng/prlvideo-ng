
void FUN_100b07990(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (DAT_10230ffd0 < 2) goto LAB_100b07c3b;
  QString::toUtf8();
  FUN_100df99c0("","pvsHostInfo",2,"Name = \'%s\'",local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100b07a19;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b07a19:
  if (DAT_10230ffd0 < 2) goto LAB_100b07c3b;
  QString::toUtf8();
  FUN_100df99c0("","pvsHostInfo",2,"BSD Name = \'%s\'",local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100b07a8f;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100b07a8f:
  if ((((1 < DAT_10230ffd0) &&
       (FUN_100df99c0("","pvsHostInfo",2,"Disk Size = %llu",*(undefined8 *)(param_1 + 0x18)),
       1 < DAT_10230ffd0)) &&
      (FUN_100df99c0("","pvsHostInfo",2,"Logical Sector Size = %llu",*(undefined8 *)(param_1 + 0x20)
                    ), 1 < DAT_10230ffd0)) &&
     (FUN_100df99c0("","pvsHostInfo",2,"Rotation rate = %u",*(undefined4 *)(param_1 + 0x10)),
     1 < DAT_10230ffd0)) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      pcVar3 = "NO";
    }
    else {
      pcVar3 = "YES";
    }
    FUN_100df99c0("","pvsHostInfo",2,"Virtual = %s",pcVar3);
    if (1 < DAT_10230ffd0) {
      if (*(char *)(param_1 + 0x14) == '\0') {
        pcVar3 = "NO";
      }
      else {
        pcVar3 = "YES";
      }
      FUN_100df99c0("","pvsHostInfo",2,"Removable = %s",pcVar3);
      if (1 < DAT_10230ffd0) {
        if (*(char *)(param_1 + 0x15) == '\0') {
          pcVar3 = "NO";
        }
        else {
          pcVar3 = "YES";
        }
        FUN_100df99c0("","pvsHostInfo",2,"External = %s",pcVar3);
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("","pvsHostInfo",2,"Partition map: %d entries",
                        *(int *)(*(long *)(param_1 + 0x30) + 0xc) -
                        *(int *)(*(long *)(param_1 + 0x30) + 8));
        }
      }
    }
  }
LAB_100b07c3b:
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = 0;
  if (*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    do {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","pvsHostInfo",2,"Partition #%d:",uVar2 & 0xffffffff);
        lVar1 = *(long *)(param_1 + 0x30);
      }
      FUN_100b07d40(*(undefined8 *)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + uVar2) * 8));
      uVar2 = uVar2 + 1;
      lVar1 = *(long *)(param_1 + 0x30);
    } while ((long)uVar2 < (long)*(int *)(lVar1 + 0xc) - (long)*(int *)(lVar1 + 8));
  }
  return;
}

