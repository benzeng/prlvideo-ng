
void FUN_100554430(long param_1)

{
  QArrayData *pQVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100554070();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_1007614d0(param_1);
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005544c9;
      pQVar1 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005544c9:
  pQVar1 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005544f9;
      pQVar1 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005544f9:
  FUN_100761500(param_1);
  return;
}

