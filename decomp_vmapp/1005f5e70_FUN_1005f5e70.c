
void FUN_1005f5e70(int param_1)

{
  int iVar1;
  
  iVar1 = QSemaphore::available();
  if (iVar1 != 1) {
    FUN_1008e3970("CountReclaimed","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_Sem.available() == 1","CountReclaimedContext.cpp",0x83,"PrepareWait");
  }
  QSemaphore::acquire(param_1 + 0x28);
  return;
}

