
char * FUN_1002cacc0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  QVariant local_38;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  FUN_100df99c0("","prl_client_app",0,
                "Update license. Dry Run %d, Enterprise %d, Force activate UK %d",uVar1 & 1,
                uVar1 >> 1 & 1,uVar1 >> 2 & 1);
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = FUN_1002c6aa0(param_1);
  uVar2 = FUN_10016f500(uVar2);
  pcVar3 = (char *)FUN_10061b970(uVar2,param_1 + 0x48,(~(uVar1 * 2) & 2) - 5 & uVar1);
  pcVar4 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    QVariant::QVariant(&local_38,(bool)((byte)*(undefined4 *)(param_1 + 0x50) & 1));
    QObject::setProperty(pcVar3,(QVariant *)"dryRun");
    QVariant::~QVariant(&local_38);
    pcVar4 = pcVar3;
  }
  return pcVar4;
}

