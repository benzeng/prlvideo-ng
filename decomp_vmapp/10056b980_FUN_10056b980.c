
undefined4 FUN_10056b980(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  undefined1 local_78 [24];
  undefined4 local_60;
  code *local_58;
  QMutex *local_50;
  QMutex local_48;
  QMutex local_40;
  char local_38;
  undefined4 local_34;
  long *local_30;
  
  QWaitCondition::QWaitCondition((QWaitCondition *)&local_48);
  QMutex::QMutex(&local_40,0);
  local_38 = '\0';
  local_34 = 0;
  *(int *)(param_1 + 0x251) = (int)param_1[0x251] + 1;
  local_30 = param_1;
  if (((long *)param_1[0x242] == (long *)0x0) ||
     (cVar3 = (**(code **)(*(long *)param_1[0x242] + 0x48))(), cVar3 != '\0')) {
    plVar2 = local_30;
    cVar3 = (**(code **)(*local_30 + 0x88))(local_30);
    while (cVar3 != '\0') {
      (**(code **)(*plVar2 + 0x110))(plVar2,0xffffffff);
      cVar3 = (**(code **)(*plVar2 + 0x88))(plVar2);
    }
    (**(code **)(*local_30 + 0x78))(local_30,FUN_10056b940,&local_48);
  }
  else {
    local_58 = FUN_10056bbb0;
    local_60 = 0;
    local_50 = &local_48;
    cVar3 = (**(code **)(*(long *)param_1[0x242] + 0x20))((long *)param_1[0x242],local_78);
    if (cVar3 == '\0') {
      FUN_1008e3970("","vdisk",0,"Error: can\'t enqueue sync flush request");
      local_34 = 0x80000016;
      goto LAB_10056baee;
    }
  }
  QMutex::lock();
  if ((local_38 == '\0') && (QWaitCondition::wait(&local_48,(ulong)&local_40), local_38 == '\0')) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","done","DiskStatesImp.cpp",0x4b8
                  ,"wait");
  }
  QMutex::unlock();
LAB_10056baee:
  uVar1 = local_34;
  *(int *)(param_1 + 0x251) = (int)param_1[0x251] + -1;
  QMutex::~QMutex(&local_40);
  QWaitCondition::~QWaitCondition((QWaitCondition *)&local_48);
  return uVar1;
}

