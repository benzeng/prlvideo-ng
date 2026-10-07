
void FUN_10046c480(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bad_alloc *this;
  int iVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  long *local_38;
  char local_2a;
  undefined1 local_29;
  
  uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
  uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  FUN_100791380(&local_38,0x30d41,0,uVar6,uVar5,&DAT_1011ccb98,1);
  if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
    this = (bad_alloc *)___cxa_allocate_exception(8);
    std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_100ba22c0,PTR__bad_alloc_100ba21b8);
  }
  (**(code **)(*param_1 + 0x120))(&local_40,param_1,param_2,&local_38);
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) && (local_40[2] != 0)) {
    local_2a = '\0';
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    cVar4 = FUN_100796350(local_40[2],0x32,&local_2a);
    iVar7 = 4;
    if ((cVar4 != '\0') && (iVar7 = 0, local_2a != '\0')) {
      iVar7 = 5;
    }
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    if (iVar7 == 0) goto LAB_10046c726;
    if (iVar7 == 4) {
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("TIS","TISHost",3,"Send timeout to client %p:\"%s\"",param_1,
                      local_48 + *(long *)(local_48 + 0x10));
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_29 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10046c726;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
      goto LAB_10046c726;
    }
  }
  if (0 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("TIS","TISHost",1,"Send failed to client %p:\"%s\"",param_1,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046c726;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_10046c726:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}

