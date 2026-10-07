
undefined1
FUN_1000502d0(long param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  
  QMutex::lock();
  if (param_5 != '\0') {
    FUN_100050750(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    if ((param_4 != '\0') && (cVar2 = FUN_100050490(param_1,param_2,param_3), cVar2 != '\0')) {
      uVar3 = 1;
      if (0x10 < *(int *)(*(long *)(param_1 + 0x78) + 0xc) - *(int *)(*(long *)(param_1 + 0x78) + 8)
         ) {
        FUN_1000501c0(param_1);
      }
      goto LAB_100050397;
    }
  }
  else {
    cVar2 = FUN_1000503e0(param_1,param_2,param_3,param_4);
    if (cVar2 != '\0') {
      lVar1 = *(long *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      QMutex::unlock();
      if (lVar1 == 0) {
        return 1;
      }
      FUN_1004c07d0(param_1,lVar1,0);
      return 1;
    }
  }
  uVar3 = 0;
LAB_100050397:
  QMutex::unlock();
  return uVar3;
}

