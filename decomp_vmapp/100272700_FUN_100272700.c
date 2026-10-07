
void FUN_100272700(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x60))();
    if (iVar1 != 0) {
      FUN_1008e3970("","LocalDevices",0,"net_adapter %d:SetEtraceBuffer failed: error %x",
                    *(undefined4 *)(param_1 + 0x150));
      return;
    }
  }
  return;
}

