
undefined4
FUN_10056c540(long *param_1,undefined1 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_98 [24];
  undefined4 local_80;
  code *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  QMutex local_50;
  QMutex local_48;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined1 local_34;
  
  QMutex::QMutex(&local_50,0);
  QWaitCondition::QWaitCondition((QWaitCondition *)&local_48);
  if ((*(byte *)(param_1 + 0x228) & 0x28) == 0) {
    if (param_1[0x225] == param_1[0x226]) {
      uVar4 = 0x80019016;
      FUN_1008e3970("","vdisk",0,"Error: disk was not opened correctly!");
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x2e0))(param_1);
      if ((ulong)param_4 % uVar2 == 0) {
        local_40 = 0;
        local_3c = 0;
        local_78 = FUN_10056c780;
        local_70 = &local_68;
        local_80 = 0;
        local_68 = param_5;
        local_60 = param_3;
        local_58 = param_1;
        local_38 = param_4;
        local_34 = param_2;
        cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x18))((long *)param_1[0x242],local_98);
        if (cVar1 == '\0') {
          uVar4 = 0x80021025;
          FUN_1008e3970("","vdisk",0,"Error: device sync request was not acked");
        }
        else {
          QMutex::lock();
          if (local_3c != 0) {
            QWaitCondition::wait(&local_48,(ulong)&local_50);
          }
          QMutex::unlock();
          FUN_1005ad450(param_1 + 2);
          uVar4 = local_40;
        }
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
        FUN_1008e3970("","vdisk",0,"Error: size (%u) is unaligned on sector size (%llu)!",
                      (ulong)param_4,uVar3);
        uVar4 = 0x80021035;
      }
    }
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: disk is opened as fake");
    uVar4 = 0x80021035;
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)&local_48);
  QMutex::~QMutex(&local_50);
  return uVar4;
}

