
void FUN_10027b120(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",4,"CNetE1000::ProcessNetRequest: %d",iVar1);
  }
  if (iVar1 == 4) {
    FUN_10027a1c0(*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x18) + 0x5400);
    return;
  }
  if (iVar1 == 3) {
    FUN_100276490(*(undefined8 *)(param_1 + 8),1);
    return;
  }
  if (iVar1 == 1) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",3,"Stop tx");
    }
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined2 *)(lVar2 + 6) = 0;
    *(undefined2 *)(lVar2 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined1 *)(param_1 + 0x16a) = 0;
    *(undefined2 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    FUN_10008d470(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x29bc) = 0;
    *(undefined1 *)(param_1 + 0x29ba) = 0;
    *(undefined2 *)(param_1 + 0x29b8) = 0;
    *(undefined8 *)(param_1 + 0x29b0) = 0;
    FUN_10008d470(param_1 + 0x29d0);
    return;
  }
  FUN_1008e3970("","LocalDevices",0,"CNetE1000::ProcessNetRequest: unknown req %d",iVar1);
  return;
}

