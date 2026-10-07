
int FUN_1006857c0(long *param_1,QString *param_2)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  int local_44;
  undefined1 local_40 [16];
  QString local_30 [2];
  undefined1 local_19;
  
  if (param_1 == (long *)0x0) {
    pcVar3 = "Can\'t clone NULL image";
  }
  else {
    if (*(int *)(param_2->field0_0x0 + 4) != 0) {
      local_30[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      local_44 = (**(code **)(*param_1 + 0x38))(param_1,local_40);
      if (local_44 < 0) {
        FUN_1008e3970("","dimg",0,"Can\'t get parameters of source image (0x%x)");
      }
      else {
        QString::operator=(local_30,param_2);
        plVar2 = (long *)FUN_1006848d0(local_40,0x4003,&DAT_1011bcbc8,&local_44,0);
        if (plVar2 == (long *)0x0) {
          FUN_1008e3970("","dimg",0,"Can\'t create image clone (0x%x)",local_44);
        }
        else {
          (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x20))(plVar2);
        }
      }
      iVar1 = local_44;
      if (*(int *)local_30[0].field0_0x0 == -1) {
        return local_44;
      }
      if (*(int *)local_30[0].field0_0x0 != 0) {
        LOCK();
        *(int *)local_30[0].field0_0x0 = *(int *)local_30[0].field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30[0].field0_0x0 != 0) {
          return local_44;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30[0].field0_0x0,2,8);
      return iVar1;
    }
    pcVar3 = "Can\'t clone image to unset name";
  }
  FUN_1008e3970("","dimg",0,pcVar3);
  return -0x7ffffffd;
}

