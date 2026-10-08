
void FUN_100785cd0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long local_28;
  undefined1 local_1a;
  
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226c7b8 == 0) {
        DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226c7b8;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    piVar1 = *(int **)param_4[1];
    if (piVar1 != (int *)0x0) {
      lVar2 = ((undefined8 *)param_4[1])[1];
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((piVar1[1] != 0) && (local_28 = lVar2, lVar2 != 0)) {
        plVar3 = (long *)FUN_100786040(param_1 + 0x18,&local_28);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3);
        }
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_1a = *piVar1 != 0;
      UNLOCK();
      if (!(bool)local_1a) {
        operator_delete(piVar1);
      }
    }
  }
  return;
}

