
void FUN_1002b2690(long *param_1,char param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = param_1 + 1;
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    if ((char)param_1[2] == '\0') {
      pcVar5 = "no";
    }
    else {
      pcVar5 = "yes";
    }
    pcVar4 = "send";
    if (param_2 != '\0') {
      pcVar4 = "drop";
    }
    FUN_1008e3970("","LocalDevices",3,"[%s] Unlock move (locked: %s, %s)",param_1[0x18],pcVar5,
                  pcVar4);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  plVar6 = (long *)param_1[3];
  while (plVar6 != param_1 + 3) {
    plVar3 = (long *)*plVar6;
    if (param_2 == '\0') {
      (**(code **)(*param_1 + 0x50))(param_1,plVar6 + -4);
    }
    else if (2 < DAT_1011b55f8) {
      pcVar5 = "rel";
      if (*(char *)((long)plVar6 + -4) == '\0') {
        pcVar5 = "abs";
      }
      FUN_1008e3970("","LocalDevices",3,"[%s] Drop unlock_move (%d, %d, %d, %d, 0x%x, %s)",
                    param_1[0x18],(int)plVar6[-4],*(undefined4 *)((long)plVar6 + -0x1c),
                    (int)plVar6[-3],*(undefined4 *)((long)plVar6 + -0x14),(int)plVar6[-1],pcVar5,
                    plVar7);
    }
    lVar1 = *plVar6;
    plVar2 = (long *)plVar6[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar6 = 0x112233;
    plVar6[1] = (long)&DAT_00445566;
    operator_delete(plVar6 + -4);
    plVar6 = plVar3;
  }
  QMutex::unlock();
  return;
}

