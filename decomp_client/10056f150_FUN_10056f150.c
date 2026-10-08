
int FUN_10056f150(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (((*param_2 < 0) || (param_2[1] < 0)) || (iVar3 = 0, *(long *)(param_2 + 4) == 0)) {
    lVar2 = CPortForwarding::getTCP();
    iVar3 = *(int *)(*(long *)(lVar2 + 0x98) + 0xc);
    iVar1 = *(int *)(*(long *)(lVar2 + 0x98) + 8);
    lVar2 = CPortForwarding::getUDP();
    iVar3 = ((iVar3 - iVar1) + *(int *)(*(long *)(lVar2 + 0x98) + 0xc)) -
            *(int *)(*(long *)(lVar2 + 0x98) + 8);
  }
  return iVar3;
}

