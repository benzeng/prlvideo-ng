
void FUN_1000a38f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  QArrayData *local_70;
  QString local_68;
  undefined1 local_60 [32];
  int local_40;
  undefined1 local_31;
  
  local_40 = FUN_100a68200(local_60,param_2,param_3,0);
  if (local_40 != -7) {
    if (local_40 != 0) {
      piVar5 = (int *)___cxa_allocate_exception(4);
      *piVar5 = local_40;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar5,&PTR_vtable_10226c9d0,0);
    }
    local_40 = 0;
    do {
      iVar1 = FUN_100a683a0(local_60);
      if (iVar1 == 0x200f) {
        uVar2 = FUN_100a68390(local_60);
        if (3 < uVar2) {
          puVar3 = (undefined4 *)FUN_100a68370(local_60);
          *(undefined4 *)(param_1 + 0x38) = *puVar3;
        }
      }
      else if (iVar1 == 0x200d) {
        pcVar4 = (char *)FUN_100a68370(local_60);
        iVar1 = FUN_100a68390(local_60);
        if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
          _strlen(pcVar4);
        }
        QString::fromUtf8_helper((char *)&local_70,(int)pcVar4);
        QString::normalized(&local_68,&local_70,1,0);
        QString::operator=((QString *)(param_1 + 0x30),&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000a39fc;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1000a39fc:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000a3a30;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_1000a3a30:
      local_40 = FUN_100a682f0(local_60);
    } while (local_40 == 0);
    if (local_40 != -7) {
      piVar5 = (int *)___cxa_allocate_exception(4);
      *piVar5 = local_40;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar5,&PTR_vtable_10226c9d0,0);
    }
  }
  return;
}

