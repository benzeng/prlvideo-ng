
void FUN_1000a11c0(long param_1,int *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QString local_20;
  undefined1 local_11;
  
  if (3 < param_3) {
    *(bool *)(param_1 + 0x28) = *param_2 == 1;
  }
  uVar2 = FUN_1000a4ac0();
  FUN_1000a54f0(uVar2);
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x20);
  if ((lVar3 != 0) && (lVar3 = FUN_10018d490(lVar3), lVar3 != 0)) {
    uVar2 = FUN_10016f500(lVar3);
    cVar1 = FUN_10061c2b0(uVar2,0x10080);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
      FUN_1000a1330(param_1);
      return;
    }
  }
  if (*(undefined **)(param_1 + 0x30) != PTR_shared_null_1021e1288) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x30),&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  return;
}

