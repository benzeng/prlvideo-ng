
undefined8 FUN_100407f00(QString *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  QMutex::lock();
  uVar5 = 0;
  if ((*(int *)(param_1->field0_0x0 + 4) != 0) && (uVar5 = 0, DAT_1011bbd30 != (undefined8 *)0x0)) {
    puVar1 = DAT_1011bbd30;
    puVar4 = &DAT_1011bbd30;
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 4),param_1), cVar2 != '\0') {
        puVar1 = (undefined8 *)puVar3[1];
        if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) goto LAB_100407f80;
      }
      puVar4 = puVar3;
      puVar1 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
LAB_100407f80:
    uVar5 = 0;
    if ((undefined8 **)puVar4 != &DAT_1011bbd30) {
      cVar2 = operator<(param_1,(QString *)(puVar4 + 4));
      uVar5 = 0;
      if (cVar2 == '\0') {
        uVar5 = puVar4[5];
        FUN_100408be0(&DAT_1011bbd28,puVar4);
      }
    }
  }
  QMutex::unlock();
  return uVar5;
}

