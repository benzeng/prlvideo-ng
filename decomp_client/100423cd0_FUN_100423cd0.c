
void FUN_100423cd0(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x50);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x58);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x60);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x68);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x70);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x88);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x78);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x80);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x000100423d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  return;
}

