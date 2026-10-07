
void FUN_10057c940(long *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  
  if ((param_1[1] == 0) || (*(long *)(param_1[1] + 0x10) == 0)) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","m_DiskDesc.isValid()",
                  "DiskStatesImp.cpp",0x1854,"ReopenWithSnapshot");
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 1000);
  uVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010057c9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,param_2);
  return;
}

