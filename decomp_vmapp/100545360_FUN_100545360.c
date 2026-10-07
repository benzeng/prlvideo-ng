
void FUN_100545360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (param_5 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"%s(%s,%#llx,%#llx) failed",param_1,
                  local_48 + *(long *)(local_48 + 0x10),param_3,param_4);
    if (*(int *)local_48 == -1) {
      return;
    }
    local_40 = local_48;
    if (*(int *)local_48 == 0) goto LAB_100545469;
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    iVar1 = *(int *)local_48;
    UNLOCK();
  }
  else {
    QString::toUtf8();
    lVar2 = *(long *)(local_40 + 0x10);
    uVar3 = (**(code **)(*param_5 + 0xb8))(param_5);
    FUN_1008e3970("","TransMem",0,"%s(%s,%#llx,%#llx) created %s memory model",param_1,
                  local_40 + lVar2,param_3,param_4,uVar3);
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 == 0) goto LAB_100545469;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    iVar1 = *(int *)local_40;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_100545469:
  QArrayData::deallocate(local_40,1,8);
  return;
}

