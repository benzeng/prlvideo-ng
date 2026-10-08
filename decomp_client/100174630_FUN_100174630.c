
void FUN_100174630(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  QString local_28;
  undefined1 local_1a;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    QString::operator=(&local_28,(QString *)(param_1 + 0x28));
  }
  else {
    QString::operator=(&local_28,(QString *)(param_1 + 0x38));
  }
  if (param_2 != '\0') {
    uVar2 = FUN_100152280();
    cVar1 = FUN_100154f20(uVar2,&local_28,1);
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"Warning: not enabling local login for not-local server");
      goto LAB_1001746b8;
    }
  }
  *(char *)(param_1 + 0xf6) = param_2;
LAB_1001746b8:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

