
void FUN_100435dc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  long *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  if (*(int *)(*(long *)(*param_5 + 0x10) + 0x40) != 0x30d42) {
    return;
  }
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(*(long *)(*param_5 + 0x10) + 0x80) + 0x10) + 0x14);
  local_30 = (long *)0x0;
  if (param_4 == 0) {
    cVar4 = FUN_100433250(param_1,param_3,uVar2,&local_30);
    if (cVar4 != '\0') {
      uVar5 = FUN_100433970(param_1,param_3,&local_30,0);
      if ((uVar5 | 2) == 2) goto LAB_100435f04;
      FUN_1008e3970("","IODesktopServer",0,
                    "Error: sending of encoded display package has been failed, res=%d");
      FUN_100432fc0(param_1,param_3,uVar2);
    }
  }
  else {
    FUN_1008e3970("","IODesktopServer",0,"Error: handle after send result \'%d\'",param_4);
    FUN_100432fc0(param_1,param_3,uVar2);
  }
  cVar4 = FUN_100432e30(param_1,param_3,uVar2);
  if (cVar4 != '\0') {
    local_38 = (QArrayData *)*param_3;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_100439860(param_1,&local_38,uVar2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100435f04;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100435f04:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}

