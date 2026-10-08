
undefined8 FUN_1000a2000(long param_1,QString *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  QString local_40;
  undefined1 local_32;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,(QString *)(param_1 + 0x20));
  if (lVar3 == 0) {
    return 0;
  }
  QString::operator=(param_2,(QString *)(param_1 + 0x20));
  FUN_10018d830(&local_40,lVar3);
  QString::operator=(param_2 + 1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1000a208c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000a208c:
  QString::operator=(param_2 + 2,(QString *)(param_1 + 0x30));
  *(undefined1 *)((long)&param_2[3].field0_0x0 + 4) = *(undefined1 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)&param_2[3].field0_0x0 = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}

