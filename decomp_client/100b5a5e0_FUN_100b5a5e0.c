
undefined8 FUN_100b5a5e0(long *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined7 uVar4;
  undefined8 uVar3;
  
  cVar2 = (char)param_1[2];
  uVar4 = (undefined7)((ulong)in_RAX >> 8);
  if (cVar2 == '\0') {
    QMutex::lock();
    if ((char)param_1[2] == '\0') {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      *(undefined1 *)(param_1 + 2) = uVar1;
    }
    uVar3 = QMutex::unlock();
    cVar2 = (char)param_1[2];
    uVar4 = (undefined7)((ulong)uVar3 >> 8);
  }
  return CONCAT71(uVar4,cVar2 != '\0');
}

