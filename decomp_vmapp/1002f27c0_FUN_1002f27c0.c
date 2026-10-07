
void FUN_1002f27c0(long param_1,uint param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  FUN_1008e3970("","LocalDevices",0,"applevisor status callback: %d",param_2);
  param_2 = -(uint)(param_3 == (long *)0x0) | param_2;
  if (-1 < (int)param_2) {
    if (DAT_101117228 == 0) {
      puVar1 = (undefined4 *)param_3[1];
      *(undefined2 *)(param_1 + 0x1c0) = *(undefined2 *)(puVar1 + 1);
      *(undefined4 *)(param_1 + 0x1bc) = *puVar1;
    }
    uVar2 = *(undefined8 *)*param_3;
    *(undefined8 *)(param_1 + 0xad) = ((undefined8 *)*param_3)[1];
    *(undefined8 *)(param_1 + 0xa5) = uVar2;
  }
  QMutex::lock();
  *(uint *)(param_1 + 0xa0) = param_2;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

