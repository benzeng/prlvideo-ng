
void FUN_10005bc30(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_100ba9e40;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9ed0;
  FUN_10005f200(&DAT_1011c3630,0);
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"CHostCEP has deinitialized");
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_10005bcd7;
      piVar1 = *(int **)(param_1 + 0x48);
    }
    FUN_10005f8d0(param_1 + 0x48,piVar1);
  }
LAB_10005bcd7:
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

