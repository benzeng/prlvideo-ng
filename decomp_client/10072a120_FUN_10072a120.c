
void FUN_10072a120(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    QWidget::close();
    QObject::deleteLater();
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && ((void *)*puVar1 != (void *)0x0)) {
        operator_delete((void *)*puVar1);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *puVar1 = 0;
    }
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    FUN_100853360(param_1,0);
  }
  return;
}

