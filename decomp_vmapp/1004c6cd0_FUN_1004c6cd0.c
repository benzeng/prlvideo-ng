
undefined8 FUN_1004c6cd0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 local_58 [16];
  undefined1 *local_48;
  long local_40;
  long local_38;
  
  uVar6 = 0xffffffff;
  if (*(int *)(param_2 + 8) != 0x224) {
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    FUN_1004f4810(local_58,param_2);
    local_48 = local_58;
    iVar4 = FUN_100059d20(uVar6,FUN_1004d4470,&local_48);
    uVar6 = 0xf0000000;
    if (iVar4 == 0) {
      cVar3 = FUN_1004ee1d0(*(undefined8 *)(param_1 + 0x30),param_2);
      if (cVar3 == '\0') {
        lVar2 = *(long *)(param_1 + 0xb0);
        local_40 = param_2;
        if (lVar2 != 0) {
          QMutex::lock();
        }
        iVar4 = FUN_100036ff0(lVar2 + 8,&local_40);
        if (lVar2 != 0) {
          QMutex::unlock();
        }
        if (iVar4 == 0) {
          lVar2 = *(long *)(param_1 + 0x38);
          local_38 = param_2;
          QMutex::lock();
          iVar4 = FUN_100036ff0(lVar2 + 0x10,&local_38);
          QMutex::unlock();
          if (iVar4 == 0) {
            plVar5 = operator_new(0x20);
            FUN_1004f45d0(plVar5,param_1 + 0x80,param_2);
            uVar6 = *(undefined8 *)(param_1 + 0x90);
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            cVar3 = FUN_100041750(uVar6,plVar5);
            if (cVar3 == '\0') {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar2 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar2 == 1) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
            uVar6 = 0xffffffff;
            LOCK();
            plVar1 = plVar5 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
  }
  return uVar6;
}

