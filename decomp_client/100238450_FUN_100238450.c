
undefined8 FUN_100238450(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar3 = FUN_100319390(uVar5);
  if (lVar3 == 0) {
    pcVar6 = "(!)Error: vm object is not valid";
  }
  else {
    uVar1 = FUN_10018a9d0(lVar3);
    if ((uVar1 & 0xfffffffe) != 0x30000004) {
      return 0;
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar4 = FUN_100319960(uVar5);
    if (lVar4 != 0) {
      iVar2 = FUN_100325aa0(lVar4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = FUN_100370280();
      FUN_100188480(&local_40,lVar3);
      FUN_100375300(uVar5,&local_40,iVar2);
      if (*(int *)local_40 == -1) {
        return 0;
      }
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
      return 0;
    }
    pcVar6 = "(!)Error: primaryVmDisplay object is not valid";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar6);
  return 0x80000009;
}

