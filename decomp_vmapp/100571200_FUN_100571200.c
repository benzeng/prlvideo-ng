
int FUN_100571200(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  if (param_1[0x225] == param_1[0x226]) {
    FUN_1008e3970("","vdisk",0,"Disk was not opened correctly!");
    iVar2 = -0x7ffe6fea;
    goto LAB_100571407;
  }
  cVar1 = FUN_1007ea210(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
    iVar2 = 0;
    if (cVar1 == '\0') goto LAB_100571407;
  }
  cVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x188))(local_48,param_1);
    iVar2 = FUN_1007ea6f0(param_2,local_48);
    if (iVar2 != 0) {
      FUN_1008e3970("","vdisk",0,"DeleteState() found uncommited operation");
      iVar2 = -0x7ffdef9e;
      goto LAB_100571407;
    }
    iVar2 = (**(code **)(*param_1 + 400))(param_1);
    param_3 = iVar2 == 4;
  }
  cVar1 = FUN_1007ea210(param_2);
  if (cVar1 == '\0') {
    lVar3 = FUN_1005f6150(4,param_1);
    if (lVar3 != 0) {
      plVar4 = (long *)___dynamic_cast(lVar3,&PTR_vtable_100bc7fa0,&PTR_vtable_100bc8000,0);
      if (plVar4 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar4 + 0x120))(plVar4,param_2,param_3,param_4,param_5);
        if (iVar2 < 0) {
          FUN_1008e3970("","vdisk",0,"Operation init failed, err = 0x%X",iVar2);
          (**(code **)(*plVar4 + 0x58))(plVar4);
        }
        else {
          param_1[0x239] = (long)plVar4;
          iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        goto LAB_1005713fd;
      }
    }
    FUN_1008e3970("","vdisk",0,"Failed to create object");
    iVar2 = -0x7ffeffed;
  }
  else {
    QMutex::lock();
    iVar2 = (**(code **)(*param_1 + 0x398))(param_1);
    QMutex::unlock();
  }
LAB_1005713fd:
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100571407:
  if (lVar3 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

