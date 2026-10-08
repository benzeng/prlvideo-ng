
void FUN_10033e1a0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar6 = " Failed to switch VM desktop view mode. VM desktop object does not exist!";
  }
  else {
    lVar3 = FUN_100319960();
    if (lVar3 == 0) {
      pcVar6 = " Failed to switch VM desktop view mode. Primary VM display object does not exist!";
    }
    else {
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
      }
      lVar4 = FUN_100319390(uVar5);
      if (lVar4 != 0) {
        FUN_100188480(&local_28,lVar4);
        cVar1 = FUN_100326470(lVar3);
        if (cVar1 != '\0') {
          uVar2 = FUN_100325aa0(lVar3);
          uVar5 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar5 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar5 = FUN_100319c50(uVar5);
          cVar1 = FUN_100331280(uVar5);
          uVar5 = FUN_100370280();
          uVar7 = 3;
          if (cVar1 != '\0') {
            uVar7 = uVar2;
          }
          FUN_100375300(uVar5,&local_28,uVar7);
        }
        if (*(int *)local_28 != -1) {
          if (*(int *)local_28 != 0) {
            LOCK();
            *(int *)local_28 = *(int *)local_28 + -1;
            UNLOCK();
            if (*(int *)local_28 != 0) {
              return;
            }
            local_1a = 0;
          }
          QArrayData::deallocate(local_28,2,8);
        }
        return;
      }
      pcVar6 = " Failed to switch VM desktop view mode. VM object does not exist!";
    }
  }
  FUN_100df99c0("","prl_client_app",0,pcVar6);
  return;
}

