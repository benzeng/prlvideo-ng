
void FUN_10027acf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  
  FUN_10027cc50();
  *param_1 = &PTR_FUN_100baf9d0;
  lVar1 = DAT_1011c3688;
  param_1[0x30] = DAT_1011c3688;
  param_1[0x31] = *(undefined8 *)(*(long *)(lVar1 + 0x60) + 0x20);
  param_1[0x32] = param_1 + 0x33;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  lVar1 = DAT_1011c3688;
  param_1[0x53a] = DAT_1011c3688;
  param_1[0x53b] = *(undefined8 *)(*(long *)(lVar1 + 0x60) + 0x20);
  param_1[0x53c] = param_1 + 0x53d;
  *(undefined4 *)(param_1 + 0x53d) = 0;
  param_1[0x53e] = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)((long)param_1 + 0x16a) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = param_3;
  *(undefined8 *)((long)param_1 + 0x29bc) = 0;
  *(undefined1 *)((long)param_1 + 0x29ba) = 0;
  *(undefined2 *)(param_1 + 0x537) = 0;
  param_1[0x536] = 0;
  param_1[0x539] = param_3;
  param_1[3] = param_4;
  *(undefined2 *)(param_4 + 6) = 0;
  *(undefined2 *)(param_4 + 0xc) = 0;
  uVar2 = FUN_1007da300("devices.net.direct_rx",0);
  *(undefined1 *)(param_1[3] + 0x22) = uVar2;
  iVar3 = FUN_1007da300("devices.net.e1000.txdw_always",0);
  DAT_1011b89d3 = iVar3 != 0;
  *(bool *)(param_1 + 0x2a) = *(int *)(param_1[1] + 0x200) == 0x81;
  return;
}

