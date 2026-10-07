
void FUN_10008af70(void)

{
  char cVar1;
  long *plVar2;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (DAT_1011c3690 != (long *)0x0) {
    plVar2 = DAT_1011c3690;
    do {
      DAT_1011c3690 = (long *)plVar2[2];
      cVar1 = FUN_1006d81f0(1);
      if ((cVar1 == '\0') && (cVar1 = FUN_1008e9140(), cVar1 != '\0')) {
        QString::operator=(&local_28,(QString *)(*plVar2 + 8));
      }
      (**(code **)(*(long *)*plVar2 + 0x38))((long *)*plVar2,(int)plVar2[1]);
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      if (*(int *)(local_28.field0_0x0 + 4) != 0) {
        FUN_1008eb5d0(&local_28);
      }
      plVar2 = DAT_1011c3690;
    } while (DAT_1011c3690 != (long *)0x0);
  }
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

