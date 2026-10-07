
void FUN_10042fc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toUtf8();
  pQVar4 = local_40;
  iVar2 = *(int *)(local_40 + 4);
  puVar5 = operator_new__((ulong)(iVar2 + 0x24U));
  local_48 = operator_new(0x18);
  *(undefined4 *)(local_48 + 1) = 1;
  local_48[2] = (long)puVar5;
  *local_48 = (long)&PTR_FUN_100bef320;
  *puVar5 = param_4;
  puVar5[1] = param_5;
  puVar5[2] = param_6;
  puVar5[3] = param_7;
  *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(pQVar4 + 4);
  _memcpy((void *)((long)puVar5 + 0x24),pQVar4 + *(long *)(pQVar4 + 0x10),(long)*(int *)(pQVar4 + 4)
         );
  FUN_100434a40(param_1,param_2,0x30d46,&local_48,iVar2 + 0x24U,&DAT_1011ccb98,0);
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
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

