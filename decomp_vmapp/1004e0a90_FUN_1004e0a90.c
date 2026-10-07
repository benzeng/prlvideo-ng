
undefined8 FUN_1004e0a90(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *local_20;
  
  FUN_1004e0b50(&local_20,param_1,*param_2);
  uVar4 = 0xf0000012;
  if (local_20 != (long *)0x0) {
    if ((*(byte *)(local_20 + 7) & 0x40) == 0) {
      cVar3 = QFileInfo::isDir();
      if (cVar3 == '\0') {
        cVar3 = QIODevice::isOpen();
        if (cVar3 != '\0') {
          (**(code **)(local_20[3] + 0x70))(local_20 + 3);
          *(byte *)(local_20 + 7) = *(byte *)(local_20 + 7) & 0xf0;
        }
      }
    }
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar4 = 0;
    if ((int)lVar2 == 1) {
      (**(code **)(*local_20 + 0x10))(local_20);
    }
  }
  return uVar4;
}

