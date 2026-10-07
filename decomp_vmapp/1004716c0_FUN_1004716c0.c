
undefined8 FUN_1004716c0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined1 local_19;
  
  iVar2 = FUN_1000ec2a0();
  if (iVar2 == 0) {
    if (DAT_1011b55f8 < 1) {
      return 0;
    }
    pcVar3 = "Error: failed to start TIS resume";
  }
  else {
    local_20 = 0;
    local_24 = 0;
    iVar2 = FUN_1000ec3b0(&local_24,4,&local_20,0);
    if (iVar2 == 0) {
      if (DAT_1011b55f8 < 1) {
        return 0;
      }
      FUN_1008e3970("TIS","TISHost",1,"Warning: failed to resume TIS version (which must be %i)",1);
      return 0;
    }
    if (local_20 == 0) {
      if (DAT_1011b55f8 < 1) {
        return 0;
      }
      pcVar3 = "Warning: tisSaReSectionVersion not found";
    }
    else {
      if (local_24 != 1) {
        if (DAT_1011b55f8 < 1) {
          return 0;
        }
        FUN_1008e3970("TIS","TISHost",1,
                      "Warning: TIS resume version is invalid (must be %i, but it is %i)",1);
        return 0;
      }
      local_28 = 0;
      iVar2 = FUN_1000ec3b0(&local_28,4,&local_20,0);
      puVar1 = PTR_shared_null_100ba20d0;
      if (iVar2 == 0) {
        if (DAT_1011b55f8 < 1) {
          return 0;
        }
        pcVar3 = "Warning: failed to resume TIS query size";
      }
      else {
        if (local_20 != 0) {
          local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
          QByteArray::resize((int)&local_30);
          if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
          }
          iVar2 = FUN_1000ec3b0(local_30 + *(long *)(local_30 + 0x10),local_28,&local_20,0);
          if (iVar2 == 0) {
            if (0 < DAT_1011b55f8) {
              FUN_1008e3970("TIS","TISHost",1,
                            "Warning: failed to resume TIS query (which is %ibytes)",local_28);
            }
          }
          else if (local_20 == 0) {
            if (0 < DAT_1011b55f8) {
              FUN_1008e3970("TIS","TISHost",1,"Warning: tisSaReSectionQuery not found");
            }
          }
          else {
            iVar2 = FUN_1000ec640();
            if (iVar2 == 0) {
              if (0 < DAT_1011b55f8) {
                FUN_1008e3970("TIS","TISHost",1,"Warning: failed to stop TIS resume");
              }
            }
            else {
              local_38 = (QArrayData *)puVar1;
              iVar2 = FUN_10047ac50(param_1,&local_30,&local_38,&DAT_1011cc7b8);
              if ((iVar2 != 0) && (0 < DAT_1011b55f8)) {
                FUN_1008e3970("TIS","TISHost",1,
                              "Warning: failed to execute TIS resume query with error %i",iVar2);
              }
              if (*(int *)local_38 != -1) {
                if (*(int *)local_38 != 0) {
                  LOCK();
                  *(int *)local_38 = *(int *)local_38 + -1;
                  local_19 = *(int *)local_38 != 0;
                  UNLOCK();
                  if ((bool)local_19) goto LAB_1004719f9;
                }
                QArrayData::deallocate(local_38,1,8);
              }
            }
          }
LAB_1004719f9:
          if (*(int *)local_30 == -1) {
            return 0;
          }
          if (*(int *)local_30 != 0) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + -1;
            UNLOCK();
            if (*(int *)local_30 != 0) {
              return 0;
            }
            local_19 = 0;
          }
          QArrayData::deallocate(local_30,1,8);
          return 0;
        }
        if (DAT_1011b55f8 < 1) {
          return 0;
        }
        pcVar3 = "Warning: tisSaReSectionQuerySize not found";
      }
    }
  }
  FUN_1008e3970("TIS","TISHost",1,pcVar3);
  return 0;
}

