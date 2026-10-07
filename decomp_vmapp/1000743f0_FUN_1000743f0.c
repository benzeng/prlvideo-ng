
void FUN_1000743f0(long param_1)

{
  if (*(int *)(param_1 + 0x370) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_ConnectionStat.timerId",
                  "CVmCommandsHandler.cpp",0x4a8,"onKillConnStatTimer");
  }
  QObject::killTimer((int)param_1);
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

