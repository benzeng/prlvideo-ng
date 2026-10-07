
undefined8 FUN_10057b8d0(long param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (DAT_1011cc9b8 == 0) {
    return 0;
  }
  cVar1 = *param_2;
  lVar4 = *(long *)(param_1 + 0x12d8);
  if (lVar4 == 0) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "disk->m_CompactContext != NULL","DiskStatesImp.cpp",0x1728,
                  "EnableCompactBlocksCb");
    lVar4 = *(long *)(param_1 + 0x12d8);
  }
  uVar2 = *(uint *)(lVar4 + 0x30);
  if (cVar1 == '\0') {
    if (uVar2 == 0xfffffffe) {
      QString::toUtf8();
      uVar6 = 0;
      FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Compact already Disabled",param_1,
                    local_38 + *(long *)(local_38 + 0x10));
      if (*(int *)local_38 == -1) {
        return 0;
      }
      local_30 = local_38;
      if (*(int *)local_38 == 0) goto LAB_10057bb7f;
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      iVar3 = *(int *)local_38;
      UNLOCK();
      uVar6 = 0;
    }
    else {
      if ((uVar2 < 10) && ((0x301U >> (uVar2 & 0x1f) & 1) != 0)) {
        QString::toUtf8();
        iVar3 = *(int *)(*(long *)(param_1 + 0x12d8) + 0x30);
        if ((long)iVar3 == -1) {
          pcVar5 = "Invalid";
        }
        else if (iVar3 == -2) {
          pcVar5 = "Disabled";
        }
        else {
          pcVar5 = (&PTR_s_None_100bc6390)[iVar3];
        }
        FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Compact just Disabled in state [%s]",param_1,
                      local_40 + *(long *)(local_40 + 0x10),pcVar5);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            if (*(int *)local_40 != 0) goto LAB_10057bc04;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_10057bc04:
        lVar4 = *(long *)(param_1 + 0x12d8);
        *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar4 + 0x30);
        *(undefined4 *)(lVar4 + 0x30) = 0xfffffffe;
        return 0;
      }
      *(undefined4 *)(lVar4 + 0x60) = 2;
      QString::toUtf8();
      iVar3 = *(int *)(*(long *)(param_1 + 0x12d8) + 0x30);
      if ((long)iVar3 == -1) {
        pcVar5 = "Invalid";
      }
      else if (iVar3 == -2) {
        pcVar5 = "Disabled";
      }
      else {
        pcVar5 = (&PTR_s_None_100bc6390)[iVar3];
      }
      FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Compact pending Disable in state [%s]",param_1,
                    local_48 + *(long *)(local_48 + 0x10),pcVar5);
      uVar6 = 0x80021017;
      if (*(int *)local_48 == -1) {
        return 0x80021017;
      }
      local_30 = local_48;
      if (*(int *)local_48 == 0) goto LAB_10057bb7f;
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar3 = *(int *)local_48;
      UNLOCK();
    }
  }
  else {
    if (uVar2 != 0xfffffffe) {
      return 0;
    }
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar4 + 0x44);
    QString::toUtf8();
    iVar3 = *(int *)(*(long *)(param_1 + 0x12d8) + 0x30);
    if ((long)iVar3 == -1) {
      pcVar5 = "Invalid";
    }
    else if (iVar3 == -2) {
      pcVar5 = "Disabled";
    }
    else {
      pcVar5 = (&PTR_s_None_100bc6390)[iVar3];
    }
    uVar6 = 0;
    FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Compact was Disabled, now - Enabled, state [%s]",
                  param_1,local_30 + *(long *)(local_30 + 0x10),pcVar5);
    if (*(int *)local_30 == -1) {
      return 0;
    }
    if (*(int *)local_30 == 0) goto LAB_10057bb7f;
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    iVar3 = *(int *)local_30;
    UNLOCK();
    uVar6 = 0;
  }
  if (iVar3 != 0) {
    return uVar6;
  }
LAB_10057bb7f:
  QArrayData::deallocate(local_30,1,8);
  return uVar6;
}

