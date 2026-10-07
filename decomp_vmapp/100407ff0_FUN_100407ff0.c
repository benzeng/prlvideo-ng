
undefined8 FUN_100407ff0(QString *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  QMutex::lock();
  uVar5 = 0;
  if ((*(int *)(param_1->field0_0x0 + 4) != 0) && (uVar5 = 0, DAT_1011bbd60 != (undefined8 *)0x0)) {
    puVar1 = DAT_1011bbd60;
    puVar4 = &DAT_1011bbd60;
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 4),param_1), cVar2 != '\0') {
        puVar1 = (undefined8 *)puVar3[1];
        if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) goto LAB_100408070;
      }
      puVar4 = puVar3;
      puVar1 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
LAB_100408070:
    uVar5 = 0;
    if ((undefined8 **)puVar4 != &DAT_1011bbd60) {
      cVar2 = operator<(param_1,(QString *)(puVar4 + 4));
      uVar5 = 0;
      if (cVar2 == '\0') {
        uVar5 = puVar4[5];
        FUN_100408c80(&DAT_1011bbd58,puVar4);
      }
    }
  }
  QMutex::unlock();
  return uVar5;
}

