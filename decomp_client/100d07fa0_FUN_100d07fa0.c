
void FUN_100d07fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = FUN_100d07820();
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  if (lVar1 == 0) {
    lVar1 = FUN_100d07760(param_1,param_2);
  }
  if (param_5 == 10) {
    uVar2 = QString::sprintf((char *)&local_40,"%d",(ulong)param_4);
    FUN_100d13430(lVar1,param_3,uVar2);
  }
  else {
    uVar2 = QString::sprintf((char *)&local_40,"0x%08x",(ulong)param_4);
    FUN_100d13430(lVar1,param_3,uVar2);
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

