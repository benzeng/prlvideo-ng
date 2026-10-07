
void FUN_100579400(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    in_stack_ffffffffffffff88 = *(undefined8 *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar5 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar5 = "Disabled";
    }
    else {
      pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_38 + *(long *)(local_38 + 0x10),in_stack_ffffffffffffff88,pcVar5);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1005794d5;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1005794d5:
  puVar8 = (ulong *)(param_1 + 0x28);
  FUN_100595d30(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + *puVar8 * 8),
                param_1 + 0x38);
  if (*(char *)(param_1 + 0x48) == '\0') {
    do {
      uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
      uVar4 = *puVar8 + 1;
      *puVar8 = uVar4;
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x1128);
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x1130);
      if ((ulong)(lVar7 - lVar6 >> 3) <= uVar4) goto LAB_10057959f;
      cVar3 = FUN_100595b70(*(undefined8 *)(lVar6 + uVar4 * 8));
      uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
    } while (cVar3 == '\0');
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x1128);
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x1130);
    uVar4 = *puVar8;
LAB_10057959f:
    if (lVar7 - lVar6 >> 3 == uVar4) {
      if (DAT_1011cc9b8 == 0) {
        FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "0 != m_CompactThreshold","DiskStatesImp.cpp",CONCAT44(uVar9,0x1524),
                      "StorageCompactDone");
      }
      if (DAT_1011cc9b8 < *(ulong *)(param_1 + 0x58)) {
        if (2 < DAT_1011b55f8) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          QString::toUtf8();
          FUN_1008e3970("Compact","vdisk",3,"[%p]%s[%zu] === Restart after TRIM, count %llu > %llu",
                        uVar2,local_50 + *(long *)(local_50 + 0x10),*puVar8,
                        *(undefined8 *)(param_1 + 0x58),DAT_1011cc9b8);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              UNLOCK();
              if (*(int *)local_50 != 0) goto LAB_1005796a5;
            }
            QArrayData::deallocate(local_50,1,8);
          }
        }
LAB_1005796a5:
        *(undefined8 *)(param_1 + 0x58) = 0;
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x13a0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0xf0) = 0;
        }
        FUN_100576ac0(param_1);
        if (DAT_1011b55f8 < 4) {
          return;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        QString::toUtf8();
        iVar1 = *(int *)(param_1 + 0x30);
        if ((long)iVar1 == -1) {
          pcVar5 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar5 = "Disabled";
        }
        else {
          pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                      local_58 + *(long *)(local_58 + 0x10),*puVar8,pcVar5);
        if (*(int *)local_58 == -1) {
          return;
        }
        local_40 = local_58;
        if (*(int *)local_58 == 0) goto LAB_10057997e;
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        iVar1 = *(int *)local_58;
        UNLOCK();
      }
      else {
        FUN_1005780e0(param_1);
        if (DAT_1011b55f8 < 4) {
          return;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        QString::toUtf8();
        iVar1 = *(int *)(param_1 + 0x30);
        if ((long)iVar1 == -1) {
          pcVar5 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar5 = "Disabled";
        }
        else {
          pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                      local_60 + *(long *)(local_60 + 0x10),*puVar8,pcVar5);
        if (*(int *)local_60 == -1) {
          return;
        }
        local_40 = local_60;
        if (*(int *)local_60 == 0) goto LAB_10057997e;
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar1 = *(int *)local_60;
        UNLOCK();
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 2;
      FUN_100577e90(param_1);
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar5 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar5 = "Disabled";
      }
      else {
        pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] NextStorage: Done in state [%s]",uVar2,
                    local_48 + *(long *)(local_48 + 0x10),*puVar8,pcVar5);
      if (*(int *)local_48 == -1) {
        return;
      }
      local_40 = local_48;
      if (*(int *)local_48 == 0) goto LAB_10057997e;
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 1;
    FUN_100577e90(param_1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar5 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar5 = "Disabled";
    }
    else {
      pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] FirstPass: Done in state [%s]",uVar2,
                  local_40 + *(long *)(local_40 + 0x10),*puVar8,pcVar5);
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 == 0) goto LAB_10057997e;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    iVar1 = *(int *)local_40;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_10057997e:
  QArrayData::deallocate(local_40,1,8);
  return;
}

