
void FUN_10008ef80(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0xa0) <= *(uint *)(param_1 + 0x18)) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_uPrevState > m_uStatesNum",
                  "StateMachine.cpp",0x8e,"stateSaveCurrent");
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xa4);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (uVar2 != 0) {
    pvVar1 = operator_new__(uVar2 * 0x28,(nothrow_t *)PTR_nothrow_100ba21c8);
    *(void **)(param_1 + 0x98) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPrevStateTimers",
                    "StateMachine.cpp",0x92,"stateSaveCurrent");
      pvVar1 = *(void **)(param_1 + 0x98);
      if (pvVar1 == (void *)0x0) {
        return;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0x28);
    }
    _memcpy(pvVar1,*(void **)(param_1 + 0x20),uVar2 * 0x28);
  }
  return;
}

