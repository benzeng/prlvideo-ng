
undefined4 FUN_100482130(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long *local_120;
  CVmConfiguration local_118 [248];
  
  uVar2 = *(undefined8 *)(DAT_1011c3698 + 0x110);
  CVmConfiguration::CVmConfiguration(local_118);
  plVar4 = DAT_1011ccb98;
  local_120 = DAT_1011ccb98;
  if (DAT_1011ccb98 != (long *)0x0) {
    LOCK();
    *(int *)(DAT_1011ccb98 + 1) = (int)DAT_1011ccb98[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_100491e20(param_1,uVar2,local_118,&local_120,0,1);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  CVmConfiguration::~CVmConfiguration(local_118);
  return uVar5;
}

