
undefined1 FUN_100ac0a70(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  int *piVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 local_38;
  undefined7 uStack_37;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return 0;
  }
  lVar1 = param_1 + 0x10;
  cVar4 = FUN_100aba940(lVar1,*(undefined1 *)(param_1 + 0x45));
  if (cVar4 == '\0') {
    return 0;
  }
  cVar4 = FUN_100abade0(lVar1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  if (cVar4 == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  pQVar2 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)(pQVar2 + 4) == 0) {
    return 1;
  }
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_38 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  uVar5 = _CFStringCreateWithCString
                    (0,CONCAT71(uStack_37,local_38) + *(long *)(CONCAT71(uStack_37,local_38) + 0x10)
                     ,0x8000100);
  piVar3 = (int *)CONCAT71(uStack_37,local_38);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_100ac0b45;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_37,local_38),1,8);
  }
LAB_100ac0b45:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100ac0b75;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100ac0b75:
  FUN_100abaf30(lVar1,uVar5);
  _CFRelease(uVar5);
  return 1;
}

