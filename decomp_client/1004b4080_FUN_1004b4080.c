
void FUN_1004b4080(long param_1)

{
  QObject *pQVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar4 = FUN_10044e580();
  if (lVar4 == 0) {
    pcVar6 = "(!)Error: Server instance is null.";
  }
  else {
    lVar4 = FUN_10044e460(param_1);
    if (lVar4 != 0) {
      pQVar1 = *(QObject **)(*(long *)(param_1 + 0x68) + 0x50);
      iVar2 = FUN_10044b4d0(param_1);
      uVar5 = FUN_10044e580(param_1);
      iVar3 = FUN_10015aae0(uVar5);
      WidgetUtils::Adjuster::adjustWidgetText(pQVar1,iVar2,iVar3);
      goto LAB_1004b410b;
    }
    pcVar6 = "(!)Error: Vm instance is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar6);
LAB_1004b410b:
  FUN_100459290(param_1);
  return;
}

