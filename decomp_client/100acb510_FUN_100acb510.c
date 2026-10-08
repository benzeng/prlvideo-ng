
undefined8
FUN_100acb510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x78);
    *param_5 = *(undefined8 *)(lVar2 + 0xac0);
    uVar3 = FUN_100ad4340(lVar2,param_2,param_3,param_4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

