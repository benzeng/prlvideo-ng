
undefined8 FUN_1006970e0(long *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong local_38;
  ulong local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar2 = (**(code **)(*param_1 + 0x150))();
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,
                  "Can\'t fill real disk \"%s\" parameters, because it is not opened. [%p]",
                  local_28 + *(long *)(local_28 + 0x10),param_1[1]);
    uVar4 = 0x80021021;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0x80021021;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  else {
    local_30 = 0;
    local_38 = 0;
    uVar3 = (**(code **)(*(long *)param_1[1] + 0xa0))((long *)param_1[1],0,0,0);
    cVar2 = FUN_100762380(uVar3,&local_30,&local_38);
    if (cVar2 == '\0') {
      FUN_1008e3970("","dimg",0,"Can\'t determine disk parameters");
      uVar4 = 0x80024003;
    }
    else {
      param_1[7] = local_38;
      uVar4 = 0;
      param_1[4] = local_30 / local_38;
      *(undefined4 *)((long)param_1 + 0x2c) = 4;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_38;
      *(int *)(param_1 + 5) = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x100000)) / auVar1,0);
      QString::operator=((QString *)(param_1 + 6),(QString *)(param_1 + 2));
    }
  }
  return uVar4;
}

