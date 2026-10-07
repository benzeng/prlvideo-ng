
void FUN_1005781e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (3 < DAT_1011b55f8) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar3 = *(int *)(param_1 + 0x30);
    if ((long)iVar3 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar3 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar3];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar1,
                  local_30 + *(long *)(local_30 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar4);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1005782aa;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1005782aa:
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x12b8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) == '\0')) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","vdisk",3,"[%p] # of dropped blocks %llu",*(long *)(param_1 + 0x20),
                    *(undefined8 *)(param_1 + 0x70));
    }
    *(undefined4 *)(param_1 + 0x30) = 4;
    FUN_100577e90(param_1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar3 = *(int *)(param_1 + 0x30);
    if ((long)iVar3 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar3 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar3];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar1,
                  local_38 + *(long *)(local_38 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar4);
    if (*(int *)local_38 == -1) {
      return;
    }
    local_48 = local_38;
    if (*(int *)local_38 == 0) goto LAB_1005785aa;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    iVar3 = *(int *)local_38;
    UNLOCK();
  }
  else {
    if (*(int *)(param_1 + 0x40) == -1) {
      iVar3 = FUN_1005f4510();
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == -1) {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("Compact","vdisk",3,"[%p] # of dropped blocks %llu",
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70));
        }
        *(undefined4 *)(param_1 + 0x30) = 4;
        FUN_100577e90(param_1);
        if (DAT_1011b55f8 < 4) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        QString::toUtf8();
        iVar3 = *(int *)(param_1 + 0x30);
        if ((long)iVar3 == -1) {
          pcVar4 = "Invalid";
        }
        else if (iVar3 == -2) {
          pcVar4 = "Disabled";
        }
        else {
          pcVar4 = (&PTR_s_None_100bc6390)[iVar3];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar1,
                      local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar4);
        if (*(int *)local_40 == -1) {
          return;
        }
        local_48 = local_40;
        if (*(int *)local_40 == 0) goto LAB_1005785aa;
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        iVar3 = *(int *)local_40;
        UNLOCK();
        goto joined_r0x00010057845a;
      }
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x30) = 3;
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","vdisk",4,"[%p] Block Drop Started",*(undefined8 *)(param_1 + 0x20));
    }
    FUN_1005786c0(param_1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar3 = *(int *)(param_1 + 0x30);
    if ((long)iVar3 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar3 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar3];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar1,
                  local_48 + *(long *)(local_48 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar4);
    if (*(int *)local_48 == -1) {
      return;
    }
    if (*(int *)local_48 == 0) goto LAB_1005785aa;
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    iVar3 = *(int *)local_48;
    UNLOCK();
  }
joined_r0x00010057845a:
  if (iVar3 != 0) {
    return;
  }
LAB_1005785aa:
  QArrayData::deallocate(local_48,1,8);
  return;
}

