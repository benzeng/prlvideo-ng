
void FUN_1005f5ef0(int param_1)

{
  int iVar1;
  
  iVar1 = QSemaphore::available();
  if (iVar1 != 0) {
    FUN_1008e3970("CountReclaimed","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_Sem.available() == 0","CountReclaimedContext.cpp",0x89,"Wake");
  }
  QSemaphore::release(param_1 + 0x28);
  return;
}

