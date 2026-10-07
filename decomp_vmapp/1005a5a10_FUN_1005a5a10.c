
void FUN_1005a5a10(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  QString local_30;
  undefined1 local_21;
  
  FUN_1005a5340();
  FUN_1008e3970("","vdisk",0,"Info: Autodeleting disks references");
  for (plVar4 = *(long **)(param_1 + 0x60); plVar4 != (long *)(param_1 + 0x58);
      plVar4 = (long *)plVar4[1]) {
    if ((char)plVar4[3] != '\0') {
      (**(code **)(*(long *)plVar4[2] + 0x10))();
    }
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    plVar4 = *(long **)(param_1 + 0x60);
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    *(undefined8 *)(param_1 + 0x68) = 0;
    while (plVar4 != (long *)(param_1 + 0x58)) {
      plVar3 = (long *)plVar4[1];
      operator_delete(plVar4);
      plVar4 = plVar3;
    }
  }
  if (*(undefined **)(param_1 + 0xc0) != PTR_shared_null_100ba20d0) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0xc0),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30.field0_0x0 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  return;
}

