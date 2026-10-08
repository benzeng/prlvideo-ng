
void FUN_10067c7d0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QString local_c0;
  QString local_b8 [19];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar2 = FUN_10016f500(uVar2);
  cVar1 = FUN_10061b500(uVar2,0x4002);
  if (cVar1 != '\0') {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"Error(!): Wrong license.");
    return;
  }
  CContentModel::setBusy(SUB81(param_1,0));
  FUN_100682b10(&local_c0,param_2);
  QString::operator=(&local_c0,(QString *)(param_1 + 0x108));
  QString::operator=(local_b8,(QString *)(param_1 + 0x110));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar3 = FUN_10016f500(uVar3);
  FUN_100689970(uVar2,uVar3,&local_c0);
  FUN_10065ec20(&local_c0);
  return;
}

