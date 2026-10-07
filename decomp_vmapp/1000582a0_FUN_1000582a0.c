
void FUN_1000582a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  QArrayData *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar2 = *param_1;
  uVar5 = (ulong)(*(int *)(lVar2 + 4) + 0xc);
  puVar4 = operator_new__(uVar5);
  local_40 = operator_new(0x18);
  *(undefined4 *)(local_40 + 1) = 1;
  local_40[2] = (long)puVar4;
  *local_40 = (long)&PTR_FUN_100bef320;
  *puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = *(undefined4 *)(lVar2 + 4);
  _memcpy(puVar4 + 3,(void *)(*(long *)(lVar2 + 0x10) + lVar2),(long)*(int *)(lVar2 + 4));
  FUN_100791610(&local_48,0x18970,0,&local_40,uVar5,&DAT_1011ccb98,0);
  uVar3 = FUN_100433970(*(undefined8 *)(DAT_1011c3698 + 0xf0),param_2,&local_48,1);
  if ((uVar3 | 2) != 2) {
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"sendPackage failed to vm [%s], retCode = %d",
                  local_50 + *(long *)(local_50 + 0x10),uVar3);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000583d7;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1000583d7:
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

