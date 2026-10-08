
void FUN_1007ae9b0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  if (((*(long *)(param_1 + 0x128) != 0) && (*(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) &&
     (*(long *)(param_1 + 0x130) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x128);
    QWidget::hide();
    QObject::deleteLater();
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && ((void *)*puVar1 != (void *)0x0)) {
        operator_delete((void *)*puVar1);
      }
      *(undefined8 *)(param_1 + 0x130) = 0;
      *puVar1 = 0;
    }
  }
  return;
}

