
void FUN_10064f490(long param_1)

{
  QString *pQVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_40 [39];
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar3 = FUN_10063f730(param_1);
  FUN_10067fb60(local_40,uVar3);
  QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x48) + 0x58));
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 0x70);
  lVar4 = FUN_10063f730(param_1);
  pQVar2 = *(QArrayData **)(lVar4 + 0x170);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_19 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QLineEdit::setText(pQVar1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_19 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10064f539;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10064f539:
  FUN_10064e770(local_40);
  return;
}

