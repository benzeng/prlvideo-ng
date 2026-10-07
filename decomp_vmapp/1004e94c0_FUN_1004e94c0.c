
/* WARNING: Removing unreachable block (ram,0x0001004e9985) */

void FUN_1004e94c0(QByteArray *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  iVar1 = FUN_1000ec2a0();
  if (iVar1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_40 = QString::fromAscii_helper("CustomSubSystemStartRead() failed",0x21);
    FUN_1004eb830(uVar2,&local_40);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_4c = 0;
  local_50 = 0;
  iVar1 = FUN_1000ec3b0(&local_4c,4,&local_50,0);
  if (iVar1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_58 = QString::fromAscii_helper("CustomSubSystemContinueRead() #1 failed",0x27);
    FUN_1004eb830(uVar2,&local_58);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  if (1 < local_4c - 0x11U) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_60 = QString::fromAscii_helper("invalid SaRe for Shared Folders version",0x27);
    FUN_1004eb830(uVar2,&local_60);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  local_64 = 0;
  iVar1 = FUN_1000ec3b0(&local_64,4,&local_50,0);
  if (iVar1 != 0) {
    QByteArray::resize((int)&local_48);
    if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f)
      ;
    }
    iVar1 = FUN_1000ec3b0(local_48 + *(long *)(local_48 + 0x10),local_64,&local_50,0);
    if (iVar1 != 0) {
      iVar1 = FUN_1000ec640();
      if (iVar1 == 0) {
        uVar2 = ___cxa_allocate_exception(0x10);
        local_80 = QString::fromAscii_helper("CustomSubSystemStopRead() failed",0x20);
        FUN_1004eb830(uVar2,&local_80);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
      }
      QByteArray::operator=(param_1,(QByteArray *)&local_48);
      *param_2 = local_4c;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_48,1,8);
      }
      return;
    }
    uVar2 = ___cxa_allocate_exception(0x10);
    local_78 = QString::fromAscii_helper("CustomSubSystemContinueRead() #2 failed",0x27);
    FUN_1004eb830(uVar2,&local_78);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  uVar2 = ___cxa_allocate_exception(0x10);
  local_70 = QString::fromAscii_helper("CustomSubSystemContinueRead() #1 failed",0x27);
  FUN_1004eb830(uVar2,&local_70);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

