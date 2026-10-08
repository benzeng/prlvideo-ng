
void FUN_1002aeba0(long *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 1) {
    uVar2 = FUN_100152280();
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    FUN_1001531e0(uVar2,uVar3,1);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(piVar1);
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

