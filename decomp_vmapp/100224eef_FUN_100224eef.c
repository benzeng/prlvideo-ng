
void FUN_100224eef(long param_1,xmlChar *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0x10) == 1) && (*(long *)(param_1 + 0x20) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x20) + 0x9c) == 1)) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x98);
    uVar3 = _xmlValidatePushCData
                      ((xmlValidCtxtPtr)(*(long *)(param_1 + 0x20) + 0xa0),param_2,param_3);
    *(uint *)(lVar2 + 0x98) = uVar3 & uVar1;
  }
  if (((*(int *)(param_1 + 0x10) == 2) && (*(long *)(param_1 + 0xd8) != 0)) &&
     (*(long *)(param_1 + 0xe8) == 0)) {
    iVar4 = _xmlRelaxNGValidatePushCData
                      (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0xd8),param_2,param_3);
    if (iVar4 != 1) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
  }
  return;
}

