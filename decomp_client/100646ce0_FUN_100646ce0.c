
undefined1 FUN_100646ce0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar3 = FUN_10063f730();
  lVar4 = FUN_100675e00(uVar3);
  if (lVar4 != 0) {
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_100675e00(uVar3);
    uVar3 = FUN_10016f500(uVar3);
    cVar1 = FUN_10061b4d0(uVar3,0x200);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar3 = FUN_10063f730(param_1);
  iVar2 = FUN_100678d80(uVar3);
  if (iVar2 != 3) {
    uVar3 = FUN_10063f730(param_1);
    QTextEdit::toPlainText();
    FUN_10067c590(uVar3,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
    return 0;
  }
  return 1;
}

