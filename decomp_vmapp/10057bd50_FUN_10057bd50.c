
undefined * FUN_10057bd50(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (4 < (int)uVar1) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","m_Action < ActionCount",
                  "DiskStatesImp.cpp",0x176e,"GetPendingActionName");
    uVar1 = *(uint *)(param_1 + 0x60);
  }
  return (&PTR_s_ActionNone_100bc63e0)[uVar1];
}

