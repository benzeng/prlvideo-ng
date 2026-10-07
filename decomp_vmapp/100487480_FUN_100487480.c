
undefined4
FUN_100487480(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,long *param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *local_38;
  
  lVar2 = *param_2;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"FAKE_SESSION_UUID",
                     0xffffffff,1);
  uVar4 = 0x80034002;
  if (iVar3 != 0) {
    param_7 = (long *)*param_7;
    if (param_7 != (long *)0x0) {
      LOCK();
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      UNLOCK();
    }
    local_38 = param_7;
    uVar4 = FUN_100486cb0(param_1,param_2,param_3,param_4,param_5,param_6 | 0x1000000,&local_38,
                          param_8,0,2);
    if (param_7 != (long *)0x0) {
      LOCK();
      plVar1 = param_7 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*param_7 + 0x10))(param_7);
      }
    }
  }
  return uVar4;
}

