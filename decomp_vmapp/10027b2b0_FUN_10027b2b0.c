
void FUN_10027b2b0(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  param_2[1] = 0;
  lVar1 = *(long *)(param_1 + 8);
  *param_2 = *(undefined4 *)(lVar1 + 0x200);
  plVar2 = *(long **)(lVar1 + 0x170);
  iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,param_2 + 2);
  if (iVar3 != 0) {
    FUN_1008e3970("","LocalDevices",0,
                  "net_suspend: failed to obtain offloading-context descriptors: err 0x%x");
  }
  if ((*(char *)(param_1 + 0x16a) != '\0') ||
     (*(int *)(param_1 + 0x164) != *(int *)(param_1 + 0x160))) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 1;
  }
  if ((*(char *)(param_1 + 0x29ba) != '\0') ||
     (*(int *)(param_1 + 0x29b4) != *(int *)(param_1 + 0x29b0))) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 2;
  }
  if ((int)DAT_1011c37a0 != 0) {
    FUN_1008e3970("","LocalDevices",0,"CNetE1000::SuspendState");
    FUN_1008e3970("","LocalDevices",0,"skip_condition = 0x%x",param_2[1]);
    FUN_1008e3970("","LocalDevices",0,"descr[0]: %08x %08x %08x %08x",param_2[2],param_2[3],
                  param_2[4],param_2[5]);
    FUN_1008e3970("","LocalDevices",0,"descr[1]: %08x %08x %08x %08x",param_2[6],param_2[7],
                  param_2[8],param_2[9]);
  }
  return;
}

