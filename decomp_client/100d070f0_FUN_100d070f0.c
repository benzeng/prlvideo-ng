
void FUN_100d070f0(long *param_1,QString *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = (long)&PTR_FUN_10225b220;
  puVar2 = PTR_shared_null_1021e1288;
  param_1[1] = (long)PTR_shared_null_1021e1288;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)puVar2;
  QString::operator=((QString *)(param_1 + 1),param_2);
  if (*(int *)(((QString *)(param_1 + 1))->field0_0x0 + 4) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x40);
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
    (*pcVar1)(param_1,&local_40);
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
  }
  return;
}

