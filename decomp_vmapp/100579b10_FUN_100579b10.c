
undefined1 FUN_100579b10(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  if (3 < DAT_1011b55f8) {
    lVar2 = param_1[4];
    QString::toUtf8();
    iVar1 = (int)param_1[6];
    if ((long)iVar1 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",lVar2,
                  local_38 + *(long *)(local_38 + 0x10),param_1[5],pcVar4);
    uVar6 = (undefined4)((ulong)pcVar4 >> 0x20);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_100579be2;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100579be2:
  cVar3 = (**(code **)(**(long **)(param_1[4] + 0x1210) + 0x50))();
  if (cVar3 == '\0') {
    lVar2 = param_1[4];
    QString::toUtf8();
    iVar1 = (int)param_1[6];
    if ((long)iVar1 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",0,
                  "[%p]%s[%zu] Terminated by AsyncDev state changing in state [%s]",lVar2,
                  local_40 + *(long *)(local_40 + 0x10),param_1[5],pcVar4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100579d65;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100579d65:
    FUN_100577fb0(param_1);
LAB_10057a049:
    uVar5 = 0;
  }
  else {
    if (((int)param_1[0xc] != 0) && ((long *)*param_1 == param_1)) {
      FUN_100577e90(param_1);
      goto LAB_10057a049;
    }
    if (param_2 == -0x7ffdefe9) {
      if (DAT_1011b55f8 < 4) {
        return 1;
      }
      lVar2 = param_1[4];
      QString::toUtf8();
      iVar1 = (int)param_1[6];
      if ((long)iVar1 == -1) {
        pcVar4 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar4 = "Disabled";
      }
      else {
        pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Continue  in state [%s]",lVar2,
                    local_48 + *(long *)(local_48 + 0x10),param_1[5],pcVar4);
      if (*(int *)local_48 == -1) {
        return 1;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        iVar1 = *(int *)local_48;
        UNLOCK();
        goto joined_r0x00010057a104;
      }
    }
    else {
      if (param_2 < 0) {
        FUN_10057aa00(param_1);
        lVar2 = param_1[4];
        QString::toUtf8();
        iVar1 = (int)param_1[6];
        if ((long)iVar1 == -1) {
          pcVar4 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar4 = "Disabled";
        }
        else {
          pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",0,"[%p]%s[%zu] Error %d (0x%X). Done in state [%s]",lVar2,
                      local_50 + *(long *)(local_50 + 0x10),param_1[5],CONCAT44(uVar6,param_2),
                      param_2,pcVar4);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            UNLOCK();
            if (*(int *)local_50 != 0) goto LAB_10057a049;
          }
          QArrayData::deallocate(local_50,1,8);
        }
        goto LAB_10057a049;
      }
      iVar1 = (int)param_1[6];
      if (iVar1 == 5) {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("Compact","vdisk",3,"[%p] # of dropped blocks %llu",param_1[4],param_1[0xe])
          ;
        }
        *(undefined4 *)(param_1 + 6) = 4;
        FUN_100577e90(param_1);
        if (DAT_1011b55f8 < 4) {
          return 1;
        }
        lVar2 = param_1[4];
        QString::toUtf8();
        iVar1 = (int)param_1[6];
        if ((long)iVar1 == -1) {
          pcVar4 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar4 = "Disabled";
        }
        else {
          pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] MOVE Done (state [%s])",lVar2,
                      local_68 + *(long *)(local_68 + 0x10),param_1[5],pcVar4);
        if (*(int *)local_68 == -1) {
          return 1;
        }
        local_48 = local_68;
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          iVar1 = *(int *)local_68;
          UNLOCK();
          goto joined_r0x00010057a104;
        }
      }
      else if (iVar1 == 4) {
        cVar3 = FUN_100597040(*(undefined8 *)(*(long *)(param_1[4] + 0x1128) + param_1[5] * 8));
        if (cVar3 == '\0') {
          FUN_10057a510(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 6) = 5;
          FUN_100577e90(param_1);
        }
        if (DAT_1011b55f8 < 4) {
          return 1;
        }
        lVar2 = param_1[4];
        QString::toUtf8();
        iVar1 = (int)param_1[6];
        if ((long)iVar1 == -1) {
          pcVar4 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar4 = "Disabled";
        }
        else {
          pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] SEARCH done in state [%s]",lVar2,
                      local_60 + *(long *)(local_60 + 0x10),param_1[5],pcVar4);
        if (*(int *)local_60 == -1) {
          return 1;
        }
        local_48 = local_60;
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          iVar1 = *(int *)local_60;
          UNLOCK();
          goto joined_r0x00010057a104;
        }
      }
      else if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 6) = 2;
        FUN_100577e90(param_1);
        if (DAT_1011b55f8 < 4) {
          return 1;
        }
        lVar2 = param_1[4];
        QString::toUtf8();
        iVar1 = (int)param_1[6];
        if ((long)iVar1 == -1) {
          pcVar4 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar4 = "Disabled";
        }
        else {
          pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] CONSISTENCY done (state [%s])",lVar2,
                      local_58 + *(long *)(local_58 + 0x10),param_1[5],pcVar4);
        if (*(int *)local_58 == -1) {
          return 1;
        }
        local_48 = local_58;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          iVar1 = *(int *)local_58;
          UNLOCK();
joined_r0x00010057a104:
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      else {
        lVar2 = param_1[4];
        QString::toUtf8();
        iVar1 = (int)param_1[6];
        if ((long)iVar1 == -1) {
          pcVar4 = "Invalid";
        }
        else if (iVar1 == -2) {
          pcVar4 = "Disabled";
        }
        else {
          pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
        }
        FUN_1008e3970("Compact","vdisk",0,"[%p]%s[%zu] Called in wrong state [%s]",lVar2,
                      local_70 + *(long *)(local_70 + 0x10),param_1[5],pcVar4);
        if (*(int *)local_70 == -1) {
          return 1;
        }
        local_48 = local_70;
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          iVar1 = *(int *)local_70;
          UNLOCK();
          goto joined_r0x00010057a104;
        }
      }
    }
    uVar5 = 1;
    QArrayData::deallocate(local_48,1,8);
  }
  return uVar5;
}

