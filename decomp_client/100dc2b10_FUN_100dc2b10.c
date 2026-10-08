
undefined8 * FUN_100dc2b10(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)QString::fromAscii_helper("ls -lR \"%1\"",0xb);
  QString::arg(&local_30,&local_38,param_2,0,0x20);
  cVar1 = FUN_100dc0bd0(&local_30,&local_28,0,0,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100dc2b9f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100dc2b9f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100dc2bcf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100dc2bcf:
  if (cVar1 == '\0') {
    uVar2 = QString::fromAscii_helper("",0);
    *param_1 = uVar2;
  }
  else {
    *param_1 = local_28;
    if (1 < *(int *)local_28 + 1U) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

