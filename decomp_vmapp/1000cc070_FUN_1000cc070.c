
undefined8 FUN_1000cc070(long param_1,undefined8 param_2)

{
  long *plVar1;
  QString *this;
  long *plVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  long *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cc0cb;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000cc0cb:
  FUN_10011a560(&local_40,param_2);
  lVar6 = 0;
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    lVar6 = local_40[2];
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_10012d350(&local_48,lVar6);
  this = (QString *)(param_1 + 0x440);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cc158;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000cc158:
  FUN_1000c81f0(param_1,0x4000000);
  FUN_1000c95f0(param_1,this);
  QFileInfo::absolutePath();
  FUN_100561050(&local_50,&local_58,this);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cc1c0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000cc1c0:
  FUN_1000e35c0(&local_50);
  QDir::mkdir(&local_30);
  cVar4 = FUN_1000d67e0(param_1 + 0x2b8,param_1 + 0x1d0);
  if (cVar4 == '\0') {
    FUN_1000c81f0(param_1,0);
    FUN_1008e3970("","vm",0,"Creating sav file failed");
    *(undefined4 *)(param_1 + 500) = 0x80000053;
    uVar7 = 0x80000053;
  }
  else {
    uVar5 = FUN_10011d660(lVar6);
    if ((uVar5 & 0x1000) == 0) {
      uVar7 = 0;
      FUN_10008fa70(param_1,3);
    }
    else {
      FUN_10012d4d0(&local_60,lVar6);
      QString::operator=((QString *)(param_1 + 0x358),&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_21 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000cc29c;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1000cc29c:
      FUN_1000cbe20(&local_68,lVar6);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      plVar2 = *(long **)(param_1 + 0x450);
      *(long **)(param_1 + 0x450) = local_68;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      if (local_68 != (long *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
      uVar7 = 0;
      FUN_10008fa70(param_1,5);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cc346;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000cc346:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  QDir::~QDir((QDir *)&local_30);
  return uVar7;
}

