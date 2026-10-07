
undefined8 *
FUN_100069140(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long *param_4,
             undefined1 param_5,undefined4 param_6,char param_7)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *local_50;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toUtf8();
  uVar2 = *(uint *)(local_40 + 4);
  if ((int)uVar2 < 1) {
    *param_1 = 0;
  }
  else {
    if (((param_7 == '\0') || (*param_4 == 0)) || (*(long *)(*param_4 + 0x10) == 0)) {
      FUN_10078f4f0(&local_48,param_2,param_6,param_4,param_5);
      plVar4 = local_48;
      if (local_48 != (long *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
    }
    else {
      FUN_100790f30(&local_50,param_4,1);
      if (local_50 != (long *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      *(undefined4 *)(local_50[2] + 0x40) = param_2;
      plVar4 = local_50;
    }
    lVar3 = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = plVar4[2];
    }
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_10078f730(lVar3,0,0,local_40 + *(long *)(local_40 + 0x10),uVar2 + 1);
    *param_1 = plVar4;
    if (plVar4 != (long *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return param_1;
}

