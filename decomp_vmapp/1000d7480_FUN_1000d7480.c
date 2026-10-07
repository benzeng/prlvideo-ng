
void FUN_1000d7480(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  param_1[2] = -1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 6),0);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  DAT_1011c3748 = FUN_1007da300("tools.sm_ver",1);
  pvVar1 = operator_new__(0x10018);
  param_1[5] = (long)pvVar1;
  DAT_100bf902d = DAT_100bf902d | 1;
  DAT_100bf9014 = param_1;
  (**(code **)(**(long **)(*param_1 + 0x1a48) + 0x20))
            (*(long **)(*param_1 + 0x1a48),1,FUN_1000d7570,param_1);
  FUN_100430530(*(undefined8 *)(*param_1 + 0xf0),param_1);
  return;
}

