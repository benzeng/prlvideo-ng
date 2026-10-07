
undefined8 FUN_1004082c0(QString *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  QMutex::lock();
  uVar5 = 0x80000018;
  if ((*(int *)(param_1->field0_0x0 + 4) != 0) &&
     (uVar5 = 0x80000010, DAT_1011bbd90 != (undefined8 *)0x0)) {
    puVar1 = DAT_1011bbd90;
    puVar4 = &DAT_1011bbd90;
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 4),param_1), cVar2 != '\0') {
        puVar1 = (undefined8 *)puVar3[1];
        if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) goto LAB_100408340;
      }
      puVar4 = puVar3;
      puVar1 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
LAB_100408340:
    if (((undefined8 **)puVar4 != &DAT_1011bbd90) &&
       (cVar2 = operator<(param_1,(QString *)(puVar4 + 4)), cVar2 == '\0')) {
      *param_2 = *(undefined4 *)(puVar4 + 5);
      uVar5 = 0;
      FUN_100408e60(&DAT_1011bbd88,puVar4);
    }
  }
  QMutex::unlock();
  return uVar5;
}

