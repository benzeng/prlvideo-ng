
void FUN_1000901a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if (param_1[2] == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pStates","StateMachine.cpp",
                  0x265,"run");
  }
  if ((int)param_1[3] == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_uStatesNum","StateMachine.cpp",
                  0x266,"run");
  }
  if (param_1[6] == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pEventNames","StateMachine.cpp",
                  0x267,"run");
  }
  if ((int)param_1[7] == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_uEventNamesNum",
                  "StateMachine.cpp",0x268,"run");
  }
  if ((param_1[2] == 0) || ((int)param_1[3] == 0)) {
    pcVar5 = "Invalid use of StateMachine.stateInit";
  }
  else {
    if (param_1[0x15] == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurState","StateMachine.cpp",
                    0x270,"run");
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    cVar3 = (**(code **)(*param_1 + 0x90))(param_1);
    if (cVar3 != '\0') {
      cVar3 = (char)param_1[0x10];
      while (cVar3 != '\0') {
        cVar3 = FUN_10008fe70(param_1);
        if (cVar3 != '\0') {
          cVar3 = FUN_100090550(param_1);
          if (cVar3 == '\0') {
            if ((param_1[9] != 0) && ((**(code **)(*param_1 + 0x70))(param_1), param_1[9] != 0)) {
              FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pCurCmd",
                            "StateMachine.cpp",0x293,"run");
            }
            if (param_1[8] != 0) {
              (**(code **)(*param_1 + 0x78))(param_1);
              param_1[8] = 0;
            }
          }
          else {
            if (param_1[9] != 0) {
              FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pCurCmd",
                            "StateMachine.cpp",0x288,"run");
            }
            if (param_1[8] != 0) {
              FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pCurTimer",
                            "StateMachine.cpp",0x289,"run");
            }
          }
        }
        cVar3 = (char)param_1[0x10];
      }
      QMutex::lock();
      plVar4 = (long *)param_1[0x18];
      while (plVar4 != param_1 + 0x18) {
        lVar1 = *plVar4;
        plVar2 = (long *)plVar4[1];
        *(long **)(lVar1 + 8) = plVar2;
        *plVar2 = lVar1;
        *plVar4 = (long)plVar4;
        plVar4[1] = (long)plVar4;
        *(undefined4 *)(plVar4 + 2) = 0;
        plVar4 = (long *)param_1[0x18];
      }
      QMutex::unlock();
      param_1[8] = 0;
      FUN_10008f9b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100090500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))(param_1);
      return;
    }
    pcVar5 = "statePrepareRun failed";
  }
  FUN_1008e3970("","vm",0,pcVar5);
  return;
}

