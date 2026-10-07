
void FUN_1000be990(long param_1)

{
  if (*(long *)(param_1 + 0x48) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurCmd","VirtualPCStates.cpp",
                  0x66a,"stateSaveCurrentAsShutdownCmd");
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pShutdownCmd",
                  "VirtualPCStates.cpp",0x66b,"stateSaveCurrentAsShutdownCmd");
  }
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

