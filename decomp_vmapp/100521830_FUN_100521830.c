
void FUN_100521830(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  string *psVar5;
  ulong uVar6;
  long lVar7;
  long *local_50;
  string *local_48;
  string *psStack_40;
  undefined8 local_38;
  
  local_48 = (string *)0x0;
  psStack_40 = (string *)0x0;
  local_38 = 0;
  FUN_100521060(&local_48);
  lVar7 = *param_1;
  while (lVar4 = param_1[1], lVar4 != lVar7) {
    param_1[1] = lVar4 + -8;
    plVar2 = *(long **)(lVar4 + -8);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  FUN_100522500(param_1,((long)psStack_40 - (long)local_48 >> 3) * -0x5555555555555555);
  lVar7 = (long)psStack_40 - (long)local_48;
  psVar5 = psStack_40;
  if (lVar7 != 0) {
    uVar6 = 0;
    lVar4 = 0x10;
    do {
      if (((byte)local_48[lVar4 + -0x10] & 1) == 0) {
        psVar5 = local_48 + lVar4 + -0xf;
      }
      else {
        psVar5 = *(string **)(local_48 + lVar4);
      }
      FUN_100520f30(&local_50,psVar5);
      if (local_50 != (long *)0x0) {
        if (local_50[2] != 0) {
          if ((undefined8 *)param_1[1] == (undefined8 *)param_1[2]) {
            FUN_100522600(param_1,&local_50);
          }
          else {
            *(undefined8 *)param_1[1] = local_50;
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            param_1[1] = param_1[1] + 8;
          }
        }
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x18;
      psVar5 = local_48;
    } while (uVar6 < (ulong)((lVar7 >> 3) * -0x5555555555555555));
  }
  if (psVar5 != (string *)0x0) {
    while (psStack_40 != psVar5) {
      psStack_40 = psStack_40 + -0x18;
      std::string::~string(psStack_40);
    }
    operator_delete(local_48);
  }
  return;
}

