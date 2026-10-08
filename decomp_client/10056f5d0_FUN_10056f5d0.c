
QVariant * FUN_10056f5d0(QVariant *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = CPortForwarding::getTCP();
  if (*param_3 < *(int *)(*(long *)(lVar1 + 0x98) + 0xc) - *(int *)(*(long *)(lVar1 + 0x98) + 8)) {
    pcVar2 = "TCP";
  }
  else {
    pcVar2 = "UDP";
  }
  QVariant::QVariant(param_1,pcVar2);
  return param_1;
}

