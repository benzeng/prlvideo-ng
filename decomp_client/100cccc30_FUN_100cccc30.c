
void FUN_100cccc30(QString *param_1,QString *param_2)

{
  undefined *puVar1;
  QArrayData *local_40;
  undefined1 local_32;
  
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  QString::operator=(param_1,param_2);
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100ccce00(param_1,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_32 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  return;
}

