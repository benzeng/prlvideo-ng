
void FUN_1005b8430(long param_1,undefined8 param_2)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar4 = "(!)Error: Can\'t create Vm config. Os version not setted.";
  }
  else {
    if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
       (*(long *)(param_1 + 0x18) != 0)) {
      FUN_10015b140(&local_40,*(long *)(param_1 + 0x18),*(int *)(param_1 + 0x38),1);
      if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
         (*(long **)(param_1 + 0x48) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
      }
      pQVar1 = operator_new(0xf8);
      local_50 = local_40;
      if (local_40 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_10018d690(&local_48,&local_50);
      FUN_100129dd0(pQVar1,&local_48);
      piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
      piVar3 = *(int **)(param_1 + 0x40);
      if (piVar3 != piVar2) {
        if (piVar2 != (int *)0x0) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          local_31 = *piVar2 != 0;
          UNLOCK();
          piVar3 = *(int **)(param_1 + 0x40);
        }
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          local_31 = *piVar3 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x40));
          }
        }
        *(int **)(param_1 + 0x40) = piVar2;
        *(QObject **)(param_1 + 0x48) = pQVar1;
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar2);
        }
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b8586;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1005b8586:
      if (local_50 != 0) {
        _PrlHandle_Free();
      }
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x48);
      }
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_1001bad90(uVar6,uVar5,*(undefined4 *)(param_1 + 0x3c),param_2);
      FUN_1008402e0(param_1);
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
      return;
    }
    pcVar4 = "(!)Error: Server instance is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar4);
  return;
}

