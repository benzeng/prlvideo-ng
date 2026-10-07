
void FUN_100615560(void)

{
  undefined8 *puVar1;
  QString local_28;
  undefined1 local_1a;
  
  QMutex::lock();
  puVar1 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1008e3970("","prlplg",0,"Error allocating memory for static object");
    goto LAB_10061567b;
  }
  puVar1[2] = PTR_shared_null_100ba20d0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[7] = puVar1 + 7;
  puVar1[8] = puVar1 + 7;
  puVar1[9] = puVar1 + 9;
  puVar1[10] = puVar1 + 9;
  local_28.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Statically compiled plugins",0x1b);
  QString::operator=((QString *)(puVar1 + 2),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_1a = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10061563d;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10061563d:
  puVar1[5] = FUN_1006199e0;
  puVar1[6] = FUN_100619be0;
  FUN_100618ad0(puVar1);
LAB_10061567b:
  QMutex::unlock();
  return;
}

