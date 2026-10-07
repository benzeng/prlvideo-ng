
undefined4 FUN_1000a05b0(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *in_RAX;
  long *local_38;
  
  local_38 = in_RAX;
  cVar3 = FUN_1000a0730();
  if (cVar3 == '\0') {
    if ((*param_3 != 0) && (*(long *)(*param_3 + 0x10) != 0)) {
      FUN_100430f10(*(undefined8 *)(param_1 + 0xf0),param_3,0,1);
    }
  }
  else {
    iVar4 = FUN_100060640();
    QMutex::lock();
    lVar2 = DAT_1011cc808;
    if (DAT_1011cc808 == 0) {
      QMutex::unlock();
    }
    else {
      DAT_1011cc810 = DAT_1011cc810 + 1;
      QMutex::unlock();
      lVar2 = *(long *)(lVar2 + 0x30);
      if (lVar2 != 0) {
        local_38 = (long *)*param_3;
        if (local_38 != (long *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        cVar3 = FUN_100026290(lVar2,param_2,(iVar4 == 0) + '\x01',&local_38);
        if (local_38 != (long *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        if (cVar3 != '\0') {
          FUN_100026030(&DAT_1011cc7f8);
          return 0;
        }
      }
      FUN_100026030(&DAT_1011cc7f8);
    }
  }
  return 0x80000009;
}

