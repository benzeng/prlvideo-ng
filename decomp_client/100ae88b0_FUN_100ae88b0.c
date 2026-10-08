
void FUN_100ae88b0(QApplication *param_1,int *param_2,char **param_3,byte param_4)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  QApplication::QApplication(param_1,param_2,param_3,(uint)param_4);
  *(undefined ***)param_1 = &PTR_FUN_10223b460;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100ae8800(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

