
undefined8 FUN_100759b60(undefined8 param_1,uint param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  ulong uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      FUN_100759830();
      local_50 = (QArrayData *)QString::fromAscii_helper("_%1",3);
      QString::arg(&local_48,&local_50,*(undefined4 *)(param_3 + 0x5b8),0,10,0x20);
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_4;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_40);
      cVar1 = FUN_100758590(param_1,1,param_3);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759c4b;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100759c4b:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759c7b;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100759c7b:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759cab;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100759cab:
      if (cVar1 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Couldn\'t write elf minidump for %u vcpu",
                      *(undefined4 *)(param_3 + 0x5b8));
      }
      uVar2 = uVar2 + 1;
      param_3 = param_3 + 0x768;
    } while (uVar2 < param_2);
  }
  return 1;
}

