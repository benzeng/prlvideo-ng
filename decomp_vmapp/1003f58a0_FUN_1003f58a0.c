
undefined1 FUN_1003f58a0(long param_1,QString *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 uVar5;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x28) == '\0') {
    cVar2 = FUN_1003f4f20(param_1);
    if (cVar2 == '\0') {
      uVar5 = 0;
      goto LAB_1003f5999;
    }
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x10); puVar3 != (undefined8 *)(param_1 + 0x10);
      puVar3 = (undefined8 *)*puVar3) {
    if (puVar3[-2] == param_3) {
      uVar5 = 0;
      goto LAB_1003f5999;
    }
  }
  plVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
    FUN_1008e3970("","DVDImage",0,"malloc failed");
  }
  else {
    plVar4[1] = (long)PTR_shared_null_100ba20d0;
    *plVar4 = param_3;
    QString::operator=((QString *)(plVar4 + 1),param_2);
    plVar1 = *(long **)(param_1 + 0x18);
    *(long **)(param_1 + 0x18) = plVar4 + 2;
    plVar4[2] = param_1 + 0x10;
    plVar4[3] = (long)plVar1;
    *plVar1 = (long)(plVar4 + 2);
    uVar5 = 1;
  }
LAB_1003f5999:
  QMutex::unlock();
  return uVar5;
}

