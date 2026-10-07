
undefined8 FUN_10008f440(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurCmd","StateMachine.cpp",0xae
                  ,"stateSaveCurrentCmdAsPending");
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar1 = CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  else {
    FUN_10008f4d0(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

