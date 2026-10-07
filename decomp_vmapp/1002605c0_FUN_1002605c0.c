
void FUN_1002605c0(undefined8 *param_1,undefined8 param_2,CVmSerialPort *param_3)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  undefined4 *puVar4;
  QArrayData *local_40;
  undefined1 local_32;
  
  *param_1 = &PTR_FUN_100baed40;
  param_1[1] = param_2;
  CVmSerialPort::CVmSerialPort((CVmSerialPort *)(param_1 + 2),param_3);
  QMutex::QMutex((QMutex *)(param_1 + 0x25),0);
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  plVar3 = (long *)FUN_100707430(0xffffffff,1);
  param_1[0x21] = plVar3;
  pcVar1 = *(code **)(*plVar3 + 0x18);
  CVmDevice::getSystemName();
  (*pcVar1)(plVar3,&local_40,2,1,0x200,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10026069d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026069d:
  cVar2 = (**(code **)(*(long *)param_1[0x21] + 0x98))();
  if (cVar2 == '\0') {
    puVar4 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar4 = 0x80006002;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_100ba22d8,0);
  }
  (**(code **)(*(long *)param_1[0x21] + 0x60))((long *)param_1[0x21],0,2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 0x18;
  *(byte *)((long)param_1 + 0x126) = *(byte *)((long)param_1 + 0x126) & 0xf0 | 3;
  (**(code **)(*(long *)param_1[1] + 0x28))((long *)param_1[1],param_1 + 0x22);
  return;
}

