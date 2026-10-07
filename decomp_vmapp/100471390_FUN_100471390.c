
undefined8 FUN_100471390(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_3c;
  int *local_38;
  undefined1 local_2a;
  
  FUN_100474490(&local_38,param_1,&DAT_1011cc7b8);
  plVar3 = operator_new(0x28);
  FUN_10047a290(plVar3);
  FUN_10047a860(plVar3,&local_38);
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      local_2a = *local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100471408;
    }
    FUN_100472110(&local_38,local_38);
  }
LAB_100471408:
  iVar1 = FUN_1000ed430(3);
  if (iVar1 == 0) {
    FUN_1008e3970("TIS","TISHost",0,"Error: failed to start TIS suspend");
  }
  else {
    iVar1 = FUN_1000ed5c0(&DAT_100b43428,4);
    if (iVar1 != 0) {
      local_3c = (**(code **)(*plVar3 + 0x18))(plVar3);
      iVar1 = FUN_1000ed5c0(&local_3c,4);
      if (iVar1 == 0) {
        uVar4 = 0xffffffff;
        FUN_1008e3970("TIS","TISHost",0,"Error: failed to suspend TIS query size (which is %i)",
                      local_3c);
      }
      else {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
        iVar1 = FUN_1000ed5c0(uVar4,uVar2);
        if (iVar1 == 0) {
          uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
          uVar4 = 0xffffffff;
          FUN_1008e3970("TIS","TISHost",0,"Error: failed to suspend TIS query (which is %lubytes)",
                        uVar5);
        }
        else {
          iVar1 = FUN_1000ed7d0();
          if (iVar1 == 0) {
            uVar4 = 0xffffffff;
            FUN_1008e3970("TIS","TISHost",0,"Error: failed to stop TIS suspend");
          }
          else {
            uVar4 = 0;
          }
        }
      }
      goto LAB_10047156c;
    }
    FUN_1008e3970("TIS","TISHost",0,"Error: failed to suspend TIS version (which is %i)",1);
  }
  uVar4 = 0xffffffff;
  if (plVar3 == (long *)0x0) {
    return 0xffffffff;
  }
LAB_10047156c:
  (**(code **)(*plVar3 + 8))(plVar3);
  return uVar4;
}

