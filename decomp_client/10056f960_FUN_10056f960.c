
CPortForwardEntry * FUN_10056f960(CPortForwardEntry *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = CPortForwarding::getTCP();
  lVar2 = (long)*(int *)(*(long *)(lVar2 + 0x98) + 0xc) -
          (long)*(int *)(*(long *)(lVar2 + 0x98) + 8);
  if (*param_3 < (int)lVar2) {
    lVar2 = CPortForwarding::getTCP();
    lVar3 = *(long *)(lVar2 + 0x98);
    lVar2 = (long)*(int *)(lVar3 + 8);
    iVar1 = *param_3;
  }
  else {
    lVar3 = CPortForwarding::getUDP();
    lVar2 = *param_3 - lVar2;
    lVar3 = *(long *)(lVar3 + 0x98);
    iVar1 = *(int *)(lVar3 + 8);
  }
  CPortForwardEntry::CPortForwardEntry
            (param_1,*(CPortForwardEntry **)(lVar3 + 0x10 + (iVar1 + lVar2) * 8));
  return param_1;
}

